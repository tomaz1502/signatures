import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules

namespace sc

def Interpretation: Type := Nat → Bool

def allOnes : Interpretation := λ _ => true
def meaningOfLife : Interpretation := λ x => if x = 42 then true else false

/-\ open Functor \ -/

/-\ instance : Seq Option where \ -/
/-\   seq f a := \ -/
/-\     match (f, a) with \ -/
/-\     | (some f', some a') => some (f' a') \ -/
/-\     | _                  => none \ -/

@[simp] def bimplies : Bool → Bool → Bool
  | true, false => false
  | _,    _     => true

@[simp] def interpTerm (f : Interpretation) : term → Bool
  | term.const   i  _  => f i
  | term.not     t₁    => not $ interpTerm f t₁
  | term.and     t₁ t₂ => (interpTerm f t₁) ∧ (interpTerm f t₂)
  | term.or      t₁ t₂ => (interpTerm f t₁) ∨ (interpTerm f t₂)
  | term.implies t₁ t₂ => bimplies (interpTerm f t₁) (interpTerm f t₂)
  | term.xor     t₁ t₂ => interpTerm f t₁ != interpTerm f t₂
  | term.eq      t₁ t₂ => interpTerm f t₁ == interpTerm f t₂
  | term.bot           => false
  | term.top           => true
  | _                  => false

/-\ #eval interpTerm allOnes (term.xor (const 2 boolSort) (const 1 boolSort)) -- false \ -/

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {f : Interpretation}, interpTerm f t₁ = true → interpTerm f t₂ = true

theorem impliesFalse : ∀ {t: term}, followsFrom t bot → ∀ f , interpTerm f t = false
  | t, h, f => match r: interpTerm f t with
               | true => by have h' := h r
                            simp at h'
               | false => rfl

variable {b1 b2 : Bool}

theorem notImplies1' : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) t₁
  | t₁, t₂, f, h =>
    match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
    | true, _      => rfl
    | false, true  => by simp at h
                         rewrite [r₁, r₂] at h
                         simp at h
    | false, false => by simp at h
                         rewrite [r₁, r₂] at h
                         simp at h

-- theorem notImplies2' : ∀ {t₁ t₂ : term},
--   followsFrom' [not $ implies t₁ t₂] (not t₂)
--   | t₁, t₂, f, h => sorry

-- theorem liftDeepToShallow: ∀ {t₁ t₂: term} {}

-- def propHolds (t : term) : Prop :=
--   ∃ (f : Interpretation), interpTerm f t = some true


