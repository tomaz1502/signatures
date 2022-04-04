import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules

def Interpretation: Type := Nat → Bool

@[simp] def bimplies (x y : Bool) : Bool :=
  match x, y with
  | true, false => false
  | _,    _     => true

def beq (x y : Bool)  : Bool := x == y
def bneq (x y : Bool) : Bool := x != y

#check BEq

-- def inferType (t : term) : Type :=
--   match t with
--   | lambda _ t₁ => Bool → (inferType t₁)
--   | _ => Bool

-- @[simp] def interpTerm' (f : Interpretation) (t : term) : inferType t × Type :=
--   match t with
--   | term.const i _ => (f i, sorry)
--   | _ => sorry

@[simp] def interpTerm (f : Interpretation) (t : term) : Bool :=
  match t with
  | term.const   i  _  => f i
  | term.not     t₁    => not $ interpTerm f t₁
  | term.and     t₁ t₂ => and (interpTerm f t₁) (interpTerm f t₂)
  | term.or      t₁ t₂ => or (interpTerm f t₁) (interpTerm f t₂)
  | term.implies t₁ t₂ => bimplies (interpTerm f t₁) (interpTerm f t₂)
  | term.xor     t₁ t₂ => bneq (interpTerm f t₁) (interpTerm f t₂)
  | term.eq      t₁ t₂ => beq  (interpTerm f t₁) (interpTerm f t₂)
  | term.app     t₁ t₂ => interpTerm f t₂
  | term.bot           => false
  | term.top           => true
  | _                  => false

def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {f : Interpretation}, interpTerm f t₁ = true → interpTerm f t₂ = true

-- Boolean rules

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

theorem interpNotTerm : ∀ {f : Interpretation} {t : term},
  interpTerm f (not t) = false → interpTerm f t = true
  | f, t, h =>
    match r: interpTerm f t with
    | true  => rfl
    | false => by simp at h
                  rewrite [r] at h
                  simp at h

theorem notImplies2' : ∀ {t₁ t₂ : term},
  followsFrom (not $ implies t₁ t₂) (not t₂)
  | t₁, t₂, f, h => have r₁ := notImplies1' h
    match r₂: interpTerm f (not t₂) with
    | true  => rfl
    | false => by simp at h
                  have r₂' := interpNotTerm r₂
                  rewrite [r₁, r₂'] at h
                  simp at h

theorem impliesElim' : ∀ {t₁ t₂: term},
  followsFrom (implies t₁ t₂) (or (not t₁) t₂)
  | t₁, t₂, f, h =>
    match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
    | false, _     => by simp
                         rewrite [r₁, r₂]
                         rfl
    | true,  false => by simp at h
                         rewrite [r₁, r₂] at h
                         simp at h
    | true,  true  => by simp
                         rewrite [r₁, r₂]
                         rfl

theorem contradiction': ∀ {t: term},
  followsFrom (and (not t) t) bot
  | t, f, h => by simp at h
                  cases r: interpTerm f t with
                  | false => rewrite [r] at h
                             simp at h
                  | true  => rewrite [r] at h
                             simp at h

theorem R1' : ∀ {t₁ t₂ : term},
  followsFrom (and (or (not t₁) t₂) t₁) t₂
  | t₁, t₂, f, h =>
    match r₁: interpTerm f t₁, r₂: interpTerm f t₂ with
    | _,     true  => rfl
    | true,  false => by simp at h
                         rewrite [r₁, r₂] at h
                         simp at h
    | false, false => by simp at h
                         rewrite [r₁, r₂] at h
                         simp at h

theorem conjunction: ∀ {t₁ t₂: term} {f: Interpretation},
  interpTerm f t₁ = true → interpTerm f t₂ = true → interpTerm f (and t₁ t₂)
  | t₁, t₂, f, h₁, h₂ => by simp
                            rewrite [h₁, h₂]
                            rfl

-- EUF Rules

theorem refl': ∀ {t: term} {f: Interpretation},
  interpTerm f (eq t t) = true
  | t, f => by simp
               cases interpTerm f t with
               | true => simp
               | false => simp

theorem beqSymm: ∀ {a b: Bool}, a == b → b == a
  | true,  true,  _ => rfl
  | false, true,  h => by simp at h
  | true,  false, h => by simp at h
  | false, false, _ => rfl

theorem symm': ∀ {t₁ t₂: term} {f: Interpretation},
  interpTerm f (eq t₁ t₂) → interpTerm f (eq t₂ t₁)
  | _, _, _, h =>
    by simp at *
       exact beqSymm h

#check Eq.trans
#check Eq.symm

theorem beqTrans: ∀ {a b c: Bool}, a == b → b == c → a == c
  | a, b, c, h₁, h₂ => sorry

theorem trans': ∀ {t₁ t₂ t₃: term} {f: Interpretation},
  interpTerm f (eq t₁ t₂) → interpTerm f (eq t₂ t₃) → interpTerm f (eq t₁ t₃)
  | _, _, _, _, h₁, h₂ =>
    by simp at *
       exact beqTrans h₁ h₂

-- Examples

def p: term := const 1000 boolSort
def q: term := const 1001 boolSort

def mpDE' := implies p (implies (implies p q) q)
def notMpDE := (not mpDE')

theorem th0' : followsFrom notMpDE bot :=
  λ lean_a0 =>
    have lean_s0 := notImplies2' lean_a0
    have lean_s1 := notImplies1' lean_s0
    have lean_s2 := impliesElim' lean_s1
    have lean_s4 := notImplies1' lean_a0
    have lean_s6 := R1' (conjunction lean_s2 lean_s4)
    have lean_s9 := notImplies2' lean_s0
    contradiction' (conjunction lean_s9 lean_s6)

theorem followsBot : ∀ {t : term},
  followsFrom t bot → ∀ {f : Interpretation}, interpTerm f t = false
  | t, h, f =>
    match r: interpTerm f t with
    | true  => have h' := @h f r
               by simp at h'
    | false => rfl

theorem notMpDEFalse: ∀ {f: Interpretation}, interpTerm f notMpDE = false :=
  followsBot th0'
theorem mpDETrue: ∀ {f: Interpretation}, interpTerm f mpDE' = true :=
  interpNotTerm notMpDEFalse

def modusPonens (x y: Bool) : Bool := bimplies (and (bimplies x y) x) y
def curryModusPonens (x y: Bool) : Bool := bimplies x (bimplies (bimplies x y) y)

theorem mp: ∀ {x y: Bool}, bimplies x (bimplies (bimplies x y) y) = true
  | x, y => @mpDETrue λ n => if n == 1000 then x else y

variable {b₁ b₂: Bool}

@[simp] def is_equiv (l l₁ l₂: term) := l = xor l₁ l₂

theorem notBneIsEq: ∀ {a b : Bool}, ((a != b) = false) → a = b
  | true, true,   _ => rfl
  | false, false, _ => rfl
  | true, false,  h => by simp at h
  | false, true,  h => by simp at h

theorem eqOfInterps: ∀ (l l₁ l₂: term),
    followsFrom l bot →
    is_equiv l l₁ l₂ →
    ∀ {I : Interpretation}, interpTerm I l₁ = interpTerm I l₂ :=
  by intros l l₁ l₂ h₁ h₂ I
     simp at h₂
     rewrite [h₂] at h₁
     have h₃ := @followsBot (xor l₁ l₂) h₁ I
     simp at h₃
     exact notBneIsEq h₃
