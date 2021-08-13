//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: _coder_quadraticSolver_mex.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 13-Aug-2021 19:19:19
//

#ifndef _CODER_QUADRATICSOLVER_MEX_H
#define _CODER_QUADRATICSOLVER_MEX_H

// Include Files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void unsafe_quadraticSolver_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                        int32_T nrhs, const mxArray *prhs[3]);

#endif
//
// File trailer for _coder_quadraticSolver_mex.h
//
// [EOF]
//
