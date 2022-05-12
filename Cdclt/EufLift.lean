import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules
open sort

def coe' : (A = B) → A → B
| rfl, a => a

/- def extend_env (Γ: Environment) (i : Nat) (A : Type) (a : A) : Environment := -/
/-   λ j B => if i == j then a else a -/
/- def f: Environment := λ n => default -/

def interpSort' : sort → Type := λ s => match s with
| arrow s₁ s₂ => (interpSort' s₁) → (interpSort' s₂)
| _ => Bool

-- takes the number of a constant and it's type, and returns its value
def Environment : Type := Nat → (s : sort) → interpSort' s

-- takes the number of a sort constant and returns its value
def SEnvironment  := Nat → Type

def interpSort (Δ : SEnvironment) (s : sort) : Type :=
  match s with
  | arrow s₁ s₂ => (interpSort Δ s₁) → (interpSort Δ s₂)
  | boolSort    => Bool
  | atom n      => Δ n
  | _           => Bool

def Interpretation: Type 1 := Option (Σ (s : sort), (Γ : Environment) → (Δ : SEnvironment) → interpSort Δ s)

-- mutual recursion? how?
@[simp] def combineBools : Interpretation → Interpretation → (Bool → Bool → Bool) → Interpretation
| some ⟨ boolSort, k₁ ⟩, some ⟨ boolSort, k₂ ⟩, f =>
    some ⟨ boolSort, λ Γ Δ => f (k₁ Γ Δ) (k₂ Γ Δ) ⟩ -- maybe we can use state monad to avoid propagating the environments manually?
| _, _, _ => none

set_option maxHeartbeats 300000

-- its okay to be noncomputable, we just want to prove theorems about this function, not really compute it
@[simp] def interpTerm : term → Interpretation
| term.const   n  s  => some ⟨ s, λ Γ Δ => Γ n (interpSort Δ s)  ⟩
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

open Coe

instance (Δ : SEnvironment): Coe (interpSort Δ (atom 1)) Bool where
  coe e := e
instance (Δ : SEnvironment): Coe (interpSort Δ boolSort) Bool where
  coe e := e

@[simp] def validWith (Γ : Environment) (Δ : SEnvironment) (t : term) : Bool :=
  match interpTerm t with
  | some ⟨ boolSort, k ⟩ => coe (k Γ Δ) == true
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
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
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
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
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
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
           simp
           rewrite [r₁, r₂]
           rewrite [r₁, r₂] at h
           exact h
       | some ⟨ atom 0, _ ⟩, _  => absurdHyp h (r₁)
       | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 0, _ ⟩  => absurdHyp h (r₁, r₂)
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

theorem contradiction: ∀ {t: term},
  followsFrom (and (not t) t) bot
  | t, Γ, Δ, h => by
    simp at h
    match r: interpTerm t with
    | some ⟨ atom 1, k ⟩               =>
        rewrite [r] at h;
        simp at h
        have hh: (!(k Γ Δ) && (k Γ Δ)) == true := h
        cases rk: k Γ Δ with
        | true  => rewrite [rk] at hh
                   simp at hh
        | false => rewrite [rk] at hh
                   simp at hh
    | some ⟨ atom 0, _ ⟩               => absurdHyp h (r)
    | some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h (r)
    | some ⟨ sort.undef, _ ⟩           => absurdHyp h (r)
    | some ⟨ sort.array _ _, _ ⟩       => absurdHyp h (r)
    | some ⟨ sort.bv _, _ ⟩            => absurdHyp h (r)
    | some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h (r)
    | some ⟨ sort.dep, _ ⟩             => absurdHyp h (r)
    | none                             => absurdHyp h (r)
       
theorem beqImpliesEq {a : Bool} (h: a == true) : a = true :=
  match a with
  | true  => rfl
  | false => by simp at *

theorem R1 : ∀ {t₁ t₂ : term},
  followsFrom (and (or (not t₁) t₂) t₁) t₂
  | t₁, t₂, Γ, Δ, h => by
    simp at h
    match r₁: interpTerm t₁, r₂: interpTerm t₂ with
    | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
        simp at *
        rewrite [r₁, r₂] at h
        have hh: (and (or (not (k₁ Γ Δ)) (k₂ Γ Δ)) (k₁ Γ Δ)) == true := h
        cases rk2: k₂ Γ Δ with
        | true  => rewrite [r₂]
                   show (coe (k₂ Γ Δ) == true) = true
                   rewrite [rk2]
                   rfl
        | false => rewrite [rk2] at hh
                   cases rk1: k₁ Γ Δ with
                   | true  => rewrite [rk1] at hh; simp at hh
                   | false => rewrite [rk1] at hh; simp at hh
    | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => absurdHyp h (r₁, r₂)
    | some ⟨ atom 1, _ ⟩, none                             => absurdHyp h (r₁, r₂)
    | some ⟨ atom 0, _ ⟩, _               => absurdHyp h (r₁) 
    | some ⟨ atom (succ (succ _)), _ ⟩, _ => absurdHyp h (r₁)
    | some ⟨ sort.undef, _ ⟩, _           => absurdHyp h (r₁)
    | some ⟨ sort.array _ _, _ ⟩, _       => absurdHyp h (r₁)
    | some ⟨ sort.bv _, _ ⟩, _            => absurdHyp h (r₁)
    | some ⟨ sort.arrow _ _, _ ⟩, _       => absurdHyp h (r₁)
    | some ⟨ sort.dep, _ ⟩, _             => absurdHyp h (r₁)
    | none, _                             => absurdHyp h (r₁)

