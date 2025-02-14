#include "four_momentum.h"

FourMomentum operator+(const FourMomentum &p1, const FourMomentum &p2)
{
  double E = p1.get_E() + p2.get_E();
  double px = p1.get_px() + p2.get_px();
  double py = p1.get_py() + p2.get_py();
  double pz = p1.get_pz() + p2.get_pz();
  return FourMomentum(E, px, py, pz);
}

double dotProduct(const FourMomentum &p1, const FourMomentum &p2)
{
  return p1.get_E() * p2.get_E() - p1.get_px() * p2.get_px() - p1.get_py() * p2.get_py() -
         p1.get_pz() * p2.get_pz();
}