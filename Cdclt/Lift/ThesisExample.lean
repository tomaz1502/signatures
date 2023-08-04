import Cdclt.Term
import Cdclt.Boolean

open proof
open sort
open term

/- -- Auxiliary -/

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

def coe' : (A = B) → A → B
| rfl, a => a

/- -- Definitions -/

def interpSort' : sort → Type := fun s =>
  match s with
  | sort.arrow s₁ s₂ => interpSort' s₁ → interpSort' s₂
  | boolSort => Prop
  | _ => Prop

def Interpretation : Type := Nat → Option (Σ (s : sort) , interpSort' s)

@[simp] def evalTerm (I : Interpretation) (t : term) : Option (Σ (s : sort) , interpSort' s) :=
  match t with
  | term.const   i  _  => I i
  | term.not     t₁    =>
    match evalTerm I t₁ with
    | some ⟨ boolSort, t₁' ⟩ => some ⟨ boolSort, ¬ t₁' ⟩
    | _ => none
  | term.and     t₁ t₂ =>
    match evalTerm I t₁, evalTerm I t₂ with
    | some ⟨ boolSort, t₁'⟩, some ⟨ boolSort , t₂' ⟩ => some ⟨ boolSort, And t₁' t₂' ⟩
    | _,_ => none
  | term.or      t₁ t₂ =>
    match evalTerm I t₁, evalTerm I t₂ with
    | some ⟨ boolSort, t₁'⟩, some ⟨ boolSort , t₂' ⟩ => some ⟨ boolSort, Or t₁' t₂' ⟩
    | _,_ => none
  | term.implies t₁ t₂ =>
    match evalTerm I t₁, evalTerm I t₂ with
    | some ⟨ boolSort, t₁'⟩, some ⟨ boolSort , t₂' ⟩ => some ⟨ boolSort, t₁' → t₂' ⟩
    | _,_ => none
  | term.eq      t₁ t₂ =>
    match evalTerm I t₁, evalTerm I t₂ with
    | some ⟨ s₁, t₁'⟩, some ⟨ s₂, t₂' ⟩ =>
      if r: s₁ = s₂ then
        let ct₂' := coe' (congrArg interpSort' (Eq.symm r)) t₂'
        some ⟨ boolSort, t₁' = ct₂' ⟩
      else none
    | _,_ => none
  | term.bot           => some ⟨ boolSort, False ⟩
  | term.top           => some ⟨ boolSort, True ⟩
  | _                  => none

@[simp] def satisfies (I : Interpretation) (t : term) : Prop :=
  match evalTerm I t with
  | some ⟨ boolSort, p ⟩ => p = True
  | _ => False

def impliesIn (t₁ t₂ : term) : Prop :=
  ∀ {I : Interpretation}, satisfies I t₁ → satisfies I t₂

theorem notImplies1 : ∀ {t₁ t₂ : term},
    impliesIn (not (implies t₁ t₂)) t₁ := by
  intros t₁ t₂
  rw [impliesIn]
  intros I h
  simp at h
  split at h
  case h_1 _ _ h' =>
    split at h'
    case h_1 _ d h'' =>
      split at h''
      case h_1 h₃ _ f _ i _ =>
        injection h'' with h''
        injection h'' with _ h''
        injection h' with h'
        injection h' with _ h'
        rw [satisfies, i]
        rw [h] at h'
        have hh : d = False := impliesEqFalse (eqTrue h')
        rw [hh] at h''
        have z := eqFalse h''
        apply impliesEqTrue
        cases Classical.em f with
        | inl c => exact c
        | inr c => exact False.elim (z (fun hf   => False.elim (c hf)))
      case h_2 a b h₃                            => injection h''
    case h_2 h''                                 => injection h'
  case h_2 hh                                    => exact False.elim h

open Nat

theorem notImplies2 : ∀ {t₁ t₂ : term},
    impliesIn (not $ implies t₁ t₂) (not t₂) := by
  intros t₁ t₂
  rw [impliesIn]
  intros I h
  simp at h
  match r₁: evalTerm I t₁, r₂: evalTerm I t₂ with
  | some ⟨ boolSort, p₁ ⟩, some ⟨ boolSort, p₂ ⟩ =>
    rw [r₁, r₂] at h
    have h₂ : (¬ ( p₁ → p₂ ))                    = True := h
    rw [satisfies]
    simp
    rw [r₂]
    show (¬ p₂) = True
    apply impliesEqTrue
    intro hp₂
    have h₂' := eqTrue h₂
    exact (h₂' (fun hp₁ => hp₂))
  | some ⟨ atom 0, _ ⟩, _                                => rw [r₁] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, none                             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom (succ (succ _)), _ ⟩, _                  => rw [r₁] at h; cases h
  | some ⟨ sort.undef, _ ⟩, _                            => rw [r₁] at h; cases h
  | some ⟨ sort.array _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.bv _, _ ⟩, _                             => rw [r₁] at h; cases h
  | some ⟨ sort.arrow _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.dep, _ ⟩, _                              => rw [r₁] at h; cases h
  | none, _                                              => rw [r₁] at h; cases h

theorem impliesElim : ∀ {t₁ t₂ : term},
    impliesIn (implies t₁ t₂) (or (not t₁) t₂) := by
  intros t₁ t₂
  rw [impliesIn]
  intros I h
  simp at h
  match r₁: evalTerm I t₁, r₂: evalTerm I t₂ with
  | some ⟨ boolSort, p₁ ⟩, some ⟨ boolSort, p₂ ⟩ =>
    rw [r₁, r₂] at h
    have h₂ : ( p₁ → p₂ ) = True := h
    rw [satisfies]
    simp
    rw [r₁, r₂]
    show (¬ p₁ ∨ p₂) = True
    apply impliesEqTrue
    have h₂' := eqTrue h₂
    cases Classical.em p₁ with
    | inl c => exact Or.inr (h₂' c)
    | inr c => exact Or.inl c
  | some ⟨ atom 0, _ ⟩, _                                => rw [r₁] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, none                             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom (succ (succ _)), _ ⟩, _                  => rw [r₁] at h; cases h
  | some ⟨ sort.undef, _ ⟩, _                            => rw [r₁] at h; cases h
  | some ⟨ sort.array _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.bv _, _ ⟩, _                             => rw [r₁] at h; cases h
  | some ⟨ sort.arrow _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.dep, _ ⟩, _                              => rw [r₁] at h; cases h
  | none, _                                              => rw [r₁] at h; cases h

theorem R1 : ∀ {t₁ t₂ : term},
    impliesIn (and (or (not t₁) t₂) t₁) t₂ := by
  intros t₁ t₂
  rw [impliesIn]
  intros I h
  simp at h
  match r₁: evalTerm I t₁, r₂: evalTerm I t₂ with
  | some ⟨ boolSort, p₁ ⟩, some ⟨ boolSort, p₂ ⟩ =>
    rw [r₁, r₂] at h
    have h₂ : (((¬ p₁) ∨ p₂) ∧ p₁) = True := h
    rw [satisfies]
    simp
    rw [r₂]
    show p₂ = True
    apply impliesEqTrue
    have h₂' := eqTrue h₂
    have ⟨hOr, hp₁⟩ := h₂'
    cases hOr with
    | inl hnp₁ => exact False.elim (hnp₁ hp₁) 
    | inr hp₂  => exact hp₂
  | some ⟨ atom 0, _ ⟩, _                                => rw [r₁] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom 1, _ ⟩, none                             => rw [r₁, r₂] at h; cases h
  | some ⟨ atom (succ (succ _)), _ ⟩, _                  => rw [r₁] at h; cases h
  | some ⟨ sort.undef, _ ⟩, _                            => rw [r₁] at h; cases h
  | some ⟨ sort.array _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.bv _, _ ⟩, _                             => rw [r₁] at h; cases h
  | some ⟨ sort.arrow _ _, _ ⟩, _                        => rw [r₁] at h; cases h
  | some ⟨ sort.dep, _ ⟩, _                              => rw [r₁] at h; cases h
  | none, _                                              => rw [r₁] at h; cases h

theorem conjunction : ∀ {t₁ t₂ : term} {I : Interpretation},
    satisfies I t₁ → satisfies I t₂ → satisfies I (and t₁ t₂) := by
  intros t₁ t₂ I h₁ h₂
  simp at *
  match r₁: evalTerm I t₁, r₂: evalTerm I t₂ with
  | some ⟨ boolSort, p₁ ⟩, some ⟨ boolSort, p₂ ⟩ =>
    rw [r₁] at h₁
    rw [r₂] at h₂
    have h₁' : p₁ = True := h₁
    have h₂' : p₂ = True := h₂
    show (p₁ ∧ p₂) = True
    apply impliesEqTrue
    have h₁'' := eqTrue h₁'
    have h₂'' := eqTrue h₂'
    exact And.intro h₁'' h₂''
  | some ⟨ atom 0, _ ⟩, _                                => rw [r₁] at h₁; cases h₁
  | some ⟨ atom 1, _ ⟩, some ⟨ atom 0, _ ⟩               => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ atom (succ (succ _)), _ ⟩ => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.undef, _ ⟩           => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.array _ _, _ ⟩       => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.bv _, _ ⟩            => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.arrow _ _, _ ⟩       => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, some ⟨ sort.dep, _ ⟩             => rw [r₂] at h₂; cases h₂
  | some ⟨ atom 1, _ ⟩, none                             => rw [r₂] at h₂; cases h₂
  | some ⟨ atom (succ (succ _)), _ ⟩, _                  => rw [r₁] at h₁; cases h₁
  | some ⟨ sort.undef, _ ⟩, _                            => rw [r₁] at h₁; cases h₁
  | some ⟨ sort.array _ _, _ ⟩, _                        => rw [r₁] at h₁; cases h₁
  | some ⟨ sort.bv _, _ ⟩, _                             => rw [r₁] at h₁; cases h₁
  | some ⟨ sort.arrow _ _, _ ⟩, _                        => rw [r₁] at h₁; cases h₁
  | some ⟨ sort.dep, _ ⟩, _                              => rw [r₁] at h₁; cases h₁
  | none, _                                              => rw [r₁] at h₁; cases h₁

theorem contradiction : ∀ {t : term},
    impliesIn (and (not t) t) bot := by
  intros t
  rw [impliesIn]
  intros I h
  simp at *
  show False = True
  match r: evalTerm I t with
  | some ⟨ boolSort, p ⟩ =>
    rw [r] at h
    have h' : (¬ p ∧ p) := eqTrue h
    apply impliesEqTrue
    have ⟨hnp, hp⟩ := h'
    exact hnp hp
  | some ⟨ atom 0, _ ⟩               => rw [r] at h; cases h
  | some ⟨ atom (succ (succ _)), _ ⟩ => rw [r] at h; cases h
  | some ⟨ sort.undef, _ ⟩           => rw [r] at h; cases h
  | some ⟨ sort.array _ _, _ ⟩       => rw [r] at h; cases h
  | some ⟨ sort.bv _, _ ⟩            => rw [r] at h; cases h
  | some ⟨ sort.arrow _ _, _ ⟩       => rw [r] at h; cases h
  | some ⟨ sort.dep, _ ⟩             => rw [r] at h; cases h
  | none                             => rw [r] at h; cases h

def p: term := const 1000 boolSort
def q: term := const 1001 boolSort
def modusPonensEmbed := implies p (implies (implies p q) q)
def notModusPonensEmbed := not modusPonensEmbed

theorem th0 : impliesIn notModusPonensEmbed bot :=
  λ lean_a0 =>
    have lean_s0 := notImplies2 lean_a0
    have lean_s1 := notImplies1 lean_s0
    have lean_s2 := impliesElim lean_s1
    have lean_s4 := notImplies1 lean_a0
    have lean_s6 := R1 (conjunction lean_s2 lean_s4)
    have lean_s9 := notImplies2 lean_s0
    contradiction (conjunction lean_s9 lean_s6)


@[simp] def isBool (t : term) (I : Interpretation) : Bool :=
  match evalTerm I t with
  | some ⟨ boolSort, _ ⟩ => true
  | _ => false

theorem evalNotTerm: ∀ {I: Interpretation} {t: term},
    isBool t I → ¬ satisfies I (not t)  → satisfies I t := by
  intros I t bt h
  simp [evalTerm] at h
  match r: evalTerm I t with
  | some ⟨ boolSort, p ⟩ =>
    rw [r] at h
    have h : ¬ ((¬ p) = True) := h
    simp [satisfies]
    rw [r]
    show p = True
    apply impliesEqTrue
    cases Classical.em p with
    | inl c => exact c
    | inr c =>
      have c' : (¬ p) = True := impliesEqTrue c
      exact False.elim (h c') 
  | some ⟨ atom 0, _ ⟩               => simp at bt; rw [r] at bt; cases bt
  | some ⟨ atom (succ (succ _)), _ ⟩ => simp at bt; rw [r] at bt; cases bt
  | some ⟨ sort.undef, _ ⟩           => simp at bt; rw [r] at bt; cases bt
  | some ⟨ sort.array _ _, _ ⟩       => simp at bt; rw [r] at bt; cases bt
  | some ⟨ sort.bv _, _ ⟩            => simp at bt; rw [r] at bt; cases bt
  | some ⟨ sort.arrow _ _, _ ⟩       => simp at bt; rw [r] at bt; cases bt
  | some ⟨ sort.dep, _ ⟩             => simp at bt; rw [r] at bt; cases bt
  | none                             => simp at bt; rw [r] at bt; cases bt

theorem impliesInBot : ∀ {t : term},
    impliesIn t bot → ∀ {I : Interpretation}, ¬ satisfies I t := by
  intros t h I
  rw [impliesIn] at h
  have h' := @h I
  intro tSatisfied
  have botSatisfied := h' tSatisfied
  simp [satisfies] at botSatisfied
  have abs : False = True := botSatisfied
  simp at abs

def modusPonens (P Q : Prop) : Prop := P → (P → Q) → Q

theorem modusPonensCorrect: ∀ (P Q: Prop), (modusPonens P Q) = True := by
  intros P Q
  let I: Interpretation := fun id =>
    if id == 1000 then
      some ⟨ boolSort, P ⟩ 
    else if id == 1001 then
      some ⟨ boolSort, Q ⟩
    else none
  have mpBool : isBool modusPonensEmbed I := rfl
  have f: ∀ {I' : Interpretation}, ¬ satisfies I' notModusPonensEmbed := impliesInBot th0
  have notMpUnsatisfied : ¬ satisfies I notModusPonensEmbed := @f I
  exact evalNotTerm mpBool notMpUnsatisfied
