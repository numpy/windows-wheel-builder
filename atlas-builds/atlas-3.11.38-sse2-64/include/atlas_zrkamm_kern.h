#ifndef ATLAS_ZAMM_KERN_H
   #define ATLAS_ZAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 122
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 122
#endif

#define ATL_MAXM_RKK 132
#define ATL_MAXN_RKK 124
#define ATL_MAXK_RKK 124

/*
 * cblk2mat put function prototypes
 */
void ATL_zablk2cmat_12x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_12x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_8x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_zablk2cmat_28x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
/*
 * Column-major to access-major copy function prototypes
 */
void ATL_zcm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_an_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_an_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_aX_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_aX_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
/*
 * rank-K AMMM kernel prototypes
 */
void ATL_dAMRK_0_0_3_28x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_0_3_28x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_0_3_28x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_10_13_8x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_10_13_8x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_10_13_8x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_14_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_14_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_14_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_18_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_18_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_18_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_20_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_20_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_20_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_22_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_22_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_22_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_26_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_26_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_26_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_28_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_28_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_28_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_30_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_30_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_30_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_32_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_32_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_32_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_34_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_34_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_34_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_36_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_36_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_36_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_38_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_38_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_38_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_40_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_40_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_40_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_42_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_42_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_42_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_44_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_44_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_44_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_46_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_46_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_46_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_48_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_48_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_48_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_50_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_50_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_50_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_52_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_52_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_52_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_54_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_54_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_54_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_56_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_56_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_56_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_58_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_58_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_58_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_60_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_60_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_60_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_62_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_62_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_62_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_64_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_64_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_64_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_66_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_66_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_66_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_68_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_68_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_68_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_70_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_70_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_70_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_72_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_72_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_72_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_74_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_74_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_74_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_76_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_76_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_76_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_78_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_78_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_78_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_80_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_80_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_80_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_82_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_82_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_82_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_84_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_84_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_84_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_86_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_86_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_86_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_88_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_88_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_88_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_90_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_90_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_90_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_92_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_92_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_92_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_94_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_94_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_94_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_96_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_96_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_96_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_98_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_98_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_98_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_100_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_100_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_100_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_102_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_102_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_102_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_104_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_104_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_104_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_106_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_106_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_106_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_108_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_108_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_108_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_110_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_110_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_110_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_112_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_112_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_112_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_114_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_114_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_114_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_116_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_116_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_116_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_118_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_118_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_118_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_120_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_120_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_120_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_122_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_122_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_122_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_124_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_124_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_124_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);

static const ablk2cmat_t ATL_RKK_BLK2C_a1_b1[122] =
{
   ATL_zablk2cmat_28x1_a1_b1,  /* index 0 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 1 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 2 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 3 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 4 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 5 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 6 */
   ATL_zablk2cmat_8x1_a1_b1,  /* index 7 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 8 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 9 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 11 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 12 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 13 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 15 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 16 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 17 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 18 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 19 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 20 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 21 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 22 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 23 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 24 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 25 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 26 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 27 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 28 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 29 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 30 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 31 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 32 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 33 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 34 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 35 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 36 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 37 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 38 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 39 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 40 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 41 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 42 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 43 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 44 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 45 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 46 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 47 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 48 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 49 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 50 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 51 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 52 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 53 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 54 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 55 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 56 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 57 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 58 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 59 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 60 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 61 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 62 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 63 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 64 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 65 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 66 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 67 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 68 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 69 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 70 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 71 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 72 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 73 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 74 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 75 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 76 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 77 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 78 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 79 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 80 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 81 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 82 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 83 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 84 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 85 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 86 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 87 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 88 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 89 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 90 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 91 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 92 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 93 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 94 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 95 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 96 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 97 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 98 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 99 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 100 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 101 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 102 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 103 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 104 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 105 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 106 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 107 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 108 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 109 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 110 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 111 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 112 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 113 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 114 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 115 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 116 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 117 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 118 */
   ATL_zablk2cmat_12x1_a1_b1,  /* index 119 */
   ATL_zablk2cmat_28x1_a1_b1,  /* index 120 */
   ATL_zablk2cmat_12x1_a1_b1   /* index 121 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bn[122] =
{
   ATL_zablk2cmat_28x1_a1_bn,  /* index 0 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 1 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 2 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 3 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 4 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 5 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 6 */
   ATL_zablk2cmat_8x1_a1_bn,  /* index 7 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 8 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 9 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 11 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 12 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 13 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 15 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 16 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 17 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 18 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 19 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 20 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 21 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 22 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 23 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 24 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 25 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 26 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 27 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 28 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 29 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 30 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 31 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 32 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 33 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 34 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 35 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 36 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 37 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 38 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 39 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 40 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 41 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 42 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 43 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 44 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 45 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 46 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 47 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 48 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 49 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 50 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 51 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 52 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 53 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 54 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 55 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 56 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 57 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 58 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 59 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 60 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 61 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 62 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 63 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 64 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 65 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 66 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 67 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 68 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 69 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 70 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 71 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 72 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 73 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 74 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 75 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 76 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 77 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 78 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 79 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 80 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 81 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 82 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 83 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 84 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 85 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 86 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 87 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 88 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 89 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 90 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 91 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 92 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 93 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 94 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 95 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 96 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 97 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 98 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 99 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 100 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 101 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 102 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 103 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 104 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 105 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 106 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 107 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 108 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 109 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 110 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 111 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 112 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 113 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 114 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 115 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 116 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 117 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 118 */
   ATL_zablk2cmat_12x1_a1_bn,  /* index 119 */
   ATL_zablk2cmat_28x1_a1_bn,  /* index 120 */
   ATL_zablk2cmat_12x1_a1_bn   /* index 121 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_b0[122] =
{
   ATL_zablk2cmat_28x1_a1_b0,  /* index 0 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 1 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 2 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 3 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 4 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 5 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 6 */
   ATL_zablk2cmat_8x1_a1_b0,  /* index 7 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 8 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 9 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 11 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 12 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 13 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 15 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 16 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 17 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 18 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 19 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 20 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 21 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 22 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 23 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 24 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 25 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 26 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 27 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 28 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 29 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 30 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 31 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 32 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 33 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 34 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 35 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 36 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 37 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 38 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 39 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 40 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 41 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 42 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 43 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 44 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 45 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 46 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 47 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 48 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 49 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 50 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 51 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 52 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 53 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 54 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 55 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 56 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 57 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 58 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 59 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 60 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 61 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 62 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 63 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 64 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 65 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 66 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 67 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 68 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 69 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 70 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 71 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 72 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 73 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 74 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 75 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 76 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 77 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 78 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 79 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 80 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 81 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 82 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 83 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 84 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 85 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 86 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 87 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 88 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 89 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 90 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 91 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 92 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 93 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 94 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 95 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 96 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 97 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 98 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 99 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 100 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 101 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 102 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 103 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 104 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 105 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 106 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 107 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 108 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 109 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 110 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 111 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 112 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 113 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 114 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 115 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 116 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 117 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 118 */
   ATL_zablk2cmat_12x1_a1_b0,  /* index 119 */
   ATL_zablk2cmat_28x1_a1_b0,  /* index 120 */
   ATL_zablk2cmat_12x1_a1_b0   /* index 121 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bX[122] =
{
   ATL_zablk2cmat_28x1_a1_bX,  /* index 0 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 1 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 2 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 3 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 4 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 5 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 6 */
   ATL_zablk2cmat_8x1_a1_bX,  /* index 7 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 8 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 9 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 10 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 11 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 12 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 13 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 14 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 15 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 16 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 17 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 18 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 19 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 20 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 21 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 22 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 23 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 24 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 25 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 26 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 27 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 28 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 29 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 30 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 31 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 32 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 33 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 34 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 35 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 36 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 37 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 38 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 39 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 40 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 41 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 42 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 43 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 44 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 45 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 46 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 47 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 48 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 49 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 50 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 51 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 52 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 53 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 54 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 55 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 56 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 57 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 58 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 59 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 60 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 61 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 62 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 63 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 64 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 65 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 66 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 67 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 68 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 69 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 70 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 71 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 72 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 73 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 74 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 75 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 76 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 77 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 78 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 79 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 80 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 81 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 82 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 83 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 84 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 85 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 86 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 87 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 88 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 89 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 90 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 91 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 92 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 93 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 94 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 95 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 96 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 97 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 98 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 99 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 100 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 101 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 102 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 103 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 104 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 105 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 106 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 107 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 108 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 109 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 110 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 111 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 112 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 113 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 114 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 115 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 116 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 117 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 118 */
   ATL_zablk2cmat_12x1_a1_bX,  /* index 119 */
   ATL_zablk2cmat_28x1_a1_bX,  /* index 120 */
   ATL_zablk2cmat_12x1_a1_bX   /* index 121 */
};


