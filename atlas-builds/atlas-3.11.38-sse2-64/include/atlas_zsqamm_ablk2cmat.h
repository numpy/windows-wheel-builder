#ifndef ATLAS_ZAMM_ABLK2CMAT_H
   #define ATLAS_ZAMM_ABLK2CMAT_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 16
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 16
#endif

void ATL_zablk2cmat_4x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_4x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_6x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_20x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_22x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);

static const ablk2cmat_t ATL_AMM_BLK2C_a1_b0[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_a1_b0,  /* index 0 */
   ATL_zablk2cmat_6x1_a1_b0,  /* index 1 */
   ATL_zablk2cmat_8x1_a1_b0,  /* index 2 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 3 */
   ATL_zablk2cmat_20x1_a1_b0,  /* index 4 */
   ATL_zablk2cmat_22x1_a1_b0,  /* index 5 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 6 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 7 */
   ATL_zablk2cmat_8x1_a1_b0,  /* index 8 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 9 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 11 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 12 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 13 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_b0   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_b1[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_a1_b1,  /* index 0 */
   ATL_zablk2cmat_6x1_a1_b1,  /* index 1 */
   ATL_zablk2cmat_8x1_a1_b1,  /* index 2 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 3 */
   ATL_zablk2cmat_20x1_a1_b1,  /* index 4 */
   ATL_zablk2cmat_22x1_a1_b1,  /* index 5 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 6 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 7 */
   ATL_zablk2cmat_8x1_a1_b1,  /* index 8 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 9 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 11 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 12 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 13 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_b1   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_bn[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_a1_bn,  /* index 0 */
   ATL_zablk2cmat_6x1_a1_bn,  /* index 1 */
   ATL_zablk2cmat_8x1_a1_bn,  /* index 2 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 3 */
   ATL_zablk2cmat_20x1_a1_bn,  /* index 4 */
   ATL_zablk2cmat_22x1_a1_bn,  /* index 5 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 6 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 7 */
   ATL_zablk2cmat_8x1_a1_bn,  /* index 8 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 9 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 11 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 12 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 13 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_bn   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_a1_bX[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_a1_bX,  /* index 0 */
   ATL_zablk2cmat_6x1_a1_bX,  /* index 1 */
   ATL_zablk2cmat_8x1_a1_bX,  /* index 2 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 3 */
   ATL_zablk2cmat_20x1_a1_bX,  /* index 4 */
   ATL_zablk2cmat_22x1_a1_bX,  /* index 5 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 6 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 7 */
   ATL_zablk2cmat_8x1_a1_bX,  /* index 8 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 9 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 11 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 12 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 13 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_bX   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_b0[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_an_b0,  /* index 0 */
   ATL_zablk2cmat_6x1_an_b0,  /* index 1 */
   ATL_zablk2cmat_8x1_an_b0,  /* index 2 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 3 */
   ATL_zablk2cmat_20x1_an_b0,  /* index 4 */
   ATL_zablk2cmat_22x1_an_b0,  /* index 5 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 6 */
   ATL_zablk2cmat_28x1_an_b0,  /* index 7 */
   ATL_zablk2cmat_8x1_an_b0,  /* index 8 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 9 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 10 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 11 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 12 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 13 */
   ATL_zablk2cmat_12x1_an_b0,  /* index 14 */
   ATL_zablk2cmat_12x1_an_b0   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_b1[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_an_b1,  /* index 0 */
   ATL_zablk2cmat_6x1_an_b1,  /* index 1 */
   ATL_zablk2cmat_8x1_an_b1,  /* index 2 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 3 */
   ATL_zablk2cmat_20x1_an_b1,  /* index 4 */
   ATL_zablk2cmat_22x1_an_b1,  /* index 5 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 6 */
   ATL_zablk2cmat_28x1_an_b1,  /* index 7 */
   ATL_zablk2cmat_8x1_an_b1,  /* index 8 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 9 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 10 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 11 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 12 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 13 */
   ATL_zablk2cmat_12x1_an_b1,  /* index 14 */
   ATL_zablk2cmat_12x1_an_b1   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_bn[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_an_bn,  /* index 0 */
   ATL_zablk2cmat_6x1_an_bn,  /* index 1 */
   ATL_zablk2cmat_8x1_an_bn,  /* index 2 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 3 */
   ATL_zablk2cmat_20x1_an_bn,  /* index 4 */
   ATL_zablk2cmat_22x1_an_bn,  /* index 5 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 6 */
   ATL_zablk2cmat_28x1_an_bn,  /* index 7 */
   ATL_zablk2cmat_8x1_an_bn,  /* index 8 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 9 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 10 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 11 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 12 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 13 */
   ATL_zablk2cmat_12x1_an_bn,  /* index 14 */
   ATL_zablk2cmat_12x1_an_bn   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_an_bX[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_an_bX,  /* index 0 */
   ATL_zablk2cmat_6x1_an_bX,  /* index 1 */
   ATL_zablk2cmat_8x1_an_bX,  /* index 2 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 3 */
   ATL_zablk2cmat_20x1_an_bX,  /* index 4 */
   ATL_zablk2cmat_22x1_an_bX,  /* index 5 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 6 */
   ATL_zablk2cmat_28x1_an_bX,  /* index 7 */
   ATL_zablk2cmat_8x1_an_bX,  /* index 8 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 9 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 10 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 11 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 12 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 13 */
   ATL_zablk2cmat_12x1_an_bX,  /* index 14 */
   ATL_zablk2cmat_12x1_an_bX   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_b0[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_aX_b0,  /* index 0 */
   ATL_zablk2cmat_6x1_aX_b0,  /* index 1 */
   ATL_zablk2cmat_8x1_aX_b0,  /* index 2 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 3 */
   ATL_zablk2cmat_20x1_aX_b0,  /* index 4 */
   ATL_zablk2cmat_22x1_aX_b0,  /* index 5 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 6 */
   ATL_zablk2cmat_28x1_aX_b0,  /* index 7 */
   ATL_zablk2cmat_8x1_aX_b0,  /* index 8 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 9 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 10 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 11 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 12 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 13 */
   ATL_zablk2cmat_12x1_aX_b0,  /* index 14 */
   ATL_zablk2cmat_12x1_aX_b0   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_b1[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_aX_b1,  /* index 0 */
   ATL_zablk2cmat_6x1_aX_b1,  /* index 1 */
   ATL_zablk2cmat_8x1_aX_b1,  /* index 2 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 3 */
   ATL_zablk2cmat_20x1_aX_b1,  /* index 4 */
   ATL_zablk2cmat_22x1_aX_b1,  /* index 5 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 6 */
   ATL_zablk2cmat_28x1_aX_b1,  /* index 7 */
   ATL_zablk2cmat_8x1_aX_b1,  /* index 8 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 9 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 10 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 11 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 12 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 13 */
   ATL_zablk2cmat_12x1_aX_b1,  /* index 14 */
   ATL_zablk2cmat_12x1_aX_b1   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_bn[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_aX_bn,  /* index 0 */
   ATL_zablk2cmat_6x1_aX_bn,  /* index 1 */
   ATL_zablk2cmat_8x1_aX_bn,  /* index 2 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 3 */
   ATL_zablk2cmat_20x1_aX_bn,  /* index 4 */
   ATL_zablk2cmat_22x1_aX_bn,  /* index 5 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 6 */
   ATL_zablk2cmat_28x1_aX_bn,  /* index 7 */
   ATL_zablk2cmat_8x1_aX_bn,  /* index 8 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 9 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 10 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 11 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 12 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 13 */
   ATL_zablk2cmat_12x1_aX_bn,  /* index 14 */
   ATL_zablk2cmat_12x1_aX_bn   /* index 15 */
};

static const ablk2cmat_t ATL_AMM_BLK2C_aX_bX[ATL_AMM_NCASES] =
{
   ATL_zablk2cmat_4x1_aX_bX,  /* index 0 */
   ATL_zablk2cmat_6x1_aX_bX,  /* index 1 */
   ATL_zablk2cmat_8x1_aX_bX,  /* index 2 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 3 */
   ATL_zablk2cmat_20x1_aX_bX,  /* index 4 */
   ATL_zablk2cmat_22x1_aX_bX,  /* index 5 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 6 */
   ATL_zablk2cmat_28x1_aX_bX,  /* index 7 */
   ATL_zablk2cmat_8x1_aX_bX,  /* index 8 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 9 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 10 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 11 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 12 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 13 */
   ATL_zablk2cmat_12x1_aX_bX,  /* index 14 */
   ATL_zablk2cmat_12x1_aX_bX   /* index 15 */
};


#endif  /* end include file guard */
