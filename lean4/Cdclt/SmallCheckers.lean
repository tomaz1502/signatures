import Cdclt.Term
import Cdclt.TermEval
import Cdclt.Boolean

open proof
open term
open rules

def Interpretation: Type := Nat → Bool

def allOnes : Interpretation := λ _ => True
def meaningOfLife : Interpretation := λ x => if x = 42 then true else false

open Functor

instance : Seq Option where
  seq f a :=
    match (f, a) with
    | (some f', some a') => some (f' a')
    | _                  => none

@[simp] def bimplies : Bool → Bool → Bool
  | true, false => false
  | _,    _     => true

#check Option.map

@[simp] def interpTerm (f : Interpretation) : term → Option Bool
  | term.const   i  _  => some $ f i
  | term.not     t₁    => (λ x   => not x)        <$> (interpTerm f t₁)
  | term.and     t₁ t₂ => (λ x y => and x y)      <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.or      t₁ t₂ => (λ x y => or x y)       <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.implies t₁ t₂ => (λ x y => bimplies x y) <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.xor     t₁ t₂ => (λ x y => x ≠ y)        <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.eq      t₁ t₂ => (λ x y => x = y)        <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | _ => none

#check interpTerm

#eval interpTerm allOnes (term.xor (const 2 boolSort) (const 1 boolSort)) -- some false

def propHolds (t : term) : Prop :=
  ∃ (f : Interpretation), interpTerm f t = some true

def followsFrom (t₁ t₂ : term) :=
  ∀ {f : Interpretation}, interpTerm f t₁ = some true → interpTerm f t₂ = some true

theorem followsImpliesPropHolds: ∀ {t₁ t₂: term},
  followsFrom t₁ t₂ → propHolds t₁ → propHolds t₂
  | t₁, t₂, h₁, ⟨ f, h₂ ⟩ =>
    ⟨ f, h₁ h₂ ⟩

theorem notImplies1' : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) t₁
  | t₁, t₂, f, h =>
    match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
    | none,       _      => by simp at h
                               rewrite [r₁] at h
                               assumption
    | some false, none   => by simp at h
                               rewrite [r₁, r₂] at h
                               simp at h
    | some false, some _ => by simp at h
                               rewrite [r₁, r₂] at h
                               assumption

    | some true,  _      => rfl

theorem notImplies1 : ∀ {t₁ t₂: term},
  propHolds (not $ implies t₁ t₂) → propHolds t₁
  | t₁, t₂, h => followsImpliesPropHolds notImplies1' h

theorem interpNotNone: ∀ {f: Interpretation} {t: term},
  interpTerm f t = none → interpTerm f (not t) = none :=
  by intros f t h
     simp
     rewrite [h]
     simp