theorem conjunction: ∀ {t₁ t₂: term} {Γ: Environment} {Δ: SEnvironment},
  validWith Γ Δ t₁ → validWith Γ Δ t₂ → validWith Γ Δ (and t₁ t₂)
  | t₁, t₂, Γ, Δ, h₁, h₂ => by
    simp at *
    match r₁: interpTerm t₁, r₂: interpTerm t₂ with
    | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
        show (and (k₁ Γ Δ) (k₂ Γ Δ)) == true
        simp
        rewrite [r₁] at h₁
        rewrite [r₂] at h₂
        have k₁T: (k₁ Γ Δ) = true := beqImpliesEq h₁
        have k₂T: (k₂ Γ Δ) = true := beqImpliesEq h₂
        exact And.intro k₁T k₂T
    | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => absurdHyp h₂ (r₂)
    | some ⟨ atom 1, _ ⟩, none                             => absurdHyp h₂ (r₂)
    | some ⟨ atom 0, _ ⟩, _                                => absurdHyp h₁ (r₁)
    | some ⟨ atom (succ (succ _)), _ ⟩ , _ => absurdHyp h₁ (r₁)
    | some ⟨ sort.undef, _ ⟩, _            => absurdHyp h₁ (r₁)
    | some ⟨ sort.array _ _, _ ⟩, _        => absurdHyp h₁ (r₁)
    | some ⟨ sort.bv _, _ ⟩, _             => absurdHyp h₁ (r₁)
    | some ⟨ sort.arrow _ _, _ ⟩, _        => absurdHyp h₁ (r₁)
    | some ⟨ sort.dep, _ ⟩, _              => absurdHyp h₁ (r₁)
    | none, _                              => absurdHyp h₁ (r₁)

theorem neqImpliesBneq: ∀ {b: Bool}, ¬ (b = true) → (!b) = true
  | true, h  => by simp at h
  | false, h => rfl

theorem followsBot: ∀ {t: term},
  followsFrom t bot → ∀ {Γ : Environment} {Δ : SEnvironment}, !validWith Γ Δ t
  | t, h, Γ, Δ => by
    apply @neqImpliesBneq (validWith Γ Δ t)
    intro validT
    have validBot := @h Γ Δ validT
    simp at validBot
    cases validBot

def p: term := const 1000 boolSort
def q: term := const 1001 boolSort

def mpDE := implies p (implies (implies p q) q)
def notMpDE := (not mpDE)
 
#check mpDE

theorem th0: followsFrom notMpDE bot := λ lean_a0 =>
  have lean_s0 := notImplies2 lean_a0
  have lean_s1 := notImplies1 lean_s0
  have lean_s2 := impliesElim lean_s1
  have lean_s4 := notImplies1 lean_a0
  have lean_s6 := R1 (conjunction lean_s2 lean_s4)
  have lean_s9 := notImplies2 lean_s0
  contradiction (conjunction lean_s9 lean_s6)

@[simp] def isBool : term → Bool
  | t => match interpTerm t with
         | some ⟨ atom 1, _ ⟩ => true
         | _ => false

theorem interpNotTerm: ∀ {Γ: Environment} {Δ: SEnvironment} {t: term},
  isBool t → !validWith Γ Δ (not t) → validWith Γ Δ t
  | Γ, Δ, t, bt, h => by
    match r: interpTerm t with
    | some ⟨ atom 1, k ⟩ => match rk: k Γ Δ with
                            | true  => simp
                                       rewrite [r]
                                       show (coe (k Γ Δ) == true)
                                       rewrite [rk]
                                       rfl
                            | false => simp at h
                                       rewrite [r] at h
                                       have notNotT: !(!k Γ Δ) = true := h
                                       rewrite [rk] at notNotT
                                       cases notNotT
    | some ⟨ atom 0, _ ⟩               => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ atom (succ (succ _)), _ ⟩ => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ sort.undef, _ ⟩           => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ sort.array _ _, _ ⟩       => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ sort.bv _, _ ⟩            => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ sort.arrow _ _, _ ⟩       => simp at bt; rewrite [r] at bt; cases bt
    | some ⟨ sort.dep, _ ⟩             => simp at bt; rewrite [r] at bt; cases bt
    | none                             => simp at bt; rewrite [r] at bt; cases bt

theorem notMpDEFalse: ∀ {Γ: Environment} {Δ: SEnvironment}, !validWith Γ Δ notMpDE :=
  followsBot th0

theorem mpDETrue: ∀ {Γ: Environment} {Δ: SEnvironment}, validWith Γ Δ mpDE := interpNotTerm rfl notMpDEFalse

def bimplies (x y: Bool) : Bool :=
  match x, y with
  | true, false => false
  | _, _ => true

def curryModusPonens (x y: Bool) : Bool := bimplies x (bimplies (bimplies x y) y)


/- theorem mp: ∀ {x y: Bool}, curryModusPonens x y = true -/
/-   | x, y => @mpDETrue (λ n t => -/
/-                          match t with -/
/-                          | Bool => true -/
/-                          | Nat => 3 -/
/-                          | _   => default -/
/-                          )  (λ _ => Nat) -/

