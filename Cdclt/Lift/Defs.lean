import Cdclt.Lift.Env
import Cdclt.Lift.Types
import Cdclt.Lift.Coe
import Cdclt.Term

open Types
open proof
open term
open sort

set_option maxHeartbeats 500000

def falseInterp : Interpretation := ⟨boolSort, λ Γ Δ => False⟩

@[simp] def combineProps : Interpretation → Interpretation → (Prop → Prop → Prop) → Interpretation
| ⟨ boolSort, k₁ ⟩, ⟨ boolSort, k₂ ⟩, f =>
    ⟨ boolSort, λ Δ Γ => f (k₁ Δ Γ) (k₂ Δ Γ) ⟩
| _, _, _ => falseInterp

@[simp] def interpTerm : term → Interpretation
| term.const   n  s  => ⟨ s, λ _ Γ => Γ s n  ⟩
| term.not     t₁    => match interpTerm t₁ with
                        | ⟨ boolSort, k ⟩ => ⟨ boolSort, λ Δ Γ => ¬ (k Δ Γ) ⟩
                        | _ => falseInterp
| term.and     t₁ t₂ => combineProps (interpTerm t₁) (interpTerm t₂) (λ p₁ p₂ => p₁ ∧ p₂)
| term.or      t₁ t₂ => combineProps (interpTerm t₁) (interpTerm t₂) (λ p₁ p₂ => p₁ ∨ p₂)
| term.implies t₁ t₂ => combineProps (interpTerm t₁) (interpTerm t₂) (λ p₁ p₂ => p₁ → p₂)
| term.xor     t₁ t₂ => combineProps (interpTerm t₁) (interpTerm t₂) (λ p₁ p₂ => p₁ ≠ p₂)
| term.eq      t₁ t₂ => match interpTerm t₁, interpTerm t₂ with
                        | ⟨ s₁, k₁ ⟩, ⟨ s₂, k₂ ⟩ =>
                          if r: s₂ = s₁
                          then ⟨ boolSort, λ Δ Γ =>
                                            let coercion := coe' (congrArg (interpSort Δ) r) 
                                            k₁ Δ Γ = coercion (k₂ Δ Γ) ⟩
                          else falseInterp
| term.bot           => ⟨ boolSort, λ _ _ => False ⟩
| term.top           => ⟨ boolSort, λ _ _ => True  ⟩
| term.app     t₁ t₂ => match interpTerm t₁, interpTerm t₂ with
                        | ⟨ arrow s₁₁ s₁₂, k₁ ⟩, ⟨ s₂, k₂ ⟩ =>
                          if r: s₂ = s₁₁
                          then ⟨ s₁₂ , λ Δ Γ =>
                                              let coercion := coe' (congrArg (interpSort Δ) r)
                                              k₁ Δ Γ (coercion (k₂ Δ Γ)) ⟩
                          else falseInterp
                        | _, _ => falseInterp
| _ => falseInterp

@[simp] def validWith (Δ : SEnvironment) (Γ : Environment Δ) (t : term) : Prop :=
  match interpTerm t with
  | ⟨ boolSort, k ⟩ => Coe.coe (k Δ Γ)
  | _ => False

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {Δ : SEnvironment} {Γ : Environment Δ}, validWith Δ Γ t₁ → validWith Δ Γ t₂

/- @[simp] def getInterp (t : term) (h : wellTyped t) : Σ (s : sort), Environment → (Δ : SEnvironment) → interpSort Δ s := -/
/-   match r: interpTerm t with -/
/-   | some ⟨ s, k ⟩ => ⟨ s, k ⟩ -/
/-   | none => by simp at h; rewrite [r] at h; exact (False.elim h) -/

