//
// FILE: polensub.h -- Solve efg by polynomial enumeration in nfg
//
// $Id$
//

#ifndef POLENSUB_H
#define POLENSUB_H

#include "polenum.h"
#include "behavsol.h"
#include "subsolve.h"

class efgPolEnumNfgSolve : public SubgameSolver  {
private:
  int nevals;
  PolEnumParams params;

  void SolveSubgame(const FullEfg &, const EFSupport &,
		    gList<BehavSolution> &, gStatus &);
  EfgAlgType AlgorithmID(void) const { return algorithmEfg_POLENUM_NFG; }

public:
  efgPolEnumNfgSolve(const PolEnumParams &, int max = 0);
  virtual ~efgPolEnumNfgSolve();

  int NumEvals(void) const   { return nevals; }
};

#endif   // POLENSUB_H

