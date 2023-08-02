import Cdclt.Term
import Cdclt.Boolean

open proof
open term
open rules

def Interpretation: Type := Nat → Prop

@[simp] def interpTerm (f : Interpretation) (t : term) : Prop :=
  match t with
  | term.const   i  _  => f i
  | term.not     t₁    => Not $ interpTerm f t₁
  | term.and     t₁ t₂ => And (interpTerm f t₁) (interpTerm f t₂)
  | term.or      t₁ t₂ => Or (interpTerm f t₁) (interpTerm f t₂)
  | term.implies t₁ t₂ => (interpTerm f t₁) -> (interpTerm f t₂)
  | term.eq      t₁ t₂ => (interpTerm f t₁) = (interpTerm f t₂)
  | term.bot           => False
  | term.top           => True
  | _                  => False

@[simp] def satisfies (I : Interpretation) (t : term) : Prop :=
  interpTerm I t = True

@[simp] def followsFrom (t₁ t₂ : term) : Prop :=
  ∀ {I : Interpretation}, satisfies I t₁ → satisfies I t₂

/- -- Boolean rules -/

theorem eqTrue {A : Prop} : A = True → A := fun ha => by rw [ha]; exact True.intro

theorem eqFalse {A : Prop} : A = False → ¬ A := fun hna => by rw [hna]; simp

theorem impliesEqTrue {A : Prop} : A → (A = True) := fun ha =>
  propext $ Iff.intro (fun _ => True.intro) (fun _ => ha)

theorem impliesEqFalse {A : Prop} : ¬ A → (A = False) := fun hna =>
  propext $ Iff.intro (fun ha => hna ha) False.elim

theorem negNegElim {A : Prop} : ¬ ¬ A → A := by
  cases Classical.em A with
  | inl c => exact fun _ => c
  | inr c => exact fun h => False.elim (h c)

theorem notImplies1' : ∀ {t₁ t₂ : term},
    followsFrom (not (implies t₁ t₂)) t₁ := by
  intros t₁ t₂ I h
  simp at *
  cases Classical.em (interpTerm I t₁) with
  | inl r => exact impliesEqTrue r
  | inr r => have h' := eqTrue h
             apply False.elim
             apply h'
             intro abs
             apply False.elim
             exact r abs

theorem interpNotTerm: ∀ {I: Interpretation} {t: term},
    interpTerm I (not t) = False → interpTerm I t = True := by
  intros I t h
  simp at *
  apply impliesEqTrue
  exact negNegElim (eqFalse h)

theorem notImplies2' : ∀ {t₁ t₂ : term},
    followsFrom (not $ implies t₁ t₂) (not t₂) := by
  intros t₁ t₂ I h
  simp at *
  cases Classical.em (interpTerm I t₂) with
  | inl r => have h' := eqTrue h
             apply False.elim
             apply h'
             exact fun _ => r
  | inr r => exact impliesEqTrue r

theorem impliesElim' : ∀ {t₁ t₂: term},
    followsFrom (implies t₁ t₂) (or (not t₁) t₂) := by
  intros t₁ t₂ I h
  simp at *
  apply propext
  apply Iff.intro
  { exact fun _ => True.intro }
  intro _
  have h' := eqTrue h
  cases Classical.em (interpTerm I t₁) with
  | inl c => exact Or.inr (h' c)
  | inr c => exact Or.inl c

theorem contradiction': ∀ {t: term},
    followsFrom (and (not t) t) bot := by
  intros t I h
  simp at *
  have h' := eqTrue h
  have hna := h'.1
  have ha := h'.2
  exact hna ha

theorem R1' : ∀ {t₁ t₂ : term},
    followsFrom (and (or (not t₁) t₂) t₁) t₂ := by
  intros t₁ t₂ I h
  simp at *
  have h' := eqTrue h
  have nT1OrT2 := h'.1
  have t1True := h'.2
  cases nT1OrT2 with
  | inl c => exact False.elim (c t1True)
  | inr c => exact impliesEqTrue c

theorem conjunction: ∀ {t₁ t₂ : term} {I : Interpretation},
    satisfies I t₁ → satisfies I t₂ → satisfies I (and t₁ t₂) := by
  intros t₁ t₂ I h₁ h₂
  simp at *
  apply impliesEqTrue
  exact And.intro (eqTrue h₁) (eqTrue h₂)

/- -- Examples -/

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
    followsFrom t bot → ∀ {I : Interpretation}, interpTerm I t = False := by
  intros t h I
  simp at *
  have h' := @h I
  cases Classical.em (interpTerm I t) with
  | inl c => exact False.elim (h' (impliesEqTrue c))
  | inr c => exact impliesEqFalse c

theorem notMpDEFalse: ∀ {f: Interpretation}, interpTerm f notMpDE = False :=
  followsBot th0'
theorem mpDETrue: ∀ {f: Interpretation}, interpTerm f mpDE' = True :=
  interpNotTerm notMpDEFalse

def modusPonens' (P Q: Prop) := P → (P → Q) → Q

theorem mp: ∀ {P Q: Prop}, (modusPonens' P Q) = True
  | P, Q => @mpDETrue fun n => if n == 1000 then P else Q
