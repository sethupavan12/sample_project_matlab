//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: _coder_quadraticSolver_api.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 13-Aug-2021 19:19:19
//

#ifndef _CODER_QUADRATICSOLVER_API_H
#define _CODER_QUADRATICSOLVER_API_H

// Include Files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void quadraticSolver(real_T a, real_T b, real_T c, real_T roots[2]);

void quadraticSolver_api(const mxArray *const prhs[3], const mxArray **plhs);

void quadraticSolver_atexit();

void quadraticSolver_initialize();

void quadraticSolver_terminate();

void quadraticSolver_xil_shutdown();

void quadraticSolver_xil_terminate();

#endif
//
// File trailer for _coder_quadraticSolver_api.h
//
// [EOF]
//
