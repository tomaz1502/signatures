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

#check Sigma

def Interpretation := Option (Σ (s : sort), (Γ : Environment) → (Δ : SEnvironment) → interpSort Δ s)

-- coercion
def coe' {A B : Type} : (A = B) → A → B
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

@[simp] noncomputable def validWith (Γ : Environment) (Δ : SEnvironment) (t : term) : Bool :=
  match interpTerm t with
  | some ⟨ boolSort, k ⟩ => let z : Bool := k Γ Δ
                            z == true
  | _ => false

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {Γ : Environment} {Δ : SEnvironment}, validWith Γ Δ t₁ → validWith Γ Δ t₂

inductive T: Type where
| a : T
| b : T
| c : T
| d : T
| e : T

inductive O: Type where
| O1 : O
| O2 : O
| O3 : O
deriving BEq

open Nat

theorem notImplies1 : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) t₁
  | t₁, t₂, Γ, Δ, h =>
    match r₁: interpTerm t₁ with
    | some ⟨ atom 0, _ ⟩ => by simp at h
                               rewrite [r₁] at h
                               have z: false = true := h
                               simp at z
    | some ⟨ atom 1, k₁ ⟩ => match r₂: interpTerm t₂ with
                             | some ⟨ atom 0, _ ⟩ => by simp at h
                                                        rewrite [r₁, r₂] at h
                                                        have z: false = true := h
                                                        simp at z
                             | some ⟨ atom 1, k₂ ⟩ => by simp
                                                         rewrite [r₁]
                                                         show (let z: Bool := k₁ Γ Δ; z == true) = true
                                                         simp at h

                                                         rewrite [r₁, r₂] at h

                                                         have h₂ : not (bimplies (k₁ Γ Δ) (k₂ Γ Δ)) == true := h
                                                         cases rk: k₁ Γ Δ with
                                                         | true => rfl
                                                         | false => rewrite [rk] at h₂
                                                                    simp at h₂
                             | some ⟨ atom (succ (succ _)), _ ⟩ => by simp at h
                                                                      rewrite [r₁, r₂] at h
                                                                      have z: false = true := h
                                                                      simp at z
                             
                             | some ⟨ sort.undef, _ ⟩ => by simp at h
                                                            rewrite [r₁, r₂] at h
                                                            have z: false = true := h
                                                            simp at z
                             | some ⟨ sort.array _ _, _ ⟩ => by simp at h 
                                                                rewrite [r₁, r₂] at h
                                                                have z: false = true := h
                                                                simp at z
                             | some ⟨ sort.bv _, _ ⟩ => by simp at h 
                                                           rewrite [r₁, r₂] at h
                                                           have z: false = true := h
                                                           simp at z
                             | some ⟨ sort.arrow _ _, _ ⟩ => by simp at h 
                                                                rewrite [r₁, r₂] at h
                                                                have z: false = true := h
                                                                simp at z
                             | some ⟨ sort.dep, _ ⟩ => by simp at h
                                                          rewrite [r₁, r₂] at h
                                                          have z: false = true := h
                                                          simp at z
                             | none => by simp at h
                                          rewrite [r₁, r₂] at h
                                          have z: false = true := h
                                          simp at z
    | some ⟨ atom (succ (succ n)), _ ⟩ => by simp at h
                                             rewrite [r₁] at h
                                             have z: false = true := h
                                             simp at z
    | some ⟨ sort.undef, _ ⟩ => by simp at h
                                   rewrite [r₁] at h
                                   have z: false = true := h
                                   simp at z
    | some ⟨ sort.array _ _, _ ⟩ => by simp at h 
                                       rewrite [r₁] at h
                                       have z: false = true := h
                                       simp at z
    | some ⟨ sort.bv _, _ ⟩ => by simp at h 
                                  rewrite [r₁] at h
                                  have z: false = true := h
                                  simp at z
    | some ⟨ sort.arrow _ _, _ ⟩ => by simp at h 
                                       rewrite [r₁] at h
                                       have z: false = true := h
                                       simp at z
    | some ⟨ sort.dep, _ ⟩ => by simp at h
                                 rewrite [r₁] at h
                                 have z: false = true := h
                                 simp at z
    | none => by simp at h
                 rewrite [r₁] at h
                 have z: false = true := h
                 simp at z

