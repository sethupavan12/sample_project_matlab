//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: quadraticSolver.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 13-Aug-2021 19:19:19
//

// Include Files
#include "quadraticSolver.h"
#include "sqrt.h"

// Function Definitions
//
// quadraticSolver returns solutions to the
//  quadratic equation a*x^2 + b*x + c = 0.
//
// Arguments    : double a
//                double b
//                double c
//                double roots[2]
// Return Type  : void
//
void quadraticSolver(double a, double b, double c, double roots[2])
{
  double d;
  double d1;
  // HAD TO SPECIFY THIS FOR CODER
  d = b * b - 4.0 * a * c;
  d1 = d;
  coder::b_sqrt(&d1);
  roots[0] = (-b + d1) / (2.0 * a);
  coder::b_sqrt(&d);
  roots[1] = (-b - d) / (2.0 * a);
}

//
// File trailer for quadraticSolver.cpp
//
// [EOF]
//
