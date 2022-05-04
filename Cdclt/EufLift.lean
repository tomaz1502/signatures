import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules
open sort

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
/- def coe' {A B : Type} [x: DecidableEq A] [y: DecidableEq B] : (A = B) → A → B -/
def coe' : (A = B) → A → B
| rfl, a => a

-- mutual recursion? how?
@[simp] def combineBools : Interpretation → Interpretation → (Bool → Bool → Bool) → Interpretation
| some ⟨ boolSort, k₁ ⟩, some ⟨ boolSort, k₂ ⟩, f =>
    some ⟨ boolSort, λ Γ Δ => f (k₁ Γ Δ) (k₂ Γ Δ) ⟩ -- maybe we can use state monad to avoid propagating the environments manually?
| _, _, _ => none

-- its okay to be noncomputable, we just want to prove theorems about this function, not really compute it
@[simp] noncomputable def interpTerm : term → Interpretation
| term.const   n  s  => some ⟨ s, λ Γ Δ => Γ n (interpSort Δ s) ⟩
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

@[simp] noncomputable def validWith (Γ : Environment) (Δ : SEnvironment) (t : term) : Bool :=
  match interpTerm t with
  | some ⟨ boolSort, k ⟩ => let z : Bool := k Γ Δ
                            z == true
  | _ => false

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {Γ : Environment} {Δ : SEnvironment}, validWith Γ Δ t₁ → validWith Γ Δ t₂

open Nat

syntax "absurdHyp" ident "(" ident,+ ")" : tactic
macro_rules
  | `(tactic| absurdHyp $h:ident ($n:ident)) => `(tactic| rewrite [($n)] at ($h); have z: false = true := $h; cases z)
  | `(tactic| absurdHyp $h:ident ($n:ident, $m:ident)) => `(tactic| rewrite [($n), ($m)] at ($h); have z: false = true := $h; cases z)

theorem notImplies1 : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) t₁
  | t₁, t₂, Γ, Δ, h =>
    by simp at h
       match r₁: interpTerm t₁, r₂: interpTerm t₂ with
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
         simp
         rewrite [r₁]
         show (let z: Bool := k₁ Γ Δ; z == true) = true
         rewrite [r₁, r₂] at h
         have h₂ : not (!(k₁ Γ Δ) || (k₂ Γ Δ)) == true := h
         match rk: k₁ Γ Δ with
         | true  => rfl
         | false => rewrite [rk] at h₂
                    simp at h₂
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.undef, _ ⟩           => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.array _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.bv _, _ ⟩            => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.dep, _ ⟩             => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, none                             => absurdHyp h (r₁, r₂)
       | some ⟨ atom (succ (succ _)), _ ⟩, _ => absurdHyp h (r₁) 
       | some ⟨ sort.undef, _ ⟩, _           => absurdHyp h (r₁) 
       | some ⟨ sort.array _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.bv _, _ ⟩, _            => absurdHyp h (r₁)
       | some ⟨ sort.arrow _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.dep, _ ⟩, _             => absurdHyp h (r₁)
       | none, _                             => absurdHyp h (r₁)

theorem notImplies2 : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) (not t₂)
  | t₁, t₂, Γ, Δ, h =>
    by simp at h
       match r₁: interpTerm t₁, r₂: interpTerm t₂ with
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
         simp
         rewrite [r₂]
         show (let z: Bool := !k₂ Γ Δ; z == true) = true
         rewrite [r₁, r₂] at h
         have h₂ : not (!(k₁ Γ Δ) || (k₂ Γ Δ)) == true := h
         match rk: k₂ Γ Δ with
         | true  => rewrite [rk] at h₂
                    simp at h₂
         | false => rfl
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.undef, _ ⟩           => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.array _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.bv _, _ ⟩            => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.dep, _ ⟩             => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, none                             => absurdHyp h (r₁, r₂)
       | some ⟨ atom (succ (succ _)), _ ⟩, _ => absurdHyp h (r₁) 
       | some ⟨ sort.undef, _ ⟩, _           => absurdHyp h (r₁) 
       | some ⟨ sort.array _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.bv _, _ ⟩, _            => absurdHyp h (r₁)
       | some ⟨ sort.arrow _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.dep, _ ⟩, _             => absurdHyp h (r₁)
       | none, _                             => absurdHyp h (r₁)

theorem impliesElim : ∀ {t₁ t₂ : term},
  followsFrom (implies t₁ t₂) (or (not t₁) t₂)
  | t₁, t₂, Γ, Δ, h =>
    by simp at h
       match r₁: interpTerm t₁, r₂: interpTerm t₂ with
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
         simp
         rewrite [r₁, r₂]
         rewrite [r₁, r₂] at h
         exact h
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.undef, _ ⟩           => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.array _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.bv _, _ ⟩            => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ sort.dep, _ ⟩             => absurdHyp h (r₁, r₂)
       | some ⟨ atom 1, k₁ ⟩, none                             => absurdHyp h (r₁, r₂)
       | some ⟨ atom (succ (succ _)), _ ⟩, _ => absurdHyp h (r₁) 
       | some ⟨ sort.undef, _ ⟩, _           => absurdHyp h (r₁) 
       | some ⟨ sort.array _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.bv _, _ ⟩, _            => absurdHyp h (r₁)
       | some ⟨ sort.arrow _ _, _ ⟩, _       => absurdHyp h (r₁)
       | some ⟨ sort.dep, _ ⟩, _             => absurdHyp h (r₁)
       | none, _                             => absurdHyp h (r₁)
