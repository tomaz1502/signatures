import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules
open sort

@[simp] def bimplies (x y : Bool) : Bool :=
  match x, y with
  | true, false => false
  | _,    _     => true

def beq  (x y : Bool) : Bool := x == y
def bneq (x y : Bool) : Bool := x != y

-- takes the number of a constant and it's type, and returns its value
def Environment : Type 1 := Nat → (A : Type) → A

-- takes the number of a sort constant and returns its value
def SEnvironment : Type 1 := Nat → Type

def interpSort (Δ : SEnvironment) (s : sort) : Type :=
  match s with
  | arrow s₁ s₂ => (interpSort Δ s₁) → (interpSort Δ s₂)
  | boolSort    => Bool
  | atom n      => Δ n
  | _           => Bool

def Interpretation := Option (Σ (s : sort), (Γ : Environment) → (Δ : SEnvironment) → interpSort Δ s)

-- coercion
def coe' {A B : Type} : (A = B) → A → B
| rfl, a => a

-- mutual recursion? how?
@[simp] def combineBools (r₁ r₂ : Interpretation) (f : Bool → Bool → Bool) : Interpretation :=
  match r₁, r₂ with
  | some ⟨ boolSort, k₁ ⟩, some ⟨ boolSort, k₂ ⟩ =>
      some ⟨ boolSort, λ Γ Δ => f (k₁ Γ Δ) (k₂ Γ Δ) ⟩ -- maybe we can use state monad to avoid propagating the environments manually?
  | _, _ => none

-- its okay to be noncomputable, we just want to prove theorems about this function, not really compute it
@[simp] noncomputable def interpTerm : term → Interpretation
| term.const   n  s  => some ⟨s, λ Γ Δ => Γ n (interpSort Δ s) ⟩
| term.not     t₁    => match interpTerm t₁ with
                        | some ⟨ boolSort, k ⟩ => some ⟨ boolSort, λ Γ Δ => not (k Γ Δ) ⟩
                        | _ => none
| term.and     t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) and
| term.or      t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) or
| term.implies t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) bimplies
| term.xor     t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) bneq
| term.eq      t₁ t₂ => combineBools (interpTerm t₁) (interpTerm t₂) beq
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

noncomputable def validWith (Γ : Environment) (Δ : SEnvironment) (t : term) : Bool :=
  match interpTerm t with
  | some ⟨ boolSort, k ⟩ => let z : Bool := k Γ Δ
                            z == true
  | _ => false

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {Γ : Environment} {Δ : SEnvironment}, validWith Γ Δ t₁ → validWith Γ Δ t₂