theorem interpNotNone': ∀ {f: Interpretation} {t: term},
  interpTerm f (not t) = none → interpTerm f t = none :=
  by intros f t h
     cases r: interpTerm f t with
     | some val => simp at h
                   cases r': val with
                   | true  => rewrite [r, r'] at h
                              simp at h
                   | false => rewrite [r, r'] at h
                              simp at h
     | none     => exact rfl

theorem interpNotTerm: ∀ {f: Interpretation} {t: term},
  interpTerm f (not t) = some false → interpTerm f t = some true
  | f, t, h => by
    cases r: interpTerm f t with
    | some val => cases r': val with
                  | true  => exact rfl
                  | false => rewrite [r'] at r
                             simp at h
                             rewrite [r] at h
                             simp at h
    | none     => have h₂ := interpNotNone r
                  rewrite [h₂] at h
                  injection h

theorem notImplies2' : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) (not t₂)
  | t₁, t₂, f, h =>
    by have t₁Holds := notImplies1' h
       simp at h
       rewrite [t₁Holds] at h
       cases r: interpTerm f (not t₂) with
       | some val => cases r': val with
                     | true  => exact rfl
                     | false => rewrite [r'] at r
                                have h₂ := interpNotTerm r
                                rewrite [h₂] at h
                                assumption
       | none     => have h₂ := interpNotNone' r
                     rewrite [h₂] at h
                     assumption

theorem notImplies2 : ∀ {t₁ t₂: term},
  propHolds (not $ implies t₁ t₂) → propHolds (not t₂)
  | t₁, t₂, h => followsImpliesPropHolds notImplies2' h

theorem impliesElim' : ∀ {t₁ t₂: term},
  followsFrom (implies t₁ t₂) (or (not t₁) t₂)
  | t₁, t₂, f, h =>
    match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
    | none,       _          => by simp at *
                                   rewrite [r₁] at h
                                   rewrite [r₁]
                                   assumption
    | some false, none       => by simp at *
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some false, some false => by simp
                                   rewrite [r₁, r₂]
                                   exact rfl
    | some false, some true  => by simp
                                   rewrite [r₁, r₂]
                                   exact rfl
    | some true, none        => by simp at *
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some true, some false  => by simp at *
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some true, some true   => by simp
                                   rewrite [r₁, r₂]
                                   exact rfl

theorem impliesElim : ∀ {t₁ t₂: term},
  propHolds (implies t₁ t₂) → propHolds (or (not t₁) t₂)
  | t₁, t₂, h => followsImpliesPropHolds impliesElim' h


-- theorem notImplies2' : ∀ {t₁ t₂ : term},
--   propHolds (not $ implies t₁ t₂) → propHolds (not t₂)
--     | t₁, t₂, ⟨ f, h ⟩ =>
--       have p: interpTerm f t₁ = true :=
--         -- by apply contradict
--       ⟨ f, p ⟩
     

/-\ axiom modusPonens : ∀ {t₁ t₂ : term}, \ -/
/-\   thHolds t₁ → thHolds (implies t₁ t₂) → thHolds t₂ \ -/

/-\ theorem evalImplies : termEval (implies t₁ t₂) = implies (termEval t₁) (termEval t₂) := sorry \ -/

/-\ theorem termEvalGo : termEval (go f t) = interpTerm f t := sorry \ -/

/-\ theorem modusPonens' : ∀  (f : Interpretation) (t₁ t₂ : term), \ -/
/-\   interpTerm f t₁ = top → interpTerm f (implies t₁ t₂) = top → interpTerm f t₂ = top := \ -/
/-\     by intros h₁ h₂ \ -/
/-\        simp at h₂ \ -/
/-\        rewrite [evalImplies] at h₂ \ -/
/-\        rewrite [termEvalGo] at h₂ \ -/

    /-\ match interpTerm f t₂ with \ -/
    /-\ | top => by intros \ -/
    /-\             exact rfl \ -/
    /-\ | t₂'  => by intros h₁ h₂ \ -/
    /-\              simp at h₂ \ -/

-- import Cdclt.Term
-- import Cdclt.Euf
-- import Cdclt.Array
-- import Cdclt.BV
-- import Cdclt.Quant
-- set_option maxRecDepth 10000
-- set_option maxHeartbeats 500000

-- open proof
-- open proof.sort proof.term
-- open rules eufRules arrayRules bvRules quantRules



 -- ? acho que nao funciona pq as interpretacoes de t₁ e (implies t₁ t₂) podem ser diferentes
/-\ theorem modusPonens' : ∀ (t₁ t₂ : term), \ -/
/-\   propHolds t₁ → propHolds (implies t₁ t₂) → propHolds t₂ \ -/

/-\  -- acho que resolve o problema do de cima \ -/
/-\ theorem modusPonens' : ∀ (t₁ t₂ : term), \ -/
/-\   propHolds (and t₁ (implies t₁ t₂)) → propHolds t₂ \ -/
def p := const 1000 boolSort
def q := const 1001 boolSort
def let1 := (implies p q)
def let2 := (implies let1 q)
def let3 := (term.not (implies p let2))
def let4 := (term.not let2)

theorem th0 : thHolds let3 -> holds [] :=
fun lean_a0 : thHolds let3 =>
have lean_s0 : thHolds let4 := notImplies2 lean_a0
have lean_s1 : thHolds let1 := notImplies1 lean_s0
have lean_s2 : thHolds (term.or (term.not p) q) := impliesElim lean_s1
let lean_s3 := clOr lean_s2
have lean_s4 : thHolds p := notImplies1 lean_a0
let lean_s5 := clAssume lean_s4
have lean_s6 : holds ([q]) := R1 lean_s3 lean_s5 p
let lean_s7 := thAssume lean_s6
have lean_s8 : thHolds let4 := notImplies2 lean_a0
have lean_s9 : thHolds (term.not q) := notImplies2 lean_s8
show holds [] from contradiction lean_s7 lean_s9
