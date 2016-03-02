#ifndef ATLAS_CAMM_ABLK2CMAT_H
   #define ATLAS_CAMM_ABLK2CMAT_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 78
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 78
#endif

void ATL_cablk2cmat_12x3_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);

static const ablk2cmat_t ATL_AMM_BLK2C_a1_b0[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_a1_b0,  /* index 0 */
   ATL_cablk2cmat_12x3_a1_b0,  /* index 1 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 2 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 3 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 4 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 5 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 6 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 7 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 8 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 9 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 10 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 11 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 12 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 13 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 14 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 15 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 16 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 17 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 18 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 19 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 20 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 21 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 22 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 23 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 24 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 25 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 26 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 27 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 28 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 29 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 30 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 31 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 32 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 33 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 34 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 35 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 36 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 37 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 38 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 39 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 40 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 41 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 42 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 43 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 44 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 45 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 46 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 47 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 48 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 49 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 50 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 51 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 52 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 53 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 54 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 55 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 56 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 57 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 58 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 59 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 60 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 61 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 62 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 63 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 64 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 65 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 66 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 67 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 68 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 69 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 70 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 71 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 72 */
   ATL_cablk2cmat_4x2_a1_b0,  /* index 73 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 74 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 75 */
   ATL_cablk2cmat_32x1_a1_b0,  /* index 76 */
   ATL_cablk2cmat_4x2_a1_b0   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_b1[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_a1_b1,  /* index 0 */
   ATL_cablk2cmat_12x3_a1_b1,  /* index 1 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 2 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 3 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 4 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 5 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 6 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 7 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 8 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 9 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 10 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 11 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 12 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 13 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 14 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 15 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 16 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 17 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 18 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 19 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 20 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 21 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 22 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 23 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 24 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 25 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 26 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 27 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 28 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 29 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 30 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 31 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 32 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 33 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 34 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 35 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 36 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 37 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 38 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 39 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 40 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 41 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 42 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 43 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 44 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 45 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 46 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 47 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 48 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 49 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 50 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 51 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 52 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 53 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 54 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 55 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 56 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 57 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 58 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 59 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 60 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 61 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 62 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 63 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 64 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 65 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 66 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 67 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 68 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 69 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 70 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 71 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 72 */
   ATL_cablk2cmat_4x2_a1_b1,  /* index 73 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 74 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 75 */
   ATL_cablk2cmat_32x1_a1_b1,  /* index 76 */
   ATL_cablk2cmat_4x2_a1_b1   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_bn[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_a1_bn,  /* index 0 */
   ATL_cablk2cmat_12x3_a1_bn,  /* index 1 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 2 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 3 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 4 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 5 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 6 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 7 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 8 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 9 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 10 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 11 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 12 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 13 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 14 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 15 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 16 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 17 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 18 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 19 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 20 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 21 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 22 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 23 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 24 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 25 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 26 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 27 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 28 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 29 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 30 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 31 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 32 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 33 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 34 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 35 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 36 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 37 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 38 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 39 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 40 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 41 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 42 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 43 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 44 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 45 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 46 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 47 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 48 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 49 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 50 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 51 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 52 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 53 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 54 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 55 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 56 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 57 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 58 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 59 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 60 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 61 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 62 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 63 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 64 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 65 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 66 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 67 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 68 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 69 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 70 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 71 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 72 */
   ATL_cablk2cmat_4x2_a1_bn,  /* index 73 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 74 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 75 */
   ATL_cablk2cmat_32x1_a1_bn,  /* index 76 */
   ATL_cablk2cmat_4x2_a1_bn   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_bX[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_a1_bX,  /* index 0 */
   ATL_cablk2cmat_12x3_a1_bX,  /* index 1 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 2 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 3 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 4 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 5 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 6 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 7 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 8 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 9 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 10 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 11 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 12 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 13 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 14 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 15 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 16 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 17 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 18 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 19 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 20 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 21 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 22 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 23 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 24 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 25 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 26 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 27 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 28 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 29 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 30 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 31 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 32 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 33 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 34 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 35 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 36 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 37 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 38 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 39 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 40 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 41 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 42 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 43 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 44 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 45 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 46 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 47 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 48 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 49 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 50 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 51 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 52 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 53 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 54 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 55 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 56 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 57 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 58 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 59 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 60 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 61 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 62 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 63 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 64 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 65 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 66 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 67 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 68 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 69 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 70 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 71 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 72 */
   ATL_cablk2cmat_4x2_a1_bX,  /* index 73 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 74 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 75 */
   ATL_cablk2cmat_32x1_a1_bX,  /* index 76 */
   ATL_cablk2cmat_4x2_a1_bX   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_b0[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_an_b0,  /* index 0 */
   ATL_cablk2cmat_12x3_an_b0,  /* index 1 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 2 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 3 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 4 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 5 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 6 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 7 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 8 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 9 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 10 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 11 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 12 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 13 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 14 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 15 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 16 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 17 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 18 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 19 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 20 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 21 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 22 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 23 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 24 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 25 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 26 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 27 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 28 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 29 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 30 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 31 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 32 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 33 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 34 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 35 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 36 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 37 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 38 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 39 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 40 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 41 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 42 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 43 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 44 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 45 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 46 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 47 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 48 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 49 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 50 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 51 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 52 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 53 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 54 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 55 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 56 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 57 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 58 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 59 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 60 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 61 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 62 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 63 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 64 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 65 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 66 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 67 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 68 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 69 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 70 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 71 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 72 */
   ATL_cablk2cmat_4x2_an_b0,  /* index 73 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 74 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 75 */
   ATL_cablk2cmat_32x1_an_b0,  /* index 76 */
   ATL_cablk2cmat_4x2_an_b0   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_b1[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_an_b1,  /* index 0 */
   ATL_cablk2cmat_12x3_an_b1,  /* index 1 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 2 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 3 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 4 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 5 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 6 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 7 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 8 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 9 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 10 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 11 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 12 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 13 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 14 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 15 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 16 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 17 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 18 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 19 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 20 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 21 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 22 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 23 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 24 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 25 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 26 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 27 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 28 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 29 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 30 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 31 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 32 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 33 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 34 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 35 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 36 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 37 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 38 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 39 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 40 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 41 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 42 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 43 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 44 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 45 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 46 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 47 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 48 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 49 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 50 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 51 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 52 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 53 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 54 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 55 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 56 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 57 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 58 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 59 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 60 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 61 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 62 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 63 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 64 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 65 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 66 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 67 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 68 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 69 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 70 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 71 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 72 */
   ATL_cablk2cmat_4x2_an_b1,  /* index 73 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 74 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 75 */
   ATL_cablk2cmat_32x1_an_b1,  /* index 76 */
   ATL_cablk2cmat_4x2_an_b1   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_bn[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_an_bn,  /* index 0 */
   ATL_cablk2cmat_12x3_an_bn,  /* index 1 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 2 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 3 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 4 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 5 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 6 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 7 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 8 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 9 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 10 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 11 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 12 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 13 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 14 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 15 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 16 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 17 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 18 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 19 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 20 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 21 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 22 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 23 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 24 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 25 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 26 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 27 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 28 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 29 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 30 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 31 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 32 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 33 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 34 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 35 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 36 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 37 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 38 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 39 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 40 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 41 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 42 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 43 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 44 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 45 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 46 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 47 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 48 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 49 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 50 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 51 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 52 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 53 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 54 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 55 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 56 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 57 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 58 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 59 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 60 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 61 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 62 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 63 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 64 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 65 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 66 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 67 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 68 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 69 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 70 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 71 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 72 */
   ATL_cablk2cmat_4x2_an_bn,  /* index 73 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 74 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 75 */
   ATL_cablk2cmat_32x1_an_bn,  /* index 76 */
   ATL_cablk2cmat_4x2_an_bn   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_bX[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_an_bX,  /* index 0 */
   ATL_cablk2cmat_12x3_an_bX,  /* index 1 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 2 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 3 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 4 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 5 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 6 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 7 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 8 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 9 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 10 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 11 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 12 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 13 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 14 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 15 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 16 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 17 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 18 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 19 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 20 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 21 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 22 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 23 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 24 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 25 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 26 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 27 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 28 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 29 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 30 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 31 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 32 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 33 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 34 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 35 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 36 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 37 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 38 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 39 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 40 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 41 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 42 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 43 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 44 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 45 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 46 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 47 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 48 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 49 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 50 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 51 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 52 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 53 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 54 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 55 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 56 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 57 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 58 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 59 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 60 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 61 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 62 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 63 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 64 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 65 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 66 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 67 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 68 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 69 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 70 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 71 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 72 */
   ATL_cablk2cmat_4x2_an_bX,  /* index 73 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 74 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 75 */
   ATL_cablk2cmat_32x1_an_bX,  /* index 76 */
   ATL_cablk2cmat_4x2_an_bX   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_b0[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_aX_b0,  /* index 0 */
   ATL_cablk2cmat_12x3_aX_b0,  /* index 1 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 2 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 3 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 4 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 5 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 6 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 7 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 8 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 9 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 10 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 11 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 12 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 13 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 14 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 15 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 16 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 17 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 18 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 19 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 20 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 21 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 22 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 23 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 24 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 25 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 26 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 27 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 28 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 29 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 30 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 31 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 32 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 33 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 34 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 35 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 36 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 37 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 38 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 39 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 40 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 41 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 42 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 43 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 44 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 45 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 46 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 47 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 48 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 49 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 50 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 51 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 52 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 53 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 54 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 55 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 56 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 57 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 58 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 59 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 60 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 61 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 62 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 63 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 64 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 65 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 66 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 67 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 68 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 69 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 70 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 71 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 72 */
   ATL_cablk2cmat_4x2_aX_b0,  /* index 73 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 74 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 75 */
   ATL_cablk2cmat_32x1_aX_b0,  /* index 76 */
   ATL_cablk2cmat_4x2_aX_b0   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_b1[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_aX_b1,  /* index 0 */
   ATL_cablk2cmat_12x3_aX_b1,  /* index 1 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 2 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 3 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 4 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 5 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 6 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 7 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 8 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 9 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 10 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 11 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 12 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 13 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 14 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 15 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 16 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 17 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 18 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 19 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 20 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 21 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 22 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 23 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 24 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 25 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 26 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 27 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 28 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 29 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 30 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 31 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 32 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 33 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 34 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 35 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 36 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 37 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 38 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 39 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 40 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 41 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 42 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 43 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 44 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 45 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 46 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 47 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 48 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 49 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 50 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 51 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 52 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 53 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 54 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 55 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 56 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 57 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 58 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 59 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 60 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 61 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 62 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 63 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 64 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 65 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 66 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 67 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 68 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 69 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 70 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 71 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 72 */
   ATL_cablk2cmat_4x2_aX_b1,  /* index 73 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 74 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 75 */
   ATL_cablk2cmat_32x1_aX_b1,  /* index 76 */
   ATL_cablk2cmat_4x2_aX_b1   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_bn[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_aX_bn,  /* index 0 */
   ATL_cablk2cmat_12x3_aX_bn,  /* index 1 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 2 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 3 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 4 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 5 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 6 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 7 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 8 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 9 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 10 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 11 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 12 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 13 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 14 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 15 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 16 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 17 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 18 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 19 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 20 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 21 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 22 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 23 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 24 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 25 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 26 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 27 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 28 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 29 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 30 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 31 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 32 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 33 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 34 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 35 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 36 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 37 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 38 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 39 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 40 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 41 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 42 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 43 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 44 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 45 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 46 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 47 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 48 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 49 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 50 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 51 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 52 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 53 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 54 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 55 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 56 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 57 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 58 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 59 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 60 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 61 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 62 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 63 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 64 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 65 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 66 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 67 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 68 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 69 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 70 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 71 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 72 */
   ATL_cablk2cmat_4x2_aX_bn,  /* index 73 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 74 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 75 */
   ATL_cablk2cmat_32x1_aX_bn,  /* index 76 */
   ATL_cablk2cmat_4x2_aX_bn   /* index 77 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_bX[ATL_AMM_NCASES] =
{
   ATL_cablk2cmat_12x3_aX_bX,  /* index 0 */
   ATL_cablk2cmat_12x3_aX_bX,  /* index 1 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 2 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 3 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 4 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 5 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 6 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 7 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 8 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 9 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 10 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 11 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 12 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 13 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 14 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 15 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 16 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 17 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 18 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 19 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 20 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 21 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 22 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 23 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 24 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 25 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 26 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 27 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 28 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 29 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 30 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 31 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 32 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 33 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 34 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 35 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 36 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 37 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 38 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 39 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 40 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 41 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 42 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 43 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 44 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 45 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 46 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 47 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 48 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 49 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 50 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 51 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 52 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 53 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 54 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 55 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 56 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 57 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 58 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 59 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 60 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 61 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 62 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 63 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 64 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 65 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 66 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 67 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 68 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 69 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 70 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 71 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 72 */
   ATL_cablk2cmat_4x2_aX_bX,  /* index 73 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 74 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 75 */
   ATL_cablk2cmat_32x1_aX_bX,  /* index 76 */
   ATL_cablk2cmat_4x2_aX_bX   /* index 77 */
};


#endif  /* end include file guard */
