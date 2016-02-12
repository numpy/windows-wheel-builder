/*
 * This file generated on line 432 of /cygdrive/d/code/atlas/atlas-3.10.1//tune/blas/ger/r1hgen.c
 */
#ifndef ATLAS_ZSYR1_H
   #define ATLAS_ZSYR1_H

#include "atlas_zr1.h"

#define ATL_s1U_NU 4

#define ATL_s1L_NU 4

#define ATL_GetPartS1 ATL_GetPartR1
#define ATL_MIN_RESTRICTED_M 20
#define ATL_URGERK ATL_zgerk__900001
static void ATL_GENGERK(ATL_CINT M, ATL_CINT N, const TYPE *X,
                        const TYPE *Y, TYPE *A, ATL_CINT lda)
{
   int nu, minM, minN, i, FNU, aX, aX2A, aY;
   ATL_INT CEL;
   ATL_r1kern_t gerk;
   const TYPE one[2] = {ATL_rone, ATL_rzero};
   gerk = ATL_GetR1Kern(M, N, A, lda, &i, &nu, &minM, &minN,
                        &aX, &aX2A, &aY, &FNU, &CEL);
   if (aX2A)
      aX = ((size_t)A) % ATL_Cachelen == ((size_t)X) % ATL_Cachelen;
   else
      aX = (aX) ? (((size_t)X)/aX)*aX == (size_t)X : 1;
   aY = (aY) ? (((size_t)Y)/aY)*aY == (size_t)Y : 1;
   if (M >= minM && N >= minN && aX && aY)
   {
      if (FNU)
      {
          ATL_CINT n = (N/nu)*nu, nr=N-n;
          gerk(M, n, X, Y, A, lda);
          if (nr)
             ATL_zgerk_axpy(M, nr, one, X, 1, Y+(n+n), 1, A+(n+n)*lda, lda);
      } /* end if (FNU) */
      else
         gerk(M, N, X, Y, A, lda);
   } /* end if can call optimized kernel */
   else
      ATL_zgerk_Mlt16(M, N, one, X, 1, Y, 1, A, lda);
}

#define ATL_HER1U_nu(A_, lda_, x_, xt_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0, lda1_ = lda0_+(lda_)+(lda_), lda2_ = lda1_+(lda_)+(lda_), lda3_ = lda2_+(lda_)+(lda_); \
   const TYPE x0r=*(x_), x0i=(x_)[1], x1r=(x_)[2], x1i=(x_)[3], x2r=(x_)[4], x2i=(x_)[5], x3r=(x_)[6], x3i=(x_)[7]; \
   const TYPE xt0r=*(xt_), xt0i=(xt_)[1], xt1r=(xt_)[2], xt1i=(xt_)[3], xt2r=(xt_)[4], xt2i=(xt_)[5], xt3r=(xt_)[6], xt3i=(xt_)[7]; \
   aa[lda0_+0] += x0r*xt0r-x0i*xt0i; \
   aa[lda0_+1] = 0.0; \
   aa[lda1_+0] += x0r*xt1r-x0i*xt1i; \
   aa[lda1_+1] += x0r*xt1i+x0i*xt1r; \
   aa[lda1_+2] += x1r*xt1r-x1i*xt1i; \
   aa[lda1_+3] = 0.0; \
   aa[lda2_+0] += x0r*xt2r-x0i*xt2i; \
   aa[lda2_+1] += x0r*xt2i+x0i*xt2r; \
   aa[lda2_+2] += x1r*xt2r-x1i*xt2i; \
   aa[lda2_+3] += x1r*xt2i+x1i*xt2r; \
   aa[lda2_+4] += x2r*xt2r-x2i*xt2i; \
   aa[lda2_+5] = 0.0; \
   aa[lda3_+0] += x0r*xt3r-x0i*xt3i; \
   aa[lda3_+1] += x0r*xt3i+x0i*xt3r; \
   aa[lda3_+2] += x1r*xt3r-x1i*xt3i; \
   aa[lda3_+3] += x1r*xt3i+x1i*xt3r; \
   aa[lda3_+4] += x2r*xt3r-x2i*xt3i; \
   aa[lda3_+5] += x2r*xt3i+x2i*xt3r; \
   aa[lda3_+6] += x3r*xt3r-x3i*xt3i; \
   aa[lda3_+7] = 0.0; \
}
#define ATL_HER1L_nu(A_, lda_, x_, xt_) \
{ \
   TYPE *aa=(A_); \
   ATL_CINT lda0_ = 0, lda1_ = lda0_+(lda_)+(lda_), lda2_ = lda1_+(lda_)+(lda_), lda3_ = lda2_+(lda_)+(lda_); \
   const TYPE x0r=*(x_), x0i=(x_)[1], x1r=(x_)[2], x1i=(x_)[3], x2r=(x_)[4], x2i=(x_)[5], x3r=(x_)[6], x3i=(x_)[7]; \
   const TYPE xt0r=*(xt_), xt0i=(xt_)[1], xt1r=(xt_)[2], xt1i=(xt_)[3], xt2r=(xt_)[4], xt2i=(xt_)[5], xt3r=(xt_)[6], xt3i=(xt_)[7]; \
   aa[lda0_+0] += x0r*xt0r-x0i*xt0i; \
   aa[lda0_+1] = 0.0; \
   aa[lda0_+2] += x1r*xt0r-x1i*xt0i; \
   aa[lda0_+3] += x1r*xt0i+x1i*xt0r; \
   aa[lda0_+4] += x2r*xt0r-x2i*xt0i; \
   aa[lda0_+5] += x2r*xt0i+x2i*xt0r; \
   aa[lda0_+6] += x3r*xt0r-x3i*xt0i; \
   aa[lda0_+7] += x3r*xt0i+x3i*xt0r; \
   aa[lda1_+2] += x1r*xt1r-x1i*xt1i; \
   aa[lda1_+3] = 0.0; \
   aa[lda1_+4] += x2r*xt1r-x2i*xt1i; \
   aa[lda1_+5] += x2r*xt1i+x2i*xt1r; \
   aa[lda1_+6] += x3r*xt1r-x3i*xt1i; \
   aa[lda1_+7] += x3r*xt1i+x3i*xt1r; \
   aa[lda2_+4] += x2r*xt2r-x2i*xt2i; \
   aa[lda2_+5] = 0.0; \
   aa[lda2_+6] += x3r*xt2r-x3i*xt2i; \
   aa[lda2_+7] += x3r*xt2i+x3i*xt2r; \
   aa[lda3_+6] += x3r*xt3r-x3i*xt3i; \
   aa[lda3_+7] = 0.0; \
}

#endif