static const cm2am_t ATL_RKK_A2BLK_a1[122] =
{
   ATL_zcm2am_a1_28,  /* index 0 */
   ATL_zcm2am_a1_28,  /* index 1 */
   ATL_zcm2am_a1_28,  /* index 2 */
   ATL_zcm2am_a1_28,  /* index 3 */
   ATL_zcm2am_a1_28,  /* index 4 */
   ATL_zcm2am_a1_28,  /* index 5 */
   ATL_zcm2am_a1_28,  /* index 6 */
   ATL_zcm2am_a1_2x8,  /* index 7 */
   ATL_zcm2am_a1_28,  /* index 8 */
   ATL_zcm2am_a1_28,  /* index 9 */
   ATL_zcm2am_a1_28,  /* index 10 */
   ATL_zcm2am_a1_2x12,  /* index 11 */
   ATL_zcm2am_a1_28,  /* index 12 */
   ATL_zcm2am_a1_28,  /* index 13 */
   ATL_zcm2am_a1_28,  /* index 14 */
   ATL_zcm2am_a1_2x12,  /* index 15 */
   ATL_zcm2am_a1_28,  /* index 16 */
   ATL_zcm2am_a1_2x12,  /* index 17 */
   ATL_zcm2am_a1_28,  /* index 18 */
   ATL_zcm2am_a1_2x12,  /* index 19 */
   ATL_zcm2am_a1_28,  /* index 20 */
   ATL_zcm2am_a1_28,  /* index 21 */
   ATL_zcm2am_a1_28,  /* index 22 */
   ATL_zcm2am_a1_2x12,  /* index 23 */
   ATL_zcm2am_a1_28,  /* index 24 */
   ATL_zcm2am_a1_2x12,  /* index 25 */
   ATL_zcm2am_a1_28,  /* index 26 */
   ATL_zcm2am_a1_2x12,  /* index 27 */
   ATL_zcm2am_a1_28,  /* index 28 */
   ATL_zcm2am_a1_2x12,  /* index 29 */
   ATL_zcm2am_a1_28,  /* index 30 */
   ATL_zcm2am_a1_2x12,  /* index 31 */
   ATL_zcm2am_a1_28,  /* index 32 */
   ATL_zcm2am_a1_2x12,  /* index 33 */
   ATL_zcm2am_a1_28,  /* index 34 */
   ATL_zcm2am_a1_2x12,  /* index 35 */
   ATL_zcm2am_a1_28,  /* index 36 */
   ATL_zcm2am_a1_2x12,  /* index 37 */
   ATL_zcm2am_a1_28,  /* index 38 */
   ATL_zcm2am_a1_2x12,  /* index 39 */
   ATL_zcm2am_a1_28,  /* index 40 */
   ATL_zcm2am_a1_2x12,  /* index 41 */
   ATL_zcm2am_a1_28,  /* index 42 */
   ATL_zcm2am_a1_2x12,  /* index 43 */
   ATL_zcm2am_a1_28,  /* index 44 */
   ATL_zcm2am_a1_2x12,  /* index 45 */
   ATL_zcm2am_a1_28,  /* index 46 */
   ATL_zcm2am_a1_2x12,  /* index 47 */
   ATL_zcm2am_a1_28,  /* index 48 */
   ATL_zcm2am_a1_2x12,  /* index 49 */
   ATL_zcm2am_a1_28,  /* index 50 */
   ATL_zcm2am_a1_2x12,  /* index 51 */
   ATL_zcm2am_a1_28,  /* index 52 */
   ATL_zcm2am_a1_2x12,  /* index 53 */
   ATL_zcm2am_a1_28,  /* index 54 */
   ATL_zcm2am_a1_2x12,  /* index 55 */
   ATL_zcm2am_a1_28,  /* index 56 */
   ATL_zcm2am_a1_2x12,  /* index 57 */
   ATL_zcm2am_a1_28,  /* index 58 */
   ATL_zcm2am_a1_2x12,  /* index 59 */
   ATL_zcm2am_a1_28,  /* index 60 */
   ATL_zcm2am_a1_2x12,  /* index 61 */
   ATL_zcm2am_a1_28,  /* index 62 */
   ATL_zcm2am_a1_2x12,  /* index 63 */
   ATL_zcm2am_a1_28,  /* index 64 */
   ATL_zcm2am_a1_2x12,  /* index 65 */
   ATL_zcm2am_a1_28,  /* index 66 */
   ATL_zcm2am_a1_2x12,  /* index 67 */
   ATL_zcm2am_a1_28,  /* index 68 */
   ATL_zcm2am_a1_2x12,  /* index 69 */
   ATL_zcm2am_a1_28,  /* index 70 */
   ATL_zcm2am_a1_2x12,  /* index 71 */
   ATL_zcm2am_a1_28,  /* index 72 */
   ATL_zcm2am_a1_2x12,  /* index 73 */
   ATL_zcm2am_a1_28,  /* index 74 */
   ATL_zcm2am_a1_2x12,  /* index 75 */
   ATL_zcm2am_a1_28,  /* index 76 */
   ATL_zcm2am_a1_2x12,  /* index 77 */
   ATL_zcm2am_a1_28,  /* index 78 */
   ATL_zcm2am_a1_2x12,  /* index 79 */
   ATL_zcm2am_a1_28,  /* index 80 */
   ATL_zcm2am_a1_2x12,  /* index 81 */
   ATL_zcm2am_a1_28,  /* index 82 */
   ATL_zcm2am_a1_2x12,  /* index 83 */
   ATL_zcm2am_a1_28,  /* index 84 */
   ATL_zcm2am_a1_2x12,  /* index 85 */
   ATL_zcm2am_a1_28,  /* index 86 */
   ATL_zcm2am_a1_2x12,  /* index 87 */
   ATL_zcm2am_a1_28,  /* index 88 */
   ATL_zcm2am_a1_2x12,  /* index 89 */
   ATL_zcm2am_a1_28,  /* index 90 */
   ATL_zcm2am_a1_2x12,  /* index 91 */
   ATL_zcm2am_a1_28,  /* index 92 */
   ATL_zcm2am_a1_2x12,  /* index 93 */
   ATL_zcm2am_a1_28,  /* index 94 */
   ATL_zcm2am_a1_2x12,  /* index 95 */
   ATL_zcm2am_a1_28,  /* index 96 */
   ATL_zcm2am_a1_2x12,  /* index 97 */
   ATL_zcm2am_a1_28,  /* index 98 */
   ATL_zcm2am_a1_2x12,  /* index 99 */
   ATL_zcm2am_a1_28,  /* index 100 */
   ATL_zcm2am_a1_2x12,  /* index 101 */
   ATL_zcm2am_a1_28,  /* index 102 */
   ATL_zcm2am_a1_2x12,  /* index 103 */
   ATL_zcm2am_a1_28,  /* index 104 */
   ATL_zcm2am_a1_2x12,  /* index 105 */
   ATL_zcm2am_a1_28,  /* index 106 */
   ATL_zcm2am_a1_2x12,  /* index 107 */
   ATL_zcm2am_a1_28,  /* index 108 */
   ATL_zcm2am_a1_2x12,  /* index 109 */
   ATL_zcm2am_a1_28,  /* index 110 */
   ATL_zcm2am_a1_2x12,  /* index 111 */
   ATL_zcm2am_a1_28,  /* index 112 */
   ATL_zcm2am_a1_2x12,  /* index 113 */
   ATL_zcm2am_a1_28,  /* index 114 */
   ATL_zcm2am_a1_2x12,  /* index 115 */
   ATL_zcm2am_a1_28,  /* index 116 */
   ATL_zcm2am_a1_2x12,  /* index 117 */
   ATL_zcm2am_a1_28,  /* index 118 */
   ATL_zcm2am_a1_2x12,  /* index 119 */
   ATL_zcm2am_a1_28,  /* index 120 */
   ATL_zcm2am_a1_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_AT2BLK_a1[122] =
{
   ATL_zrm2am_a1_28,  /* index 0 */
   ATL_zrm2am_a1_28,  /* index 1 */
   ATL_zrm2am_a1_28,  /* index 2 */
   ATL_zrm2am_a1_28,  /* index 3 */
   ATL_zrm2am_a1_28,  /* index 4 */
   ATL_zrm2am_a1_28,  /* index 5 */
   ATL_zrm2am_a1_28,  /* index 6 */
   ATL_zrm2am_a1_2x8,  /* index 7 */
   ATL_zrm2am_a1_28,  /* index 8 */
   ATL_zrm2am_a1_28,  /* index 9 */
   ATL_zrm2am_a1_28,  /* index 10 */
   ATL_zrm2am_a1_2x12,  /* index 11 */
   ATL_zrm2am_a1_28,  /* index 12 */
   ATL_zrm2am_a1_28,  /* index 13 */
   ATL_zrm2am_a1_28,  /* index 14 */
   ATL_zrm2am_a1_2x12,  /* index 15 */
   ATL_zrm2am_a1_28,  /* index 16 */
   ATL_zrm2am_a1_2x12,  /* index 17 */
   ATL_zrm2am_a1_28,  /* index 18 */
   ATL_zrm2am_a1_2x12,  /* index 19 */
   ATL_zrm2am_a1_28,  /* index 20 */
   ATL_zrm2am_a1_28,  /* index 21 */
   ATL_zrm2am_a1_28,  /* index 22 */
   ATL_zrm2am_a1_2x12,  /* index 23 */
   ATL_zrm2am_a1_28,  /* index 24 */
   ATL_zrm2am_a1_2x12,  /* index 25 */
   ATL_zrm2am_a1_28,  /* index 26 */
   ATL_zrm2am_a1_2x12,  /* index 27 */
   ATL_zrm2am_a1_28,  /* index 28 */
   ATL_zrm2am_a1_2x12,  /* index 29 */
   ATL_zrm2am_a1_28,  /* index 30 */
   ATL_zrm2am_a1_2x12,  /* index 31 */
   ATL_zrm2am_a1_28,  /* index 32 */
   ATL_zrm2am_a1_2x12,  /* index 33 */
   ATL_zrm2am_a1_28,  /* index 34 */
   ATL_zrm2am_a1_2x12,  /* index 35 */
   ATL_zrm2am_a1_28,  /* index 36 */
   ATL_zrm2am_a1_2x12,  /* index 37 */
   ATL_zrm2am_a1_28,  /* index 38 */
   ATL_zrm2am_a1_2x12,  /* index 39 */
   ATL_zrm2am_a1_28,  /* index 40 */
   ATL_zrm2am_a1_2x12,  /* index 41 */
   ATL_zrm2am_a1_28,  /* index 42 */
   ATL_zrm2am_a1_2x12,  /* index 43 */
   ATL_zrm2am_a1_28,  /* index 44 */
   ATL_zrm2am_a1_2x12,  /* index 45 */
   ATL_zrm2am_a1_28,  /* index 46 */
   ATL_zrm2am_a1_2x12,  /* index 47 */
   ATL_zrm2am_a1_28,  /* index 48 */
   ATL_zrm2am_a1_2x12,  /* index 49 */
   ATL_zrm2am_a1_28,  /* index 50 */
   ATL_zrm2am_a1_2x12,  /* index 51 */
   ATL_zrm2am_a1_28,  /* index 52 */
   ATL_zrm2am_a1_2x12,  /* index 53 */
   ATL_zrm2am_a1_28,  /* index 54 */
   ATL_zrm2am_a1_2x12,  /* index 55 */
   ATL_zrm2am_a1_28,  /* index 56 */
   ATL_zrm2am_a1_2x12,  /* index 57 */
   ATL_zrm2am_a1_28,  /* index 58 */
   ATL_zrm2am_a1_2x12,  /* index 59 */
   ATL_zrm2am_a1_28,  /* index 60 */
   ATL_zrm2am_a1_2x12,  /* index 61 */
   ATL_zrm2am_a1_28,  /* index 62 */
   ATL_zrm2am_a1_2x12,  /* index 63 */
   ATL_zrm2am_a1_28,  /* index 64 */
   ATL_zrm2am_a1_2x12,  /* index 65 */
   ATL_zrm2am_a1_28,  /* index 66 */
   ATL_zrm2am_a1_2x12,  /* index 67 */
   ATL_zrm2am_a1_28,  /* index 68 */
   ATL_zrm2am_a1_2x12,  /* index 69 */
   ATL_zrm2am_a1_28,  /* index 70 */
   ATL_zrm2am_a1_2x12,  /* index 71 */
   ATL_zrm2am_a1_28,  /* index 72 */
   ATL_zrm2am_a1_2x12,  /* index 73 */
   ATL_zrm2am_a1_28,  /* index 74 */
   ATL_zrm2am_a1_2x12,  /* index 75 */
   ATL_zrm2am_a1_28,  /* index 76 */
   ATL_zrm2am_a1_2x12,  /* index 77 */
   ATL_zrm2am_a1_28,  /* index 78 */
   ATL_zrm2am_a1_2x12,  /* index 79 */
   ATL_zrm2am_a1_28,  /* index 80 */
   ATL_zrm2am_a1_2x12,  /* index 81 */
   ATL_zrm2am_a1_28,  /* index 82 */
   ATL_zrm2am_a1_2x12,  /* index 83 */
   ATL_zrm2am_a1_28,  /* index 84 */
   ATL_zrm2am_a1_2x12,  /* index 85 */
   ATL_zrm2am_a1_28,  /* index 86 */
   ATL_zrm2am_a1_2x12,  /* index 87 */
   ATL_zrm2am_a1_28,  /* index 88 */
   ATL_zrm2am_a1_2x12,  /* index 89 */
   ATL_zrm2am_a1_28,  /* index 90 */
   ATL_zrm2am_a1_2x12,  /* index 91 */
   ATL_zrm2am_a1_28,  /* index 92 */
   ATL_zrm2am_a1_2x12,  /* index 93 */
   ATL_zrm2am_a1_28,  /* index 94 */
   ATL_zrm2am_a1_2x12,  /* index 95 */
   ATL_zrm2am_a1_28,  /* index 96 */
   ATL_zrm2am_a1_2x12,  /* index 97 */
   ATL_zrm2am_a1_28,  /* index 98 */
   ATL_zrm2am_a1_2x12,  /* index 99 */
   ATL_zrm2am_a1_28,  /* index 100 */
   ATL_zrm2am_a1_2x12,  /* index 101 */
   ATL_zrm2am_a1_28,  /* index 102 */
   ATL_zrm2am_a1_2x12,  /* index 103 */
   ATL_zrm2am_a1_28,  /* index 104 */
   ATL_zrm2am_a1_2x12,  /* index 105 */
   ATL_zrm2am_a1_28,  /* index 106 */
   ATL_zrm2am_a1_2x12,  /* index 107 */
   ATL_zrm2am_a1_28,  /* index 108 */
   ATL_zrm2am_a1_2x12,  /* index 109 */
   ATL_zrm2am_a1_28,  /* index 110 */
   ATL_zrm2am_a1_2x12,  /* index 111 */
   ATL_zrm2am_a1_28,  /* index 112 */
   ATL_zrm2am_a1_2x12,  /* index 113 */
   ATL_zrm2am_a1_28,  /* index 114 */
   ATL_zrm2am_a1_2x12,  /* index 115 */
   ATL_zrm2am_a1_28,  /* index 116 */
   ATL_zrm2am_a1_2x12,  /* index 117 */
   ATL_zrm2am_a1_28,  /* index 118 */
   ATL_zrm2am_a1_2x12,  /* index 119 */
   ATL_zrm2am_a1_28,  /* index 120 */
   ATL_zrm2am_a1_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_B2BLK_a1[122] =
{
   ATL_zcm2am_a1_1,  /* index 0 */
   ATL_zcm2am_a1_1,  /* index 1 */
   ATL_zcm2am_a1_1,  /* index 2 */
   ATL_zcm2am_a1_1,  /* index 3 */
   ATL_zcm2am_a1_1,  /* index 4 */
   ATL_zcm2am_a1_1,  /* index 5 */
   ATL_zcm2am_a1_1,  /* index 6 */
   ATL_zcm2am_a1_2x1,  /* index 7 */
   ATL_zcm2am_a1_1,  /* index 8 */
   ATL_zcm2am_a1_1,  /* index 9 */
   ATL_zcm2am_a1_1,  /* index 10 */
   ATL_zcm2am_a1_2x1,  /* index 11 */
   ATL_zcm2am_a1_1,  /* index 12 */
   ATL_zcm2am_a1_1,  /* index 13 */
   ATL_zcm2am_a1_1,  /* index 14 */
   ATL_zcm2am_a1_2x1,  /* index 15 */
   ATL_zcm2am_a1_1,  /* index 16 */
   ATL_zcm2am_a1_2x1,  /* index 17 */
   ATL_zcm2am_a1_1,  /* index 18 */
   ATL_zcm2am_a1_2x1,  /* index 19 */
   ATL_zcm2am_a1_1,  /* index 20 */
   ATL_zcm2am_a1_1,  /* index 21 */
   ATL_zcm2am_a1_1,  /* index 22 */
   ATL_zcm2am_a1_2x1,  /* index 23 */
   ATL_zcm2am_a1_1,  /* index 24 */
   ATL_zcm2am_a1_2x1,  /* index 25 */
   ATL_zcm2am_a1_1,  /* index 26 */
   ATL_zcm2am_a1_2x1,  /* index 27 */
   ATL_zcm2am_a1_1,  /* index 28 */
   ATL_zcm2am_a1_2x1,  /* index 29 */
   ATL_zcm2am_a1_1,  /* index 30 */
   ATL_zcm2am_a1_2x1,  /* index 31 */
   ATL_zcm2am_a1_1,  /* index 32 */
   ATL_zcm2am_a1_2x1,  /* index 33 */
   ATL_zcm2am_a1_1,  /* index 34 */
   ATL_zcm2am_a1_2x1,  /* index 35 */
   ATL_zcm2am_a1_1,  /* index 36 */
   ATL_zcm2am_a1_2x1,  /* index 37 */
   ATL_zcm2am_a1_1,  /* index 38 */
   ATL_zcm2am_a1_2x1,  /* index 39 */
   ATL_zcm2am_a1_1,  /* index 40 */
   ATL_zcm2am_a1_2x1,  /* index 41 */
   ATL_zcm2am_a1_1,  /* index 42 */
   ATL_zcm2am_a1_2x1,  /* index 43 */
   ATL_zcm2am_a1_1,  /* index 44 */
   ATL_zcm2am_a1_2x1,  /* index 45 */
   ATL_zcm2am_a1_1,  /* index 46 */
   ATL_zcm2am_a1_2x1,  /* index 47 */
   ATL_zcm2am_a1_1,  /* index 48 */
   ATL_zcm2am_a1_2x1,  /* index 49 */
   ATL_zcm2am_a1_1,  /* index 50 */
   ATL_zcm2am_a1_2x1,  /* index 51 */
   ATL_zcm2am_a1_1,  /* index 52 */
   ATL_zcm2am_a1_2x1,  /* index 53 */
   ATL_zcm2am_a1_1,  /* index 54 */
   ATL_zcm2am_a1_2x1,  /* index 55 */
   ATL_zcm2am_a1_1,  /* index 56 */
   ATL_zcm2am_a1_2x1,  /* index 57 */
   ATL_zcm2am_a1_1,  /* index 58 */
   ATL_zcm2am_a1_2x1,  /* index 59 */
   ATL_zcm2am_a1_1,  /* index 60 */
   ATL_zcm2am_a1_2x1,  /* index 61 */
   ATL_zcm2am_a1_1,  /* index 62 */
   ATL_zcm2am_a1_2x1,  /* index 63 */
   ATL_zcm2am_a1_1,  /* index 64 */
   ATL_zcm2am_a1_2x1,  /* index 65 */
   ATL_zcm2am_a1_1,  /* index 66 */
   ATL_zcm2am_a1_2x1,  /* index 67 */
   ATL_zcm2am_a1_1,  /* index 68 */
   ATL_zcm2am_a1_2x1,  /* index 69 */
   ATL_zcm2am_a1_1,  /* index 70 */
   ATL_zcm2am_a1_2x1,  /* index 71 */
   ATL_zcm2am_a1_1,  /* index 72 */
   ATL_zcm2am_a1_2x1,  /* index 73 */
   ATL_zcm2am_a1_1,  /* index 74 */
   ATL_zcm2am_a1_2x1,  /* index 75 */
   ATL_zcm2am_a1_1,  /* index 76 */
   ATL_zcm2am_a1_2x1,  /* index 77 */
   ATL_zcm2am_a1_1,  /* index 78 */
   ATL_zcm2am_a1_2x1,  /* index 79 */
   ATL_zcm2am_a1_1,  /* index 80 */
   ATL_zcm2am_a1_2x1,  /* index 81 */
   ATL_zcm2am_a1_1,  /* index 82 */
   ATL_zcm2am_a1_2x1,  /* index 83 */
   ATL_zcm2am_a1_1,  /* index 84 */
   ATL_zcm2am_a1_2x1,  /* index 85 */
   ATL_zcm2am_a1_1,  /* index 86 */
   ATL_zcm2am_a1_2x1,  /* index 87 */
   ATL_zcm2am_a1_1,  /* index 88 */
   ATL_zcm2am_a1_2x1,  /* index 89 */
   ATL_zcm2am_a1_1,  /* index 90 */
   ATL_zcm2am_a1_2x1,  /* index 91 */
   ATL_zcm2am_a1_1,  /* index 92 */
   ATL_zcm2am_a1_2x1,  /* index 93 */
   ATL_zcm2am_a1_1,  /* index 94 */
   ATL_zcm2am_a1_2x1,  /* index 95 */
   ATL_zcm2am_a1_1,  /* index 96 */
   ATL_zcm2am_a1_2x1,  /* index 97 */
   ATL_zcm2am_a1_1,  /* index 98 */
   ATL_zcm2am_a1_2x1,  /* index 99 */
   ATL_zcm2am_a1_1,  /* index 100 */
   ATL_zcm2am_a1_2x1,  /* index 101 */
   ATL_zcm2am_a1_1,  /* index 102 */
   ATL_zcm2am_a1_2x1,  /* index 103 */
   ATL_zcm2am_a1_1,  /* index 104 */
   ATL_zcm2am_a1_2x1,  /* index 105 */
   ATL_zcm2am_a1_1,  /* index 106 */
   ATL_zcm2am_a1_2x1,  /* index 107 */
   ATL_zcm2am_a1_1,  /* index 108 */
   ATL_zcm2am_a1_2x1,  /* index 109 */
   ATL_zcm2am_a1_1,  /* index 110 */
   ATL_zcm2am_a1_2x1,  /* index 111 */
   ATL_zcm2am_a1_1,  /* index 112 */
   ATL_zcm2am_a1_2x1,  /* index 113 */
   ATL_zcm2am_a1_1,  /* index 114 */
   ATL_zcm2am_a1_2x1,  /* index 115 */
   ATL_zcm2am_a1_1,  /* index 116 */
   ATL_zcm2am_a1_2x1,  /* index 117 */
   ATL_zcm2am_a1_1,  /* index 118 */
   ATL_zcm2am_a1_2x1,  /* index 119 */
   ATL_zcm2am_a1_1,  /* index 120 */
   ATL_zcm2am_a1_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_BT2BLK_a1[122] =
{
   ATL_zrm2am_a1_1,  /* index 0 */
   ATL_zrm2am_a1_1,  /* index 1 */
   ATL_zrm2am_a1_1,  /* index 2 */
   ATL_zrm2am_a1_1,  /* index 3 */
   ATL_zrm2am_a1_1,  /* index 4 */
   ATL_zrm2am_a1_1,  /* index 5 */
   ATL_zrm2am_a1_1,  /* index 6 */
   ATL_zrm2am_a1_2x1,  /* index 7 */
   ATL_zrm2am_a1_1,  /* index 8 */
   ATL_zrm2am_a1_1,  /* index 9 */
   ATL_zrm2am_a1_1,  /* index 10 */
   ATL_zrm2am_a1_2x1,  /* index 11 */
   ATL_zrm2am_a1_1,  /* index 12 */
   ATL_zrm2am_a1_1,  /* index 13 */
   ATL_zrm2am_a1_1,  /* index 14 */
   ATL_zrm2am_a1_2x1,  /* index 15 */
   ATL_zrm2am_a1_1,  /* index 16 */
   ATL_zrm2am_a1_2x1,  /* index 17 */
   ATL_zrm2am_a1_1,  /* index 18 */
   ATL_zrm2am_a1_2x1,  /* index 19 */
   ATL_zrm2am_a1_1,  /* index 20 */
   ATL_zrm2am_a1_1,  /* index 21 */
   ATL_zrm2am_a1_1,  /* index 22 */
   ATL_zrm2am_a1_2x1,  /* index 23 */
   ATL_zrm2am_a1_1,  /* index 24 */
   ATL_zrm2am_a1_2x1,  /* index 25 */
   ATL_zrm2am_a1_1,  /* index 26 */
   ATL_zrm2am_a1_2x1,  /* index 27 */
   ATL_zrm2am_a1_1,  /* index 28 */
   ATL_zrm2am_a1_2x1,  /* index 29 */
   ATL_zrm2am_a1_1,  /* index 30 */
   ATL_zrm2am_a1_2x1,  /* index 31 */
   ATL_zrm2am_a1_1,  /* index 32 */
   ATL_zrm2am_a1_2x1,  /* index 33 */
   ATL_zrm2am_a1_1,  /* index 34 */
   ATL_zrm2am_a1_2x1,  /* index 35 */
   ATL_zrm2am_a1_1,  /* index 36 */
   ATL_zrm2am_a1_2x1,  /* index 37 */
   ATL_zrm2am_a1_1,  /* index 38 */
   ATL_zrm2am_a1_2x1,  /* index 39 */
   ATL_zrm2am_a1_1,  /* index 40 */
   ATL_zrm2am_a1_2x1,  /* index 41 */
   ATL_zrm2am_a1_1,  /* index 42 */
   ATL_zrm2am_a1_2x1,  /* index 43 */
   ATL_zrm2am_a1_1,  /* index 44 */
   ATL_zrm2am_a1_2x1,  /* index 45 */
   ATL_zrm2am_a1_1,  /* index 46 */
   ATL_zrm2am_a1_2x1,  /* index 47 */
   ATL_zrm2am_a1_1,  /* index 48 */
   ATL_zrm2am_a1_2x1,  /* index 49 */
   ATL_zrm2am_a1_1,  /* index 50 */
   ATL_zrm2am_a1_2x1,  /* index 51 */
   ATL_zrm2am_a1_1,  /* index 52 */
   ATL_zrm2am_a1_2x1,  /* index 53 */
   ATL_zrm2am_a1_1,  /* index 54 */
   ATL_zrm2am_a1_2x1,  /* index 55 */
   ATL_zrm2am_a1_1,  /* index 56 */
   ATL_zrm2am_a1_2x1,  /* index 57 */
   ATL_zrm2am_a1_1,  /* index 58 */
   ATL_zrm2am_a1_2x1,  /* index 59 */
   ATL_zrm2am_a1_1,  /* index 60 */
   ATL_zrm2am_a1_2x1,  /* index 61 */
   ATL_zrm2am_a1_1,  /* index 62 */
   ATL_zrm2am_a1_2x1,  /* index 63 */
   ATL_zrm2am_a1_1,  /* index 64 */
   ATL_zrm2am_a1_2x1,  /* index 65 */
   ATL_zrm2am_a1_1,  /* index 66 */
   ATL_zrm2am_a1_2x1,  /* index 67 */
   ATL_zrm2am_a1_1,  /* index 68 */
   ATL_zrm2am_a1_2x1,  /* index 69 */
   ATL_zrm2am_a1_1,  /* index 70 */
   ATL_zrm2am_a1_2x1,  /* index 71 */
   ATL_zrm2am_a1_1,  /* index 72 */
   ATL_zrm2am_a1_2x1,  /* index 73 */
   ATL_zrm2am_a1_1,  /* index 74 */
   ATL_zrm2am_a1_2x1,  /* index 75 */
   ATL_zrm2am_a1_1,  /* index 76 */
   ATL_zrm2am_a1_2x1,  /* index 77 */
   ATL_zrm2am_a1_1,  /* index 78 */
   ATL_zrm2am_a1_2x1,  /* index 79 */
   ATL_zrm2am_a1_1,  /* index 80 */
   ATL_zrm2am_a1_2x1,  /* index 81 */
   ATL_zrm2am_a1_1,  /* index 82 */
   ATL_zrm2am_a1_2x1,  /* index 83 */
   ATL_zrm2am_a1_1,  /* index 84 */
   ATL_zrm2am_a1_2x1,  /* index 85 */
   ATL_zrm2am_a1_1,  /* index 86 */
   ATL_zrm2am_a1_2x1,  /* index 87 */
   ATL_zrm2am_a1_1,  /* index 88 */
   ATL_zrm2am_a1_2x1,  /* index 89 */
   ATL_zrm2am_a1_1,  /* index 90 */
   ATL_zrm2am_a1_2x1,  /* index 91 */
   ATL_zrm2am_a1_1,  /* index 92 */
   ATL_zrm2am_a1_2x1,  /* index 93 */
   ATL_zrm2am_a1_1,  /* index 94 */
   ATL_zrm2am_a1_2x1,  /* index 95 */
   ATL_zrm2am_a1_1,  /* index 96 */
   ATL_zrm2am_a1_2x1,  /* index 97 */
   ATL_zrm2am_a1_1,  /* index 98 */
   ATL_zrm2am_a1_2x1,  /* index 99 */
   ATL_zrm2am_a1_1,  /* index 100 */
   ATL_zrm2am_a1_2x1,  /* index 101 */
   ATL_zrm2am_a1_1,  /* index 102 */
   ATL_zrm2am_a1_2x1,  /* index 103 */
   ATL_zrm2am_a1_1,  /* index 104 */
   ATL_zrm2am_a1_2x1,  /* index 105 */
   ATL_zrm2am_a1_1,  /* index 106 */
   ATL_zrm2am_a1_2x1,  /* index 107 */
   ATL_zrm2am_a1_1,  /* index 108 */
   ATL_zrm2am_a1_2x1,  /* index 109 */
   ATL_zrm2am_a1_1,  /* index 110 */
   ATL_zrm2am_a1_2x1,  /* index 111 */
   ATL_zrm2am_a1_1,  /* index 112 */
   ATL_zrm2am_a1_2x1,  /* index 113 */
   ATL_zrm2am_a1_1,  /* index 114 */
   ATL_zrm2am_a1_2x1,  /* index 115 */
   ATL_zrm2am_a1_1,  /* index 116 */
   ATL_zrm2am_a1_2x1,  /* index 117 */
   ATL_zrm2am_a1_1,  /* index 118 */
   ATL_zrm2am_a1_2x1,  /* index 119 */
   ATL_zrm2am_a1_1,  /* index 120 */
   ATL_zrm2am_a1_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_AC2BLK_a1[122] =
{
   ATL_zcm2am_a1_28C,  /* index 0 */
   ATL_zcm2am_a1_28C,  /* index 1 */
   ATL_zcm2am_a1_28C,  /* index 2 */
   ATL_zcm2am_a1_28C,  /* index 3 */
   ATL_zcm2am_a1_28C,  /* index 4 */
   ATL_zcm2am_a1_28C,  /* index 5 */
   ATL_zcm2am_a1_28C,  /* index 6 */
   ATL_zcm2am_a1_2x8C,  /* index 7 */
   ATL_zcm2am_a1_28C,  /* index 8 */
   ATL_zcm2am_a1_28C,  /* index 9 */
   ATL_zcm2am_a1_28C,  /* index 10 */
   ATL_zcm2am_a1_2x12C,  /* index 11 */
   ATL_zcm2am_a1_28C,  /* index 12 */
   ATL_zcm2am_a1_28C,  /* index 13 */
   ATL_zcm2am_a1_28C,  /* index 14 */
   ATL_zcm2am_a1_2x12C,  /* index 15 */
   ATL_zcm2am_a1_28C,  /* index 16 */
   ATL_zcm2am_a1_2x12C,  /* index 17 */
   ATL_zcm2am_a1_28C,  /* index 18 */
   ATL_zcm2am_a1_2x12C,  /* index 19 */
   ATL_zcm2am_a1_28C,  /* index 20 */
   ATL_zcm2am_a1_28C,  /* index 21 */
   ATL_zcm2am_a1_28C,  /* index 22 */
   ATL_zcm2am_a1_2x12C,  /* index 23 */
   ATL_zcm2am_a1_28C,  /* index 24 */
   ATL_zcm2am_a1_2x12C,  /* index 25 */
   ATL_zcm2am_a1_28C,  /* index 26 */
   ATL_zcm2am_a1_2x12C,  /* index 27 */
   ATL_zcm2am_a1_28C,  /* index 28 */
   ATL_zcm2am_a1_2x12C,  /* index 29 */
   ATL_zcm2am_a1_28C,  /* index 30 */
   ATL_zcm2am_a1_2x12C,  /* index 31 */
   ATL_zcm2am_a1_28C,  /* index 32 */
   ATL_zcm2am_a1_2x12C,  /* index 33 */
   ATL_zcm2am_a1_28C,  /* index 34 */
   ATL_zcm2am_a1_2x12C,  /* index 35 */
   ATL_zcm2am_a1_28C,  /* index 36 */
   ATL_zcm2am_a1_2x12C,  /* index 37 */
   ATL_zcm2am_a1_28C,  /* index 38 */
   ATL_zcm2am_a1_2x12C,  /* index 39 */
   ATL_zcm2am_a1_28C,  /* index 40 */
   ATL_zcm2am_a1_2x12C,  /* index 41 */
   ATL_zcm2am_a1_28C,  /* index 42 */
   ATL_zcm2am_a1_2x12C,  /* index 43 */
   ATL_zcm2am_a1_28C,  /* index 44 */
   ATL_zcm2am_a1_2x12C,  /* index 45 */
   ATL_zcm2am_a1_28C,  /* index 46 */
   ATL_zcm2am_a1_2x12C,  /* index 47 */
   ATL_zcm2am_a1_28C,  /* index 48 */
   ATL_zcm2am_a1_2x12C,  /* index 49 */
   ATL_zcm2am_a1_28C,  /* index 50 */
   ATL_zcm2am_a1_2x12C,  /* index 51 */
   ATL_zcm2am_a1_28C,  /* index 52 */
   ATL_zcm2am_a1_2x12C,  /* index 53 */
   ATL_zcm2am_a1_28C,  /* index 54 */
   ATL_zcm2am_a1_2x12C,  /* index 55 */
   ATL_zcm2am_a1_28C,  /* index 56 */
   ATL_zcm2am_a1_2x12C,  /* index 57 */
   ATL_zcm2am_a1_28C,  /* index 58 */
   ATL_zcm2am_a1_2x12C,  /* index 59 */
   ATL_zcm2am_a1_28C,  /* index 60 */
   ATL_zcm2am_a1_2x12C,  /* index 61 */
   ATL_zcm2am_a1_28C,  /* index 62 */
   ATL_zcm2am_a1_2x12C,  /* index 63 */
   ATL_zcm2am_a1_28C,  /* index 64 */
   ATL_zcm2am_a1_2x12C,  /* index 65 */
   ATL_zcm2am_a1_28C,  /* index 66 */
   ATL_zcm2am_a1_2x12C,  /* index 67 */
   ATL_zcm2am_a1_28C,  /* index 68 */
   ATL_zcm2am_a1_2x12C,  /* index 69 */
   ATL_zcm2am_a1_28C,  /* index 70 */
   ATL_zcm2am_a1_2x12C,  /* index 71 */
   ATL_zcm2am_a1_28C,  /* index 72 */
   ATL_zcm2am_a1_2x12C,  /* index 73 */
   ATL_zcm2am_a1_28C,  /* index 74 */
   ATL_zcm2am_a1_2x12C,  /* index 75 */
   ATL_zcm2am_a1_28C,  /* index 76 */
   ATL_zcm2am_a1_2x12C,  /* index 77 */
   ATL_zcm2am_a1_28C,  /* index 78 */
   ATL_zcm2am_a1_2x12C,  /* index 79 */
   ATL_zcm2am_a1_28C,  /* index 80 */
   ATL_zcm2am_a1_2x12C,  /* index 81 */
   ATL_zcm2am_a1_28C,  /* index 82 */
   ATL_zcm2am_a1_2x12C,  /* index 83 */
   ATL_zcm2am_a1_28C,  /* index 84 */
   ATL_zcm2am_a1_2x12C,  /* index 85 */
   ATL_zcm2am_a1_28C,  /* index 86 */
   ATL_zcm2am_a1_2x12C,  /* index 87 */
   ATL_zcm2am_a1_28C,  /* index 88 */
   ATL_zcm2am_a1_2x12C,  /* index 89 */
   ATL_zcm2am_a1_28C,  /* index 90 */
   ATL_zcm2am_a1_2x12C,  /* index 91 */
   ATL_zcm2am_a1_28C,  /* index 92 */
   ATL_zcm2am_a1_2x12C,  /* index 93 */
   ATL_zcm2am_a1_28C,  /* index 94 */
   ATL_zcm2am_a1_2x12C,  /* index 95 */
   ATL_zcm2am_a1_28C,  /* index 96 */
   ATL_zcm2am_a1_2x12C,  /* index 97 */
   ATL_zcm2am_a1_28C,  /* index 98 */
   ATL_zcm2am_a1_2x12C,  /* index 99 */
   ATL_zcm2am_a1_28C,  /* index 100 */
   ATL_zcm2am_a1_2x12C,  /* index 101 */
   ATL_zcm2am_a1_28C,  /* index 102 */
   ATL_zcm2am_a1_2x12C,  /* index 103 */
   ATL_zcm2am_a1_28C,  /* index 104 */
   ATL_zcm2am_a1_2x12C,  /* index 105 */
   ATL_zcm2am_a1_28C,  /* index 106 */
   ATL_zcm2am_a1_2x12C,  /* index 107 */
   ATL_zcm2am_a1_28C,  /* index 108 */
   ATL_zcm2am_a1_2x12C,  /* index 109 */
   ATL_zcm2am_a1_28C,  /* index 110 */
   ATL_zcm2am_a1_2x12C,  /* index 111 */
   ATL_zcm2am_a1_28C,  /* index 112 */
   ATL_zcm2am_a1_2x12C,  /* index 113 */
   ATL_zcm2am_a1_28C,  /* index 114 */
   ATL_zcm2am_a1_2x12C,  /* index 115 */
   ATL_zcm2am_a1_28C,  /* index 116 */
   ATL_zcm2am_a1_2x12C,  /* index 117 */
   ATL_zcm2am_a1_28C,  /* index 118 */
   ATL_zcm2am_a1_2x12C,  /* index 119 */
   ATL_zcm2am_a1_28C,  /* index 120 */
   ATL_zcm2am_a1_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_AH2BLK_a1[122] =
{
   ATL_zrm2am_a1_28C,  /* index 0 */
   ATL_zrm2am_a1_28C,  /* index 1 */
   ATL_zrm2am_a1_28C,  /* index 2 */
   ATL_zrm2am_a1_28C,  /* index 3 */
   ATL_zrm2am_a1_28C,  /* index 4 */
   ATL_zrm2am_a1_28C,  /* index 5 */
   ATL_zrm2am_a1_28C,  /* index 6 */
   ATL_zrm2am_a1_2x8C,  /* index 7 */
   ATL_zrm2am_a1_28C,  /* index 8 */
   ATL_zrm2am_a1_28C,  /* index 9 */
   ATL_zrm2am_a1_28C,  /* index 10 */
   ATL_zrm2am_a1_2x12C,  /* index 11 */
   ATL_zrm2am_a1_28C,  /* index 12 */
   ATL_zrm2am_a1_28C,  /* index 13 */
   ATL_zrm2am_a1_28C,  /* index 14 */
   ATL_zrm2am_a1_2x12C,  /* index 15 */
   ATL_zrm2am_a1_28C,  /* index 16 */
   ATL_zrm2am_a1_2x12C,  /* index 17 */
   ATL_zrm2am_a1_28C,  /* index 18 */
   ATL_zrm2am_a1_2x12C,  /* index 19 */
   ATL_zrm2am_a1_28C,  /* index 20 */
   ATL_zrm2am_a1_28C,  /* index 21 */
   ATL_zrm2am_a1_28C,  /* index 22 */
   ATL_zrm2am_a1_2x12C,  /* index 23 */
   ATL_zrm2am_a1_28C,  /* index 24 */
   ATL_zrm2am_a1_2x12C,  /* index 25 */
   ATL_zrm2am_a1_28C,  /* index 26 */
   ATL_zrm2am_a1_2x12C,  /* index 27 */
   ATL_zrm2am_a1_28C,  /* index 28 */
   ATL_zrm2am_a1_2x12C,  /* index 29 */
   ATL_zrm2am_a1_28C,  /* index 30 */
   ATL_zrm2am_a1_2x12C,  /* index 31 */
   ATL_zrm2am_a1_28C,  /* index 32 */
   ATL_zrm2am_a1_2x12C,  /* index 33 */
   ATL_zrm2am_a1_28C,  /* index 34 */
   ATL_zrm2am_a1_2x12C,  /* index 35 */
   ATL_zrm2am_a1_28C,  /* index 36 */
   ATL_zrm2am_a1_2x12C,  /* index 37 */
   ATL_zrm2am_a1_28C,  /* index 38 */
   ATL_zrm2am_a1_2x12C,  /* index 39 */
   ATL_zrm2am_a1_28C,  /* index 40 */
   ATL_zrm2am_a1_2x12C,  /* index 41 */
   ATL_zrm2am_a1_28C,  /* index 42 */
   ATL_zrm2am_a1_2x12C,  /* index 43 */
   ATL_zrm2am_a1_28C,  /* index 44 */
   ATL_zrm2am_a1_2x12C,  /* index 45 */
   ATL_zrm2am_a1_28C,  /* index 46 */
   ATL_zrm2am_a1_2x12C,  /* index 47 */
   ATL_zrm2am_a1_28C,  /* index 48 */
   ATL_zrm2am_a1_2x12C,  /* index 49 */
   ATL_zrm2am_a1_28C,  /* index 50 */
   ATL_zrm2am_a1_2x12C,  /* index 51 */
   ATL_zrm2am_a1_28C,  /* index 52 */
   ATL_zrm2am_a1_2x12C,  /* index 53 */
   ATL_zrm2am_a1_28C,  /* index 54 */
   ATL_zrm2am_a1_2x12C,  /* index 55 */
   ATL_zrm2am_a1_28C,  /* index 56 */
   ATL_zrm2am_a1_2x12C,  /* index 57 */
   ATL_zrm2am_a1_28C,  /* index 58 */
   ATL_zrm2am_a1_2x12C,  /* index 59 */
   ATL_zrm2am_a1_28C,  /* index 60 */
   ATL_zrm2am_a1_2x12C,  /* index 61 */
   ATL_zrm2am_a1_28C,  /* index 62 */
   ATL_zrm2am_a1_2x12C,  /* index 63 */
   ATL_zrm2am_a1_28C,  /* index 64 */
   ATL_zrm2am_a1_2x12C,  /* index 65 */
   ATL_zrm2am_a1_28C,  /* index 66 */
   ATL_zrm2am_a1_2x12C,  /* index 67 */
   ATL_zrm2am_a1_28C,  /* index 68 */
   ATL_zrm2am_a1_2x12C,  /* index 69 */
   ATL_zrm2am_a1_28C,  /* index 70 */
   ATL_zrm2am_a1_2x12C,  /* index 71 */
   ATL_zrm2am_a1_28C,  /* index 72 */
   ATL_zrm2am_a1_2x12C,  /* index 73 */
   ATL_zrm2am_a1_28C,  /* index 74 */
   ATL_zrm2am_a1_2x12C,  /* index 75 */
   ATL_zrm2am_a1_28C,  /* index 76 */
   ATL_zrm2am_a1_2x12C,  /* index 77 */
   ATL_zrm2am_a1_28C,  /* index 78 */
   ATL_zrm2am_a1_2x12C,  /* index 79 */
   ATL_zrm2am_a1_28C,  /* index 80 */
   ATL_zrm2am_a1_2x12C,  /* index 81 */
   ATL_zrm2am_a1_28C,  /* index 82 */
   ATL_zrm2am_a1_2x12C,  /* index 83 */
   ATL_zrm2am_a1_28C,  /* index 84 */
   ATL_zrm2am_a1_2x12C,  /* index 85 */
   ATL_zrm2am_a1_28C,  /* index 86 */
   ATL_zrm2am_a1_2x12C,  /* index 87 */
   ATL_zrm2am_a1_28C,  /* index 88 */
   ATL_zrm2am_a1_2x12C,  /* index 89 */
   ATL_zrm2am_a1_28C,  /* index 90 */
   ATL_zrm2am_a1_2x12C,  /* index 91 */
   ATL_zrm2am_a1_28C,  /* index 92 */
   ATL_zrm2am_a1_2x12C,  /* index 93 */
   ATL_zrm2am_a1_28C,  /* index 94 */
   ATL_zrm2am_a1_2x12C,  /* index 95 */
   ATL_zrm2am_a1_28C,  /* index 96 */
   ATL_zrm2am_a1_2x12C,  /* index 97 */
   ATL_zrm2am_a1_28C,  /* index 98 */
   ATL_zrm2am_a1_2x12C,  /* index 99 */
   ATL_zrm2am_a1_28C,  /* index 100 */
   ATL_zrm2am_a1_2x12C,  /* index 101 */
   ATL_zrm2am_a1_28C,  /* index 102 */
   ATL_zrm2am_a1_2x12C,  /* index 103 */
   ATL_zrm2am_a1_28C,  /* index 104 */
   ATL_zrm2am_a1_2x12C,  /* index 105 */
   ATL_zrm2am_a1_28C,  /* index 106 */
   ATL_zrm2am_a1_2x12C,  /* index 107 */
   ATL_zrm2am_a1_28C,  /* index 108 */
   ATL_zrm2am_a1_2x12C,  /* index 109 */
   ATL_zrm2am_a1_28C,  /* index 110 */
   ATL_zrm2am_a1_2x12C,  /* index 111 */
   ATL_zrm2am_a1_28C,  /* index 112 */
   ATL_zrm2am_a1_2x12C,  /* index 113 */
   ATL_zrm2am_a1_28C,  /* index 114 */
   ATL_zrm2am_a1_2x12C,  /* index 115 */
   ATL_zrm2am_a1_28C,  /* index 116 */
   ATL_zrm2am_a1_2x12C,  /* index 117 */
   ATL_zrm2am_a1_28C,  /* index 118 */
   ATL_zrm2am_a1_2x12C,  /* index 119 */
   ATL_zrm2am_a1_28C,  /* index 120 */
   ATL_zrm2am_a1_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_BC2BLK_a1[122] =
{
   ATL_zcm2am_a1_1C,  /* index 0 */
   ATL_zcm2am_a1_1C,  /* index 1 */
   ATL_zcm2am_a1_1C,  /* index 2 */
   ATL_zcm2am_a1_1C,  /* index 3 */
   ATL_zcm2am_a1_1C,  /* index 4 */
   ATL_zcm2am_a1_1C,  /* index 5 */
   ATL_zcm2am_a1_1C,  /* index 6 */
   ATL_zcm2am_a1_2x1C,  /* index 7 */
   ATL_zcm2am_a1_1C,  /* index 8 */
   ATL_zcm2am_a1_1C,  /* index 9 */
   ATL_zcm2am_a1_1C,  /* index 10 */
   ATL_zcm2am_a1_2x1C,  /* index 11 */
   ATL_zcm2am_a1_1C,  /* index 12 */
   ATL_zcm2am_a1_1C,  /* index 13 */
   ATL_zcm2am_a1_1C,  /* index 14 */
   ATL_zcm2am_a1_2x1C,  /* index 15 */
   ATL_zcm2am_a1_1C,  /* index 16 */
   ATL_zcm2am_a1_2x1C,  /* index 17 */
   ATL_zcm2am_a1_1C,  /* index 18 */
   ATL_zcm2am_a1_2x1C,  /* index 19 */
   ATL_zcm2am_a1_1C,  /* index 20 */
   ATL_zcm2am_a1_1C,  /* index 21 */
   ATL_zcm2am_a1_1C,  /* index 22 */
   ATL_zcm2am_a1_2x1C,  /* index 23 */
   ATL_zcm2am_a1_1C,  /* index 24 */
   ATL_zcm2am_a1_2x1C,  /* index 25 */
   ATL_zcm2am_a1_1C,  /* index 26 */
   ATL_zcm2am_a1_2x1C,  /* index 27 */
   ATL_zcm2am_a1_1C,  /* index 28 */
   ATL_zcm2am_a1_2x1C,  /* index 29 */
   ATL_zcm2am_a1_1C,  /* index 30 */
   ATL_zcm2am_a1_2x1C,  /* index 31 */
   ATL_zcm2am_a1_1C,  /* index 32 */
   ATL_zcm2am_a1_2x1C,  /* index 33 */
   ATL_zcm2am_a1_1C,  /* index 34 */
   ATL_zcm2am_a1_2x1C,  /* index 35 */
   ATL_zcm2am_a1_1C,  /* index 36 */
   ATL_zcm2am_a1_2x1C,  /* index 37 */
   ATL_zcm2am_a1_1C,  /* index 38 */
   ATL_zcm2am_a1_2x1C,  /* index 39 */
   ATL_zcm2am_a1_1C,  /* index 40 */
   ATL_zcm2am_a1_2x1C,  /* index 41 */
   ATL_zcm2am_a1_1C,  /* index 42 */
   ATL_zcm2am_a1_2x1C,  /* index 43 */
   ATL_zcm2am_a1_1C,  /* index 44 */
   ATL_zcm2am_a1_2x1C,  /* index 45 */
   ATL_zcm2am_a1_1C,  /* index 46 */
   ATL_zcm2am_a1_2x1C,  /* index 47 */
   ATL_zcm2am_a1_1C,  /* index 48 */
   ATL_zcm2am_a1_2x1C,  /* index 49 */
   ATL_zcm2am_a1_1C,  /* index 50 */
   ATL_zcm2am_a1_2x1C,  /* index 51 */
   ATL_zcm2am_a1_1C,  /* index 52 */
   ATL_zcm2am_a1_2x1C,  /* index 53 */
   ATL_zcm2am_a1_1C,  /* index 54 */
   ATL_zcm2am_a1_2x1C,  /* index 55 */
   ATL_zcm2am_a1_1C,  /* index 56 */
   ATL_zcm2am_a1_2x1C,  /* index 57 */
   ATL_zcm2am_a1_1C,  /* index 58 */
   ATL_zcm2am_a1_2x1C,  /* index 59 */
   ATL_zcm2am_a1_1C,  /* index 60 */
   ATL_zcm2am_a1_2x1C,  /* index 61 */
   ATL_zcm2am_a1_1C,  /* index 62 */
   ATL_zcm2am_a1_2x1C,  /* index 63 */
   ATL_zcm2am_a1_1C,  /* index 64 */
   ATL_zcm2am_a1_2x1C,  /* index 65 */
   ATL_zcm2am_a1_1C,  /* index 66 */
   ATL_zcm2am_a1_2x1C,  /* index 67 */
   ATL_zcm2am_a1_1C,  /* index 68 */
   ATL_zcm2am_a1_2x1C,  /* index 69 */
   ATL_zcm2am_a1_1C,  /* index 70 */
   ATL_zcm2am_a1_2x1C,  /* index 71 */
   ATL_zcm2am_a1_1C,  /* index 72 */
   ATL_zcm2am_a1_2x1C,  /* index 73 */
   ATL_zcm2am_a1_1C,  /* index 74 */
   ATL_zcm2am_a1_2x1C,  /* index 75 */
   ATL_zcm2am_a1_1C,  /* index 76 */
   ATL_zcm2am_a1_2x1C,  /* index 77 */
   ATL_zcm2am_a1_1C,  /* index 78 */
   ATL_zcm2am_a1_2x1C,  /* index 79 */
   ATL_zcm2am_a1_1C,  /* index 80 */
   ATL_zcm2am_a1_2x1C,  /* index 81 */
   ATL_zcm2am_a1_1C,  /* index 82 */
   ATL_zcm2am_a1_2x1C,  /* index 83 */
   ATL_zcm2am_a1_1C,  /* index 84 */
   ATL_zcm2am_a1_2x1C,  /* index 85 */
   ATL_zcm2am_a1_1C,  /* index 86 */
   ATL_zcm2am_a1_2x1C,  /* index 87 */
   ATL_zcm2am_a1_1C,  /* index 88 */
   ATL_zcm2am_a1_2x1C,  /* index 89 */
   ATL_zcm2am_a1_1C,  /* index 90 */
   ATL_zcm2am_a1_2x1C,  /* index 91 */
   ATL_zcm2am_a1_1C,  /* index 92 */
   ATL_zcm2am_a1_2x1C,  /* index 93 */
   ATL_zcm2am_a1_1C,  /* index 94 */
   ATL_zcm2am_a1_2x1C,  /* index 95 */
   ATL_zcm2am_a1_1C,  /* index 96 */
   ATL_zcm2am_a1_2x1C,  /* index 97 */
   ATL_zcm2am_a1_1C,  /* index 98 */
   ATL_zcm2am_a1_2x1C,  /* index 99 */
   ATL_zcm2am_a1_1C,  /* index 100 */
   ATL_zcm2am_a1_2x1C,  /* index 101 */
   ATL_zcm2am_a1_1C,  /* index 102 */
   ATL_zcm2am_a1_2x1C,  /* index 103 */
   ATL_zcm2am_a1_1C,  /* index 104 */
   ATL_zcm2am_a1_2x1C,  /* index 105 */
   ATL_zcm2am_a1_1C,  /* index 106 */
   ATL_zcm2am_a1_2x1C,  /* index 107 */
   ATL_zcm2am_a1_1C,  /* index 108 */
   ATL_zcm2am_a1_2x1C,  /* index 109 */
   ATL_zcm2am_a1_1C,  /* index 110 */
   ATL_zcm2am_a1_2x1C,  /* index 111 */
   ATL_zcm2am_a1_1C,  /* index 112 */
   ATL_zcm2am_a1_2x1C,  /* index 113 */
   ATL_zcm2am_a1_1C,  /* index 114 */
   ATL_zcm2am_a1_2x1C,  /* index 115 */
   ATL_zcm2am_a1_1C,  /* index 116 */
   ATL_zcm2am_a1_2x1C,  /* index 117 */
   ATL_zcm2am_a1_1C,  /* index 118 */
   ATL_zcm2am_a1_2x1C,  /* index 119 */
   ATL_zcm2am_a1_1C,  /* index 120 */
   ATL_zcm2am_a1_2x1C   /* index 121 */
};

static const cm2am_t ATL_RKK_BH2BLK_a1[122] =
{
   ATL_zrm2am_a1_1C,  /* index 0 */
   ATL_zrm2am_a1_1C,  /* index 1 */
   ATL_zrm2am_a1_1C,  /* index 2 */
   ATL_zrm2am_a1_1C,  /* index 3 */
   ATL_zrm2am_a1_1C,  /* index 4 */
   ATL_zrm2am_a1_1C,  /* index 5 */
   ATL_zrm2am_a1_1C,  /* index 6 */
   ATL_zrm2am_a1_2x1C,  /* index 7 */
   ATL_zrm2am_a1_1C,  /* index 8 */
   ATL_zrm2am_a1_1C,  /* index 9 */
   ATL_zrm2am_a1_1C,  /* index 10 */
   ATL_zrm2am_a1_2x1C,  /* index 11 */
   ATL_zrm2am_a1_1C,  /* index 12 */
   ATL_zrm2am_a1_1C,  /* index 13 */
   ATL_zrm2am_a1_1C,  /* index 14 */
   ATL_zrm2am_a1_2x1C,  /* index 15 */
   ATL_zrm2am_a1_1C,  /* index 16 */
   ATL_zrm2am_a1_2x1C,  /* index 17 */
   ATL_zrm2am_a1_1C,  /* index 18 */
   ATL_zrm2am_a1_2x1C,  /* index 19 */
   ATL_zrm2am_a1_1C,  /* index 20 */
   ATL_zrm2am_a1_1C,  /* index 21 */
   ATL_zrm2am_a1_1C,  /* index 22 */
   ATL_zrm2am_a1_2x1C,  /* index 23 */
   ATL_zrm2am_a1_1C,  /* index 24 */
   ATL_zrm2am_a1_2x1C,  /* index 25 */
   ATL_zrm2am_a1_1C,  /* index 26 */
   ATL_zrm2am_a1_2x1C,  /* index 27 */
   ATL_zrm2am_a1_1C,  /* index 28 */
   ATL_zrm2am_a1_2x1C,  /* index 29 */
   ATL_zrm2am_a1_1C,  /* index 30 */
   ATL_zrm2am_a1_2x1C,  /* index 31 */
   ATL_zrm2am_a1_1C,  /* index 32 */
   ATL_zrm2am_a1_2x1C,  /* index 33 */
   ATL_zrm2am_a1_1C,  /* index 34 */
   ATL_zrm2am_a1_2x1C,  /* index 35 */
   ATL_zrm2am_a1_1C,  /* index 36 */
   ATL_zrm2am_a1_2x1C,  /* index 37 */
   ATL_zrm2am_a1_1C,  /* index 38 */
   ATL_zrm2am_a1_2x1C,  /* index 39 */
   ATL_zrm2am_a1_1C,  /* index 40 */
   ATL_zrm2am_a1_2x1C,  /* index 41 */
   ATL_zrm2am_a1_1C,  /* index 42 */
   ATL_zrm2am_a1_2x1C,  /* index 43 */
   ATL_zrm2am_a1_1C,  /* index 44 */
   ATL_zrm2am_a1_2x1C,  /* index 45 */
   ATL_zrm2am_a1_1C,  /* index 46 */
   ATL_zrm2am_a1_2x1C,  /* index 47 */
   ATL_zrm2am_a1_1C,  /* index 48 */
   ATL_zrm2am_a1_2x1C,  /* index 49 */
   ATL_zrm2am_a1_1C,  /* index 50 */
   ATL_zrm2am_a1_2x1C,  /* index 51 */
   ATL_zrm2am_a1_1C,  /* index 52 */
   ATL_zrm2am_a1_2x1C,  /* index 53 */
   ATL_zrm2am_a1_1C,  /* index 54 */
   ATL_zrm2am_a1_2x1C,  /* index 55 */
   ATL_zrm2am_a1_1C,  /* index 56 */
   ATL_zrm2am_a1_2x1C,  /* index 57 */
   ATL_zrm2am_a1_1C,  /* index 58 */
   ATL_zrm2am_a1_2x1C,  /* index 59 */
   ATL_zrm2am_a1_1C,  /* index 60 */
   ATL_zrm2am_a1_2x1C,  /* index 61 */
   ATL_zrm2am_a1_1C,  /* index 62 */
   ATL_zrm2am_a1_2x1C,  /* index 63 */
   ATL_zrm2am_a1_1C,  /* index 64 */
   ATL_zrm2am_a1_2x1C,  /* index 65 */
   ATL_zrm2am_a1_1C,  /* index 66 */
   ATL_zrm2am_a1_2x1C,  /* index 67 */
   ATL_zrm2am_a1_1C,  /* index 68 */
   ATL_zrm2am_a1_2x1C,  /* index 69 */
   ATL_zrm2am_a1_1C,  /* index 70 */
   ATL_zrm2am_a1_2x1C,  /* index 71 */
   ATL_zrm2am_a1_1C,  /* index 72 */
   ATL_zrm2am_a1_2x1C,  /* index 73 */
   ATL_zrm2am_a1_1C,  /* index 74 */
   ATL_zrm2am_a1_2x1C,  /* index 75 */
   ATL_zrm2am_a1_1C,  /* index 76 */
   ATL_zrm2am_a1_2x1C,  /* index 77 */
   ATL_zrm2am_a1_1C,  /* index 78 */
   ATL_zrm2am_a1_2x1C,  /* index 79 */
   ATL_zrm2am_a1_1C,  /* index 80 */
   ATL_zrm2am_a1_2x1C,  /* index 81 */
   ATL_zrm2am_a1_1C,  /* index 82 */
   ATL_zrm2am_a1_2x1C,  /* index 83 */
   ATL_zrm2am_a1_1C,  /* index 84 */
   ATL_zrm2am_a1_2x1C,  /* index 85 */
   ATL_zrm2am_a1_1C,  /* index 86 */
   ATL_zrm2am_a1_2x1C,  /* index 87 */
   ATL_zrm2am_a1_1C,  /* index 88 */
   ATL_zrm2am_a1_2x1C,  /* index 89 */
   ATL_zrm2am_a1_1C,  /* index 90 */
   ATL_zrm2am_a1_2x1C,  /* index 91 */
   ATL_zrm2am_a1_1C,  /* index 92 */
   ATL_zrm2am_a1_2x1C,  /* index 93 */
   ATL_zrm2am_a1_1C,  /* index 94 */
   ATL_zrm2am_a1_2x1C,  /* index 95 */
   ATL_zrm2am_a1_1C,  /* index 96 */
   ATL_zrm2am_a1_2x1C,  /* index 97 */
   ATL_zrm2am_a1_1C,  /* index 98 */
   ATL_zrm2am_a1_2x1C,  /* index 99 */
   ATL_zrm2am_a1_1C,  /* index 100 */
   ATL_zrm2am_a1_2x1C,  /* index 101 */
   ATL_zrm2am_a1_1C,  /* index 102 */
   ATL_zrm2am_a1_2x1C,  /* index 103 */
   ATL_zrm2am_a1_1C,  /* index 104 */
   ATL_zrm2am_a1_2x1C,  /* index 105 */
   ATL_zrm2am_a1_1C,  /* index 106 */
   ATL_zrm2am_a1_2x1C,  /* index 107 */
   ATL_zrm2am_a1_1C,  /* index 108 */
   ATL_zrm2am_a1_2x1C,  /* index 109 */
   ATL_zrm2am_a1_1C,  /* index 110 */
   ATL_zrm2am_a1_2x1C,  /* index 111 */
   ATL_zrm2am_a1_1C,  /* index 112 */
   ATL_zrm2am_a1_2x1C,  /* index 113 */
   ATL_zrm2am_a1_1C,  /* index 114 */
   ATL_zrm2am_a1_2x1C,  /* index 115 */
   ATL_zrm2am_a1_1C,  /* index 116 */
   ATL_zrm2am_a1_2x1C,  /* index 117 */
   ATL_zrm2am_a1_1C,  /* index 118 */
   ATL_zrm2am_a1_2x1C,  /* index 119 */
   ATL_zrm2am_a1_1C,  /* index 120 */
   ATL_zrm2am_a1_2x1C   /* index 121 */
};


static const cm2am_t ATL_RKK_A2BLK_an[122] =
{
   ATL_zcm2am_an_28,  /* index 0 */
   ATL_zcm2am_an_28,  /* index 1 */
   ATL_zcm2am_an_28,  /* index 2 */
   ATL_zcm2am_an_28,  /* index 3 */
   ATL_zcm2am_an_28,  /* index 4 */
   ATL_zcm2am_an_28,  /* index 5 */
   ATL_zcm2am_an_28,  /* index 6 */
   ATL_zcm2am_an_2x8,  /* index 7 */
   ATL_zcm2am_an_28,  /* index 8 */
   ATL_zcm2am_an_28,  /* index 9 */
   ATL_zcm2am_an_28,  /* index 10 */
   ATL_zcm2am_an_2x12,  /* index 11 */
   ATL_zcm2am_an_28,  /* index 12 */
   ATL_zcm2am_an_28,  /* index 13 */
   ATL_zcm2am_an_28,  /* index 14 */
   ATL_zcm2am_an_2x12,  /* index 15 */
   ATL_zcm2am_an_28,  /* index 16 */
   ATL_zcm2am_an_2x12,  /* index 17 */
   ATL_zcm2am_an_28,  /* index 18 */
   ATL_zcm2am_an_2x12,  /* index 19 */
   ATL_zcm2am_an_28,  /* index 20 */
   ATL_zcm2am_an_28,  /* index 21 */
   ATL_zcm2am_an_28,  /* index 22 */
   ATL_zcm2am_an_2x12,  /* index 23 */
   ATL_zcm2am_an_28,  /* index 24 */
   ATL_zcm2am_an_2x12,  /* index 25 */
   ATL_zcm2am_an_28,  /* index 26 */
   ATL_zcm2am_an_2x12,  /* index 27 */
   ATL_zcm2am_an_28,  /* index 28 */
   ATL_zcm2am_an_2x12,  /* index 29 */
   ATL_zcm2am_an_28,  /* index 30 */
   ATL_zcm2am_an_2x12,  /* index 31 */
   ATL_zcm2am_an_28,  /* index 32 */
   ATL_zcm2am_an_2x12,  /* index 33 */
   ATL_zcm2am_an_28,  /* index 34 */
   ATL_zcm2am_an_2x12,  /* index 35 */
   ATL_zcm2am_an_28,  /* index 36 */
   ATL_zcm2am_an_2x12,  /* index 37 */
   ATL_zcm2am_an_28,  /* index 38 */
   ATL_zcm2am_an_2x12,  /* index 39 */
   ATL_zcm2am_an_28,  /* index 40 */
   ATL_zcm2am_an_2x12,  /* index 41 */
   ATL_zcm2am_an_28,  /* index 42 */
   ATL_zcm2am_an_2x12,  /* index 43 */
   ATL_zcm2am_an_28,  /* index 44 */
   ATL_zcm2am_an_2x12,  /* index 45 */
   ATL_zcm2am_an_28,  /* index 46 */
   ATL_zcm2am_an_2x12,  /* index 47 */
   ATL_zcm2am_an_28,  /* index 48 */
   ATL_zcm2am_an_2x12,  /* index 49 */
   ATL_zcm2am_an_28,  /* index 50 */
   ATL_zcm2am_an_2x12,  /* index 51 */
   ATL_zcm2am_an_28,  /* index 52 */
   ATL_zcm2am_an_2x12,  /* index 53 */
   ATL_zcm2am_an_28,  /* index 54 */
   ATL_zcm2am_an_2x12,  /* index 55 */
   ATL_zcm2am_an_28,  /* index 56 */
   ATL_zcm2am_an_2x12,  /* index 57 */
   ATL_zcm2am_an_28,  /* index 58 */
   ATL_zcm2am_an_2x12,  /* index 59 */
   ATL_zcm2am_an_28,  /* index 60 */
   ATL_zcm2am_an_2x12,  /* index 61 */
   ATL_zcm2am_an_28,  /* index 62 */
   ATL_zcm2am_an_2x12,  /* index 63 */
   ATL_zcm2am_an_28,  /* index 64 */
   ATL_zcm2am_an_2x12,  /* index 65 */
   ATL_zcm2am_an_28,  /* index 66 */
   ATL_zcm2am_an_2x12,  /* index 67 */
   ATL_zcm2am_an_28,  /* index 68 */
   ATL_zcm2am_an_2x12,  /* index 69 */
   ATL_zcm2am_an_28,  /* index 70 */
   ATL_zcm2am_an_2x12,  /* index 71 */
   ATL_zcm2am_an_28,  /* index 72 */
   ATL_zcm2am_an_2x12,  /* index 73 */
   ATL_zcm2am_an_28,  /* index 74 */
   ATL_zcm2am_an_2x12,  /* index 75 */
   ATL_zcm2am_an_28,  /* index 76 */
   ATL_zcm2am_an_2x12,  /* index 77 */
   ATL_zcm2am_an_28,  /* index 78 */
   ATL_zcm2am_an_2x12,  /* index 79 */
   ATL_zcm2am_an_28,  /* index 80 */
   ATL_zcm2am_an_2x12,  /* index 81 */
   ATL_zcm2am_an_28,  /* index 82 */
   ATL_zcm2am_an_2x12,  /* index 83 */
   ATL_zcm2am_an_28,  /* index 84 */
   ATL_zcm2am_an_2x12,  /* index 85 */
   ATL_zcm2am_an_28,  /* index 86 */
   ATL_zcm2am_an_2x12,  /* index 87 */
   ATL_zcm2am_an_28,  /* index 88 */
   ATL_zcm2am_an_2x12,  /* index 89 */
   ATL_zcm2am_an_28,  /* index 90 */
   ATL_zcm2am_an_2x12,  /* index 91 */
   ATL_zcm2am_an_28,  /* index 92 */
   ATL_zcm2am_an_2x12,  /* index 93 */
   ATL_zcm2am_an_28,  /* index 94 */
   ATL_zcm2am_an_2x12,  /* index 95 */
   ATL_zcm2am_an_28,  /* index 96 */
   ATL_zcm2am_an_2x12,  /* index 97 */
   ATL_zcm2am_an_28,  /* index 98 */
   ATL_zcm2am_an_2x12,  /* index 99 */
   ATL_zcm2am_an_28,  /* index 100 */
   ATL_zcm2am_an_2x12,  /* index 101 */
   ATL_zcm2am_an_28,  /* index 102 */
   ATL_zcm2am_an_2x12,  /* index 103 */
   ATL_zcm2am_an_28,  /* index 104 */
   ATL_zcm2am_an_2x12,  /* index 105 */
   ATL_zcm2am_an_28,  /* index 106 */
   ATL_zcm2am_an_2x12,  /* index 107 */
   ATL_zcm2am_an_28,  /* index 108 */
   ATL_zcm2am_an_2x12,  /* index 109 */
   ATL_zcm2am_an_28,  /* index 110 */
   ATL_zcm2am_an_2x12,  /* index 111 */
   ATL_zcm2am_an_28,  /* index 112 */
   ATL_zcm2am_an_2x12,  /* index 113 */
   ATL_zcm2am_an_28,  /* index 114 */
   ATL_zcm2am_an_2x12,  /* index 115 */
   ATL_zcm2am_an_28,  /* index 116 */
   ATL_zcm2am_an_2x12,  /* index 117 */
   ATL_zcm2am_an_28,  /* index 118 */
   ATL_zcm2am_an_2x12,  /* index 119 */
   ATL_zcm2am_an_28,  /* index 120 */
   ATL_zcm2am_an_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_AT2BLK_an[122] =
{
   ATL_zrm2am_an_28,  /* index 0 */
   ATL_zrm2am_an_28,  /* index 1 */
   ATL_zrm2am_an_28,  /* index 2 */
   ATL_zrm2am_an_28,  /* index 3 */
   ATL_zrm2am_an_28,  /* index 4 */
   ATL_zrm2am_an_28,  /* index 5 */
   ATL_zrm2am_an_28,  /* index 6 */
   ATL_zrm2am_an_2x8,  /* index 7 */
   ATL_zrm2am_an_28,  /* index 8 */
   ATL_zrm2am_an_28,  /* index 9 */
   ATL_zrm2am_an_28,  /* index 10 */
   ATL_zrm2am_an_2x12,  /* index 11 */
   ATL_zrm2am_an_28,  /* index 12 */
   ATL_zrm2am_an_28,  /* index 13 */
   ATL_zrm2am_an_28,  /* index 14 */
   ATL_zrm2am_an_2x12,  /* index 15 */
   ATL_zrm2am_an_28,  /* index 16 */
   ATL_zrm2am_an_2x12,  /* index 17 */
   ATL_zrm2am_an_28,  /* index 18 */
   ATL_zrm2am_an_2x12,  /* index 19 */
   ATL_zrm2am_an_28,  /* index 20 */
   ATL_zrm2am_an_28,  /* index 21 */
   ATL_zrm2am_an_28,  /* index 22 */
   ATL_zrm2am_an_2x12,  /* index 23 */
   ATL_zrm2am_an_28,  /* index 24 */
   ATL_zrm2am_an_2x12,  /* index 25 */
   ATL_zrm2am_an_28,  /* index 26 */
   ATL_zrm2am_an_2x12,  /* index 27 */
   ATL_zrm2am_an_28,  /* index 28 */
   ATL_zrm2am_an_2x12,  /* index 29 */
   ATL_zrm2am_an_28,  /* index 30 */
   ATL_zrm2am_an_2x12,  /* index 31 */
   ATL_zrm2am_an_28,  /* index 32 */
   ATL_zrm2am_an_2x12,  /* index 33 */
   ATL_zrm2am_an_28,  /* index 34 */
   ATL_zrm2am_an_2x12,  /* index 35 */
   ATL_zrm2am_an_28,  /* index 36 */
   ATL_zrm2am_an_2x12,  /* index 37 */
   ATL_zrm2am_an_28,  /* index 38 */
   ATL_zrm2am_an_2x12,  /* index 39 */
   ATL_zrm2am_an_28,  /* index 40 */
   ATL_zrm2am_an_2x12,  /* index 41 */
   ATL_zrm2am_an_28,  /* index 42 */
   ATL_zrm2am_an_2x12,  /* index 43 */
   ATL_zrm2am_an_28,  /* index 44 */
   ATL_zrm2am_an_2x12,  /* index 45 */
   ATL_zrm2am_an_28,  /* index 46 */
   ATL_zrm2am_an_2x12,  /* index 47 */
   ATL_zrm2am_an_28,  /* index 48 */
   ATL_zrm2am_an_2x12,  /* index 49 */
   ATL_zrm2am_an_28,  /* index 50 */
   ATL_zrm2am_an_2x12,  /* index 51 */
   ATL_zrm2am_an_28,  /* index 52 */
   ATL_zrm2am_an_2x12,  /* index 53 */
   ATL_zrm2am_an_28,  /* index 54 */
   ATL_zrm2am_an_2x12,  /* index 55 */
   ATL_zrm2am_an_28,  /* index 56 */
   ATL_zrm2am_an_2x12,  /* index 57 */
   ATL_zrm2am_an_28,  /* index 58 */
   ATL_zrm2am_an_2x12,  /* index 59 */
   ATL_zrm2am_an_28,  /* index 60 */
   ATL_zrm2am_an_2x12,  /* index 61 */
   ATL_zrm2am_an_28,  /* index 62 */
   ATL_zrm2am_an_2x12,  /* index 63 */
   ATL_zrm2am_an_28,  /* index 64 */
   ATL_zrm2am_an_2x12,  /* index 65 */
   ATL_zrm2am_an_28,  /* index 66 */
   ATL_zrm2am_an_2x12,  /* index 67 */
   ATL_zrm2am_an_28,  /* index 68 */
   ATL_zrm2am_an_2x12,  /* index 69 */
   ATL_zrm2am_an_28,  /* index 70 */
   ATL_zrm2am_an_2x12,  /* index 71 */
   ATL_zrm2am_an_28,  /* index 72 */
   ATL_zrm2am_an_2x12,  /* index 73 */
   ATL_zrm2am_an_28,  /* index 74 */
   ATL_zrm2am_an_2x12,  /* index 75 */
   ATL_zrm2am_an_28,  /* index 76 */
   ATL_zrm2am_an_2x12,  /* index 77 */
   ATL_zrm2am_an_28,  /* index 78 */
   ATL_zrm2am_an_2x12,  /* index 79 */
   ATL_zrm2am_an_28,  /* index 80 */
   ATL_zrm2am_an_2x12,  /* index 81 */
   ATL_zrm2am_an_28,  /* index 82 */
   ATL_zrm2am_an_2x12,  /* index 83 */
   ATL_zrm2am_an_28,  /* index 84 */
   ATL_zrm2am_an_2x12,  /* index 85 */
   ATL_zrm2am_an_28,  /* index 86 */
   ATL_zrm2am_an_2x12,  /* index 87 */
   ATL_zrm2am_an_28,  /* index 88 */
   ATL_zrm2am_an_2x12,  /* index 89 */
   ATL_zrm2am_an_28,  /* index 90 */
   ATL_zrm2am_an_2x12,  /* index 91 */
   ATL_zrm2am_an_28,  /* index 92 */
   ATL_zrm2am_an_2x12,  /* index 93 */
   ATL_zrm2am_an_28,  /* index 94 */
   ATL_zrm2am_an_2x12,  /* index 95 */
   ATL_zrm2am_an_28,  /* index 96 */
   ATL_zrm2am_an_2x12,  /* index 97 */
   ATL_zrm2am_an_28,  /* index 98 */
   ATL_zrm2am_an_2x12,  /* index 99 */
   ATL_zrm2am_an_28,  /* index 100 */
   ATL_zrm2am_an_2x12,  /* index 101 */
   ATL_zrm2am_an_28,  /* index 102 */
   ATL_zrm2am_an_2x12,  /* index 103 */
   ATL_zrm2am_an_28,  /* index 104 */
   ATL_zrm2am_an_2x12,  /* index 105 */
   ATL_zrm2am_an_28,  /* index 106 */
   ATL_zrm2am_an_2x12,  /* index 107 */
   ATL_zrm2am_an_28,  /* index 108 */
   ATL_zrm2am_an_2x12,  /* index 109 */
   ATL_zrm2am_an_28,  /* index 110 */
   ATL_zrm2am_an_2x12,  /* index 111 */
   ATL_zrm2am_an_28,  /* index 112 */
   ATL_zrm2am_an_2x12,  /* index 113 */
   ATL_zrm2am_an_28,  /* index 114 */
   ATL_zrm2am_an_2x12,  /* index 115 */
   ATL_zrm2am_an_28,  /* index 116 */
   ATL_zrm2am_an_2x12,  /* index 117 */
   ATL_zrm2am_an_28,  /* index 118 */
   ATL_zrm2am_an_2x12,  /* index 119 */
   ATL_zrm2am_an_28,  /* index 120 */
   ATL_zrm2am_an_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_B2BLK_an[122] =
{
   ATL_zcm2am_an_1,  /* index 0 */
   ATL_zcm2am_an_1,  /* index 1 */
   ATL_zcm2am_an_1,  /* index 2 */
   ATL_zcm2am_an_1,  /* index 3 */
   ATL_zcm2am_an_1,  /* index 4 */
   ATL_zcm2am_an_1,  /* index 5 */
   ATL_zcm2am_an_1,  /* index 6 */
   ATL_zcm2am_an_2x1,  /* index 7 */
   ATL_zcm2am_an_1,  /* index 8 */
   ATL_zcm2am_an_1,  /* index 9 */
   ATL_zcm2am_an_1,  /* index 10 */
   ATL_zcm2am_an_2x1,  /* index 11 */
   ATL_zcm2am_an_1,  /* index 12 */
   ATL_zcm2am_an_1,  /* index 13 */
   ATL_zcm2am_an_1,  /* index 14 */
   ATL_zcm2am_an_2x1,  /* index 15 */
   ATL_zcm2am_an_1,  /* index 16 */
   ATL_zcm2am_an_2x1,  /* index 17 */
   ATL_zcm2am_an_1,  /* index 18 */
   ATL_zcm2am_an_2x1,  /* index 19 */
   ATL_zcm2am_an_1,  /* index 20 */
   ATL_zcm2am_an_1,  /* index 21 */
   ATL_zcm2am_an_1,  /* index 22 */
   ATL_zcm2am_an_2x1,  /* index 23 */
   ATL_zcm2am_an_1,  /* index 24 */
   ATL_zcm2am_an_2x1,  /* index 25 */
   ATL_zcm2am_an_1,  /* index 26 */
   ATL_zcm2am_an_2x1,  /* index 27 */
   ATL_zcm2am_an_1,  /* index 28 */
   ATL_zcm2am_an_2x1,  /* index 29 */
   ATL_zcm2am_an_1,  /* index 30 */
   ATL_zcm2am_an_2x1,  /* index 31 */
   ATL_zcm2am_an_1,  /* index 32 */
   ATL_zcm2am_an_2x1,  /* index 33 */
   ATL_zcm2am_an_1,  /* index 34 */
   ATL_zcm2am_an_2x1,  /* index 35 */
   ATL_zcm2am_an_1,  /* index 36 */
   ATL_zcm2am_an_2x1,  /* index 37 */
   ATL_zcm2am_an_1,  /* index 38 */
   ATL_zcm2am_an_2x1,  /* index 39 */
   ATL_zcm2am_an_1,  /* index 40 */
   ATL_zcm2am_an_2x1,  /* index 41 */
   ATL_zcm2am_an_1,  /* index 42 */
   ATL_zcm2am_an_2x1,  /* index 43 */
   ATL_zcm2am_an_1,  /* index 44 */
   ATL_zcm2am_an_2x1,  /* index 45 */
   ATL_zcm2am_an_1,  /* index 46 */
   ATL_zcm2am_an_2x1,  /* index 47 */
   ATL_zcm2am_an_1,  /* index 48 */
   ATL_zcm2am_an_2x1,  /* index 49 */
   ATL_zcm2am_an_1,  /* index 50 */
   ATL_zcm2am_an_2x1,  /* index 51 */
   ATL_zcm2am_an_1,  /* index 52 */
   ATL_zcm2am_an_2x1,  /* index 53 */
   ATL_zcm2am_an_1,  /* index 54 */
   ATL_zcm2am_an_2x1,  /* index 55 */
   ATL_zcm2am_an_1,  /* index 56 */
   ATL_zcm2am_an_2x1,  /* index 57 */
   ATL_zcm2am_an_1,  /* index 58 */
   ATL_zcm2am_an_2x1,  /* index 59 */
   ATL_zcm2am_an_1,  /* index 60 */
   ATL_zcm2am_an_2x1,  /* index 61 */
   ATL_zcm2am_an_1,  /* index 62 */
   ATL_zcm2am_an_2x1,  /* index 63 */
   ATL_zcm2am_an_1,  /* index 64 */
   ATL_zcm2am_an_2x1,  /* index 65 */
   ATL_zcm2am_an_1,  /* index 66 */
   ATL_zcm2am_an_2x1,  /* index 67 */
   ATL_zcm2am_an_1,  /* index 68 */
   ATL_zcm2am_an_2x1,  /* index 69 */
   ATL_zcm2am_an_1,  /* index 70 */
   ATL_zcm2am_an_2x1,  /* index 71 */
   ATL_zcm2am_an_1,  /* index 72 */
   ATL_zcm2am_an_2x1,  /* index 73 */
   ATL_zcm2am_an_1,  /* index 74 */
   ATL_zcm2am_an_2x1,  /* index 75 */
   ATL_zcm2am_an_1,  /* index 76 */
   ATL_zcm2am_an_2x1,  /* index 77 */
   ATL_zcm2am_an_1,  /* index 78 */
   ATL_zcm2am_an_2x1,  /* index 79 */
   ATL_zcm2am_an_1,  /* index 80 */
   ATL_zcm2am_an_2x1,  /* index 81 */
   ATL_zcm2am_an_1,  /* index 82 */
   ATL_zcm2am_an_2x1,  /* index 83 */
   ATL_zcm2am_an_1,  /* index 84 */
   ATL_zcm2am_an_2x1,  /* index 85 */
   ATL_zcm2am_an_1,  /* index 86 */
   ATL_zcm2am_an_2x1,  /* index 87 */
   ATL_zcm2am_an_1,  /* index 88 */
   ATL_zcm2am_an_2x1,  /* index 89 */
   ATL_zcm2am_an_1,  /* index 90 */
   ATL_zcm2am_an_2x1,  /* index 91 */
   ATL_zcm2am_an_1,  /* index 92 */
   ATL_zcm2am_an_2x1,  /* index 93 */
   ATL_zcm2am_an_1,  /* index 94 */
   ATL_zcm2am_an_2x1,  /* index 95 */
   ATL_zcm2am_an_1,  /* index 96 */
   ATL_zcm2am_an_2x1,  /* index 97 */
   ATL_zcm2am_an_1,  /* index 98 */
   ATL_zcm2am_an_2x1,  /* index 99 */
   ATL_zcm2am_an_1,  /* index 100 */
   ATL_zcm2am_an_2x1,  /* index 101 */
   ATL_zcm2am_an_1,  /* index 102 */
   ATL_zcm2am_an_2x1,  /* index 103 */
   ATL_zcm2am_an_1,  /* index 104 */
   ATL_zcm2am_an_2x1,  /* index 105 */
   ATL_zcm2am_an_1,  /* index 106 */
   ATL_zcm2am_an_2x1,  /* index 107 */
   ATL_zcm2am_an_1,  /* index 108 */
   ATL_zcm2am_an_2x1,  /* index 109 */
   ATL_zcm2am_an_1,  /* index 110 */
   ATL_zcm2am_an_2x1,  /* index 111 */
   ATL_zcm2am_an_1,  /* index 112 */
   ATL_zcm2am_an_2x1,  /* index 113 */
   ATL_zcm2am_an_1,  /* index 114 */
   ATL_zcm2am_an_2x1,  /* index 115 */
   ATL_zcm2am_an_1,  /* index 116 */
   ATL_zcm2am_an_2x1,  /* index 117 */
   ATL_zcm2am_an_1,  /* index 118 */
   ATL_zcm2am_an_2x1,  /* index 119 */
   ATL_zcm2am_an_1,  /* index 120 */
   ATL_zcm2am_an_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_BT2BLK_an[122] =
{
   ATL_zrm2am_an_1,  /* index 0 */
   ATL_zrm2am_an_1,  /* index 1 */
   ATL_zrm2am_an_1,  /* index 2 */
   ATL_zrm2am_an_1,  /* index 3 */
   ATL_zrm2am_an_1,  /* index 4 */
   ATL_zrm2am_an_1,  /* index 5 */
   ATL_zrm2am_an_1,  /* index 6 */
   ATL_zrm2am_an_2x1,  /* index 7 */
   ATL_zrm2am_an_1,  /* index 8 */
   ATL_zrm2am_an_1,  /* index 9 */
   ATL_zrm2am_an_1,  /* index 10 */
   ATL_zrm2am_an_2x1,  /* index 11 */
   ATL_zrm2am_an_1,  /* index 12 */
   ATL_zrm2am_an_1,  /* index 13 */
   ATL_zrm2am_an_1,  /* index 14 */
   ATL_zrm2am_an_2x1,  /* index 15 */
   ATL_zrm2am_an_1,  /* index 16 */
   ATL_zrm2am_an_2x1,  /* index 17 */
   ATL_zrm2am_an_1,  /* index 18 */
   ATL_zrm2am_an_2x1,  /* index 19 */
   ATL_zrm2am_an_1,  /* index 20 */
   ATL_zrm2am_an_1,  /* index 21 */
   ATL_zrm2am_an_1,  /* index 22 */
   ATL_zrm2am_an_2x1,  /* index 23 */
   ATL_zrm2am_an_1,  /* index 24 */
   ATL_zrm2am_an_2x1,  /* index 25 */
   ATL_zrm2am_an_1,  /* index 26 */
   ATL_zrm2am_an_2x1,  /* index 27 */
   ATL_zrm2am_an_1,  /* index 28 */
   ATL_zrm2am_an_2x1,  /* index 29 */
   ATL_zrm2am_an_1,  /* index 30 */
   ATL_zrm2am_an_2x1,  /* index 31 */
   ATL_zrm2am_an_1,  /* index 32 */
   ATL_zrm2am_an_2x1,  /* index 33 */
   ATL_zrm2am_an_1,  /* index 34 */
   ATL_zrm2am_an_2x1,  /* index 35 */
   ATL_zrm2am_an_1,  /* index 36 */
   ATL_zrm2am_an_2x1,  /* index 37 */
   ATL_zrm2am_an_1,  /* index 38 */
   ATL_zrm2am_an_2x1,  /* index 39 */
   ATL_zrm2am_an_1,  /* index 40 */
   ATL_zrm2am_an_2x1,  /* index 41 */
   ATL_zrm2am_an_1,  /* index 42 */
   ATL_zrm2am_an_2x1,  /* index 43 */
   ATL_zrm2am_an_1,  /* index 44 */
   ATL_zrm2am_an_2x1,  /* index 45 */
   ATL_zrm2am_an_1,  /* index 46 */
   ATL_zrm2am_an_2x1,  /* index 47 */
   ATL_zrm2am_an_1,  /* index 48 */
   ATL_zrm2am_an_2x1,  /* index 49 */
   ATL_zrm2am_an_1,  /* index 50 */
   ATL_zrm2am_an_2x1,  /* index 51 */
   ATL_zrm2am_an_1,  /* index 52 */
   ATL_zrm2am_an_2x1,  /* index 53 */
   ATL_zrm2am_an_1,  /* index 54 */
   ATL_zrm2am_an_2x1,  /* index 55 */
   ATL_zrm2am_an_1,  /* index 56 */
   ATL_zrm2am_an_2x1,  /* index 57 */
   ATL_zrm2am_an_1,  /* index 58 */
   ATL_zrm2am_an_2x1,  /* index 59 */
   ATL_zrm2am_an_1,  /* index 60 */
   ATL_zrm2am_an_2x1,  /* index 61 */
   ATL_zrm2am_an_1,  /* index 62 */
   ATL_zrm2am_an_2x1,  /* index 63 */
   ATL_zrm2am_an_1,  /* index 64 */
   ATL_zrm2am_an_2x1,  /* index 65 */
   ATL_zrm2am_an_1,  /* index 66 */
   ATL_zrm2am_an_2x1,  /* index 67 */
   ATL_zrm2am_an_1,  /* index 68 */
   ATL_zrm2am_an_2x1,  /* index 69 */
   ATL_zrm2am_an_1,  /* index 70 */
   ATL_zrm2am_an_2x1,  /* index 71 */
   ATL_zrm2am_an_1,  /* index 72 */
   ATL_zrm2am_an_2x1,  /* index 73 */
   ATL_zrm2am_an_1,  /* index 74 */
   ATL_zrm2am_an_2x1,  /* index 75 */
   ATL_zrm2am_an_1,  /* index 76 */
   ATL_zrm2am_an_2x1,  /* index 77 */
   ATL_zrm2am_an_1,  /* index 78 */
   ATL_zrm2am_an_2x1,  /* index 79 */
   ATL_zrm2am_an_1,  /* index 80 */
   ATL_zrm2am_an_2x1,  /* index 81 */
   ATL_zrm2am_an_1,  /* index 82 */
   ATL_zrm2am_an_2x1,  /* index 83 */
   ATL_zrm2am_an_1,  /* index 84 */
   ATL_zrm2am_an_2x1,  /* index 85 */
   ATL_zrm2am_an_1,  /* index 86 */
   ATL_zrm2am_an_2x1,  /* index 87 */
   ATL_zrm2am_an_1,  /* index 88 */
   ATL_zrm2am_an_2x1,  /* index 89 */
   ATL_zrm2am_an_1,  /* index 90 */
   ATL_zrm2am_an_2x1,  /* index 91 */
   ATL_zrm2am_an_1,  /* index 92 */
   ATL_zrm2am_an_2x1,  /* index 93 */
   ATL_zrm2am_an_1,  /* index 94 */
   ATL_zrm2am_an_2x1,  /* index 95 */
   ATL_zrm2am_an_1,  /* index 96 */
   ATL_zrm2am_an_2x1,  /* index 97 */
   ATL_zrm2am_an_1,  /* index 98 */
   ATL_zrm2am_an_2x1,  /* index 99 */
   ATL_zrm2am_an_1,  /* index 100 */
   ATL_zrm2am_an_2x1,  /* index 101 */
   ATL_zrm2am_an_1,  /* index 102 */
   ATL_zrm2am_an_2x1,  /* index 103 */
   ATL_zrm2am_an_1,  /* index 104 */
   ATL_zrm2am_an_2x1,  /* index 105 */
   ATL_zrm2am_an_1,  /* index 106 */
   ATL_zrm2am_an_2x1,  /* index 107 */
   ATL_zrm2am_an_1,  /* index 108 */
   ATL_zrm2am_an_2x1,  /* index 109 */
   ATL_zrm2am_an_1,  /* index 110 */
   ATL_zrm2am_an_2x1,  /* index 111 */
   ATL_zrm2am_an_1,  /* index 112 */
   ATL_zrm2am_an_2x1,  /* index 113 */
   ATL_zrm2am_an_1,  /* index 114 */
   ATL_zrm2am_an_2x1,  /* index 115 */
   ATL_zrm2am_an_1,  /* index 116 */
   ATL_zrm2am_an_2x1,  /* index 117 */
   ATL_zrm2am_an_1,  /* index 118 */
   ATL_zrm2am_an_2x1,  /* index 119 */
   ATL_zrm2am_an_1,  /* index 120 */
   ATL_zrm2am_an_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_AC2BLK_an[122] =
{
   ATL_zcm2am_an_28C,  /* index 0 */
   ATL_zcm2am_an_28C,  /* index 1 */
   ATL_zcm2am_an_28C,  /* index 2 */
   ATL_zcm2am_an_28C,  /* index 3 */
   ATL_zcm2am_an_28C,  /* index 4 */
   ATL_zcm2am_an_28C,  /* index 5 */
   ATL_zcm2am_an_28C,  /* index 6 */
   ATL_zcm2am_an_2x8C,  /* index 7 */
   ATL_zcm2am_an_28C,  /* index 8 */
   ATL_zcm2am_an_28C,  /* index 9 */
   ATL_zcm2am_an_28C,  /* index 10 */
   ATL_zcm2am_an_2x12C,  /* index 11 */
   ATL_zcm2am_an_28C,  /* index 12 */
   ATL_zcm2am_an_28C,  /* index 13 */
   ATL_zcm2am_an_28C,  /* index 14 */
   ATL_zcm2am_an_2x12C,  /* index 15 */
   ATL_zcm2am_an_28C,  /* index 16 */
   ATL_zcm2am_an_2x12C,  /* index 17 */
   ATL_zcm2am_an_28C,  /* index 18 */
   ATL_zcm2am_an_2x12C,  /* index 19 */
   ATL_zcm2am_an_28C,  /* index 20 */
   ATL_zcm2am_an_28C,  /* index 21 */
   ATL_zcm2am_an_28C,  /* index 22 */
   ATL_zcm2am_an_2x12C,  /* index 23 */
   ATL_zcm2am_an_28C,  /* index 24 */
   ATL_zcm2am_an_2x12C,  /* index 25 */
   ATL_zcm2am_an_28C,  /* index 26 */
   ATL_zcm2am_an_2x12C,  /* index 27 */
   ATL_zcm2am_an_28C,  /* index 28 */
   ATL_zcm2am_an_2x12C,  /* index 29 */
   ATL_zcm2am_an_28C,  /* index 30 */
   ATL_zcm2am_an_2x12C,  /* index 31 */
   ATL_zcm2am_an_28C,  /* index 32 */
   ATL_zcm2am_an_2x12C,  /* index 33 */
   ATL_zcm2am_an_28C,  /* index 34 */
   ATL_zcm2am_an_2x12C,  /* index 35 */
   ATL_zcm2am_an_28C,  /* index 36 */
   ATL_zcm2am_an_2x12C,  /* index 37 */
   ATL_zcm2am_an_28C,  /* index 38 */
   ATL_zcm2am_an_2x12C,  /* index 39 */
   ATL_zcm2am_an_28C,  /* index 40 */
   ATL_zcm2am_an_2x12C,  /* index 41 */
   ATL_zcm2am_an_28C,  /* index 42 */
   ATL_zcm2am_an_2x12C,  /* index 43 */
   ATL_zcm2am_an_28C,  /* index 44 */
   ATL_zcm2am_an_2x12C,  /* index 45 */
   ATL_zcm2am_an_28C,  /* index 46 */
   ATL_zcm2am_an_2x12C,  /* index 47 */
   ATL_zcm2am_an_28C,  /* index 48 */
   ATL_zcm2am_an_2x12C,  /* index 49 */
   ATL_zcm2am_an_28C,  /* index 50 */
   ATL_zcm2am_an_2x12C,  /* index 51 */
   ATL_zcm2am_an_28C,  /* index 52 */
   ATL_zcm2am_an_2x12C,  /* index 53 */
   ATL_zcm2am_an_28C,  /* index 54 */
   ATL_zcm2am_an_2x12C,  /* index 55 */
   ATL_zcm2am_an_28C,  /* index 56 */
   ATL_zcm2am_an_2x12C,  /* index 57 */
   ATL_zcm2am_an_28C,  /* index 58 */
   ATL_zcm2am_an_2x12C,  /* index 59 */
   ATL_zcm2am_an_28C,  /* index 60 */
   ATL_zcm2am_an_2x12C,  /* index 61 */
   ATL_zcm2am_an_28C,  /* index 62 */
   ATL_zcm2am_an_2x12C,  /* index 63 */
   ATL_zcm2am_an_28C,  /* index 64 */
   ATL_zcm2am_an_2x12C,  /* index 65 */
   ATL_zcm2am_an_28C,  /* index 66 */
   ATL_zcm2am_an_2x12C,  /* index 67 */
   ATL_zcm2am_an_28C,  /* index 68 */
   ATL_zcm2am_an_2x12C,  /* index 69 */
   ATL_zcm2am_an_28C,  /* index 70 */
   ATL_zcm2am_an_2x12C,  /* index 71 */
   ATL_zcm2am_an_28C,  /* index 72 */
   ATL_zcm2am_an_2x12C,  /* index 73 */
   ATL_zcm2am_an_28C,  /* index 74 */
   ATL_zcm2am_an_2x12C,  /* index 75 */
   ATL_zcm2am_an_28C,  /* index 76 */
   ATL_zcm2am_an_2x12C,  /* index 77 */
   ATL_zcm2am_an_28C,  /* index 78 */
   ATL_zcm2am_an_2x12C,  /* index 79 */
   ATL_zcm2am_an_28C,  /* index 80 */
   ATL_zcm2am_an_2x12C,  /* index 81 */
   ATL_zcm2am_an_28C,  /* index 82 */
   ATL_zcm2am_an_2x12C,  /* index 83 */
   ATL_zcm2am_an_28C,  /* index 84 */
   ATL_zcm2am_an_2x12C,  /* index 85 */
   ATL_zcm2am_an_28C,  /* index 86 */
   ATL_zcm2am_an_2x12C,  /* index 87 */
   ATL_zcm2am_an_28C,  /* index 88 */
   ATL_zcm2am_an_2x12C,  /* index 89 */
   ATL_zcm2am_an_28C,  /* index 90 */
   ATL_zcm2am_an_2x12C,  /* index 91 */
   ATL_zcm2am_an_28C,  /* index 92 */
   ATL_zcm2am_an_2x12C,  /* index 93 */
   ATL_zcm2am_an_28C,  /* index 94 */
   ATL_zcm2am_an_2x12C,  /* index 95 */
   ATL_zcm2am_an_28C,  /* index 96 */
   ATL_zcm2am_an_2x12C,  /* index 97 */
   ATL_zcm2am_an_28C,  /* index 98 */
   ATL_zcm2am_an_2x12C,  /* index 99 */
   ATL_zcm2am_an_28C,  /* index 100 */
   ATL_zcm2am_an_2x12C,  /* index 101 */
   ATL_zcm2am_an_28C,  /* index 102 */
   ATL_zcm2am_an_2x12C,  /* index 103 */
   ATL_zcm2am_an_28C,  /* index 104 */
   ATL_zcm2am_an_2x12C,  /* index 105 */
   ATL_zcm2am_an_28C,  /* index 106 */
   ATL_zcm2am_an_2x12C,  /* index 107 */
   ATL_zcm2am_an_28C,  /* index 108 */
   ATL_zcm2am_an_2x12C,  /* index 109 */
   ATL_zcm2am_an_28C,  /* index 110 */
   ATL_zcm2am_an_2x12C,  /* index 111 */
   ATL_zcm2am_an_28C,  /* index 112 */
   ATL_zcm2am_an_2x12C,  /* index 113 */
   ATL_zcm2am_an_28C,  /* index 114 */
   ATL_zcm2am_an_2x12C,  /* index 115 */
   ATL_zcm2am_an_28C,  /* index 116 */
   ATL_zcm2am_an_2x12C,  /* index 117 */
   ATL_zcm2am_an_28C,  /* index 118 */
   ATL_zcm2am_an_2x12C,  /* index 119 */
   ATL_zcm2am_an_28C,  /* index 120 */
   ATL_zcm2am_an_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_AH2BLK_an[122] =
{
   ATL_zrm2am_an_28C,  /* index 0 */
   ATL_zrm2am_an_28C,  /* index 1 */
   ATL_zrm2am_an_28C,  /* index 2 */
   ATL_zrm2am_an_28C,  /* index 3 */
   ATL_zrm2am_an_28C,  /* index 4 */
   ATL_zrm2am_an_28C,  /* index 5 */
   ATL_zrm2am_an_28C,  /* index 6 */
   ATL_zrm2am_an_2x8C,  /* index 7 */
   ATL_zrm2am_an_28C,  /* index 8 */
   ATL_zrm2am_an_28C,  /* index 9 */
   ATL_zrm2am_an_28C,  /* index 10 */
   ATL_zrm2am_an_2x12C,  /* index 11 */
   ATL_zrm2am_an_28C,  /* index 12 */
   ATL_zrm2am_an_28C,  /* index 13 */
   ATL_zrm2am_an_28C,  /* index 14 */
   ATL_zrm2am_an_2x12C,  /* index 15 */
   ATL_zrm2am_an_28C,  /* index 16 */
   ATL_zrm2am_an_2x12C,  /* index 17 */
   ATL_zrm2am_an_28C,  /* index 18 */
   ATL_zrm2am_an_2x12C,  /* index 19 */
   ATL_zrm2am_an_28C,  /* index 20 */
   ATL_zrm2am_an_28C,  /* index 21 */
   ATL_zrm2am_an_28C,  /* index 22 */
   ATL_zrm2am_an_2x12C,  /* index 23 */
   ATL_zrm2am_an_28C,  /* index 24 */
   ATL_zrm2am_an_2x12C,  /* index 25 */
   ATL_zrm2am_an_28C,  /* index 26 */
   ATL_zrm2am_an_2x12C,  /* index 27 */
   ATL_zrm2am_an_28C,  /* index 28 */
   ATL_zrm2am_an_2x12C,  /* index 29 */
   ATL_zrm2am_an_28C,  /* index 30 */
   ATL_zrm2am_an_2x12C,  /* index 31 */
   ATL_zrm2am_an_28C,  /* index 32 */
   ATL_zrm2am_an_2x12C,  /* index 33 */
   ATL_zrm2am_an_28C,  /* index 34 */
   ATL_zrm2am_an_2x12C,  /* index 35 */
   ATL_zrm2am_an_28C,  /* index 36 */
   ATL_zrm2am_an_2x12C,  /* index 37 */
   ATL_zrm2am_an_28C,  /* index 38 */
   ATL_zrm2am_an_2x12C,  /* index 39 */
   ATL_zrm2am_an_28C,  /* index 40 */
   ATL_zrm2am_an_2x12C,  /* index 41 */
   ATL_zrm2am_an_28C,  /* index 42 */
   ATL_zrm2am_an_2x12C,  /* index 43 */
   ATL_zrm2am_an_28C,  /* index 44 */
   ATL_zrm2am_an_2x12C,  /* index 45 */
   ATL_zrm2am_an_28C,  /* index 46 */
   ATL_zrm2am_an_2x12C,  /* index 47 */
   ATL_zrm2am_an_28C,  /* index 48 */
   ATL_zrm2am_an_2x12C,  /* index 49 */
   ATL_zrm2am_an_28C,  /* index 50 */
   ATL_zrm2am_an_2x12C,  /* index 51 */
   ATL_zrm2am_an_28C,  /* index 52 */
   ATL_zrm2am_an_2x12C,  /* index 53 */
   ATL_zrm2am_an_28C,  /* index 54 */
   ATL_zrm2am_an_2x12C,  /* index 55 */
   ATL_zrm2am_an_28C,  /* index 56 */
   ATL_zrm2am_an_2x12C,  /* index 57 */
   ATL_zrm2am_an_28C,  /* index 58 */
   ATL_zrm2am_an_2x12C,  /* index 59 */
   ATL_zrm2am_an_28C,  /* index 60 */
   ATL_zrm2am_an_2x12C,  /* index 61 */
   ATL_zrm2am_an_28C,  /* index 62 */
   ATL_zrm2am_an_2x12C,  /* index 63 */
   ATL_zrm2am_an_28C,  /* index 64 */
   ATL_zrm2am_an_2x12C,  /* index 65 */
   ATL_zrm2am_an_28C,  /* index 66 */
   ATL_zrm2am_an_2x12C,  /* index 67 */
   ATL_zrm2am_an_28C,  /* index 68 */
   ATL_zrm2am_an_2x12C,  /* index 69 */
   ATL_zrm2am_an_28C,  /* index 70 */
   ATL_zrm2am_an_2x12C,  /* index 71 */
   ATL_zrm2am_an_28C,  /* index 72 */
   ATL_zrm2am_an_2x12C,  /* index 73 */
   ATL_zrm2am_an_28C,  /* index 74 */
   ATL_zrm2am_an_2x12C,  /* index 75 */
   ATL_zrm2am_an_28C,  /* index 76 */
   ATL_zrm2am_an_2x12C,  /* index 77 */
   ATL_zrm2am_an_28C,  /* index 78 */
   ATL_zrm2am_an_2x12C,  /* index 79 */
   ATL_zrm2am_an_28C,  /* index 80 */
   ATL_zrm2am_an_2x12C,  /* index 81 */
   ATL_zrm2am_an_28C,  /* index 82 */
   ATL_zrm2am_an_2x12C,  /* index 83 */
   ATL_zrm2am_an_28C,  /* index 84 */
   ATL_zrm2am_an_2x12C,  /* index 85 */
   ATL_zrm2am_an_28C,  /* index 86 */
   ATL_zrm2am_an_2x12C,  /* index 87 */
   ATL_zrm2am_an_28C,  /* index 88 */
   ATL_zrm2am_an_2x12C,  /* index 89 */
   ATL_zrm2am_an_28C,  /* index 90 */
   ATL_zrm2am_an_2x12C,  /* index 91 */
   ATL_zrm2am_an_28C,  /* index 92 */
   ATL_zrm2am_an_2x12C,  /* index 93 */
   ATL_zrm2am_an_28C,  /* index 94 */
   ATL_zrm2am_an_2x12C,  /* index 95 */
   ATL_zrm2am_an_28C,  /* index 96 */
   ATL_zrm2am_an_2x12C,  /* index 97 */
   ATL_zrm2am_an_28C,  /* index 98 */
   ATL_zrm2am_an_2x12C,  /* index 99 */
   ATL_zrm2am_an_28C,  /* index 100 */
   ATL_zrm2am_an_2x12C,  /* index 101 */
   ATL_zrm2am_an_28C,  /* index 102 */
   ATL_zrm2am_an_2x12C,  /* index 103 */
   ATL_zrm2am_an_28C,  /* index 104 */
   ATL_zrm2am_an_2x12C,  /* index 105 */
   ATL_zrm2am_an_28C,  /* index 106 */
   ATL_zrm2am_an_2x12C,  /* index 107 */
   ATL_zrm2am_an_28C,  /* index 108 */
   ATL_zrm2am_an_2x12C,  /* index 109 */
   ATL_zrm2am_an_28C,  /* index 110 */
   ATL_zrm2am_an_2x12C,  /* index 111 */
   ATL_zrm2am_an_28C,  /* index 112 */
   ATL_zrm2am_an_2x12C,  /* index 113 */
   ATL_zrm2am_an_28C,  /* index 114 */
   ATL_zrm2am_an_2x12C,  /* index 115 */
   ATL_zrm2am_an_28C,  /* index 116 */
   ATL_zrm2am_an_2x12C,  /* index 117 */
   ATL_zrm2am_an_28C,  /* index 118 */
   ATL_zrm2am_an_2x12C,  /* index 119 */
   ATL_zrm2am_an_28C,  /* index 120 */
   ATL_zrm2am_an_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_BC2BLK_an[122] =
{
   ATL_zcm2am_an_1C,  /* index 0 */
   ATL_zcm2am_an_1C,  /* index 1 */
   ATL_zcm2am_an_1C,  /* index 2 */
   ATL_zcm2am_an_1C,  /* index 3 */
   ATL_zcm2am_an_1C,  /* index 4 */
   ATL_zcm2am_an_1C,  /* index 5 */
   ATL_zcm2am_an_1C,  /* index 6 */
   ATL_zcm2am_an_2x1C,  /* index 7 */
   ATL_zcm2am_an_1C,  /* index 8 */
   ATL_zcm2am_an_1C,  /* index 9 */
   ATL_zcm2am_an_1C,  /* index 10 */
   ATL_zcm2am_an_2x1C,  /* index 11 */
   ATL_zcm2am_an_1C,  /* index 12 */
   ATL_zcm2am_an_1C,  /* index 13 */
   ATL_zcm2am_an_1C,  /* index 14 */
   ATL_zcm2am_an_2x1C,  /* index 15 */
   ATL_zcm2am_an_1C,  /* index 16 */
   ATL_zcm2am_an_2x1C,  /* index 17 */
   ATL_zcm2am_an_1C,  /* index 18 */
   ATL_zcm2am_an_2x1C,  /* index 19 */
   ATL_zcm2am_an_1C,  /* index 20 */
   ATL_zcm2am_an_1C,  /* index 21 */
   ATL_zcm2am_an_1C,  /* index 22 */
   ATL_zcm2am_an_2x1C,  /* index 23 */
   ATL_zcm2am_an_1C,  /* index 24 */
   ATL_zcm2am_an_2x1C,  /* index 25 */
   ATL_zcm2am_an_1C,  /* index 26 */
   ATL_zcm2am_an_2x1C,  /* index 27 */
   ATL_zcm2am_an_1C,  /* index 28 */
   ATL_zcm2am_an_2x1C,  /* index 29 */
   ATL_zcm2am_an_1C,  /* index 30 */
   ATL_zcm2am_an_2x1C,  /* index 31 */
   ATL_zcm2am_an_1C,  /* index 32 */
   ATL_zcm2am_an_2x1C,  /* index 33 */
   ATL_zcm2am_an_1C,  /* index 34 */
   ATL_zcm2am_an_2x1C,  /* index 35 */
   ATL_zcm2am_an_1C,  /* index 36 */
   ATL_zcm2am_an_2x1C,  /* index 37 */
   ATL_zcm2am_an_1C,  /* index 38 */
   ATL_zcm2am_an_2x1C,  /* index 39 */
   ATL_zcm2am_an_1C,  /* index 40 */
   ATL_zcm2am_an_2x1C,  /* index 41 */
   ATL_zcm2am_an_1C,  /* index 42 */
   ATL_zcm2am_an_2x1C,  /* index 43 */
   ATL_zcm2am_an_1C,  /* index 44 */
   ATL_zcm2am_an_2x1C,  /* index 45 */
   ATL_zcm2am_an_1C,  /* index 46 */
   ATL_zcm2am_an_2x1C,  /* index 47 */
   ATL_zcm2am_an_1C,  /* index 48 */
   ATL_zcm2am_an_2x1C,  /* index 49 */
   ATL_zcm2am_an_1C,  /* index 50 */
   ATL_zcm2am_an_2x1C,  /* index 51 */
   ATL_zcm2am_an_1C,  /* index 52 */
   ATL_zcm2am_an_2x1C,  /* index 53 */
   ATL_zcm2am_an_1C,  /* index 54 */
   ATL_zcm2am_an_2x1C,  /* index 55 */
   ATL_zcm2am_an_1C,  /* index 56 */
   ATL_zcm2am_an_2x1C,  /* index 57 */
   ATL_zcm2am_an_1C,  /* index 58 */
   ATL_zcm2am_an_2x1C,  /* index 59 */
   ATL_zcm2am_an_1C,  /* index 60 */
   ATL_zcm2am_an_2x1C,  /* index 61 */
   ATL_zcm2am_an_1C,  /* index 62 */
   ATL_zcm2am_an_2x1C,  /* index 63 */
   ATL_zcm2am_an_1C,  /* index 64 */
   ATL_zcm2am_an_2x1C,  /* index 65 */
   ATL_zcm2am_an_1C,  /* index 66 */
   ATL_zcm2am_an_2x1C,  /* index 67 */
   ATL_zcm2am_an_1C,  /* index 68 */
   ATL_zcm2am_an_2x1C,  /* index 69 */
   ATL_zcm2am_an_1C,  /* index 70 */
   ATL_zcm2am_an_2x1C,  /* index 71 */
   ATL_zcm2am_an_1C,  /* index 72 */
   ATL_zcm2am_an_2x1C,  /* index 73 */
   ATL_zcm2am_an_1C,  /* index 74 */
   ATL_zcm2am_an_2x1C,  /* index 75 */
   ATL_zcm2am_an_1C,  /* index 76 */
   ATL_zcm2am_an_2x1C,  /* index 77 */
   ATL_zcm2am_an_1C,  /* index 78 */
   ATL_zcm2am_an_2x1C,  /* index 79 */
   ATL_zcm2am_an_1C,  /* index 80 */
   ATL_zcm2am_an_2x1C,  /* index 81 */
   ATL_zcm2am_an_1C,  /* index 82 */
   ATL_zcm2am_an_2x1C,  /* index 83 */
   ATL_zcm2am_an_1C,  /* index 84 */
   ATL_zcm2am_an_2x1C,  /* index 85 */
   ATL_zcm2am_an_1C,  /* index 86 */
   ATL_zcm2am_an_2x1C,  /* index 87 */
   ATL_zcm2am_an_1C,  /* index 88 */
   ATL_zcm2am_an_2x1C,  /* index 89 */
   ATL_zcm2am_an_1C,  /* index 90 */
   ATL_zcm2am_an_2x1C,  /* index 91 */
   ATL_zcm2am_an_1C,  /* index 92 */
   ATL_zcm2am_an_2x1C,  /* index 93 */
   ATL_zcm2am_an_1C,  /* index 94 */
   ATL_zcm2am_an_2x1C,  /* index 95 */
   ATL_zcm2am_an_1C,  /* index 96 */
   ATL_zcm2am_an_2x1C,  /* index 97 */
   ATL_zcm2am_an_1C,  /* index 98 */
   ATL_zcm2am_an_2x1C,  /* index 99 */
   ATL_zcm2am_an_1C,  /* index 100 */
   ATL_zcm2am_an_2x1C,  /* index 101 */
   ATL_zcm2am_an_1C,  /* index 102 */
   ATL_zcm2am_an_2x1C,  /* index 103 */
   ATL_zcm2am_an_1C,  /* index 104 */
   ATL_zcm2am_an_2x1C,  /* index 105 */
   ATL_zcm2am_an_1C,  /* index 106 */
   ATL_zcm2am_an_2x1C,  /* index 107 */
   ATL_zcm2am_an_1C,  /* index 108 */
   ATL_zcm2am_an_2x1C,  /* index 109 */
   ATL_zcm2am_an_1C,  /* index 110 */
   ATL_zcm2am_an_2x1C,  /* index 111 */
   ATL_zcm2am_an_1C,  /* index 112 */
   ATL_zcm2am_an_2x1C,  /* index 113 */
   ATL_zcm2am_an_1C,  /* index 114 */
   ATL_zcm2am_an_2x1C,  /* index 115 */
   ATL_zcm2am_an_1C,  /* index 116 */
   ATL_zcm2am_an_2x1C,  /* index 117 */
   ATL_zcm2am_an_1C,  /* index 118 */
   ATL_zcm2am_an_2x1C,  /* index 119 */
   ATL_zcm2am_an_1C,  /* index 120 */
   ATL_zcm2am_an_2x1C   /* index 121 */
};

static const cm2am_t ATL_RKK_BH2BLK_an[122] =
{
   ATL_zrm2am_an_1C,  /* index 0 */
   ATL_zrm2am_an_1C,  /* index 1 */
   ATL_zrm2am_an_1C,  /* index 2 */
   ATL_zrm2am_an_1C,  /* index 3 */
   ATL_zrm2am_an_1C,  /* index 4 */
   ATL_zrm2am_an_1C,  /* index 5 */
   ATL_zrm2am_an_1C,  /* index 6 */
   ATL_zrm2am_an_2x1C,  /* index 7 */
   ATL_zrm2am_an_1C,  /* index 8 */
   ATL_zrm2am_an_1C,  /* index 9 */
   ATL_zrm2am_an_1C,  /* index 10 */
   ATL_zrm2am_an_2x1C,  /* index 11 */
   ATL_zrm2am_an_1C,  /* index 12 */
   ATL_zrm2am_an_1C,  /* index 13 */
   ATL_zrm2am_an_1C,  /* index 14 */
   ATL_zrm2am_an_2x1C,  /* index 15 */
   ATL_zrm2am_an_1C,  /* index 16 */
   ATL_zrm2am_an_2x1C,  /* index 17 */
   ATL_zrm2am_an_1C,  /* index 18 */
   ATL_zrm2am_an_2x1C,  /* index 19 */
   ATL_zrm2am_an_1C,  /* index 20 */
   ATL_zrm2am_an_1C,  /* index 21 */
   ATL_zrm2am_an_1C,  /* index 22 */
   ATL_zrm2am_an_2x1C,  /* index 23 */
   ATL_zrm2am_an_1C,  /* index 24 */
   ATL_zrm2am_an_2x1C,  /* index 25 */
   ATL_zrm2am_an_1C,  /* index 26 */
   ATL_zrm2am_an_2x1C,  /* index 27 */
   ATL_zrm2am_an_1C,  /* index 28 */
   ATL_zrm2am_an_2x1C,  /* index 29 */
   ATL_zrm2am_an_1C,  /* index 30 */
   ATL_zrm2am_an_2x1C,  /* index 31 */
   ATL_zrm2am_an_1C,  /* index 32 */
   ATL_zrm2am_an_2x1C,  /* index 33 */
   ATL_zrm2am_an_1C,  /* index 34 */
   ATL_zrm2am_an_2x1C,  /* index 35 */
   ATL_zrm2am_an_1C,  /* index 36 */
   ATL_zrm2am_an_2x1C,  /* index 37 */
   ATL_zrm2am_an_1C,  /* index 38 */
   ATL_zrm2am_an_2x1C,  /* index 39 */
   ATL_zrm2am_an_1C,  /* index 40 */
   ATL_zrm2am_an_2x1C,  /* index 41 */
   ATL_zrm2am_an_1C,  /* index 42 */
   ATL_zrm2am_an_2x1C,  /* index 43 */
   ATL_zrm2am_an_1C,  /* index 44 */
   ATL_zrm2am_an_2x1C,  /* index 45 */
   ATL_zrm2am_an_1C,  /* index 46 */
   ATL_zrm2am_an_2x1C,  /* index 47 */
   ATL_zrm2am_an_1C,  /* index 48 */
   ATL_zrm2am_an_2x1C,  /* index 49 */
   ATL_zrm2am_an_1C,  /* index 50 */
   ATL_zrm2am_an_2x1C,  /* index 51 */
   ATL_zrm2am_an_1C,  /* index 52 */
   ATL_zrm2am_an_2x1C,  /* index 53 */
   ATL_zrm2am_an_1C,  /* index 54 */
   ATL_zrm2am_an_2x1C,  /* index 55 */
   ATL_zrm2am_an_1C,  /* index 56 */
   ATL_zrm2am_an_2x1C,  /* index 57 */
   ATL_zrm2am_an_1C,  /* index 58 */
   ATL_zrm2am_an_2x1C,  /* index 59 */
   ATL_zrm2am_an_1C,  /* index 60 */
   ATL_zrm2am_an_2x1C,  /* index 61 */
   ATL_zrm2am_an_1C,  /* index 62 */
   ATL_zrm2am_an_2x1C,  /* index 63 */
   ATL_zrm2am_an_1C,  /* index 64 */
   ATL_zrm2am_an_2x1C,  /* index 65 */
   ATL_zrm2am_an_1C,  /* index 66 */
   ATL_zrm2am_an_2x1C,  /* index 67 */
   ATL_zrm2am_an_1C,  /* index 68 */
   ATL_zrm2am_an_2x1C,  /* index 69 */
   ATL_zrm2am_an_1C,  /* index 70 */
   ATL_zrm2am_an_2x1C,  /* index 71 */
   ATL_zrm2am_an_1C,  /* index 72 */
   ATL_zrm2am_an_2x1C,  /* index 73 */
   ATL_zrm2am_an_1C,  /* index 74 */
   ATL_zrm2am_an_2x1C,  /* index 75 */
   ATL_zrm2am_an_1C,  /* index 76 */
   ATL_zrm2am_an_2x1C,  /* index 77 */
   ATL_zrm2am_an_1C,  /* index 78 */
   ATL_zrm2am_an_2x1C,  /* index 79 */
   ATL_zrm2am_an_1C,  /* index 80 */
   ATL_zrm2am_an_2x1C,  /* index 81 */
   ATL_zrm2am_an_1C,  /* index 82 */
   ATL_zrm2am_an_2x1C,  /* index 83 */
   ATL_zrm2am_an_1C,  /* index 84 */
   ATL_zrm2am_an_2x1C,  /* index 85 */
   ATL_zrm2am_an_1C,  /* index 86 */
   ATL_zrm2am_an_2x1C,  /* index 87 */
   ATL_zrm2am_an_1C,  /* index 88 */
   ATL_zrm2am_an_2x1C,  /* index 89 */
   ATL_zrm2am_an_1C,  /* index 90 */
   ATL_zrm2am_an_2x1C,  /* index 91 */
   ATL_zrm2am_an_1C,  /* index 92 */
   ATL_zrm2am_an_2x1C,  /* index 93 */
   ATL_zrm2am_an_1C,  /* index 94 */
   ATL_zrm2am_an_2x1C,  /* index 95 */
   ATL_zrm2am_an_1C,  /* index 96 */
   ATL_zrm2am_an_2x1C,  /* index 97 */
   ATL_zrm2am_an_1C,  /* index 98 */
   ATL_zrm2am_an_2x1C,  /* index 99 */
   ATL_zrm2am_an_1C,  /* index 100 */
   ATL_zrm2am_an_2x1C,  /* index 101 */
   ATL_zrm2am_an_1C,  /* index 102 */
   ATL_zrm2am_an_2x1C,  /* index 103 */
   ATL_zrm2am_an_1C,  /* index 104 */
   ATL_zrm2am_an_2x1C,  /* index 105 */
   ATL_zrm2am_an_1C,  /* index 106 */
   ATL_zrm2am_an_2x1C,  /* index 107 */
   ATL_zrm2am_an_1C,  /* index 108 */
   ATL_zrm2am_an_2x1C,  /* index 109 */
   ATL_zrm2am_an_1C,  /* index 110 */
   ATL_zrm2am_an_2x1C,  /* index 111 */
   ATL_zrm2am_an_1C,  /* index 112 */
   ATL_zrm2am_an_2x1C,  /* index 113 */
   ATL_zrm2am_an_1C,  /* index 114 */
   ATL_zrm2am_an_2x1C,  /* index 115 */
   ATL_zrm2am_an_1C,  /* index 116 */
   ATL_zrm2am_an_2x1C,  /* index 117 */
   ATL_zrm2am_an_1C,  /* index 118 */
   ATL_zrm2am_an_2x1C,  /* index 119 */
   ATL_zrm2am_an_1C,  /* index 120 */
   ATL_zrm2am_an_2x1C   /* index 121 */
};


static const cm2am_t ATL_RKK_A2BLK_aX[122] =
{
   ATL_zcm2am_aX_28,  /* index 0 */
   ATL_zcm2am_aX_28,  /* index 1 */
   ATL_zcm2am_aX_28,  /* index 2 */
   ATL_zcm2am_aX_28,  /* index 3 */
   ATL_zcm2am_aX_28,  /* index 4 */
   ATL_zcm2am_aX_28,  /* index 5 */
   ATL_zcm2am_aX_28,  /* index 6 */
   ATL_zcm2am_aX_2x8,  /* index 7 */
   ATL_zcm2am_aX_28,  /* index 8 */
   ATL_zcm2am_aX_28,  /* index 9 */
   ATL_zcm2am_aX_28,  /* index 10 */
   ATL_zcm2am_aX_2x12,  /* index 11 */
   ATL_zcm2am_aX_28,  /* index 12 */
   ATL_zcm2am_aX_28,  /* index 13 */
   ATL_zcm2am_aX_28,  /* index 14 */
   ATL_zcm2am_aX_2x12,  /* index 15 */
   ATL_zcm2am_aX_28,  /* index 16 */
   ATL_zcm2am_aX_2x12,  /* index 17 */
   ATL_zcm2am_aX_28,  /* index 18 */
   ATL_zcm2am_aX_2x12,  /* index 19 */
   ATL_zcm2am_aX_28,  /* index 20 */
   ATL_zcm2am_aX_28,  /* index 21 */
   ATL_zcm2am_aX_28,  /* index 22 */
   ATL_zcm2am_aX_2x12,  /* index 23 */
   ATL_zcm2am_aX_28,  /* index 24 */
   ATL_zcm2am_aX_2x12,  /* index 25 */
   ATL_zcm2am_aX_28,  /* index 26 */
   ATL_zcm2am_aX_2x12,  /* index 27 */
   ATL_zcm2am_aX_28,  /* index 28 */
   ATL_zcm2am_aX_2x12,  /* index 29 */
   ATL_zcm2am_aX_28,  /* index 30 */
   ATL_zcm2am_aX_2x12,  /* index 31 */
   ATL_zcm2am_aX_28,  /* index 32 */
   ATL_zcm2am_aX_2x12,  /* index 33 */
   ATL_zcm2am_aX_28,  /* index 34 */
   ATL_zcm2am_aX_2x12,  /* index 35 */
   ATL_zcm2am_aX_28,  /* index 36 */
   ATL_zcm2am_aX_2x12,  /* index 37 */
   ATL_zcm2am_aX_28,  /* index 38 */
   ATL_zcm2am_aX_2x12,  /* index 39 */
   ATL_zcm2am_aX_28,  /* index 40 */
   ATL_zcm2am_aX_2x12,  /* index 41 */
   ATL_zcm2am_aX_28,  /* index 42 */
   ATL_zcm2am_aX_2x12,  /* index 43 */
   ATL_zcm2am_aX_28,  /* index 44 */
   ATL_zcm2am_aX_2x12,  /* index 45 */
   ATL_zcm2am_aX_28,  /* index 46 */
   ATL_zcm2am_aX_2x12,  /* index 47 */
   ATL_zcm2am_aX_28,  /* index 48 */
   ATL_zcm2am_aX_2x12,  /* index 49 */
   ATL_zcm2am_aX_28,  /* index 50 */
   ATL_zcm2am_aX_2x12,  /* index 51 */
   ATL_zcm2am_aX_28,  /* index 52 */
   ATL_zcm2am_aX_2x12,  /* index 53 */
   ATL_zcm2am_aX_28,  /* index 54 */
   ATL_zcm2am_aX_2x12,  /* index 55 */
   ATL_zcm2am_aX_28,  /* index 56 */
   ATL_zcm2am_aX_2x12,  /* index 57 */
   ATL_zcm2am_aX_28,  /* index 58 */
   ATL_zcm2am_aX_2x12,  /* index 59 */
   ATL_zcm2am_aX_28,  /* index 60 */
   ATL_zcm2am_aX_2x12,  /* index 61 */
   ATL_zcm2am_aX_28,  /* index 62 */
   ATL_zcm2am_aX_2x12,  /* index 63 */
   ATL_zcm2am_aX_28,  /* index 64 */
   ATL_zcm2am_aX_2x12,  /* index 65 */
   ATL_zcm2am_aX_28,  /* index 66 */
   ATL_zcm2am_aX_2x12,  /* index 67 */
   ATL_zcm2am_aX_28,  /* index 68 */
   ATL_zcm2am_aX_2x12,  /* index 69 */
   ATL_zcm2am_aX_28,  /* index 70 */
   ATL_zcm2am_aX_2x12,  /* index 71 */
   ATL_zcm2am_aX_28,  /* index 72 */
   ATL_zcm2am_aX_2x12,  /* index 73 */
   ATL_zcm2am_aX_28,  /* index 74 */
   ATL_zcm2am_aX_2x12,  /* index 75 */
   ATL_zcm2am_aX_28,  /* index 76 */
   ATL_zcm2am_aX_2x12,  /* index 77 */
   ATL_zcm2am_aX_28,  /* index 78 */
   ATL_zcm2am_aX_2x12,  /* index 79 */
   ATL_zcm2am_aX_28,  /* index 80 */
   ATL_zcm2am_aX_2x12,  /* index 81 */
   ATL_zcm2am_aX_28,  /* index 82 */
   ATL_zcm2am_aX_2x12,  /* index 83 */
   ATL_zcm2am_aX_28,  /* index 84 */
   ATL_zcm2am_aX_2x12,  /* index 85 */
   ATL_zcm2am_aX_28,  /* index 86 */
   ATL_zcm2am_aX_2x12,  /* index 87 */
   ATL_zcm2am_aX_28,  /* index 88 */
   ATL_zcm2am_aX_2x12,  /* index 89 */
   ATL_zcm2am_aX_28,  /* index 90 */
   ATL_zcm2am_aX_2x12,  /* index 91 */
   ATL_zcm2am_aX_28,  /* index 92 */
   ATL_zcm2am_aX_2x12,  /* index 93 */
   ATL_zcm2am_aX_28,  /* index 94 */
   ATL_zcm2am_aX_2x12,  /* index 95 */
   ATL_zcm2am_aX_28,  /* index 96 */
   ATL_zcm2am_aX_2x12,  /* index 97 */
   ATL_zcm2am_aX_28,  /* index 98 */
   ATL_zcm2am_aX_2x12,  /* index 99 */
   ATL_zcm2am_aX_28,  /* index 100 */
   ATL_zcm2am_aX_2x12,  /* index 101 */
   ATL_zcm2am_aX_28,  /* index 102 */
   ATL_zcm2am_aX_2x12,  /* index 103 */
   ATL_zcm2am_aX_28,  /* index 104 */
   ATL_zcm2am_aX_2x12,  /* index 105 */
   ATL_zcm2am_aX_28,  /* index 106 */
   ATL_zcm2am_aX_2x12,  /* index 107 */
   ATL_zcm2am_aX_28,  /* index 108 */
   ATL_zcm2am_aX_2x12,  /* index 109 */
   ATL_zcm2am_aX_28,  /* index 110 */
   ATL_zcm2am_aX_2x12,  /* index 111 */
   ATL_zcm2am_aX_28,  /* index 112 */
   ATL_zcm2am_aX_2x12,  /* index 113 */
   ATL_zcm2am_aX_28,  /* index 114 */
   ATL_zcm2am_aX_2x12,  /* index 115 */
   ATL_zcm2am_aX_28,  /* index 116 */
   ATL_zcm2am_aX_2x12,  /* index 117 */
   ATL_zcm2am_aX_28,  /* index 118 */
   ATL_zcm2am_aX_2x12,  /* index 119 */
   ATL_zcm2am_aX_28,  /* index 120 */
   ATL_zcm2am_aX_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_AT2BLK_aX[122] =
{
   ATL_zrm2am_aX_28,  /* index 0 */
   ATL_zrm2am_aX_28,  /* index 1 */
   ATL_zrm2am_aX_28,  /* index 2 */
   ATL_zrm2am_aX_28,  /* index 3 */
   ATL_zrm2am_aX_28,  /* index 4 */
   ATL_zrm2am_aX_28,  /* index 5 */
   ATL_zrm2am_aX_28,  /* index 6 */
   ATL_zrm2am_aX_2x8,  /* index 7 */
   ATL_zrm2am_aX_28,  /* index 8 */
   ATL_zrm2am_aX_28,  /* index 9 */
   ATL_zrm2am_aX_28,  /* index 10 */
   ATL_zrm2am_aX_2x12,  /* index 11 */
   ATL_zrm2am_aX_28,  /* index 12 */
   ATL_zrm2am_aX_28,  /* index 13 */
   ATL_zrm2am_aX_28,  /* index 14 */
   ATL_zrm2am_aX_2x12,  /* index 15 */
   ATL_zrm2am_aX_28,  /* index 16 */
   ATL_zrm2am_aX_2x12,  /* index 17 */
   ATL_zrm2am_aX_28,  /* index 18 */
   ATL_zrm2am_aX_2x12,  /* index 19 */
   ATL_zrm2am_aX_28,  /* index 20 */
   ATL_zrm2am_aX_28,  /* index 21 */
   ATL_zrm2am_aX_28,  /* index 22 */
   ATL_zrm2am_aX_2x12,  /* index 23 */
   ATL_zrm2am_aX_28,  /* index 24 */
   ATL_zrm2am_aX_2x12,  /* index 25 */
   ATL_zrm2am_aX_28,  /* index 26 */
   ATL_zrm2am_aX_2x12,  /* index 27 */
   ATL_zrm2am_aX_28,  /* index 28 */
   ATL_zrm2am_aX_2x12,  /* index 29 */
   ATL_zrm2am_aX_28,  /* index 30 */
   ATL_zrm2am_aX_2x12,  /* index 31 */
   ATL_zrm2am_aX_28,  /* index 32 */
   ATL_zrm2am_aX_2x12,  /* index 33 */
   ATL_zrm2am_aX_28,  /* index 34 */
   ATL_zrm2am_aX_2x12,  /* index 35 */
   ATL_zrm2am_aX_28,  /* index 36 */
   ATL_zrm2am_aX_2x12,  /* index 37 */
   ATL_zrm2am_aX_28,  /* index 38 */
   ATL_zrm2am_aX_2x12,  /* index 39 */
   ATL_zrm2am_aX_28,  /* index 40 */
   ATL_zrm2am_aX_2x12,  /* index 41 */
   ATL_zrm2am_aX_28,  /* index 42 */
   ATL_zrm2am_aX_2x12,  /* index 43 */
   ATL_zrm2am_aX_28,  /* index 44 */
   ATL_zrm2am_aX_2x12,  /* index 45 */
   ATL_zrm2am_aX_28,  /* index 46 */
   ATL_zrm2am_aX_2x12,  /* index 47 */
   ATL_zrm2am_aX_28,  /* index 48 */
   ATL_zrm2am_aX_2x12,  /* index 49 */
   ATL_zrm2am_aX_28,  /* index 50 */
   ATL_zrm2am_aX_2x12,  /* index 51 */
   ATL_zrm2am_aX_28,  /* index 52 */
   ATL_zrm2am_aX_2x12,  /* index 53 */
   ATL_zrm2am_aX_28,  /* index 54 */
   ATL_zrm2am_aX_2x12,  /* index 55 */
   ATL_zrm2am_aX_28,  /* index 56 */
   ATL_zrm2am_aX_2x12,  /* index 57 */
   ATL_zrm2am_aX_28,  /* index 58 */
   ATL_zrm2am_aX_2x12,  /* index 59 */
   ATL_zrm2am_aX_28,  /* index 60 */
   ATL_zrm2am_aX_2x12,  /* index 61 */
   ATL_zrm2am_aX_28,  /* index 62 */
   ATL_zrm2am_aX_2x12,  /* index 63 */
   ATL_zrm2am_aX_28,  /* index 64 */
   ATL_zrm2am_aX_2x12,  /* index 65 */
   ATL_zrm2am_aX_28,  /* index 66 */
   ATL_zrm2am_aX_2x12,  /* index 67 */
   ATL_zrm2am_aX_28,  /* index 68 */
   ATL_zrm2am_aX_2x12,  /* index 69 */
   ATL_zrm2am_aX_28,  /* index 70 */
   ATL_zrm2am_aX_2x12,  /* index 71 */
   ATL_zrm2am_aX_28,  /* index 72 */
   ATL_zrm2am_aX_2x12,  /* index 73 */
   ATL_zrm2am_aX_28,  /* index 74 */
   ATL_zrm2am_aX_2x12,  /* index 75 */
   ATL_zrm2am_aX_28,  /* index 76 */
   ATL_zrm2am_aX_2x12,  /* index 77 */
   ATL_zrm2am_aX_28,  /* index 78 */
   ATL_zrm2am_aX_2x12,  /* index 79 */
   ATL_zrm2am_aX_28,  /* index 80 */
   ATL_zrm2am_aX_2x12,  /* index 81 */
   ATL_zrm2am_aX_28,  /* index 82 */
   ATL_zrm2am_aX_2x12,  /* index 83 */
   ATL_zrm2am_aX_28,  /* index 84 */
   ATL_zrm2am_aX_2x12,  /* index 85 */
   ATL_zrm2am_aX_28,  /* index 86 */
   ATL_zrm2am_aX_2x12,  /* index 87 */
   ATL_zrm2am_aX_28,  /* index 88 */
   ATL_zrm2am_aX_2x12,  /* index 89 */
   ATL_zrm2am_aX_28,  /* index 90 */
   ATL_zrm2am_aX_2x12,  /* index 91 */
   ATL_zrm2am_aX_28,  /* index 92 */
   ATL_zrm2am_aX_2x12,  /* index 93 */
   ATL_zrm2am_aX_28,  /* index 94 */
   ATL_zrm2am_aX_2x12,  /* index 95 */
   ATL_zrm2am_aX_28,  /* index 96 */
   ATL_zrm2am_aX_2x12,  /* index 97 */
   ATL_zrm2am_aX_28,  /* index 98 */
   ATL_zrm2am_aX_2x12,  /* index 99 */
   ATL_zrm2am_aX_28,  /* index 100 */
   ATL_zrm2am_aX_2x12,  /* index 101 */
   ATL_zrm2am_aX_28,  /* index 102 */
   ATL_zrm2am_aX_2x12,  /* index 103 */
   ATL_zrm2am_aX_28,  /* index 104 */
   ATL_zrm2am_aX_2x12,  /* index 105 */
   ATL_zrm2am_aX_28,  /* index 106 */
   ATL_zrm2am_aX_2x12,  /* index 107 */
   ATL_zrm2am_aX_28,  /* index 108 */
   ATL_zrm2am_aX_2x12,  /* index 109 */
   ATL_zrm2am_aX_28,  /* index 110 */
   ATL_zrm2am_aX_2x12,  /* index 111 */
   ATL_zrm2am_aX_28,  /* index 112 */
   ATL_zrm2am_aX_2x12,  /* index 113 */
   ATL_zrm2am_aX_28,  /* index 114 */
   ATL_zrm2am_aX_2x12,  /* index 115 */
   ATL_zrm2am_aX_28,  /* index 116 */
   ATL_zrm2am_aX_2x12,  /* index 117 */
   ATL_zrm2am_aX_28,  /* index 118 */
   ATL_zrm2am_aX_2x12,  /* index 119 */
   ATL_zrm2am_aX_28,  /* index 120 */
   ATL_zrm2am_aX_2x12   /* index 121 */
};

static const cm2am_t ATL_RKK_B2BLK_aX[122] =
{
   ATL_zcm2am_aX_1,  /* index 0 */
   ATL_zcm2am_aX_1,  /* index 1 */
   ATL_zcm2am_aX_1,  /* index 2 */
   ATL_zcm2am_aX_1,  /* index 3 */
   ATL_zcm2am_aX_1,  /* index 4 */
   ATL_zcm2am_aX_1,  /* index 5 */
   ATL_zcm2am_aX_1,  /* index 6 */
   ATL_zcm2am_aX_2x1,  /* index 7 */
   ATL_zcm2am_aX_1,  /* index 8 */
   ATL_zcm2am_aX_1,  /* index 9 */
   ATL_zcm2am_aX_1,  /* index 10 */
   ATL_zcm2am_aX_2x1,  /* index 11 */
   ATL_zcm2am_aX_1,  /* index 12 */
   ATL_zcm2am_aX_1,  /* index 13 */
   ATL_zcm2am_aX_1,  /* index 14 */
   ATL_zcm2am_aX_2x1,  /* index 15 */
   ATL_zcm2am_aX_1,  /* index 16 */
   ATL_zcm2am_aX_2x1,  /* index 17 */
   ATL_zcm2am_aX_1,  /* index 18 */
   ATL_zcm2am_aX_2x1,  /* index 19 */
   ATL_zcm2am_aX_1,  /* index 20 */
   ATL_zcm2am_aX_1,  /* index 21 */
   ATL_zcm2am_aX_1,  /* index 22 */
   ATL_zcm2am_aX_2x1,  /* index 23 */
   ATL_zcm2am_aX_1,  /* index 24 */
   ATL_zcm2am_aX_2x1,  /* index 25 */
   ATL_zcm2am_aX_1,  /* index 26 */
   ATL_zcm2am_aX_2x1,  /* index 27 */
   ATL_zcm2am_aX_1,  /* index 28 */
   ATL_zcm2am_aX_2x1,  /* index 29 */
   ATL_zcm2am_aX_1,  /* index 30 */
   ATL_zcm2am_aX_2x1,  /* index 31 */
   ATL_zcm2am_aX_1,  /* index 32 */
   ATL_zcm2am_aX_2x1,  /* index 33 */
   ATL_zcm2am_aX_1,  /* index 34 */
   ATL_zcm2am_aX_2x1,  /* index 35 */
   ATL_zcm2am_aX_1,  /* index 36 */
   ATL_zcm2am_aX_2x1,  /* index 37 */
   ATL_zcm2am_aX_1,  /* index 38 */
   ATL_zcm2am_aX_2x1,  /* index 39 */
   ATL_zcm2am_aX_1,  /* index 40 */
   ATL_zcm2am_aX_2x1,  /* index 41 */
   ATL_zcm2am_aX_1,  /* index 42 */
   ATL_zcm2am_aX_2x1,  /* index 43 */
   ATL_zcm2am_aX_1,  /* index 44 */
   ATL_zcm2am_aX_2x1,  /* index 45 */
   ATL_zcm2am_aX_1,  /* index 46 */
   ATL_zcm2am_aX_2x1,  /* index 47 */
   ATL_zcm2am_aX_1,  /* index 48 */
   ATL_zcm2am_aX_2x1,  /* index 49 */
   ATL_zcm2am_aX_1,  /* index 50 */
   ATL_zcm2am_aX_2x1,  /* index 51 */
   ATL_zcm2am_aX_1,  /* index 52 */
   ATL_zcm2am_aX_2x1,  /* index 53 */
   ATL_zcm2am_aX_1,  /* index 54 */
   ATL_zcm2am_aX_2x1,  /* index 55 */
   ATL_zcm2am_aX_1,  /* index 56 */
   ATL_zcm2am_aX_2x1,  /* index 57 */
   ATL_zcm2am_aX_1,  /* index 58 */
   ATL_zcm2am_aX_2x1,  /* index 59 */
   ATL_zcm2am_aX_1,  /* index 60 */
   ATL_zcm2am_aX_2x1,  /* index 61 */
   ATL_zcm2am_aX_1,  /* index 62 */
   ATL_zcm2am_aX_2x1,  /* index 63 */
   ATL_zcm2am_aX_1,  /* index 64 */
   ATL_zcm2am_aX_2x1,  /* index 65 */
   ATL_zcm2am_aX_1,  /* index 66 */
   ATL_zcm2am_aX_2x1,  /* index 67 */
   ATL_zcm2am_aX_1,  /* index 68 */
   ATL_zcm2am_aX_2x1,  /* index 69 */
   ATL_zcm2am_aX_1,  /* index 70 */
   ATL_zcm2am_aX_2x1,  /* index 71 */
   ATL_zcm2am_aX_1,  /* index 72 */
   ATL_zcm2am_aX_2x1,  /* index 73 */
   ATL_zcm2am_aX_1,  /* index 74 */
   ATL_zcm2am_aX_2x1,  /* index 75 */
   ATL_zcm2am_aX_1,  /* index 76 */
   ATL_zcm2am_aX_2x1,  /* index 77 */
   ATL_zcm2am_aX_1,  /* index 78 */
   ATL_zcm2am_aX_2x1,  /* index 79 */
   ATL_zcm2am_aX_1,  /* index 80 */
   ATL_zcm2am_aX_2x1,  /* index 81 */
   ATL_zcm2am_aX_1,  /* index 82 */
   ATL_zcm2am_aX_2x1,  /* index 83 */
   ATL_zcm2am_aX_1,  /* index 84 */
   ATL_zcm2am_aX_2x1,  /* index 85 */
   ATL_zcm2am_aX_1,  /* index 86 */
   ATL_zcm2am_aX_2x1,  /* index 87 */
   ATL_zcm2am_aX_1,  /* index 88 */
   ATL_zcm2am_aX_2x1,  /* index 89 */
   ATL_zcm2am_aX_1,  /* index 90 */
   ATL_zcm2am_aX_2x1,  /* index 91 */
   ATL_zcm2am_aX_1,  /* index 92 */
   ATL_zcm2am_aX_2x1,  /* index 93 */
   ATL_zcm2am_aX_1,  /* index 94 */
   ATL_zcm2am_aX_2x1,  /* index 95 */
   ATL_zcm2am_aX_1,  /* index 96 */
   ATL_zcm2am_aX_2x1,  /* index 97 */
   ATL_zcm2am_aX_1,  /* index 98 */
   ATL_zcm2am_aX_2x1,  /* index 99 */
   ATL_zcm2am_aX_1,  /* index 100 */
   ATL_zcm2am_aX_2x1,  /* index 101 */
   ATL_zcm2am_aX_1,  /* index 102 */
   ATL_zcm2am_aX_2x1,  /* index 103 */
   ATL_zcm2am_aX_1,  /* index 104 */
   ATL_zcm2am_aX_2x1,  /* index 105 */
   ATL_zcm2am_aX_1,  /* index 106 */
   ATL_zcm2am_aX_2x1,  /* index 107 */
   ATL_zcm2am_aX_1,  /* index 108 */
   ATL_zcm2am_aX_2x1,  /* index 109 */
   ATL_zcm2am_aX_1,  /* index 110 */
   ATL_zcm2am_aX_2x1,  /* index 111 */
   ATL_zcm2am_aX_1,  /* index 112 */
   ATL_zcm2am_aX_2x1,  /* index 113 */
   ATL_zcm2am_aX_1,  /* index 114 */
   ATL_zcm2am_aX_2x1,  /* index 115 */
   ATL_zcm2am_aX_1,  /* index 116 */
   ATL_zcm2am_aX_2x1,  /* index 117 */
   ATL_zcm2am_aX_1,  /* index 118 */
   ATL_zcm2am_aX_2x1,  /* index 119 */
   ATL_zcm2am_aX_1,  /* index 120 */
   ATL_zcm2am_aX_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_BT2BLK_aX[122] =
{
   ATL_zrm2am_aX_1,  /* index 0 */
   ATL_zrm2am_aX_1,  /* index 1 */
   ATL_zrm2am_aX_1,  /* index 2 */
   ATL_zrm2am_aX_1,  /* index 3 */
   ATL_zrm2am_aX_1,  /* index 4 */
   ATL_zrm2am_aX_1,  /* index 5 */
   ATL_zrm2am_aX_1,  /* index 6 */
   ATL_zrm2am_aX_2x1,  /* index 7 */
   ATL_zrm2am_aX_1,  /* index 8 */
   ATL_zrm2am_aX_1,  /* index 9 */
   ATL_zrm2am_aX_1,  /* index 10 */
   ATL_zrm2am_aX_2x1,  /* index 11 */
   ATL_zrm2am_aX_1,  /* index 12 */
   ATL_zrm2am_aX_1,  /* index 13 */
   ATL_zrm2am_aX_1,  /* index 14 */
   ATL_zrm2am_aX_2x1,  /* index 15 */
   ATL_zrm2am_aX_1,  /* index 16 */
   ATL_zrm2am_aX_2x1,  /* index 17 */
   ATL_zrm2am_aX_1,  /* index 18 */
   ATL_zrm2am_aX_2x1,  /* index 19 */
   ATL_zrm2am_aX_1,  /* index 20 */
   ATL_zrm2am_aX_1,  /* index 21 */
   ATL_zrm2am_aX_1,  /* index 22 */
   ATL_zrm2am_aX_2x1,  /* index 23 */
   ATL_zrm2am_aX_1,  /* index 24 */
   ATL_zrm2am_aX_2x1,  /* index 25 */
   ATL_zrm2am_aX_1,  /* index 26 */
   ATL_zrm2am_aX_2x1,  /* index 27 */
   ATL_zrm2am_aX_1,  /* index 28 */
   ATL_zrm2am_aX_2x1,  /* index 29 */
   ATL_zrm2am_aX_1,  /* index 30 */
   ATL_zrm2am_aX_2x1,  /* index 31 */
   ATL_zrm2am_aX_1,  /* index 32 */
   ATL_zrm2am_aX_2x1,  /* index 33 */
   ATL_zrm2am_aX_1,  /* index 34 */
   ATL_zrm2am_aX_2x1,  /* index 35 */
   ATL_zrm2am_aX_1,  /* index 36 */
   ATL_zrm2am_aX_2x1,  /* index 37 */
   ATL_zrm2am_aX_1,  /* index 38 */
   ATL_zrm2am_aX_2x1,  /* index 39 */
   ATL_zrm2am_aX_1,  /* index 40 */
   ATL_zrm2am_aX_2x1,  /* index 41 */
   ATL_zrm2am_aX_1,  /* index 42 */
   ATL_zrm2am_aX_2x1,  /* index 43 */
   ATL_zrm2am_aX_1,  /* index 44 */
   ATL_zrm2am_aX_2x1,  /* index 45 */
   ATL_zrm2am_aX_1,  /* index 46 */
   ATL_zrm2am_aX_2x1,  /* index 47 */
   ATL_zrm2am_aX_1,  /* index 48 */
   ATL_zrm2am_aX_2x1,  /* index 49 */
   ATL_zrm2am_aX_1,  /* index 50 */
   ATL_zrm2am_aX_2x1,  /* index 51 */
   ATL_zrm2am_aX_1,  /* index 52 */
   ATL_zrm2am_aX_2x1,  /* index 53 */
   ATL_zrm2am_aX_1,  /* index 54 */
   ATL_zrm2am_aX_2x1,  /* index 55 */
   ATL_zrm2am_aX_1,  /* index 56 */
   ATL_zrm2am_aX_2x1,  /* index 57 */
   ATL_zrm2am_aX_1,  /* index 58 */
   ATL_zrm2am_aX_2x1,  /* index 59 */
   ATL_zrm2am_aX_1,  /* index 60 */
   ATL_zrm2am_aX_2x1,  /* index 61 */
   ATL_zrm2am_aX_1,  /* index 62 */
   ATL_zrm2am_aX_2x1,  /* index 63 */
   ATL_zrm2am_aX_1,  /* index 64 */
   ATL_zrm2am_aX_2x1,  /* index 65 */
   ATL_zrm2am_aX_1,  /* index 66 */
   ATL_zrm2am_aX_2x1,  /* index 67 */
   ATL_zrm2am_aX_1,  /* index 68 */
   ATL_zrm2am_aX_2x1,  /* index 69 */
   ATL_zrm2am_aX_1,  /* index 70 */
   ATL_zrm2am_aX_2x1,  /* index 71 */
   ATL_zrm2am_aX_1,  /* index 72 */
   ATL_zrm2am_aX_2x1,  /* index 73 */
   ATL_zrm2am_aX_1,  /* index 74 */
   ATL_zrm2am_aX_2x1,  /* index 75 */
   ATL_zrm2am_aX_1,  /* index 76 */
   ATL_zrm2am_aX_2x1,  /* index 77 */
   ATL_zrm2am_aX_1,  /* index 78 */
   ATL_zrm2am_aX_2x1,  /* index 79 */
   ATL_zrm2am_aX_1,  /* index 80 */
   ATL_zrm2am_aX_2x1,  /* index 81 */
   ATL_zrm2am_aX_1,  /* index 82 */
   ATL_zrm2am_aX_2x1,  /* index 83 */
   ATL_zrm2am_aX_1,  /* index 84 */
   ATL_zrm2am_aX_2x1,  /* index 85 */
   ATL_zrm2am_aX_1,  /* index 86 */
   ATL_zrm2am_aX_2x1,  /* index 87 */
   ATL_zrm2am_aX_1,  /* index 88 */
   ATL_zrm2am_aX_2x1,  /* index 89 */
   ATL_zrm2am_aX_1,  /* index 90 */
   ATL_zrm2am_aX_2x1,  /* index 91 */
   ATL_zrm2am_aX_1,  /* index 92 */
   ATL_zrm2am_aX_2x1,  /* index 93 */
   ATL_zrm2am_aX_1,  /* index 94 */
   ATL_zrm2am_aX_2x1,  /* index 95 */
   ATL_zrm2am_aX_1,  /* index 96 */
   ATL_zrm2am_aX_2x1,  /* index 97 */
   ATL_zrm2am_aX_1,  /* index 98 */
   ATL_zrm2am_aX_2x1,  /* index 99 */
   ATL_zrm2am_aX_1,  /* index 100 */
   ATL_zrm2am_aX_2x1,  /* index 101 */
   ATL_zrm2am_aX_1,  /* index 102 */
   ATL_zrm2am_aX_2x1,  /* index 103 */
   ATL_zrm2am_aX_1,  /* index 104 */
   ATL_zrm2am_aX_2x1,  /* index 105 */
   ATL_zrm2am_aX_1,  /* index 106 */
   ATL_zrm2am_aX_2x1,  /* index 107 */
   ATL_zrm2am_aX_1,  /* index 108 */
   ATL_zrm2am_aX_2x1,  /* index 109 */
   ATL_zrm2am_aX_1,  /* index 110 */
   ATL_zrm2am_aX_2x1,  /* index 111 */
   ATL_zrm2am_aX_1,  /* index 112 */
   ATL_zrm2am_aX_2x1,  /* index 113 */
   ATL_zrm2am_aX_1,  /* index 114 */
   ATL_zrm2am_aX_2x1,  /* index 115 */
   ATL_zrm2am_aX_1,  /* index 116 */
   ATL_zrm2am_aX_2x1,  /* index 117 */
   ATL_zrm2am_aX_1,  /* index 118 */
   ATL_zrm2am_aX_2x1,  /* index 119 */
   ATL_zrm2am_aX_1,  /* index 120 */
   ATL_zrm2am_aX_2x1   /* index 121 */
};

static const cm2am_t ATL_RKK_AC2BLK_aX[122] =
{
   ATL_zcm2am_aX_28C,  /* index 0 */
   ATL_zcm2am_aX_28C,  /* index 1 */
   ATL_zcm2am_aX_28C,  /* index 2 */
   ATL_zcm2am_aX_28C,  /* index 3 */
   ATL_zcm2am_aX_28C,  /* index 4 */
   ATL_zcm2am_aX_28C,  /* index 5 */
   ATL_zcm2am_aX_28C,  /* index 6 */
   ATL_zcm2am_aX_2x8C,  /* index 7 */
   ATL_zcm2am_aX_28C,  /* index 8 */
   ATL_zcm2am_aX_28C,  /* index 9 */
   ATL_zcm2am_aX_28C,  /* index 10 */
   ATL_zcm2am_aX_2x12C,  /* index 11 */
   ATL_zcm2am_aX_28C,  /* index 12 */
   ATL_zcm2am_aX_28C,  /* index 13 */
   ATL_zcm2am_aX_28C,  /* index 14 */
   ATL_zcm2am_aX_2x12C,  /* index 15 */
   ATL_zcm2am_aX_28C,  /* index 16 */
   ATL_zcm2am_aX_2x12C,  /* index 17 */
   ATL_zcm2am_aX_28C,  /* index 18 */
   ATL_zcm2am_aX_2x12C,  /* index 19 */
   ATL_zcm2am_aX_28C,  /* index 20 */
   ATL_zcm2am_aX_28C,  /* index 21 */
   ATL_zcm2am_aX_28C,  /* index 22 */
   ATL_zcm2am_aX_2x12C,  /* index 23 */
   ATL_zcm2am_aX_28C,  /* index 24 */
   ATL_zcm2am_aX_2x12C,  /* index 25 */
   ATL_zcm2am_aX_28C,  /* index 26 */
   ATL_zcm2am_aX_2x12C,  /* index 27 */
   ATL_zcm2am_aX_28C,  /* index 28 */
   ATL_zcm2am_aX_2x12C,  /* index 29 */
   ATL_zcm2am_aX_28C,  /* index 30 */
   ATL_zcm2am_aX_2x12C,  /* index 31 */
   ATL_zcm2am_aX_28C,  /* index 32 */
   ATL_zcm2am_aX_2x12C,  /* index 33 */
   ATL_zcm2am_aX_28C,  /* index 34 */
   ATL_zcm2am_aX_2x12C,  /* index 35 */
   ATL_zcm2am_aX_28C,  /* index 36 */
   ATL_zcm2am_aX_2x12C,  /* index 37 */
   ATL_zcm2am_aX_28C,  /* index 38 */
   ATL_zcm2am_aX_2x12C,  /* index 39 */
   ATL_zcm2am_aX_28C,  /* index 40 */
   ATL_zcm2am_aX_2x12C,  /* index 41 */
   ATL_zcm2am_aX_28C,  /* index 42 */
   ATL_zcm2am_aX_2x12C,  /* index 43 */
   ATL_zcm2am_aX_28C,  /* index 44 */
   ATL_zcm2am_aX_2x12C,  /* index 45 */
   ATL_zcm2am_aX_28C,  /* index 46 */
   ATL_zcm2am_aX_2x12C,  /* index 47 */
   ATL_zcm2am_aX_28C,  /* index 48 */
   ATL_zcm2am_aX_2x12C,  /* index 49 */
   ATL_zcm2am_aX_28C,  /* index 50 */
   ATL_zcm2am_aX_2x12C,  /* index 51 */
   ATL_zcm2am_aX_28C,  /* index 52 */
   ATL_zcm2am_aX_2x12C,  /* index 53 */
   ATL_zcm2am_aX_28C,  /* index 54 */
   ATL_zcm2am_aX_2x12C,  /* index 55 */
   ATL_zcm2am_aX_28C,  /* index 56 */
   ATL_zcm2am_aX_2x12C,  /* index 57 */
   ATL_zcm2am_aX_28C,  /* index 58 */
   ATL_zcm2am_aX_2x12C,  /* index 59 */
   ATL_zcm2am_aX_28C,  /* index 60 */
   ATL_zcm2am_aX_2x12C,  /* index 61 */
   ATL_zcm2am_aX_28C,  /* index 62 */
   ATL_zcm2am_aX_2x12C,  /* index 63 */
   ATL_zcm2am_aX_28C,  /* index 64 */
   ATL_zcm2am_aX_2x12C,  /* index 65 */
   ATL_zcm2am_aX_28C,  /* index 66 */
   ATL_zcm2am_aX_2x12C,  /* index 67 */
   ATL_zcm2am_aX_28C,  /* index 68 */
   ATL_zcm2am_aX_2x12C,  /* index 69 */
   ATL_zcm2am_aX_28C,  /* index 70 */
   ATL_zcm2am_aX_2x12C,  /* index 71 */
   ATL_zcm2am_aX_28C,  /* index 72 */
   ATL_zcm2am_aX_2x12C,  /* index 73 */
   ATL_zcm2am_aX_28C,  /* index 74 */
   ATL_zcm2am_aX_2x12C,  /* index 75 */
   ATL_zcm2am_aX_28C,  /* index 76 */
   ATL_zcm2am_aX_2x12C,  /* index 77 */
   ATL_zcm2am_aX_28C,  /* index 78 */
   ATL_zcm2am_aX_2x12C,  /* index 79 */
   ATL_zcm2am_aX_28C,  /* index 80 */
   ATL_zcm2am_aX_2x12C,  /* index 81 */
   ATL_zcm2am_aX_28C,  /* index 82 */
   ATL_zcm2am_aX_2x12C,  /* index 83 */
   ATL_zcm2am_aX_28C,  /* index 84 */
   ATL_zcm2am_aX_2x12C,  /* index 85 */
   ATL_zcm2am_aX_28C,  /* index 86 */
   ATL_zcm2am_aX_2x12C,  /* index 87 */
   ATL_zcm2am_aX_28C,  /* index 88 */
   ATL_zcm2am_aX_2x12C,  /* index 89 */
   ATL_zcm2am_aX_28C,  /* index 90 */
   ATL_zcm2am_aX_2x12C,  /* index 91 */
   ATL_zcm2am_aX_28C,  /* index 92 */
   ATL_zcm2am_aX_2x12C,  /* index 93 */
   ATL_zcm2am_aX_28C,  /* index 94 */
   ATL_zcm2am_aX_2x12C,  /* index 95 */
   ATL_zcm2am_aX_28C,  /* index 96 */
   ATL_zcm2am_aX_2x12C,  /* index 97 */
   ATL_zcm2am_aX_28C,  /* index 98 */
   ATL_zcm2am_aX_2x12C,  /* index 99 */
   ATL_zcm2am_aX_28C,  /* index 100 */
   ATL_zcm2am_aX_2x12C,  /* index 101 */
   ATL_zcm2am_aX_28C,  /* index 102 */
   ATL_zcm2am_aX_2x12C,  /* index 103 */
   ATL_zcm2am_aX_28C,  /* index 104 */
   ATL_zcm2am_aX_2x12C,  /* index 105 */
   ATL_zcm2am_aX_28C,  /* index 106 */
   ATL_zcm2am_aX_2x12C,  /* index 107 */
   ATL_zcm2am_aX_28C,  /* index 108 */
   ATL_zcm2am_aX_2x12C,  /* index 109 */
   ATL_zcm2am_aX_28C,  /* index 110 */
   ATL_zcm2am_aX_2x12C,  /* index 111 */
   ATL_zcm2am_aX_28C,  /* index 112 */
   ATL_zcm2am_aX_2x12C,  /* index 113 */
   ATL_zcm2am_aX_28C,  /* index 114 */
   ATL_zcm2am_aX_2x12C,  /* index 115 */
   ATL_zcm2am_aX_28C,  /* index 116 */
   ATL_zcm2am_aX_2x12C,  /* index 117 */
   ATL_zcm2am_aX_28C,  /* index 118 */
   ATL_zcm2am_aX_2x12C,  /* index 119 */
   ATL_zcm2am_aX_28C,  /* index 120 */
   ATL_zcm2am_aX_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_AH2BLK_aX[122] =
{
   ATL_zrm2am_aX_28C,  /* index 0 */
   ATL_zrm2am_aX_28C,  /* index 1 */
   ATL_zrm2am_aX_28C,  /* index 2 */
   ATL_zrm2am_aX_28C,  /* index 3 */
   ATL_zrm2am_aX_28C,  /* index 4 */
   ATL_zrm2am_aX_28C,  /* index 5 */
   ATL_zrm2am_aX_28C,  /* index 6 */
   ATL_zrm2am_aX_2x8C,  /* index 7 */
   ATL_zrm2am_aX_28C,  /* index 8 */
   ATL_zrm2am_aX_28C,  /* index 9 */
   ATL_zrm2am_aX_28C,  /* index 10 */
   ATL_zrm2am_aX_2x12C,  /* index 11 */
   ATL_zrm2am_aX_28C,  /* index 12 */
   ATL_zrm2am_aX_28C,  /* index 13 */
   ATL_zrm2am_aX_28C,  /* index 14 */
   ATL_zrm2am_aX_2x12C,  /* index 15 */
   ATL_zrm2am_aX_28C,  /* index 16 */
   ATL_zrm2am_aX_2x12C,  /* index 17 */
   ATL_zrm2am_aX_28C,  /* index 18 */
   ATL_zrm2am_aX_2x12C,  /* index 19 */
   ATL_zrm2am_aX_28C,  /* index 20 */
   ATL_zrm2am_aX_28C,  /* index 21 */
   ATL_zrm2am_aX_28C,  /* index 22 */
   ATL_zrm2am_aX_2x12C,  /* index 23 */
   ATL_zrm2am_aX_28C,  /* index 24 */
   ATL_zrm2am_aX_2x12C,  /* index 25 */
   ATL_zrm2am_aX_28C,  /* index 26 */
   ATL_zrm2am_aX_2x12C,  /* index 27 */
   ATL_zrm2am_aX_28C,  /* index 28 */
   ATL_zrm2am_aX_2x12C,  /* index 29 */
   ATL_zrm2am_aX_28C,  /* index 30 */
   ATL_zrm2am_aX_2x12C,  /* index 31 */
   ATL_zrm2am_aX_28C,  /* index 32 */
   ATL_zrm2am_aX_2x12C,  /* index 33 */
   ATL_zrm2am_aX_28C,  /* index 34 */
   ATL_zrm2am_aX_2x12C,  /* index 35 */
   ATL_zrm2am_aX_28C,  /* index 36 */
   ATL_zrm2am_aX_2x12C,  /* index 37 */
   ATL_zrm2am_aX_28C,  /* index 38 */
   ATL_zrm2am_aX_2x12C,  /* index 39 */
   ATL_zrm2am_aX_28C,  /* index 40 */
   ATL_zrm2am_aX_2x12C,  /* index 41 */
   ATL_zrm2am_aX_28C,  /* index 42 */
   ATL_zrm2am_aX_2x12C,  /* index 43 */
   ATL_zrm2am_aX_28C,  /* index 44 */
   ATL_zrm2am_aX_2x12C,  /* index 45 */
   ATL_zrm2am_aX_28C,  /* index 46 */
   ATL_zrm2am_aX_2x12C,  /* index 47 */
   ATL_zrm2am_aX_28C,  /* index 48 */
   ATL_zrm2am_aX_2x12C,  /* index 49 */
   ATL_zrm2am_aX_28C,  /* index 50 */
   ATL_zrm2am_aX_2x12C,  /* index 51 */
   ATL_zrm2am_aX_28C,  /* index 52 */
   ATL_zrm2am_aX_2x12C,  /* index 53 */
   ATL_zrm2am_aX_28C,  /* index 54 */
   ATL_zrm2am_aX_2x12C,  /* index 55 */
   ATL_zrm2am_aX_28C,  /* index 56 */
   ATL_zrm2am_aX_2x12C,  /* index 57 */
   ATL_zrm2am_aX_28C,  /* index 58 */
   ATL_zrm2am_aX_2x12C,  /* index 59 */
   ATL_zrm2am_aX_28C,  /* index 60 */
   ATL_zrm2am_aX_2x12C,  /* index 61 */
   ATL_zrm2am_aX_28C,  /* index 62 */
   ATL_zrm2am_aX_2x12C,  /* index 63 */
   ATL_zrm2am_aX_28C,  /* index 64 */
   ATL_zrm2am_aX_2x12C,  /* index 65 */
   ATL_zrm2am_aX_28C,  /* index 66 */
   ATL_zrm2am_aX_2x12C,  /* index 67 */
   ATL_zrm2am_aX_28C,  /* index 68 */
   ATL_zrm2am_aX_2x12C,  /* index 69 */
   ATL_zrm2am_aX_28C,  /* index 70 */
   ATL_zrm2am_aX_2x12C,  /* index 71 */
   ATL_zrm2am_aX_28C,  /* index 72 */
   ATL_zrm2am_aX_2x12C,  /* index 73 */
   ATL_zrm2am_aX_28C,  /* index 74 */
   ATL_zrm2am_aX_2x12C,  /* index 75 */
   ATL_zrm2am_aX_28C,  /* index 76 */
   ATL_zrm2am_aX_2x12C,  /* index 77 */
   ATL_zrm2am_aX_28C,  /* index 78 */
   ATL_zrm2am_aX_2x12C,  /* index 79 */
   ATL_zrm2am_aX_28C,  /* index 80 */
   ATL_zrm2am_aX_2x12C,  /* index 81 */
   ATL_zrm2am_aX_28C,  /* index 82 */
   ATL_zrm2am_aX_2x12C,  /* index 83 */
   ATL_zrm2am_aX_28C,  /* index 84 */
   ATL_zrm2am_aX_2x12C,  /* index 85 */
   ATL_zrm2am_aX_28C,  /* index 86 */
   ATL_zrm2am_aX_2x12C,  /* index 87 */
   ATL_zrm2am_aX_28C,  /* index 88 */
   ATL_zrm2am_aX_2x12C,  /* index 89 */
   ATL_zrm2am_aX_28C,  /* index 90 */
   ATL_zrm2am_aX_2x12C,  /* index 91 */
   ATL_zrm2am_aX_28C,  /* index 92 */
   ATL_zrm2am_aX_2x12C,  /* index 93 */
   ATL_zrm2am_aX_28C,  /* index 94 */
   ATL_zrm2am_aX_2x12C,  /* index 95 */
   ATL_zrm2am_aX_28C,  /* index 96 */
   ATL_zrm2am_aX_2x12C,  /* index 97 */
   ATL_zrm2am_aX_28C,  /* index 98 */
   ATL_zrm2am_aX_2x12C,  /* index 99 */
   ATL_zrm2am_aX_28C,  /* index 100 */
   ATL_zrm2am_aX_2x12C,  /* index 101 */
   ATL_zrm2am_aX_28C,  /* index 102 */
   ATL_zrm2am_aX_2x12C,  /* index 103 */
   ATL_zrm2am_aX_28C,  /* index 104 */
   ATL_zrm2am_aX_2x12C,  /* index 105 */
   ATL_zrm2am_aX_28C,  /* index 106 */
   ATL_zrm2am_aX_2x12C,  /* index 107 */
   ATL_zrm2am_aX_28C,  /* index 108 */
   ATL_zrm2am_aX_2x12C,  /* index 109 */
   ATL_zrm2am_aX_28C,  /* index 110 */
   ATL_zrm2am_aX_2x12C,  /* index 111 */
   ATL_zrm2am_aX_28C,  /* index 112 */
   ATL_zrm2am_aX_2x12C,  /* index 113 */
   ATL_zrm2am_aX_28C,  /* index 114 */
   ATL_zrm2am_aX_2x12C,  /* index 115 */
   ATL_zrm2am_aX_28C,  /* index 116 */
   ATL_zrm2am_aX_2x12C,  /* index 117 */
   ATL_zrm2am_aX_28C,  /* index 118 */
   ATL_zrm2am_aX_2x12C,  /* index 119 */
   ATL_zrm2am_aX_28C,  /* index 120 */
   ATL_zrm2am_aX_2x12C   /* index 121 */
};

static const cm2am_t ATL_RKK_BC2BLK_aX[122] =
{
   ATL_zcm2am_aX_1C,  /* index 0 */
   ATL_zcm2am_aX_1C,  /* index 1 */
   ATL_zcm2am_aX_1C,  /* index 2 */
   ATL_zcm2am_aX_1C,  /* index 3 */
   ATL_zcm2am_aX_1C,  /* index 4 */
   ATL_zcm2am_aX_1C,  /* index 5 */
   ATL_zcm2am_aX_1C,  /* index 6 */
   ATL_zcm2am_aX_2x1C,  /* index 7 */
   ATL_zcm2am_aX_1C,  /* index 8 */
   ATL_zcm2am_aX_1C,  /* index 9 */
   ATL_zcm2am_aX_1C,  /* index 10 */
   ATL_zcm2am_aX_2x1C,  /* index 11 */
   ATL_zcm2am_aX_1C,  /* index 12 */
   ATL_zcm2am_aX_1C,  /* index 13 */
   ATL_zcm2am_aX_1C,  /* index 14 */
   ATL_zcm2am_aX_2x1C,  /* index 15 */
   ATL_zcm2am_aX_1C,  /* index 16 */
   ATL_zcm2am_aX_2x1C,  /* index 17 */
   ATL_zcm2am_aX_1C,  /* index 18 */
   ATL_zcm2am_aX_2x1C,  /* index 19 */
   ATL_zcm2am_aX_1C,  /* index 20 */
   ATL_zcm2am_aX_1C,  /* index 21 */
   ATL_zcm2am_aX_1C,  /* index 22 */
   ATL_zcm2am_aX_2x1C,  /* index 23 */
   ATL_zcm2am_aX_1C,  /* index 24 */
   ATL_zcm2am_aX_2x1C,  /* index 25 */
   ATL_zcm2am_aX_1C,  /* index 26 */
   ATL_zcm2am_aX_2x1C,  /* index 27 */
   ATL_zcm2am_aX_1C,  /* index 28 */
   ATL_zcm2am_aX_2x1C,  /* index 29 */
   ATL_zcm2am_aX_1C,  /* index 30 */
   ATL_zcm2am_aX_2x1C,  /* index 31 */
   ATL_zcm2am_aX_1C,  /* index 32 */
   ATL_zcm2am_aX_2x1C,  /* index 33 */
   ATL_zcm2am_aX_1C,  /* index 34 */
   ATL_zcm2am_aX_2x1C,  /* index 35 */
   ATL_zcm2am_aX_1C,  /* index 36 */
   ATL_zcm2am_aX_2x1C,  /* index 37 */
   ATL_zcm2am_aX_1C,  /* index 38 */
   ATL_zcm2am_aX_2x1C,  /* index 39 */
   ATL_zcm2am_aX_1C,  /* index 40 */
   ATL_zcm2am_aX_2x1C,  /* index 41 */
   ATL_zcm2am_aX_1C,  /* index 42 */
   ATL_zcm2am_aX_2x1C,  /* index 43 */
   ATL_zcm2am_aX_1C,  /* index 44 */
   ATL_zcm2am_aX_2x1C,  /* index 45 */
   ATL_zcm2am_aX_1C,  /* index 46 */
   ATL_zcm2am_aX_2x1C,  /* index 47 */
   ATL_zcm2am_aX_1C,  /* index 48 */
   ATL_zcm2am_aX_2x1C,  /* index 49 */
   ATL_zcm2am_aX_1C,  /* index 50 */
   ATL_zcm2am_aX_2x1C,  /* index 51 */
   ATL_zcm2am_aX_1C,  /* index 52 */
   ATL_zcm2am_aX_2x1C,  /* index 53 */
   ATL_zcm2am_aX_1C,  /* index 54 */
   ATL_zcm2am_aX_2x1C,  /* index 55 */
   ATL_zcm2am_aX_1C,  /* index 56 */
   ATL_zcm2am_aX_2x1C,  /* index 57 */
   ATL_zcm2am_aX_1C,  /* index 58 */
   ATL_zcm2am_aX_2x1C,  /* index 59 */
   ATL_zcm2am_aX_1C,  /* index 60 */
   ATL_zcm2am_aX_2x1C,  /* index 61 */
   ATL_zcm2am_aX_1C,  /* index 62 */
   ATL_zcm2am_aX_2x1C,  /* index 63 */
   ATL_zcm2am_aX_1C,  /* index 64 */
   ATL_zcm2am_aX_2x1C,  /* index 65 */
   ATL_zcm2am_aX_1C,  /* index 66 */
   ATL_zcm2am_aX_2x1C,  /* index 67 */
   ATL_zcm2am_aX_1C,  /* index 68 */
   ATL_zcm2am_aX_2x1C,  /* index 69 */
   ATL_zcm2am_aX_1C,  /* index 70 */
   ATL_zcm2am_aX_2x1C,  /* index 71 */
   ATL_zcm2am_aX_1C,  /* index 72 */
   ATL_zcm2am_aX_2x1C,  /* index 73 */
   ATL_zcm2am_aX_1C,  /* index 74 */
   ATL_zcm2am_aX_2x1C,  /* index 75 */
   ATL_zcm2am_aX_1C,  /* index 76 */
   ATL_zcm2am_aX_2x1C,  /* index 77 */
   ATL_zcm2am_aX_1C,  /* index 78 */
   ATL_zcm2am_aX_2x1C,  /* index 79 */
   ATL_zcm2am_aX_1C,  /* index 80 */
   ATL_zcm2am_aX_2x1C,  /* index 81 */
   ATL_zcm2am_aX_1C,  /* index 82 */
   ATL_zcm2am_aX_2x1C,  /* index 83 */
   ATL_zcm2am_aX_1C,  /* index 84 */
   ATL_zcm2am_aX_2x1C,  /* index 85 */
   ATL_zcm2am_aX_1C,  /* index 86 */
   ATL_zcm2am_aX_2x1C,  /* index 87 */
   ATL_zcm2am_aX_1C,  /* index 88 */
   ATL_zcm2am_aX_2x1C,  /* index 89 */
   ATL_zcm2am_aX_1C,  /* index 90 */
   ATL_zcm2am_aX_2x1C,  /* index 91 */
   ATL_zcm2am_aX_1C,  /* index 92 */
   ATL_zcm2am_aX_2x1C,  /* index 93 */
   ATL_zcm2am_aX_1C,  /* index 94 */
   ATL_zcm2am_aX_2x1C,  /* index 95 */
   ATL_zcm2am_aX_1C,  /* index 96 */
   ATL_zcm2am_aX_2x1C,  /* index 97 */
   ATL_zcm2am_aX_1C,  /* index 98 */
   ATL_zcm2am_aX_2x1C,  /* index 99 */
   ATL_zcm2am_aX_1C,  /* index 100 */
   ATL_zcm2am_aX_2x1C,  /* index 101 */
   ATL_zcm2am_aX_1C,  /* index 102 */
   ATL_zcm2am_aX_2x1C,  /* index 103 */
   ATL_zcm2am_aX_1C,  /* index 104 */
   ATL_zcm2am_aX_2x1C,  /* index 105 */
   ATL_zcm2am_aX_1C,  /* index 106 */
   ATL_zcm2am_aX_2x1C,  /* index 107 */
   ATL_zcm2am_aX_1C,  /* index 108 */
   ATL_zcm2am_aX_2x1C,  /* index 109 */
   ATL_zcm2am_aX_1C,  /* index 110 */
   ATL_zcm2am_aX_2x1C,  /* index 111 */
   ATL_zcm2am_aX_1C,  /* index 112 */
   ATL_zcm2am_aX_2x1C,  /* index 113 */
   ATL_zcm2am_aX_1C,  /* index 114 */
   ATL_zcm2am_aX_2x1C,  /* index 115 */
   ATL_zcm2am_aX_1C,  /* index 116 */
   ATL_zcm2am_aX_2x1C,  /* index 117 */
   ATL_zcm2am_aX_1C,  /* index 118 */
   ATL_zcm2am_aX_2x1C,  /* index 119 */
   ATL_zcm2am_aX_1C,  /* index 120 */
   ATL_zcm2am_aX_2x1C   /* index 121 */
};

static const cm2am_t ATL_RKK_BH2BLK_aX[122] =
{
   ATL_zrm2am_aX_1C,  /* index 0 */
   ATL_zrm2am_aX_1C,  /* index 1 */
   ATL_zrm2am_aX_1C,  /* index 2 */
   ATL_zrm2am_aX_1C,  /* index 3 */
   ATL_zrm2am_aX_1C,  /* index 4 */
   ATL_zrm2am_aX_1C,  /* index 5 */
   ATL_zrm2am_aX_1C,  /* index 6 */
   ATL_zrm2am_aX_2x1C,  /* index 7 */
   ATL_zrm2am_aX_1C,  /* index 8 */
   ATL_zrm2am_aX_1C,  /* index 9 */
   ATL_zrm2am_aX_1C,  /* index 10 */
   ATL_zrm2am_aX_2x1C,  /* index 11 */
   ATL_zrm2am_aX_1C,  /* index 12 */
   ATL_zrm2am_aX_1C,  /* index 13 */
   ATL_zrm2am_aX_1C,  /* index 14 */
   ATL_zrm2am_aX_2x1C,  /* index 15 */
   ATL_zrm2am_aX_1C,  /* index 16 */
   ATL_zrm2am_aX_2x1C,  /* index 17 */
   ATL_zrm2am_aX_1C,  /* index 18 */
   ATL_zrm2am_aX_2x1C,  /* index 19 */
   ATL_zrm2am_aX_1C,  /* index 20 */
   ATL_zrm2am_aX_1C,  /* index 21 */
   ATL_zrm2am_aX_1C,  /* index 22 */
   ATL_zrm2am_aX_2x1C,  /* index 23 */
   ATL_zrm2am_aX_1C,  /* index 24 */
   ATL_zrm2am_aX_2x1C,  /* index 25 */
   ATL_zrm2am_aX_1C,  /* index 26 */
   ATL_zrm2am_aX_2x1C,  /* index 27 */
   ATL_zrm2am_aX_1C,  /* index 28 */
   ATL_zrm2am_aX_2x1C,  /* index 29 */
   ATL_zrm2am_aX_1C,  /* index 30 */
   ATL_zrm2am_aX_2x1C,  /* index 31 */
   ATL_zrm2am_aX_1C,  /* index 32 */
   ATL_zrm2am_aX_2x1C,  /* index 33 */
   ATL_zrm2am_aX_1C,  /* index 34 */
   ATL_zrm2am_aX_2x1C,  /* index 35 */
   ATL_zrm2am_aX_1C,  /* index 36 */
   ATL_zrm2am_aX_2x1C,  /* index 37 */
   ATL_zrm2am_aX_1C,  /* index 38 */
   ATL_zrm2am_aX_2x1C,  /* index 39 */
   ATL_zrm2am_aX_1C,  /* index 40 */
   ATL_zrm2am_aX_2x1C,  /* index 41 */
   ATL_zrm2am_aX_1C,  /* index 42 */
   ATL_zrm2am_aX_2x1C,  /* index 43 */
   ATL_zrm2am_aX_1C,  /* index 44 */
   ATL_zrm2am_aX_2x1C,  /* index 45 */
   ATL_zrm2am_aX_1C,  /* index 46 */
   ATL_zrm2am_aX_2x1C,  /* index 47 */
   ATL_zrm2am_aX_1C,  /* index 48 */
   ATL_zrm2am_aX_2x1C,  /* index 49 */
   ATL_zrm2am_aX_1C,  /* index 50 */
   ATL_zrm2am_aX_2x1C,  /* index 51 */
   ATL_zrm2am_aX_1C,  /* index 52 */
   ATL_zrm2am_aX_2x1C,  /* index 53 */
   ATL_zrm2am_aX_1C,  /* index 54 */
   ATL_zrm2am_aX_2x1C,  /* index 55 */
   ATL_zrm2am_aX_1C,  /* index 56 */
   ATL_zrm2am_aX_2x1C,  /* index 57 */
   ATL_zrm2am_aX_1C,  /* index 58 */
   ATL_zrm2am_aX_2x1C,  /* index 59 */
   ATL_zrm2am_aX_1C,  /* index 60 */
   ATL_zrm2am_aX_2x1C,  /* index 61 */
   ATL_zrm2am_aX_1C,  /* index 62 */
   ATL_zrm2am_aX_2x1C,  /* index 63 */
   ATL_zrm2am_aX_1C,  /* index 64 */
   ATL_zrm2am_aX_2x1C,  /* index 65 */
   ATL_zrm2am_aX_1C,  /* index 66 */
   ATL_zrm2am_aX_2x1C,  /* index 67 */
   ATL_zrm2am_aX_1C,  /* index 68 */
   ATL_zrm2am_aX_2x1C,  /* index 69 */
   ATL_zrm2am_aX_1C,  /* index 70 */
   ATL_zrm2am_aX_2x1C,  /* index 71 */
   ATL_zrm2am_aX_1C,  /* index 72 */
   ATL_zrm2am_aX_2x1C,  /* index 73 */
   ATL_zrm2am_aX_1C,  /* index 74 */
   ATL_zrm2am_aX_2x1C,  /* index 75 */
   ATL_zrm2am_aX_1C,  /* index 76 */
   ATL_zrm2am_aX_2x1C,  /* index 77 */
   ATL_zrm2am_aX_1C,  /* index 78 */
   ATL_zrm2am_aX_2x1C,  /* index 79 */
   ATL_zrm2am_aX_1C,  /* index 80 */
   ATL_zrm2am_aX_2x1C,  /* index 81 */
   ATL_zrm2am_aX_1C,  /* index 82 */
   ATL_zrm2am_aX_2x1C,  /* index 83 */
   ATL_zrm2am_aX_1C,  /* index 84 */
   ATL_zrm2am_aX_2x1C,  /* index 85 */
   ATL_zrm2am_aX_1C,  /* index 86 */
   ATL_zrm2am_aX_2x1C,  /* index 87 */
   ATL_zrm2am_aX_1C,  /* index 88 */
   ATL_zrm2am_aX_2x1C,  /* index 89 */
   ATL_zrm2am_aX_1C,  /* index 90 */
   ATL_zrm2am_aX_2x1C,  /* index 91 */
   ATL_zrm2am_aX_1C,  /* index 92 */
   ATL_zrm2am_aX_2x1C,  /* index 93 */
   ATL_zrm2am_aX_1C,  /* index 94 */
   ATL_zrm2am_aX_2x1C,  /* index 95 */
   ATL_zrm2am_aX_1C,  /* index 96 */
   ATL_zrm2am_aX_2x1C,  /* index 97 */
   ATL_zrm2am_aX_1C,  /* index 98 */
   ATL_zrm2am_aX_2x1C,  /* index 99 */
   ATL_zrm2am_aX_1C,  /* index 100 */
   ATL_zrm2am_aX_2x1C,  /* index 101 */
   ATL_zrm2am_aX_1C,  /* index 102 */
   ATL_zrm2am_aX_2x1C,  /* index 103 */
   ATL_zrm2am_aX_1C,  /* index 104 */
   ATL_zrm2am_aX_2x1C,  /* index 105 */
   ATL_zrm2am_aX_1C,  /* index 106 */
   ATL_zrm2am_aX_2x1C,  /* index 107 */
   ATL_zrm2am_aX_1C,  /* index 108 */
   ATL_zrm2am_aX_2x1C,  /* index 109 */
   ATL_zrm2am_aX_1C,  /* index 110 */
   ATL_zrm2am_aX_2x1C,  /* index 111 */
   ATL_zrm2am_aX_1C,  /* index 112 */
   ATL_zrm2am_aX_2x1C,  /* index 113 */
   ATL_zrm2am_aX_1C,  /* index 114 */
   ATL_zrm2am_aX_2x1C,  /* index 115 */
   ATL_zrm2am_aX_1C,  /* index 116 */
   ATL_zrm2am_aX_2x1C,  /* index 117 */
   ATL_zrm2am_aX_1C,  /* index 118 */
   ATL_zrm2am_aX_2x1C,  /* index 119 */
   ATL_zrm2am_aX_1C,  /* index 120 */
   ATL_zrm2am_aX_2x1C   /* index 121 */
};

static const ammkern_t ATL_AMM_KERN_RKK[122] =
{
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_10_13_8x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_14_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_18_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_20_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_22_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_26_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_28_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_30_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_32_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_34_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_36_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_38_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_40_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_42_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_44_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_46_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_48_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_50_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_52_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_54_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_56_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_58_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_60_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_62_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_64_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_66_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_68_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_70_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_72_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_74_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_76_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_78_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_80_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_82_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_84_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_86_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_88_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_90_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_92_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_94_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_96_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_98_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_100_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_102_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_104_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_106_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_108_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_110_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_112_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_114_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_116_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_118_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_120_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_122_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_124_13_12x1x2_b0
};

static const ammkern_t ATL_AMM_KERN_RKK_b1[122] =
{
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_10_13_8x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_14_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_18_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_20_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_22_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_26_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_28_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_30_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_32_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_34_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_36_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_38_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_40_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_42_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_44_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_46_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_48_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_50_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_52_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_54_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_56_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_58_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_60_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_62_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_64_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_66_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_68_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_70_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_72_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_74_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_76_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_78_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_80_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_82_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_84_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_86_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_88_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_90_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_92_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_94_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_96_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_98_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_100_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_102_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_104_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_106_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_108_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_110_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_112_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_114_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_116_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_118_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_120_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_122_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_124_13_12x1x2_b1
};

static const ammkern_t ATL_AMM_KERN_RKK_bn[122] =
{
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_10_13_8x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_14_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_18_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_20_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_22_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_26_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_28_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_30_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_32_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_34_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_36_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_38_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_40_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_42_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_44_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_46_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_48_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_50_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_52_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_54_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_56_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_58_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_60_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_62_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_64_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_66_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_68_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_70_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_72_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_74_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_76_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_78_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_80_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_82_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_84_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_86_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_88_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_90_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_92_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_94_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_96_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_98_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_100_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_102_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_104_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_106_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_108_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_110_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_112_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_114_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_116_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_118_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_120_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_122_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_124_13_12x1x2_bn
};


#endif  /* end include file guard */
