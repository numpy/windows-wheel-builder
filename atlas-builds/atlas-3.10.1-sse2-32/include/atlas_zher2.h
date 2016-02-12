/*
 * This file generated on line 445 of /cygdrive/c/code/atlas/atlas-3.10.1//tune/blas/ger/r2hgen.c
 */
#ifndef ATLAS_ZSYR2_H
   #define ATLAS_ZSYR2_H

#include "atlas_zr2.h"

#define ATL_s2U_NU 1

#define ATL_s2L_NU 1

#define ATL_GetPartS2 ATL_GetPartR2
#define ATL_MIN_RESTRICTED_M 0
#define ATL_URGERK ATL_zger2k__1
#define ATL_GENGERK ATL_zger2k__1

#define ATL_HER2U_nu(A_, lda_, x_, y_, xt_, yt_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0; \
   const TYPE x0r=*(x_), x0i=(x_)[1]; \
   const TYPE xt0r=*(xt_), xt0i=(xt_)[1]; \
   const TYPE y0r=*(y_), y0i=(y_)[1]; \
   const TYPE yt0r=*(yt_), yt0i=(yt_)[1]; \
   aa[lda0_+0] += x0r*yt0r-x0i*yt0i + y0r*xt0r-y0i*xt0i; \
   aa[lda0_+1] = 0.0; \
}
#define ATL_HER2L_nu(A_, lda_, x_, y_, xt_, yt_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0; \
   const TYPE x0r=*(x_), x0i=(x_)[1]; \
   const TYPE xt0r=*(xt_), xt0i=(xt_)[1]; \
   const TYPE y0r=*(y_), y0i=(y_)[1]; \
   const TYPE yt0r=*(yt_), yt0i=(yt_)[1]; \
   aa[lda0_+0] += x0r*yt0r-x0i*yt0i + y0r*xt0r-y0i*xt0i; \
   aa[lda0_+1] = 0.0; \
}

#endif
