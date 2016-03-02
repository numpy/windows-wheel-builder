#ifndef ATLAS_SAMM_CMAT2ABLK_H
   #define ATLAS_SAMM_CMAT2ABLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
#endif

void ATL_scmat2ablk_4x2_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_4x2_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_12x3_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_8x4_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);
void ATL_scmat2ablk_32x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*);

static const cmat2ablk_t ATL_AMM_C2BLK_a1_b0[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_a1_b0,  /* index 0 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 1 */
   ATL_scmat2ablk_12x3_a1_b0,  /* index 2 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 3 */
   ATL_scmat2ablk_8x4_a1_b0,  /* index 4 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 5 */
   ATL_scmat2ablk_32x1_a1_b0,  /* index 6 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 7 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 8 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 9 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 10 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 11 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 12 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 13 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 14 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 15 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 16 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 17 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 18 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 19 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 20 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 21 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 22 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 23 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 24 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 25 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 26 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 27 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 28 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 29 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 30 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 31 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 32 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 33 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 34 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 35 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 36 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 37 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 38 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 39 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 40 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 41 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 42 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 43 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 44 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 45 */
   ATL_scmat2ablk_4x2_a1_b0,  /* index 46 */
   ATL_scmat2ablk_4x2_a1_b0   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_b1[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_a1_b1,  /* index 0 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 1 */
   ATL_scmat2ablk_12x3_a1_b1,  /* index 2 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 3 */
   ATL_scmat2ablk_8x4_a1_b1,  /* index 4 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 5 */
   ATL_scmat2ablk_32x1_a1_b1,  /* index 6 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 7 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 8 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 9 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 10 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 11 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 12 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 13 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 14 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 15 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 16 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 17 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 18 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 19 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 20 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 21 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 22 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 23 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 24 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 25 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 26 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 27 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 28 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 29 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 30 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 31 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 32 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 33 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 34 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 35 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 36 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 37 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 38 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 39 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 40 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 41 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 42 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 43 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 44 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 45 */
   ATL_scmat2ablk_4x2_a1_b1,  /* index 46 */
   ATL_scmat2ablk_4x2_a1_b1   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_bn[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_a1_bn,  /* index 0 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 1 */
   ATL_scmat2ablk_12x3_a1_bn,  /* index 2 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 3 */
   ATL_scmat2ablk_8x4_a1_bn,  /* index 4 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 5 */
   ATL_scmat2ablk_32x1_a1_bn,  /* index 6 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 7 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 8 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 9 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 10 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 11 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 12 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 13 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 14 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 15 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 16 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 17 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 18 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 19 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 20 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 21 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 22 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 23 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 24 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 25 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 26 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 27 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 28 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 29 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 30 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 31 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 32 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 33 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 34 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 35 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 36 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 37 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 38 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 39 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 40 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 41 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 42 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 43 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 44 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 45 */
   ATL_scmat2ablk_4x2_a1_bn,  /* index 46 */
   ATL_scmat2ablk_4x2_a1_bn   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_bX[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_a1_bX,  /* index 0 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 1 */
   ATL_scmat2ablk_12x3_a1_bX,  /* index 2 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 3 */
   ATL_scmat2ablk_8x4_a1_bX,  /* index 4 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 5 */
   ATL_scmat2ablk_32x1_a1_bX,  /* index 6 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 7 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 8 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 9 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 10 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 11 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 12 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 13 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 14 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 15 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 16 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 17 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 18 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 19 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 20 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 21 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 22 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 23 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 24 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 25 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 26 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 27 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 28 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 29 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 30 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 31 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 32 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 33 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 34 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 35 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 36 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 37 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 38 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 39 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 40 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 41 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 42 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 43 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 44 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 45 */
   ATL_scmat2ablk_4x2_a1_bX,  /* index 46 */
   ATL_scmat2ablk_4x2_a1_bX   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_b0[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_an_b0,  /* index 0 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 1 */
   ATL_scmat2ablk_12x3_an_b0,  /* index 2 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 3 */
   ATL_scmat2ablk_8x4_an_b0,  /* index 4 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 5 */
   ATL_scmat2ablk_32x1_an_b0,  /* index 6 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 7 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 8 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 9 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 10 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 11 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 12 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 13 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 14 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 15 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 16 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 17 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 18 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 19 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 20 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 21 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 22 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 23 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 24 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 25 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 26 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 27 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 28 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 29 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 30 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 31 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 32 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 33 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 34 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 35 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 36 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 37 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 38 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 39 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 40 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 41 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 42 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 43 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 44 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 45 */
   ATL_scmat2ablk_4x2_an_b0,  /* index 46 */
   ATL_scmat2ablk_4x2_an_b0   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_b1[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_an_b1,  /* index 0 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 1 */
   ATL_scmat2ablk_12x3_an_b1,  /* index 2 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 3 */
   ATL_scmat2ablk_8x4_an_b1,  /* index 4 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 5 */
   ATL_scmat2ablk_32x1_an_b1,  /* index 6 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 7 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 8 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 9 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 10 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 11 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 12 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 13 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 14 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 15 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 16 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 17 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 18 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 19 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 20 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 21 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 22 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 23 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 24 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 25 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 26 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 27 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 28 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 29 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 30 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 31 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 32 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 33 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 34 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 35 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 36 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 37 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 38 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 39 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 40 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 41 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 42 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 43 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 44 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 45 */
   ATL_scmat2ablk_4x2_an_b1,  /* index 46 */
   ATL_scmat2ablk_4x2_an_b1   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_bn[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_an_bn,  /* index 0 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 1 */
   ATL_scmat2ablk_12x3_an_bn,  /* index 2 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 3 */
   ATL_scmat2ablk_8x4_an_bn,  /* index 4 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 5 */
   ATL_scmat2ablk_32x1_an_bn,  /* index 6 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 7 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 8 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 9 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 10 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 11 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 12 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 13 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 14 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 15 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 16 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 17 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 18 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 19 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 20 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 21 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 22 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 23 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 24 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 25 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 26 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 27 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 28 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 29 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 30 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 31 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 32 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 33 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 34 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 35 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 36 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 37 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 38 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 39 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 40 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 41 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 42 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 43 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 44 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 45 */
   ATL_scmat2ablk_4x2_an_bn,  /* index 46 */
   ATL_scmat2ablk_4x2_an_bn   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_bX[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_an_bX,  /* index 0 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 1 */
   ATL_scmat2ablk_12x3_an_bX,  /* index 2 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 3 */
   ATL_scmat2ablk_8x4_an_bX,  /* index 4 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 5 */
   ATL_scmat2ablk_32x1_an_bX,  /* index 6 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 7 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 8 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 9 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 10 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 11 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 12 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 13 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 14 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 15 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 16 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 17 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 18 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 19 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 20 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 21 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 22 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 23 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 24 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 25 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 26 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 27 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 28 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 29 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 30 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 31 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 32 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 33 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 34 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 35 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 36 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 37 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 38 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 39 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 40 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 41 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 42 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 43 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 44 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 45 */
   ATL_scmat2ablk_4x2_an_bX,  /* index 46 */
   ATL_scmat2ablk_4x2_an_bX   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_b0[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_aX_b0,  /* index 0 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 1 */
   ATL_scmat2ablk_12x3_aX_b0,  /* index 2 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 3 */
   ATL_scmat2ablk_8x4_aX_b0,  /* index 4 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 5 */
   ATL_scmat2ablk_32x1_aX_b0,  /* index 6 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 7 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 8 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 9 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 10 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 11 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 12 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 13 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 14 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 15 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 16 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 17 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 18 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 19 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 20 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 21 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 22 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 23 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 24 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 25 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 26 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 27 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 28 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 29 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 30 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 31 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 32 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 33 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 34 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 35 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 36 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 37 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 38 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 39 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 40 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 41 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 42 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 43 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 44 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 45 */
   ATL_scmat2ablk_4x2_aX_b0,  /* index 46 */
   ATL_scmat2ablk_4x2_aX_b0   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_b1[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_aX_b1,  /* index 0 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 1 */
   ATL_scmat2ablk_12x3_aX_b1,  /* index 2 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 3 */
   ATL_scmat2ablk_8x4_aX_b1,  /* index 4 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 5 */
   ATL_scmat2ablk_32x1_aX_b1,  /* index 6 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 7 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 8 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 9 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 10 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 11 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 12 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 13 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 14 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 15 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 16 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 17 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 18 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 19 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 20 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 21 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 22 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 23 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 24 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 25 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 26 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 27 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 28 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 29 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 30 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 31 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 32 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 33 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 34 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 35 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 36 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 37 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 38 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 39 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 40 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 41 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 42 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 43 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 44 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 45 */
   ATL_scmat2ablk_4x2_aX_b1,  /* index 46 */
   ATL_scmat2ablk_4x2_aX_b1   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_bn[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_aX_bn,  /* index 0 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 1 */
   ATL_scmat2ablk_12x3_aX_bn,  /* index 2 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 3 */
   ATL_scmat2ablk_8x4_aX_bn,  /* index 4 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 5 */
   ATL_scmat2ablk_32x1_aX_bn,  /* index 6 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 7 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 8 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 9 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 10 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 11 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 12 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 13 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 14 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 15 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 16 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 17 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 18 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 19 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 20 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 21 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 22 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 23 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 24 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 25 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 26 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 27 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 28 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 29 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 30 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 31 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 32 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 33 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 34 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 35 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 36 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 37 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 38 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 39 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 40 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 41 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 42 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 43 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 44 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 45 */
   ATL_scmat2ablk_4x2_aX_bn,  /* index 46 */
   ATL_scmat2ablk_4x2_aX_bn   /* index 47 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_bX[ATL_AMM_NCASES] =
{
   ATL_scmat2ablk_4x2_aX_bX,  /* index 0 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 1 */
   ATL_scmat2ablk_12x3_aX_bX,  /* index 2 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 3 */
   ATL_scmat2ablk_8x4_aX_bX,  /* index 4 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 5 */
   ATL_scmat2ablk_32x1_aX_bX,  /* index 6 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 7 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 8 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 9 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 10 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 11 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 12 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 13 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 14 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 15 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 16 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 17 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 18 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 19 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 20 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 21 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 22 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 23 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 24 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 25 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 26 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 27 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 28 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 29 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 30 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 31 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 32 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 33 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 34 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 35 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 36 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 37 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 38 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 39 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 40 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 41 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 42 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 43 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 44 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 45 */
   ATL_scmat2ablk_4x2_aX_bX,  /* index 46 */
   ATL_scmat2ablk_4x2_aX_bX   /* index 47 */
};


#endif  /* end include file guard */
