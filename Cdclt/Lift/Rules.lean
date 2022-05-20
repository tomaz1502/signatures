import Cdclt.Lift.Defs
import Cdclt.Term

open Types

open proof
open term
open sort

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
           show k₁ Γ Δ = true
           rewrite [r₁, r₂] at h
           have h₂ : not (!(k₁ Γ Δ) || (k₂ Γ Δ)) = true := h
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
           show (!k₂ Γ Δ) = true
           rewrite [r₁, r₂] at h
           have h₂ : not (!(k₁ Γ Δ) || (k₂ Γ Δ)) = true := h
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
    | some ⟨ atom 1, k ⟩ =>
        rewrite [r] at h;
        simp at h
        have hh: (!(k Γ Δ) && (k Γ Δ)) = true := h
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
       
theorem R1 : ∀ {t₁ t₂ : term},
  followsFrom (and (or (not t₁) t₂) t₁) t₂
  | t₁, t₂, Γ, Δ, h => by
    simp at h
    match r₁: interpTerm t₁, r₂: interpTerm t₂ with
    | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
        simp at *
        rewrite [r₁, r₂] at h
        have hh: (and (or (not (k₁ Γ Δ)) (k₂ Γ Δ)) (k₁ Γ Δ)) = true := h
        cases rk2: k₂ Γ Δ with
        | true  => rewrite [r₂]
                   show (Coe.coe (k₂ Γ Δ) = true)
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

theorem conjunction: ∀ {t₁ t₂: term} {Γ: Environment} {Δ : SEnvironment},
  validWith Γ Δ t₁ → validWith Γ Δ t₂ → validWith Γ Δ (and t₁ t₂)
  | t₁, t₂, Γ, Δ, h₁, h₂ => by
    simp at *
    match r₁: interpTerm t₁, r₂: interpTerm t₂ with
    | some ⟨ atom 1, k₁ ⟩, some ⟨ atom 1, k₂ ⟩ =>
        show (and (k₁ Γ Δ) (k₂ Γ Δ)) = true
        simp
        rewrite [r₁] at h₁
        rewrite [r₂] at h₂
        have k₁T: (k₁ Γ Δ) = true := h₁
        have k₂T: (k₂ Γ Δ) = true := h₂
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
  | false, _ => rfl

theorem followsBot: ∀ {t: term},
  followsFrom t bot → ∀ {Γ : Environment} {Δ : SEnvironment}, !validWith Γ Δ t
  | t, h, Γ, Δ => by
    apply @neqImpliesBneq (validWith Γ Δ t)
    intro validT
    have validBot := @h Γ Δ validT
    simp at validBot
    cases validBot

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
                                       show (Coe.coe (k Γ Δ) = true)
                                       rewrite [rk]
                                       rfl
                            | false => simp at h
                                       rewrite [r] at h
                                       have notNotT: (!(!k Γ Δ)) = true := h
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