-- @[simp] def allTrue (f : Interpretation) (ts : List term) : Prop :=
--   match ts with
--   | [] => true
--   | (t :: ts') => interpTerm f t = some true /\ allTrue f ts'

-- def followsFrom' (ts : List term) (t : term) : Prop :=
--   ∀ (f : Interpretation), allTrue f ts → interpTerm f t = some true

-- theorem followsImpliesPropHolds: ∀ {t₁ t₂: term}, followsFrom t₁ t₂ → propHolds t₁ → propHolds t₂
--   | t₁, t₂, h₁, ⟨ f, h₂ ⟩ =>
--     ⟨ f, h₁ h₂ ⟩

-- theorem notImplies1' : ∀ {t₁ t₂ : term},
--   followsFrom' [not $ implies t₁ t₂] t₁
--   | t₁, t₂, f, h =>
--     match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
--     | none,       _      => by simp at h
--                                rewrite [r₁] at h
--                                assumption
--     | some false, none   => by simp at h
--                                rewrite [r₁, r₂] at h
--                                simp at h
--     | some false, some _ => by simp at h
--                                rewrite [r₁, r₂] at h
--                                assumption
--     | some true,  _      => rfl


-- theorem interpNotNone: ∀ {f: Interpretation} {t: term},
--   interpTerm f t = none → interpTerm f (not t) = none :=
--   by intros f t h
--      simp
--      rewrite [h]
--      simp

-- theorem interpNotNone': ∀ {f: Interpretation} {t: term},
--   interpTerm f (not t) = none → interpTerm f t = none :=
--   by intros f t h
--      cases r: interpTerm f t with
--      | some val => simp at h
--                    cases r': val with
--                    | true  => rewrite [r, r'] at h
--                               simp at h
--                    | false => rewrite [r, r'] at h
--                               simp at h
--      | none     => exact rfl

-- theorem interpNotTerm: ∀ {f: Interpretation} {t: term},
--   interpTerm f (not t) = some false → interpTerm f t = some true
--   | f, t, h => by
--     cases r: interpTerm f t with
--     | some val => cases r': val with
--                   | true  => exact rfl
--                   | false => rewrite [r'] at r
--                              simp at h
--                              rewrite [r] at h
--                              simp at h
--     | none     => have h₂ := interpNotNone r
--                   rewrite [h₂] at h
--                   injection h

-- theorem notImplies2' : ∀ {t₁ t₂ : term},
--   followsFrom' [not $ implies t₁ t₂] (not t₂)
--   | t₁, t₂, f, h =>
--     by have t₁Holds := notImplies1' f h
--        simp at h
--        rewrite [t₁Holds] at h
--        cases r: interpTerm f (not t₂) with
--        | some val => cases r': val with
--                      | true  => exact rfl
--                      | false => rewrite [r'] at r
--                                 have h₂ := interpNotTerm r
--                                 rewrite [h₂] at h
--                                 assumption
--        | none     => have h₂ := interpNotNone' r
--                      rewrite [h₂] at h
--                      assumption

-- theorem impliesElim' : ∀ {t₁ t₂: term},
--   followsFrom' [implies t₁ t₂] (or (not t₁) t₂)
--   | t₁, t₂, f, h =>
--     match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
--     | none,       _          => by simp at *
--                                    rewrite [r₁] at h
--                                    rewrite [r₁]
--                                    assumption
--     | some false, none       => by simp at *
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some false, some _     => by simp
--                                    rewrite [r₁, r₂]
--                                    exact rfl
--     | some true, none        => by simp at *
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some true, some false  => by simp at *
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some true, some true   => by simp
--                                    rewrite [r₁, r₂]
--                                    exact rfl

-- theorem contradiction': ∀ {t: term},
--   followsFrom' [(not t), t] bot
--   | t, f, h => by simp at h
--                   cases r: interpTerm f t with
--                   | none     => rewrite [r] at h
--                                 simp at h
--                   | some val => cases r': val with
--                                 | true  => rewrite [r'] at r
--                                            rewrite [r] at h
--                                            simp at h
--                                 | false => rewrite [r'] at r
--                                            rewrite [r] at h
--                                            simp at h

-- theorem R1' : ∀ {t₁ t₂ : term},
--   followsFrom' [or (not t₁) t₂, t₁] t₂
--   | t₁, t₂, f, h =>
--     match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
--     | _,          some true  => rfl
--     | none,       some false => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some true,  some false => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some false, some false => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | none,       none       => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some false,     none   => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h
--     | some true,     none    => by simp at h
--                                    rewrite [r₁, r₂] at h
--                                    simp at h

-- theorem liftAllTrue {f : Interpretation} {t : term} :
--   interpTerm f t = some true → allTrue f [t]
--   | h => by simp
--             exact h

-- theorem liftAllTrue₂ {f : Interpretation} {t₁ t₂ : term} :
--   interpTerm f t₁ = some true → interpTerm f t₂ = some true → allTrue f [t₁, t₂]
--   | h₁, h₂ => by simp
--                  exact ⟨h₁, h₂⟩

-- def p := const 1000 boolSort
-- def q := const 1001 boolSort
-- def let1 := (implies p q)
-- def let2 := (implies let1 q)
-- def let3 := (term.not (implies p let2))
-- def let4 := (term.not let2)

-- theorem th0' : followsFrom' [let3] bot :=
--   λ f lean_a0 =>
--     have lean_s0: interpTerm f (not let2) = some true := notImplies2' f lean_a0
--     have lean_s1: interpTerm f let1 = some true := notImplies1' f (liftAllTrue lean_s0)
--     have lean_s2: interpTerm f (or (not p) q) = some true := impliesElim' f (liftAllTrue lean_s1)
--     have lean_s4: interpTerm f p = some true := notImplies1' f lean_a0
--     have lean_s6: interpTerm f q = some true := R1' f (liftAllTrue₂ lean_s2 lean_s4)
--     have lean_s8: interpTerm f let4 = some true := notImplies2' f lean_a0
--     have lean_s9: interpTerm f (not q) = some true := notImplies2' f (liftAllTrue lean_s8)
--     contradiction' f (liftAllTrue₂ lean_s9 lean_s6)

-- theorem th0'' : followsFrom' [let3] bot :=
--   λ f lean_a0 =>
--     have lean_s0 := notImplies2' f lean_a0
--     have lean_s1 := notImplies1' f (liftAllTrue lean_s0)
--     have lean_s2 := impliesElim' f (liftAllTrue lean_s1)
--     have lean_s4 := notImplies1' f lean_a0
--     have lean_s6 := R1' f (liftAllTrue₂ lean_s2 lean_s4)
--     have lean_s8 := notImplies2' f lean_a0
--     have lean_s9 := notImplies2' f (liftAllTrue lean_s8)
--     contradiction' f (liftAllTrue₂ lean_s9 lean_s6)

-- theorem bModusPonens : ∀ (p q : Bool), bimplies ((bimplies p q) && p) q = true := sorry




-- def w: term := term.implies y z
-- def k: term := term.and w y
-- def t: term := term.implies k z
-- def u: term := term.eq t (term.top)
-- def v: term := term.not u

-- -- def x: term := term.implies (term.and (term.implies (const 1 boolSort) (const 2 boolSort)) const 1 boolSort) (const 2 boolSort)

-- open Classical

-- theorem followsBot : ∀ (t : term), followsFrom' [t] bot → ∀ (f : Interpretation), interpTerm f t ≠ some true :=
--   by intros t h f
--      simp
--      intro hh
--      have pp := h f
--      simp at pp
--      have qq := pp hh
--      exact qq