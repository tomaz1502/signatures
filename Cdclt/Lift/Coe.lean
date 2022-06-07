import Cdclt.Lift.Types
import Cdclt.Term

open Types
open Coe
open proof
open sort
open term

instance {Δ : SEnvironment} : Coe (interpSort Δ (atom 1)) Prop where
  coe e := e

instance {Δ : SEnvironment} : Coe (interpSort Δ boolSort) Prop where
  coe e := e

def coe' : (A = B) → A → B
| rfl, a => a
