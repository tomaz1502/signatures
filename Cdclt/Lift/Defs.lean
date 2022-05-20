import Cdclt.Lift.Types
import Cdclt.Lift.Coe
import Cdclt.Term

open Types
open proof
open term
open sort

set_option maxHeartbeats 300000

@[simp] def combineBools : Interpretation → Interpretation → (Bool → Bool → Bool) → Interpretation
| some ⟨ boolSort, k₁ ⟩, some ⟨ boolSort, k₂ ⟩, f =>
    some ⟨ boolSort, λ Γ Δ => f (k₁ Γ Δ) (k₂ Γ Δ) ⟩ -- maybe we can use state monad to avoid propagating the environments manually?
| _, _, _ => none

@[simp] def interpTerm : term → Interpretation
| term.const   n  s  => some ⟨ s, λ Γ Δ => Γ n Δ s  ⟩
| term.not     t₁    => match interpTerm t₁ with
                        | some ⟨ boolSort, k ⟩ => some ⟨ boolSort, λ Γ Δ => not (k Γ Δ) ⟩
                        | _ => none
| term.and     t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) and
| term.or      t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) or
| term.implies t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) (λ b₁ b₂ => !b₁ || b₂)
| term.xor     t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) (λ b₁ b₂ => not (BEq.beq b₁ b₂))
| term.eq      t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) BEq.beq
| term.bot           => some ⟨ boolSort, λ _ _ => false ⟩
| term.top           => some ⟨ boolSort, λ _ _ => true  ⟩
| term.app     t₁ t₂ => match interpTerm t₁, interpTerm t₂ with
                        | some ⟨ arrow s₁₁ s₁₂, k₁ ⟩, some ⟨ s₂, k₂ ⟩ =>
                          if r: s₂ = s₁₁
                          then some ⟨ s₁₂ , λ Γ Δ =>
                                              let coercion := coe' (congrArg (interpSort Δ) r)
                                              (k₁ Γ Δ) (coercion (k₂ Γ Δ)) ⟩
                          else none
                        | _, _ => none
| _ => none

@[simp] def validWith (Γ : Environment) (Δ : SEnvironment) (t : term) : Bool :=
  match interpTerm t with
  | some ⟨ boolSort, k ⟩ => Coe.coe (k Γ Δ)
  | _ => false

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {Γ : Environment} {Δ : SEnvironment}, validWith Γ Δ t₁ → validWith Γ Δ t₂

