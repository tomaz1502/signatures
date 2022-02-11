import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules

namespace sc

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
#check Functor

@[simp] def interpTerm (f : Interpretation) : term → Option Bool
  | term.const   i  _  => some $ f i
  | term.not     t₁    => (λ x   => not x)        <$> (interpTerm f t₁)
  | term.and     t₁ t₂ => (λ x y => and x y)      <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.or      t₁ t₂ => (λ x y => or x y)       <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.implies t₁ t₂ => (λ x y => bimplies x y) <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.xor     t₁ t₂ => (λ x y => x ≠ y)        <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.eq      t₁ t₂ => (λ x y => x = y)        <$> (interpTerm f t₁) <*> (interpTerm f t₂)
  | term.bot           => some false
  | term.top           => some true
  | _ => none

#eval interpTerm allOnes (term.xor (const 2 boolSort) (const 1 boolSort)) -- some false

def propHolds (t : term) : Prop :=
  ∃ (f : Interpretation), interpTerm f t = some true

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {f : Interpretation}, interpTerm f t₁ = some true → interpTerm f t₂ = some true

@[simp] def allTrue (f : Interpretation) (ts : List term) : Prop :=
  match ts with
  | [] => true
  | (t :: ts') => interpTerm f t = some true /\ allTrue f ts'

def followsFrom' (ts : List term) (t : term) : Prop :=
  ∀ {f : Interpretation}, allTrue f ts → interpTerm f t = some true

theorem followsImpliesPropHolds: ∀ {t₁ t₂: term}, followsFrom t₁ t₂ → propHolds t₁ → propHolds t₂
  | t₁, t₂, h₁, ⟨ f, h₂ ⟩ =>
    ⟨ f, h₁ h₂ ⟩

theorem notImplies1'' : ∀ {t₁ t₂ : term},
  followsFrom' [not $ implies t₁ t₂] t₁
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

-- not (t1 -> t2) -> t1
-- not (t1 -> t2) -> not t2
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

theorem notImplies1 : ∀ {t₁ t₂: term}, propHolds (not $ implies t₁ t₂) → propHolds t₁
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
    | some false, some _     => by simp
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

def absurd: Prop := propHolds bot

theorem contradiction': ∀ {t: term},
  followsFrom (and (not t) t) bot
  | t, f, h => by simp at h
                  cases r: interpTerm f t with
                  | none     => rewrite [r] at h
                                simp at h
                  | some val => cases r': val with
                                | true  => rewrite [r'] at r
                                           rewrite [r] at h
                                           simp at h
                                | false => rewrite [r'] at r
                                           rewrite [r] at h
                                           simp at h

theorem contradiction: ∀ {t: term},
  propHolds (and (not t) t) → absurd
  | t, h => followsImpliesPropHolds contradiction' h

theorem R1' : ∀ {a b : term},
  followsFrom (and (or (not a) b) a) b
  | a, b, f, h =>
    match r₁: interpTerm f a, r₂: interpTerm f b with
    | _,          some true  => rfl
    | none,       some false => by simp at h
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some true,  some false => by simp at h
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some false, some false => by simp at h
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | none,       none       => by simp at h
                                   rewrite [r₁, r₂] at h
                                   simp at h
    | some _,     none       => by simp at h
                                   rewrite [r₁, r₂] at h
                                   simp at h
                                   exact h

theorem R1 : ∀ {a b : term},
  propHolds (and (or (not a) b) a) → propHolds b
  | a, b, h => followsImpliesPropHolds R1' h

#check term.top = term.bot


/-\ theorem andIntro : ∀ {a b : term}, \ -/
/-\   propHolds a → propHolds b → propHolds (and a b) \ -/
/-\   | a, b, ⟨f₁, p₁⟩, ⟨f₂, p₂⟩ => by \ -/ 

def p := const 1000 boolSort
def q := const 1001 boolSort
def let1 := (implies p q)
def let2 := (implies let1 q)
def let3 := (term.not (implies p let2))
def let4 := (term.not let2)

theorem th0' : followsFrom' [let3] bot := sorry

theorem th0 : propHolds let3 → absurd :=
  fun lean_a0 : propHolds let3 =>
    have lean_s0 : propHolds let4 := notImplies2 lean_a0
    have lean_s1 : propHolds let1 := notImplies1 lean_s0
    have lean_s2 : propHolds (or (not p) q) := impliesElim lean_s1
    have lean_s4 : propHolds p := notImplies1 lean_a0
    /-\ have lean_s6 : propHolds q := R1 lean_s2 lean_s4 \ -/
    sorry

/-\ theorem th0 : thHolds let3 -> holds [] := \ -/
/-\ fun lean_a0 : thHolds let3 => \ -/
/-\ have lean_s0 : thHolds let4 := notImplies2 lean_a0 \ -/
/-\ have lean_s1 : thHolds let1 := notImplies1 lean_s0 \ -/
/-\ have lean_s2 : thHolds (term.or (term.not p) q) := impliesElim lean_s1 \ -/
/-\ let lean_s3 := clOr lean_s2 \ -/
/-\ have lean_s4 : thHolds p := notImplies1 lean_a0 \ -/
/-\ let lean_s5 := clAssume lean_s4 \ -/
/-\ have lean_s6 : holds ([q]) := R1 lean_s3 lean_s5 p \ -/
/-\ let lean_s7 := thAssume lean_s6 \ -/
/-\ have lean_s8 : thHolds let4 := notImplies2 lean_a0 \ -/
/-\ have lean_s9 : thHolds (term.not q) := notImplies2 lean_s8 \ -/
/-\ show holds [] from contradiction lean_s7 lean_s9 \ -/


