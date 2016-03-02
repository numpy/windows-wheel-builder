#ifndef ATLAS_DAMM_KERN_H
   #define ATLAS_DAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 210
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 210
#endif

#define ATL_MAXM_RKK 216
#define ATL_MAXN_RKK 212
#define ATL_MAXK_RKK 212

/*
 * cblk2mat put function prototypes
 */
void ATL_dablk2cmat_6x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_6x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_6x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_6x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_8x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_8x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_8x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_8x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_12x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_12x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_12x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_12x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_28x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_28x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_28x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_dablk2cmat_28x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
/*
 * Column-major to access-major copy function prototypes
 */
void ATL_dcm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_an_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_an_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
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
void ATL_dAMRK_0_4_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_4_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_4_13_12x1x2_bn
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
void ATL_dAMRK_0_32_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_32_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_32_13_12x1x2_bn
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
void ATL_dAMRK_0_84_13_8x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_84_13_8x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_84_13_8x1x2_bn
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
void ATL_dAMRK_0_126_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_126_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_126_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_128_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_128_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_128_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_130_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_130_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_130_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_132_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_132_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_132_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_134_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_134_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_134_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_136_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_136_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_136_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_138_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_138_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_138_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_140_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_140_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_140_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_142_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_142_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_142_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_144_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_144_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_144_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_146_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_146_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_146_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_148_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_148_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_148_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_150_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_150_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_150_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_151_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_151_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_151_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_152_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_152_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_152_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_153_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_153_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_153_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_154_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_154_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_154_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_155_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_155_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_155_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_156_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_156_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_156_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_157_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_157_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_157_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_158_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_158_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_158_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_159_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_159_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_159_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_160_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_160_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_160_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_161_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_161_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_161_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_162_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_162_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_162_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_163_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_163_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_163_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_164_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_164_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_164_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_165_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_165_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_165_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_166_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_166_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_166_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_167_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_167_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_167_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_168_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_168_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_168_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_169_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_169_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_169_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_170_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_170_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_170_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_171_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_171_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_171_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_172_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_172_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_172_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_173_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_173_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_173_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_174_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_174_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_174_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_175_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_175_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_175_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_176_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_176_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_176_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_177_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_177_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_177_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_178_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_178_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_178_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_179_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_179_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_179_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_180_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_180_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_180_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_181_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_181_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_181_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_182_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_182_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_182_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_183_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_183_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_183_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_184_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_184_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_184_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_185_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_185_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_185_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_186_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_186_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_186_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_187_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_187_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_187_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_188_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_188_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_188_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_189_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_189_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_189_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_190_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_190_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_190_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_191_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_191_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_191_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_192_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_192_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_192_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_193_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_193_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_193_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_194_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_194_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_194_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_195_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_195_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_195_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_196_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_196_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_196_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_197_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_197_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_197_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_198_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_198_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_198_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_199_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_199_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_199_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_200_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_200_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_200_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_201_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_201_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_201_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_202_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_202_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_202_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_203_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_203_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_203_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_204_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_204_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_204_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_205_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_205_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_205_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_206_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_206_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_206_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_207_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_207_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_207_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_208_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_208_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_208_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_209_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_209_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_209_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_210_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_210_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_210_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_211_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_211_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_211_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_212_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_212_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMRK_0_212_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);

static const ablk2cmat_t ATL_RKK_BLK2C_a1_b1[210] =
{
   ATL_dablk2cmat_28x1_a1_b1,  /* index 0 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 1 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 2 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 3 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 4 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 5 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 6 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 7 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 8 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 9 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 10 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 11 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 12 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 13 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 14 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 15 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 16 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 17 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 18 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 19 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 20 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 21 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 22 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 23 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 24 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 25 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 26 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 27 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 28 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 29 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 30 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 31 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 32 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 33 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 34 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 35 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 36 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 37 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 38 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 39 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 40 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 41 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 42 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 43 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 44 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 45 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 46 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 47 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 48 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 49 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 50 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 51 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 52 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 53 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 54 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 55 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 56 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 57 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 58 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 59 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 60 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 61 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 62 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 63 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 64 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 65 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 66 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 67 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 68 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 69 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 70 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 71 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 72 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 73 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 74 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 75 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 76 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 77 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 78 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 79 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 80 */
   ATL_dablk2cmat_8x1_a1_b1,  /* index 81 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 82 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 83 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 84 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 85 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 86 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 87 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 88 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 89 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 90 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 91 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 92 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 93 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 94 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 95 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 96 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 97 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 98 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 99 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 100 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 101 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 102 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 103 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 104 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 105 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 106 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 107 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 108 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 109 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 110 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 111 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 112 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 113 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 114 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 115 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 116 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 117 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 118 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 119 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 120 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 121 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 122 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 123 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 124 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 125 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 126 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 127 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 128 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 129 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 130 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 131 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 132 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 133 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 134 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 135 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 136 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 137 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 138 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 139 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 140 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 141 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 142 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 143 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 144 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 145 */
   ATL_dablk2cmat_28x1_a1_b1,  /* index 146 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 147 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 148 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 149 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 150 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 151 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 152 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 153 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 154 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 155 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 156 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 157 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 158 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 159 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 160 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 161 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 162 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 163 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 164 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 165 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 166 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 167 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 168 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 169 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 170 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 171 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 172 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 173 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 174 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 175 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 176 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 177 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 178 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 179 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 180 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 181 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 182 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 183 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 184 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 185 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 186 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 187 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 188 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 189 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 190 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 191 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 192 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 193 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 194 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 195 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 196 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 197 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 198 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 199 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 200 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 201 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 202 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 203 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 204 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 205 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 206 */
   ATL_dablk2cmat_12x1_a1_b1,  /* index 207 */
   ATL_dablk2cmat_6x1_a1_b1,  /* index 208 */
   ATL_dablk2cmat_12x1_a1_b1   /* index 209 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bn[210] =
{
   ATL_dablk2cmat_28x1_a1_bn,  /* index 0 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 1 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 2 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 3 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 4 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 5 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 6 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 7 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 8 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 9 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 10 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 11 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 12 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 13 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 14 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 15 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 16 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 17 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 18 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 19 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 20 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 21 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 22 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 23 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 24 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 25 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 26 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 27 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 28 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 29 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 30 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 31 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 32 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 33 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 34 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 35 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 36 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 37 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 38 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 39 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 40 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 41 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 42 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 43 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 44 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 45 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 46 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 47 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 48 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 49 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 50 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 51 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 52 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 53 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 54 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 55 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 56 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 57 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 58 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 59 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 60 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 61 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 62 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 63 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 64 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 65 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 66 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 67 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 68 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 69 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 70 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 71 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 72 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 73 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 74 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 75 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 76 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 77 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 78 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 79 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 80 */
   ATL_dablk2cmat_8x1_a1_bn,  /* index 81 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 82 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 83 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 84 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 85 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 86 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 87 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 88 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 89 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 90 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 91 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 92 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 93 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 94 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 95 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 96 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 97 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 98 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 99 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 100 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 101 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 102 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 103 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 104 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 105 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 106 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 107 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 108 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 109 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 110 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 111 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 112 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 113 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 114 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 115 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 116 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 117 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 118 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 119 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 120 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 121 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 122 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 123 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 124 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 125 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 126 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 127 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 128 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 129 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 130 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 131 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 132 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 133 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 134 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 135 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 136 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 137 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 138 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 139 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 140 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 141 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 142 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 143 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 144 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 145 */
   ATL_dablk2cmat_28x1_a1_bn,  /* index 146 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 147 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 148 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 149 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 150 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 151 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 152 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 153 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 154 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 155 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 156 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 157 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 158 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 159 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 160 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 161 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 162 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 163 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 164 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 165 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 166 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 167 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 168 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 169 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 170 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 171 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 172 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 173 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 174 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 175 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 176 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 177 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 178 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 179 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 180 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 181 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 182 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 183 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 184 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 185 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 186 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 187 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 188 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 189 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 190 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 191 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 192 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 193 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 194 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 195 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 196 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 197 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 198 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 199 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 200 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 201 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 202 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 203 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 204 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 205 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 206 */
   ATL_dablk2cmat_12x1_a1_bn,  /* index 207 */
   ATL_dablk2cmat_6x1_a1_bn,  /* index 208 */
   ATL_dablk2cmat_12x1_a1_bn   /* index 209 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_b0[210] =
{
   ATL_dablk2cmat_28x1_a1_b0,  /* index 0 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 1 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 2 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 3 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 4 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 5 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 6 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 7 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 8 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 9 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 10 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 11 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 12 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 13 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 14 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 15 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 16 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 17 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 18 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 19 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 20 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 21 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 22 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 23 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 24 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 25 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 26 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 27 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 28 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 29 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 30 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 31 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 32 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 33 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 34 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 35 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 36 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 37 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 38 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 39 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 40 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 41 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 42 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 43 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 44 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 45 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 46 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 47 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 48 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 49 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 50 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 51 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 52 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 53 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 54 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 55 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 56 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 57 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 58 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 59 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 60 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 61 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 62 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 63 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 64 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 65 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 66 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 67 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 68 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 69 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 70 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 71 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 72 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 73 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 74 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 75 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 76 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 77 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 78 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 79 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 80 */
   ATL_dablk2cmat_8x1_a1_b0,  /* index 81 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 82 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 83 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 84 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 85 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 86 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 87 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 88 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 89 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 90 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 91 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 92 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 93 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 94 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 95 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 96 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 97 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 98 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 99 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 100 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 101 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 102 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 103 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 104 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 105 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 106 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 107 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 108 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 109 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 110 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 111 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 112 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 113 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 114 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 115 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 116 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 117 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 118 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 119 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 120 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 121 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 122 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 123 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 124 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 125 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 126 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 127 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 128 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 129 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 130 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 131 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 132 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 133 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 134 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 135 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 136 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 137 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 138 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 139 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 140 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 141 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 142 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 143 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 144 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 145 */
   ATL_dablk2cmat_28x1_a1_b0,  /* index 146 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 147 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 148 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 149 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 150 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 151 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 152 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 153 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 154 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 155 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 156 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 157 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 158 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 159 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 160 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 161 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 162 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 163 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 164 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 165 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 166 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 167 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 168 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 169 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 170 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 171 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 172 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 173 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 174 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 175 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 176 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 177 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 178 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 179 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 180 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 181 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 182 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 183 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 184 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 185 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 186 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 187 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 188 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 189 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 190 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 191 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 192 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 193 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 194 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 195 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 196 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 197 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 198 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 199 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 200 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 201 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 202 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 203 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 204 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 205 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 206 */
   ATL_dablk2cmat_12x1_a1_b0,  /* index 207 */
   ATL_dablk2cmat_6x1_a1_b0,  /* index 208 */
   ATL_dablk2cmat_12x1_a1_b0   /* index 209 */
};


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bX[210] =
{
   ATL_dablk2cmat_28x1_a1_bX,  /* index 0 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 1 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 2 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 3 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 4 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 5 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 6 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 7 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 8 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 9 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 10 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 11 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 12 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 13 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 14 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 15 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 16 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 17 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 18 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 19 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 20 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 21 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 22 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 23 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 24 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 25 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 26 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 27 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 28 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 29 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 30 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 31 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 32 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 33 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 34 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 35 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 36 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 37 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 38 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 39 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 40 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 41 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 42 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 43 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 44 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 45 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 46 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 47 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 48 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 49 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 50 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 51 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 52 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 53 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 54 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 55 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 56 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 57 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 58 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 59 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 60 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 61 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 62 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 63 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 64 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 65 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 66 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 67 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 68 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 69 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 70 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 71 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 72 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 73 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 74 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 75 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 76 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 77 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 78 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 79 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 80 */
   ATL_dablk2cmat_8x1_a1_bX,  /* index 81 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 82 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 83 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 84 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 85 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 86 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 87 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 88 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 89 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 90 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 91 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 92 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 93 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 94 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 95 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 96 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 97 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 98 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 99 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 100 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 101 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 102 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 103 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 104 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 105 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 106 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 107 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 108 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 109 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 110 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 111 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 112 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 113 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 114 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 115 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 116 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 117 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 118 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 119 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 120 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 121 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 122 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 123 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 124 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 125 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 126 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 127 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 128 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 129 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 130 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 131 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 132 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 133 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 134 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 135 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 136 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 137 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 138 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 139 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 140 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 141 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 142 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 143 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 144 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 145 */
   ATL_dablk2cmat_28x1_a1_bX,  /* index 146 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 147 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 148 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 149 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 150 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 151 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 152 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 153 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 154 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 155 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 156 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 157 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 158 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 159 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 160 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 161 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 162 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 163 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 164 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 165 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 166 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 167 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 168 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 169 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 170 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 171 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 172 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 173 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 174 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 175 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 176 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 177 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 178 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 179 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 180 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 181 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 182 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 183 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 184 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 185 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 186 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 187 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 188 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 189 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 190 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 191 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 192 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 193 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 194 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 195 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 196 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 197 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 198 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 199 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 200 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 201 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 202 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 203 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 204 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 205 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 206 */
   ATL_dablk2cmat_12x1_a1_bX,  /* index 207 */
   ATL_dablk2cmat_6x1_a1_bX,  /* index 208 */
   ATL_dablk2cmat_12x1_a1_bX   /* index 209 */
};


static const cm2am_t ATL_RKK_A2BLK_a1[210] =
{
   ATL_dcm2am_a1_28,  /* index 0 */
   ATL_dcm2am_a1_2x12,  /* index 1 */
   ATL_dcm2am_a1_28,  /* index 2 */
   ATL_dcm2am_a1_28,  /* index 3 */
   ATL_dcm2am_a1_28,  /* index 4 */
   ATL_dcm2am_a1_28,  /* index 5 */
   ATL_dcm2am_a1_28,  /* index 6 */
   ATL_dcm2am_a1_28,  /* index 7 */
   ATL_dcm2am_a1_28,  /* index 8 */
   ATL_dcm2am_a1_28,  /* index 9 */
   ATL_dcm2am_a1_28,  /* index 10 */
   ATL_dcm2am_a1_28,  /* index 11 */
   ATL_dcm2am_a1_28,  /* index 12 */
   ATL_dcm2am_a1_28,  /* index 13 */
   ATL_dcm2am_a1_28,  /* index 14 */
   ATL_dcm2am_a1_2x12,  /* index 15 */
   ATL_dcm2am_a1_28,  /* index 16 */
   ATL_dcm2am_a1_28,  /* index 17 */
   ATL_dcm2am_a1_28,  /* index 18 */
   ATL_dcm2am_a1_2x12,  /* index 19 */
   ATL_dcm2am_a1_28,  /* index 20 */
   ATL_dcm2am_a1_28,  /* index 21 */
   ATL_dcm2am_a1_28,  /* index 22 */
   ATL_dcm2am_a1_2x12,  /* index 23 */
   ATL_dcm2am_a1_28,  /* index 24 */
   ATL_dcm2am_a1_28,  /* index 25 */
   ATL_dcm2am_a1_28,  /* index 26 */
   ATL_dcm2am_a1_28,  /* index 27 */
   ATL_dcm2am_a1_28,  /* index 28 */
   ATL_dcm2am_a1_2x12,  /* index 29 */
   ATL_dcm2am_a1_28,  /* index 30 */
   ATL_dcm2am_a1_28,  /* index 31 */
   ATL_dcm2am_a1_28,  /* index 32 */
   ATL_dcm2am_a1_2x12,  /* index 33 */
   ATL_dcm2am_a1_28,  /* index 34 */
   ATL_dcm2am_a1_2x12,  /* index 35 */
   ATL_dcm2am_a1_28,  /* index 36 */
   ATL_dcm2am_a1_2x12,  /* index 37 */
   ATL_dcm2am_a1_28,  /* index 38 */
   ATL_dcm2am_a1_2x12,  /* index 39 */
   ATL_dcm2am_a1_28,  /* index 40 */
   ATL_dcm2am_a1_2x12,  /* index 41 */
   ATL_dcm2am_a1_28,  /* index 42 */
   ATL_dcm2am_a1_2x12,  /* index 43 */
   ATL_dcm2am_a1_28,  /* index 44 */
   ATL_dcm2am_a1_2x12,  /* index 45 */
   ATL_dcm2am_a1_28,  /* index 46 */
   ATL_dcm2am_a1_2x12,  /* index 47 */
   ATL_dcm2am_a1_28,  /* index 48 */
   ATL_dcm2am_a1_2x12,  /* index 49 */
   ATL_dcm2am_a1_28,  /* index 50 */
   ATL_dcm2am_a1_2x12,  /* index 51 */
   ATL_dcm2am_a1_28,  /* index 52 */
   ATL_dcm2am_a1_2x12,  /* index 53 */
   ATL_dcm2am_a1_28,  /* index 54 */
   ATL_dcm2am_a1_2x12,  /* index 55 */
   ATL_dcm2am_a1_28,  /* index 56 */
   ATL_dcm2am_a1_2x12,  /* index 57 */
   ATL_dcm2am_a1_28,  /* index 58 */
   ATL_dcm2am_a1_2x12,  /* index 59 */
   ATL_dcm2am_a1_28,  /* index 60 */
   ATL_dcm2am_a1_2x12,  /* index 61 */
   ATL_dcm2am_a1_28,  /* index 62 */
   ATL_dcm2am_a1_2x12,  /* index 63 */
   ATL_dcm2am_a1_28,  /* index 64 */
   ATL_dcm2am_a1_2x12,  /* index 65 */
   ATL_dcm2am_a1_28,  /* index 66 */
   ATL_dcm2am_a1_2x12,  /* index 67 */
   ATL_dcm2am_a1_28,  /* index 68 */
   ATL_dcm2am_a1_2x12,  /* index 69 */
   ATL_dcm2am_a1_28,  /* index 70 */
   ATL_dcm2am_a1_2x12,  /* index 71 */
   ATL_dcm2am_a1_28,  /* index 72 */
   ATL_dcm2am_a1_2x12,  /* index 73 */
   ATL_dcm2am_a1_28,  /* index 74 */
   ATL_dcm2am_a1_2x12,  /* index 75 */
   ATL_dcm2am_a1_28,  /* index 76 */
   ATL_dcm2am_a1_2x12,  /* index 77 */
   ATL_dcm2am_a1_28,  /* index 78 */
   ATL_dcm2am_a1_2x12,  /* index 79 */
   ATL_dcm2am_a1_28,  /* index 80 */
   ATL_dcm2am_a1_2x8,  /* index 81 */
   ATL_dcm2am_a1_28,  /* index 82 */
   ATL_dcm2am_a1_2x12,  /* index 83 */
   ATL_dcm2am_a1_28,  /* index 84 */
   ATL_dcm2am_a1_2x12,  /* index 85 */
   ATL_dcm2am_a1_28,  /* index 86 */
   ATL_dcm2am_a1_2x12,  /* index 87 */
   ATL_dcm2am_a1_28,  /* index 88 */
   ATL_dcm2am_a1_2x12,  /* index 89 */
   ATL_dcm2am_a1_28,  /* index 90 */
   ATL_dcm2am_a1_2x12,  /* index 91 */
   ATL_dcm2am_a1_28,  /* index 92 */
   ATL_dcm2am_a1_2x12,  /* index 93 */
   ATL_dcm2am_a1_28,  /* index 94 */
   ATL_dcm2am_a1_2x12,  /* index 95 */
   ATL_dcm2am_a1_28,  /* index 96 */
   ATL_dcm2am_a1_2x12,  /* index 97 */
   ATL_dcm2am_a1_28,  /* index 98 */
   ATL_dcm2am_a1_2x12,  /* index 99 */
   ATL_dcm2am_a1_28,  /* index 100 */
   ATL_dcm2am_a1_2x12,  /* index 101 */
   ATL_dcm2am_a1_28,  /* index 102 */
   ATL_dcm2am_a1_2x12,  /* index 103 */
   ATL_dcm2am_a1_28,  /* index 104 */
   ATL_dcm2am_a1_2x12,  /* index 105 */
   ATL_dcm2am_a1_28,  /* index 106 */
   ATL_dcm2am_a1_2x12,  /* index 107 */
   ATL_dcm2am_a1_28,  /* index 108 */
   ATL_dcm2am_a1_2x12,  /* index 109 */
   ATL_dcm2am_a1_28,  /* index 110 */
   ATL_dcm2am_a1_2x12,  /* index 111 */
   ATL_dcm2am_a1_28,  /* index 112 */
   ATL_dcm2am_a1_2x12,  /* index 113 */
   ATL_dcm2am_a1_28,  /* index 114 */
   ATL_dcm2am_a1_2x12,  /* index 115 */
   ATL_dcm2am_a1_28,  /* index 116 */
   ATL_dcm2am_a1_2x12,  /* index 117 */
   ATL_dcm2am_a1_28,  /* index 118 */
   ATL_dcm2am_a1_2x12,  /* index 119 */
   ATL_dcm2am_a1_28,  /* index 120 */
   ATL_dcm2am_a1_2x12,  /* index 121 */
   ATL_dcm2am_a1_28,  /* index 122 */
   ATL_dcm2am_a1_2x12,  /* index 123 */
   ATL_dcm2am_a1_28,  /* index 124 */
   ATL_dcm2am_a1_2x12,  /* index 125 */
   ATL_dcm2am_a1_28,  /* index 126 */
   ATL_dcm2am_a1_2x12,  /* index 127 */
   ATL_dcm2am_a1_28,  /* index 128 */
   ATL_dcm2am_a1_2x12,  /* index 129 */
   ATL_dcm2am_a1_28,  /* index 130 */
   ATL_dcm2am_a1_2x12,  /* index 131 */
   ATL_dcm2am_a1_28,  /* index 132 */
   ATL_dcm2am_a1_2x12,  /* index 133 */
   ATL_dcm2am_a1_28,  /* index 134 */
   ATL_dcm2am_a1_2x12,  /* index 135 */
   ATL_dcm2am_a1_28,  /* index 136 */
   ATL_dcm2am_a1_2x12,  /* index 137 */
   ATL_dcm2am_a1_28,  /* index 138 */
   ATL_dcm2am_a1_2x12,  /* index 139 */
   ATL_dcm2am_a1_28,  /* index 140 */
   ATL_dcm2am_a1_2x12,  /* index 141 */
   ATL_dcm2am_a1_28,  /* index 142 */
   ATL_dcm2am_a1_2x12,  /* index 143 */
   ATL_dcm2am_a1_28,  /* index 144 */
   ATL_dcm2am_a1_2x12,  /* index 145 */
   ATL_dcm2am_a1_28,  /* index 146 */
   ATL_dcm2am_a1_2x12,  /* index 147 */
   ATL_dcm2am_a1_6,  /* index 148 */
   ATL_dcm2am_a1_2x12,  /* index 149 */
   ATL_dcm2am_a1_6,  /* index 150 */
   ATL_dcm2am_a1_2x12,  /* index 151 */
   ATL_dcm2am_a1_6,  /* index 152 */
   ATL_dcm2am_a1_2x12,  /* index 153 */
   ATL_dcm2am_a1_6,  /* index 154 */
   ATL_dcm2am_a1_2x12,  /* index 155 */
   ATL_dcm2am_a1_6,  /* index 156 */
   ATL_dcm2am_a1_2x12,  /* index 157 */
   ATL_dcm2am_a1_6,  /* index 158 */
   ATL_dcm2am_a1_2x12,  /* index 159 */
   ATL_dcm2am_a1_6,  /* index 160 */
   ATL_dcm2am_a1_2x12,  /* index 161 */
   ATL_dcm2am_a1_6,  /* index 162 */
   ATL_dcm2am_a1_2x12,  /* index 163 */
   ATL_dcm2am_a1_6,  /* index 164 */
   ATL_dcm2am_a1_2x12,  /* index 165 */
   ATL_dcm2am_a1_6,  /* index 166 */
   ATL_dcm2am_a1_2x12,  /* index 167 */
   ATL_dcm2am_a1_6,  /* index 168 */
   ATL_dcm2am_a1_2x12,  /* index 169 */
   ATL_dcm2am_a1_6,  /* index 170 */
   ATL_dcm2am_a1_2x12,  /* index 171 */
   ATL_dcm2am_a1_6,  /* index 172 */
   ATL_dcm2am_a1_2x12,  /* index 173 */
   ATL_dcm2am_a1_6,  /* index 174 */
   ATL_dcm2am_a1_2x12,  /* index 175 */
   ATL_dcm2am_a1_6,  /* index 176 */
   ATL_dcm2am_a1_2x12,  /* index 177 */
   ATL_dcm2am_a1_6,  /* index 178 */
   ATL_dcm2am_a1_2x12,  /* index 179 */
   ATL_dcm2am_a1_6,  /* index 180 */
   ATL_dcm2am_a1_2x12,  /* index 181 */
   ATL_dcm2am_a1_6,  /* index 182 */
   ATL_dcm2am_a1_2x12,  /* index 183 */
   ATL_dcm2am_a1_6,  /* index 184 */
   ATL_dcm2am_a1_2x12,  /* index 185 */
   ATL_dcm2am_a1_6,  /* index 186 */
   ATL_dcm2am_a1_2x12,  /* index 187 */
   ATL_dcm2am_a1_6,  /* index 188 */
   ATL_dcm2am_a1_2x12,  /* index 189 */
   ATL_dcm2am_a1_6,  /* index 190 */
   ATL_dcm2am_a1_2x12,  /* index 191 */
   ATL_dcm2am_a1_6,  /* index 192 */
   ATL_dcm2am_a1_2x12,  /* index 193 */
   ATL_dcm2am_a1_6,  /* index 194 */
   ATL_dcm2am_a1_2x12,  /* index 195 */
   ATL_dcm2am_a1_6,  /* index 196 */
   ATL_dcm2am_a1_2x12,  /* index 197 */
   ATL_dcm2am_a1_6,  /* index 198 */
   ATL_dcm2am_a1_2x12,  /* index 199 */
   ATL_dcm2am_a1_6,  /* index 200 */
   ATL_dcm2am_a1_2x12,  /* index 201 */
   ATL_dcm2am_a1_6,  /* index 202 */
   ATL_dcm2am_a1_2x12,  /* index 203 */
   ATL_dcm2am_a1_6,  /* index 204 */
   ATL_dcm2am_a1_2x12,  /* index 205 */
   ATL_dcm2am_a1_6,  /* index 206 */
   ATL_dcm2am_a1_2x12,  /* index 207 */
   ATL_dcm2am_a1_6,  /* index 208 */
   ATL_dcm2am_a1_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_AT2BLK_a1[210] =
{
   ATL_drm2am_a1_28,  /* index 0 */
   ATL_drm2am_a1_2x12,  /* index 1 */
   ATL_drm2am_a1_28,  /* index 2 */
   ATL_drm2am_a1_28,  /* index 3 */
   ATL_drm2am_a1_28,  /* index 4 */
   ATL_drm2am_a1_28,  /* index 5 */
   ATL_drm2am_a1_28,  /* index 6 */
   ATL_drm2am_a1_28,  /* index 7 */
   ATL_drm2am_a1_28,  /* index 8 */
   ATL_drm2am_a1_28,  /* index 9 */
   ATL_drm2am_a1_28,  /* index 10 */
   ATL_drm2am_a1_28,  /* index 11 */
   ATL_drm2am_a1_28,  /* index 12 */
   ATL_drm2am_a1_28,  /* index 13 */
   ATL_drm2am_a1_28,  /* index 14 */
   ATL_drm2am_a1_2x12,  /* index 15 */
   ATL_drm2am_a1_28,  /* index 16 */
   ATL_drm2am_a1_28,  /* index 17 */
   ATL_drm2am_a1_28,  /* index 18 */
   ATL_drm2am_a1_2x12,  /* index 19 */
   ATL_drm2am_a1_28,  /* index 20 */
   ATL_drm2am_a1_28,  /* index 21 */
   ATL_drm2am_a1_28,  /* index 22 */
   ATL_drm2am_a1_2x12,  /* index 23 */
   ATL_drm2am_a1_28,  /* index 24 */
   ATL_drm2am_a1_28,  /* index 25 */
   ATL_drm2am_a1_28,  /* index 26 */
   ATL_drm2am_a1_28,  /* index 27 */
   ATL_drm2am_a1_28,  /* index 28 */
   ATL_drm2am_a1_2x12,  /* index 29 */
   ATL_drm2am_a1_28,  /* index 30 */
   ATL_drm2am_a1_28,  /* index 31 */
   ATL_drm2am_a1_28,  /* index 32 */
   ATL_drm2am_a1_2x12,  /* index 33 */
   ATL_drm2am_a1_28,  /* index 34 */
   ATL_drm2am_a1_2x12,  /* index 35 */
   ATL_drm2am_a1_28,  /* index 36 */
   ATL_drm2am_a1_2x12,  /* index 37 */
   ATL_drm2am_a1_28,  /* index 38 */
   ATL_drm2am_a1_2x12,  /* index 39 */
   ATL_drm2am_a1_28,  /* index 40 */
   ATL_drm2am_a1_2x12,  /* index 41 */
   ATL_drm2am_a1_28,  /* index 42 */
   ATL_drm2am_a1_2x12,  /* index 43 */
   ATL_drm2am_a1_28,  /* index 44 */
   ATL_drm2am_a1_2x12,  /* index 45 */
   ATL_drm2am_a1_28,  /* index 46 */
   ATL_drm2am_a1_2x12,  /* index 47 */
   ATL_drm2am_a1_28,  /* index 48 */
   ATL_drm2am_a1_2x12,  /* index 49 */
   ATL_drm2am_a1_28,  /* index 50 */
   ATL_drm2am_a1_2x12,  /* index 51 */
   ATL_drm2am_a1_28,  /* index 52 */
   ATL_drm2am_a1_2x12,  /* index 53 */
   ATL_drm2am_a1_28,  /* index 54 */
   ATL_drm2am_a1_2x12,  /* index 55 */
   ATL_drm2am_a1_28,  /* index 56 */
   ATL_drm2am_a1_2x12,  /* index 57 */
   ATL_drm2am_a1_28,  /* index 58 */
   ATL_drm2am_a1_2x12,  /* index 59 */
   ATL_drm2am_a1_28,  /* index 60 */
   ATL_drm2am_a1_2x12,  /* index 61 */
   ATL_drm2am_a1_28,  /* index 62 */
   ATL_drm2am_a1_2x12,  /* index 63 */
   ATL_drm2am_a1_28,  /* index 64 */
   ATL_drm2am_a1_2x12,  /* index 65 */
   ATL_drm2am_a1_28,  /* index 66 */
   ATL_drm2am_a1_2x12,  /* index 67 */
   ATL_drm2am_a1_28,  /* index 68 */
   ATL_drm2am_a1_2x12,  /* index 69 */
   ATL_drm2am_a1_28,  /* index 70 */
   ATL_drm2am_a1_2x12,  /* index 71 */
   ATL_drm2am_a1_28,  /* index 72 */
   ATL_drm2am_a1_2x12,  /* index 73 */
   ATL_drm2am_a1_28,  /* index 74 */
   ATL_drm2am_a1_2x12,  /* index 75 */
   ATL_drm2am_a1_28,  /* index 76 */
   ATL_drm2am_a1_2x12,  /* index 77 */
   ATL_drm2am_a1_28,  /* index 78 */
   ATL_drm2am_a1_2x12,  /* index 79 */
   ATL_drm2am_a1_28,  /* index 80 */
   ATL_drm2am_a1_2x8,  /* index 81 */
   ATL_drm2am_a1_28,  /* index 82 */
   ATL_drm2am_a1_2x12,  /* index 83 */
   ATL_drm2am_a1_28,  /* index 84 */
   ATL_drm2am_a1_2x12,  /* index 85 */
   ATL_drm2am_a1_28,  /* index 86 */
   ATL_drm2am_a1_2x12,  /* index 87 */
   ATL_drm2am_a1_28,  /* index 88 */
   ATL_drm2am_a1_2x12,  /* index 89 */
   ATL_drm2am_a1_28,  /* index 90 */
   ATL_drm2am_a1_2x12,  /* index 91 */
   ATL_drm2am_a1_28,  /* index 92 */
   ATL_drm2am_a1_2x12,  /* index 93 */
   ATL_drm2am_a1_28,  /* index 94 */
   ATL_drm2am_a1_2x12,  /* index 95 */
   ATL_drm2am_a1_28,  /* index 96 */
   ATL_drm2am_a1_2x12,  /* index 97 */
   ATL_drm2am_a1_28,  /* index 98 */
   ATL_drm2am_a1_2x12,  /* index 99 */
   ATL_drm2am_a1_28,  /* index 100 */
   ATL_drm2am_a1_2x12,  /* index 101 */
   ATL_drm2am_a1_28,  /* index 102 */
   ATL_drm2am_a1_2x12,  /* index 103 */
   ATL_drm2am_a1_28,  /* index 104 */
   ATL_drm2am_a1_2x12,  /* index 105 */
   ATL_drm2am_a1_28,  /* index 106 */
   ATL_drm2am_a1_2x12,  /* index 107 */
   ATL_drm2am_a1_28,  /* index 108 */
   ATL_drm2am_a1_2x12,  /* index 109 */
   ATL_drm2am_a1_28,  /* index 110 */
   ATL_drm2am_a1_2x12,  /* index 111 */
   ATL_drm2am_a1_28,  /* index 112 */
   ATL_drm2am_a1_2x12,  /* index 113 */
   ATL_drm2am_a1_28,  /* index 114 */
   ATL_drm2am_a1_2x12,  /* index 115 */
   ATL_drm2am_a1_28,  /* index 116 */
   ATL_drm2am_a1_2x12,  /* index 117 */
   ATL_drm2am_a1_28,  /* index 118 */
   ATL_drm2am_a1_2x12,  /* index 119 */
   ATL_drm2am_a1_28,  /* index 120 */
   ATL_drm2am_a1_2x12,  /* index 121 */
   ATL_drm2am_a1_28,  /* index 122 */
   ATL_drm2am_a1_2x12,  /* index 123 */
   ATL_drm2am_a1_28,  /* index 124 */
   ATL_drm2am_a1_2x12,  /* index 125 */
   ATL_drm2am_a1_28,  /* index 126 */
   ATL_drm2am_a1_2x12,  /* index 127 */
   ATL_drm2am_a1_28,  /* index 128 */
   ATL_drm2am_a1_2x12,  /* index 129 */
   ATL_drm2am_a1_28,  /* index 130 */
   ATL_drm2am_a1_2x12,  /* index 131 */
   ATL_drm2am_a1_28,  /* index 132 */
   ATL_drm2am_a1_2x12,  /* index 133 */
   ATL_drm2am_a1_28,  /* index 134 */
   ATL_drm2am_a1_2x12,  /* index 135 */
   ATL_drm2am_a1_28,  /* index 136 */
   ATL_drm2am_a1_2x12,  /* index 137 */
   ATL_drm2am_a1_28,  /* index 138 */
   ATL_drm2am_a1_2x12,  /* index 139 */
   ATL_drm2am_a1_28,  /* index 140 */
   ATL_drm2am_a1_2x12,  /* index 141 */
   ATL_drm2am_a1_28,  /* index 142 */
   ATL_drm2am_a1_2x12,  /* index 143 */
   ATL_drm2am_a1_28,  /* index 144 */
   ATL_drm2am_a1_2x12,  /* index 145 */
   ATL_drm2am_a1_28,  /* index 146 */
   ATL_drm2am_a1_2x12,  /* index 147 */
   ATL_drm2am_a1_6,  /* index 148 */
   ATL_drm2am_a1_2x12,  /* index 149 */
   ATL_drm2am_a1_6,  /* index 150 */
   ATL_drm2am_a1_2x12,  /* index 151 */
   ATL_drm2am_a1_6,  /* index 152 */
   ATL_drm2am_a1_2x12,  /* index 153 */
   ATL_drm2am_a1_6,  /* index 154 */
   ATL_drm2am_a1_2x12,  /* index 155 */
   ATL_drm2am_a1_6,  /* index 156 */
   ATL_drm2am_a1_2x12,  /* index 157 */
   ATL_drm2am_a1_6,  /* index 158 */
   ATL_drm2am_a1_2x12,  /* index 159 */
   ATL_drm2am_a1_6,  /* index 160 */
   ATL_drm2am_a1_2x12,  /* index 161 */
   ATL_drm2am_a1_6,  /* index 162 */
   ATL_drm2am_a1_2x12,  /* index 163 */
   ATL_drm2am_a1_6,  /* index 164 */
   ATL_drm2am_a1_2x12,  /* index 165 */
   ATL_drm2am_a1_6,  /* index 166 */
   ATL_drm2am_a1_2x12,  /* index 167 */
   ATL_drm2am_a1_6,  /* index 168 */
   ATL_drm2am_a1_2x12,  /* index 169 */
   ATL_drm2am_a1_6,  /* index 170 */
   ATL_drm2am_a1_2x12,  /* index 171 */
   ATL_drm2am_a1_6,  /* index 172 */
   ATL_drm2am_a1_2x12,  /* index 173 */
   ATL_drm2am_a1_6,  /* index 174 */
   ATL_drm2am_a1_2x12,  /* index 175 */
   ATL_drm2am_a1_6,  /* index 176 */
   ATL_drm2am_a1_2x12,  /* index 177 */
   ATL_drm2am_a1_6,  /* index 178 */
   ATL_drm2am_a1_2x12,  /* index 179 */
   ATL_drm2am_a1_6,  /* index 180 */
   ATL_drm2am_a1_2x12,  /* index 181 */
   ATL_drm2am_a1_6,  /* index 182 */
   ATL_drm2am_a1_2x12,  /* index 183 */
   ATL_drm2am_a1_6,  /* index 184 */
   ATL_drm2am_a1_2x12,  /* index 185 */
   ATL_drm2am_a1_6,  /* index 186 */
   ATL_drm2am_a1_2x12,  /* index 187 */
   ATL_drm2am_a1_6,  /* index 188 */
   ATL_drm2am_a1_2x12,  /* index 189 */
   ATL_drm2am_a1_6,  /* index 190 */
   ATL_drm2am_a1_2x12,  /* index 191 */
   ATL_drm2am_a1_6,  /* index 192 */
   ATL_drm2am_a1_2x12,  /* index 193 */
   ATL_drm2am_a1_6,  /* index 194 */
   ATL_drm2am_a1_2x12,  /* index 195 */
   ATL_drm2am_a1_6,  /* index 196 */
   ATL_drm2am_a1_2x12,  /* index 197 */
   ATL_drm2am_a1_6,  /* index 198 */
   ATL_drm2am_a1_2x12,  /* index 199 */
   ATL_drm2am_a1_6,  /* index 200 */
   ATL_drm2am_a1_2x12,  /* index 201 */
   ATL_drm2am_a1_6,  /* index 202 */
   ATL_drm2am_a1_2x12,  /* index 203 */
   ATL_drm2am_a1_6,  /* index 204 */
   ATL_drm2am_a1_2x12,  /* index 205 */
   ATL_drm2am_a1_6,  /* index 206 */
   ATL_drm2am_a1_2x12,  /* index 207 */
   ATL_drm2am_a1_6,  /* index 208 */
   ATL_drm2am_a1_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_B2BLK_a1[210] =
{
   ATL_dcm2am_a1_1,  /* index 0 */
   ATL_dcm2am_a1_2x1,  /* index 1 */
   ATL_dcm2am_a1_1,  /* index 2 */
   ATL_dcm2am_a1_1,  /* index 3 */
   ATL_dcm2am_a1_1,  /* index 4 */
   ATL_dcm2am_a1_1,  /* index 5 */
   ATL_dcm2am_a1_1,  /* index 6 */
   ATL_dcm2am_a1_1,  /* index 7 */
   ATL_dcm2am_a1_1,  /* index 8 */
   ATL_dcm2am_a1_1,  /* index 9 */
   ATL_dcm2am_a1_1,  /* index 10 */
   ATL_dcm2am_a1_1,  /* index 11 */
   ATL_dcm2am_a1_1,  /* index 12 */
   ATL_dcm2am_a1_1,  /* index 13 */
   ATL_dcm2am_a1_1,  /* index 14 */
   ATL_dcm2am_a1_2x1,  /* index 15 */
   ATL_dcm2am_a1_1,  /* index 16 */
   ATL_dcm2am_a1_1,  /* index 17 */
   ATL_dcm2am_a1_1,  /* index 18 */
   ATL_dcm2am_a1_2x1,  /* index 19 */
   ATL_dcm2am_a1_1,  /* index 20 */
   ATL_dcm2am_a1_1,  /* index 21 */
   ATL_dcm2am_a1_1,  /* index 22 */
   ATL_dcm2am_a1_2x1,  /* index 23 */
   ATL_dcm2am_a1_1,  /* index 24 */
   ATL_dcm2am_a1_1,  /* index 25 */
   ATL_dcm2am_a1_1,  /* index 26 */
   ATL_dcm2am_a1_1,  /* index 27 */
   ATL_dcm2am_a1_1,  /* index 28 */
   ATL_dcm2am_a1_2x1,  /* index 29 */
   ATL_dcm2am_a1_1,  /* index 30 */
   ATL_dcm2am_a1_1,  /* index 31 */
   ATL_dcm2am_a1_1,  /* index 32 */
   ATL_dcm2am_a1_2x1,  /* index 33 */
   ATL_dcm2am_a1_1,  /* index 34 */
   ATL_dcm2am_a1_2x1,  /* index 35 */
   ATL_dcm2am_a1_1,  /* index 36 */
   ATL_dcm2am_a1_2x1,  /* index 37 */
   ATL_dcm2am_a1_1,  /* index 38 */
   ATL_dcm2am_a1_2x1,  /* index 39 */
   ATL_dcm2am_a1_1,  /* index 40 */
   ATL_dcm2am_a1_2x1,  /* index 41 */
   ATL_dcm2am_a1_1,  /* index 42 */
   ATL_dcm2am_a1_2x1,  /* index 43 */
   ATL_dcm2am_a1_1,  /* index 44 */
   ATL_dcm2am_a1_2x1,  /* index 45 */
   ATL_dcm2am_a1_1,  /* index 46 */
   ATL_dcm2am_a1_2x1,  /* index 47 */
   ATL_dcm2am_a1_1,  /* index 48 */
   ATL_dcm2am_a1_2x1,  /* index 49 */
   ATL_dcm2am_a1_1,  /* index 50 */
   ATL_dcm2am_a1_2x1,  /* index 51 */
   ATL_dcm2am_a1_1,  /* index 52 */
   ATL_dcm2am_a1_2x1,  /* index 53 */
   ATL_dcm2am_a1_1,  /* index 54 */
   ATL_dcm2am_a1_2x1,  /* index 55 */
   ATL_dcm2am_a1_1,  /* index 56 */
   ATL_dcm2am_a1_2x1,  /* index 57 */
   ATL_dcm2am_a1_1,  /* index 58 */
   ATL_dcm2am_a1_2x1,  /* index 59 */
   ATL_dcm2am_a1_1,  /* index 60 */
   ATL_dcm2am_a1_2x1,  /* index 61 */
   ATL_dcm2am_a1_1,  /* index 62 */
   ATL_dcm2am_a1_2x1,  /* index 63 */
   ATL_dcm2am_a1_1,  /* index 64 */
   ATL_dcm2am_a1_2x1,  /* index 65 */
   ATL_dcm2am_a1_1,  /* index 66 */
   ATL_dcm2am_a1_2x1,  /* index 67 */
   ATL_dcm2am_a1_1,  /* index 68 */
   ATL_dcm2am_a1_2x1,  /* index 69 */
   ATL_dcm2am_a1_1,  /* index 70 */
   ATL_dcm2am_a1_2x1,  /* index 71 */
   ATL_dcm2am_a1_1,  /* index 72 */
   ATL_dcm2am_a1_2x1,  /* index 73 */
   ATL_dcm2am_a1_1,  /* index 74 */
   ATL_dcm2am_a1_2x1,  /* index 75 */
   ATL_dcm2am_a1_1,  /* index 76 */
   ATL_dcm2am_a1_2x1,  /* index 77 */
   ATL_dcm2am_a1_1,  /* index 78 */
   ATL_dcm2am_a1_2x1,  /* index 79 */
   ATL_dcm2am_a1_1,  /* index 80 */
   ATL_dcm2am_a1_2x1,  /* index 81 */
   ATL_dcm2am_a1_1,  /* index 82 */
   ATL_dcm2am_a1_2x1,  /* index 83 */
   ATL_dcm2am_a1_1,  /* index 84 */
   ATL_dcm2am_a1_2x1,  /* index 85 */
   ATL_dcm2am_a1_1,  /* index 86 */
   ATL_dcm2am_a1_2x1,  /* index 87 */
   ATL_dcm2am_a1_1,  /* index 88 */
   ATL_dcm2am_a1_2x1,  /* index 89 */
   ATL_dcm2am_a1_1,  /* index 90 */
   ATL_dcm2am_a1_2x1,  /* index 91 */
   ATL_dcm2am_a1_1,  /* index 92 */
   ATL_dcm2am_a1_2x1,  /* index 93 */
   ATL_dcm2am_a1_1,  /* index 94 */
   ATL_dcm2am_a1_2x1,  /* index 95 */
   ATL_dcm2am_a1_1,  /* index 96 */
   ATL_dcm2am_a1_2x1,  /* index 97 */
   ATL_dcm2am_a1_1,  /* index 98 */
   ATL_dcm2am_a1_2x1,  /* index 99 */
   ATL_dcm2am_a1_1,  /* index 100 */
   ATL_dcm2am_a1_2x1,  /* index 101 */
   ATL_dcm2am_a1_1,  /* index 102 */
   ATL_dcm2am_a1_2x1,  /* index 103 */
   ATL_dcm2am_a1_1,  /* index 104 */
   ATL_dcm2am_a1_2x1,  /* index 105 */
   ATL_dcm2am_a1_1,  /* index 106 */
   ATL_dcm2am_a1_2x1,  /* index 107 */
   ATL_dcm2am_a1_1,  /* index 108 */
   ATL_dcm2am_a1_2x1,  /* index 109 */
   ATL_dcm2am_a1_1,  /* index 110 */
   ATL_dcm2am_a1_2x1,  /* index 111 */
   ATL_dcm2am_a1_1,  /* index 112 */
   ATL_dcm2am_a1_2x1,  /* index 113 */
   ATL_dcm2am_a1_1,  /* index 114 */
   ATL_dcm2am_a1_2x1,  /* index 115 */
   ATL_dcm2am_a1_1,  /* index 116 */
   ATL_dcm2am_a1_2x1,  /* index 117 */
   ATL_dcm2am_a1_1,  /* index 118 */
   ATL_dcm2am_a1_2x1,  /* index 119 */
   ATL_dcm2am_a1_1,  /* index 120 */
   ATL_dcm2am_a1_2x1,  /* index 121 */
   ATL_dcm2am_a1_1,  /* index 122 */
   ATL_dcm2am_a1_2x1,  /* index 123 */
   ATL_dcm2am_a1_1,  /* index 124 */
   ATL_dcm2am_a1_2x1,  /* index 125 */
   ATL_dcm2am_a1_1,  /* index 126 */
   ATL_dcm2am_a1_2x1,  /* index 127 */
   ATL_dcm2am_a1_1,  /* index 128 */
   ATL_dcm2am_a1_2x1,  /* index 129 */
   ATL_dcm2am_a1_1,  /* index 130 */
   ATL_dcm2am_a1_2x1,  /* index 131 */
   ATL_dcm2am_a1_1,  /* index 132 */
   ATL_dcm2am_a1_2x1,  /* index 133 */
   ATL_dcm2am_a1_1,  /* index 134 */
   ATL_dcm2am_a1_2x1,  /* index 135 */
   ATL_dcm2am_a1_1,  /* index 136 */
   ATL_dcm2am_a1_2x1,  /* index 137 */
   ATL_dcm2am_a1_1,  /* index 138 */
   ATL_dcm2am_a1_2x1,  /* index 139 */
   ATL_dcm2am_a1_1,  /* index 140 */
   ATL_dcm2am_a1_2x1,  /* index 141 */
   ATL_dcm2am_a1_1,  /* index 142 */
   ATL_dcm2am_a1_2x1,  /* index 143 */
   ATL_dcm2am_a1_1,  /* index 144 */
   ATL_dcm2am_a1_2x1,  /* index 145 */
   ATL_dcm2am_a1_1,  /* index 146 */
   ATL_dcm2am_a1_2x1,  /* index 147 */
   ATL_dcm2am_a1_1,  /* index 148 */
   ATL_dcm2am_a1_2x1,  /* index 149 */
   ATL_dcm2am_a1_1,  /* index 150 */
   ATL_dcm2am_a1_2x1,  /* index 151 */
   ATL_dcm2am_a1_1,  /* index 152 */
   ATL_dcm2am_a1_2x1,  /* index 153 */
   ATL_dcm2am_a1_1,  /* index 154 */
   ATL_dcm2am_a1_2x1,  /* index 155 */
   ATL_dcm2am_a1_1,  /* index 156 */
   ATL_dcm2am_a1_2x1,  /* index 157 */
   ATL_dcm2am_a1_1,  /* index 158 */
   ATL_dcm2am_a1_2x1,  /* index 159 */
   ATL_dcm2am_a1_1,  /* index 160 */
   ATL_dcm2am_a1_2x1,  /* index 161 */
   ATL_dcm2am_a1_1,  /* index 162 */
   ATL_dcm2am_a1_2x1,  /* index 163 */
   ATL_dcm2am_a1_1,  /* index 164 */
   ATL_dcm2am_a1_2x1,  /* index 165 */
   ATL_dcm2am_a1_1,  /* index 166 */
   ATL_dcm2am_a1_2x1,  /* index 167 */
   ATL_dcm2am_a1_1,  /* index 168 */
   ATL_dcm2am_a1_2x1,  /* index 169 */
   ATL_dcm2am_a1_1,  /* index 170 */
   ATL_dcm2am_a1_2x1,  /* index 171 */
   ATL_dcm2am_a1_1,  /* index 172 */
   ATL_dcm2am_a1_2x1,  /* index 173 */
   ATL_dcm2am_a1_1,  /* index 174 */
   ATL_dcm2am_a1_2x1,  /* index 175 */
   ATL_dcm2am_a1_1,  /* index 176 */
   ATL_dcm2am_a1_2x1,  /* index 177 */
   ATL_dcm2am_a1_1,  /* index 178 */
   ATL_dcm2am_a1_2x1,  /* index 179 */
   ATL_dcm2am_a1_1,  /* index 180 */
   ATL_dcm2am_a1_2x1,  /* index 181 */
   ATL_dcm2am_a1_1,  /* index 182 */
   ATL_dcm2am_a1_2x1,  /* index 183 */
   ATL_dcm2am_a1_1,  /* index 184 */
   ATL_dcm2am_a1_2x1,  /* index 185 */
   ATL_dcm2am_a1_1,  /* index 186 */
   ATL_dcm2am_a1_2x1,  /* index 187 */
   ATL_dcm2am_a1_1,  /* index 188 */
   ATL_dcm2am_a1_2x1,  /* index 189 */
   ATL_dcm2am_a1_1,  /* index 190 */
   ATL_dcm2am_a1_2x1,  /* index 191 */
   ATL_dcm2am_a1_1,  /* index 192 */
   ATL_dcm2am_a1_2x1,  /* index 193 */
   ATL_dcm2am_a1_1,  /* index 194 */
   ATL_dcm2am_a1_2x1,  /* index 195 */
   ATL_dcm2am_a1_1,  /* index 196 */
   ATL_dcm2am_a1_2x1,  /* index 197 */
   ATL_dcm2am_a1_1,  /* index 198 */
   ATL_dcm2am_a1_2x1,  /* index 199 */
   ATL_dcm2am_a1_1,  /* index 200 */
   ATL_dcm2am_a1_2x1,  /* index 201 */
   ATL_dcm2am_a1_1,  /* index 202 */
   ATL_dcm2am_a1_2x1,  /* index 203 */
   ATL_dcm2am_a1_1,  /* index 204 */
   ATL_dcm2am_a1_2x1,  /* index 205 */
   ATL_dcm2am_a1_1,  /* index 206 */
   ATL_dcm2am_a1_2x1,  /* index 207 */
   ATL_dcm2am_a1_1,  /* index 208 */
   ATL_dcm2am_a1_2x1   /* index 209 */
};

static const cm2am_t ATL_RKK_BT2BLK_a1[210] =
{
   ATL_drm2am_a1_1,  /* index 0 */
   ATL_drm2am_a1_2x1,  /* index 1 */
   ATL_drm2am_a1_1,  /* index 2 */
   ATL_drm2am_a1_1,  /* index 3 */
   ATL_drm2am_a1_1,  /* index 4 */
   ATL_drm2am_a1_1,  /* index 5 */
   ATL_drm2am_a1_1,  /* index 6 */
   ATL_drm2am_a1_1,  /* index 7 */
   ATL_drm2am_a1_1,  /* index 8 */
   ATL_drm2am_a1_1,  /* index 9 */
   ATL_drm2am_a1_1,  /* index 10 */
   ATL_drm2am_a1_1,  /* index 11 */
   ATL_drm2am_a1_1,  /* index 12 */
   ATL_drm2am_a1_1,  /* index 13 */
   ATL_drm2am_a1_1,  /* index 14 */
   ATL_drm2am_a1_2x1,  /* index 15 */
   ATL_drm2am_a1_1,  /* index 16 */
   ATL_drm2am_a1_1,  /* index 17 */
   ATL_drm2am_a1_1,  /* index 18 */
   ATL_drm2am_a1_2x1,  /* index 19 */
   ATL_drm2am_a1_1,  /* index 20 */
   ATL_drm2am_a1_1,  /* index 21 */
   ATL_drm2am_a1_1,  /* index 22 */
   ATL_drm2am_a1_2x1,  /* index 23 */
   ATL_drm2am_a1_1,  /* index 24 */
   ATL_drm2am_a1_1,  /* index 25 */
   ATL_drm2am_a1_1,  /* index 26 */
   ATL_drm2am_a1_1,  /* index 27 */
   ATL_drm2am_a1_1,  /* index 28 */
   ATL_drm2am_a1_2x1,  /* index 29 */
   ATL_drm2am_a1_1,  /* index 30 */
   ATL_drm2am_a1_1,  /* index 31 */
   ATL_drm2am_a1_1,  /* index 32 */
   ATL_drm2am_a1_2x1,  /* index 33 */
   ATL_drm2am_a1_1,  /* index 34 */
   ATL_drm2am_a1_2x1,  /* index 35 */
   ATL_drm2am_a1_1,  /* index 36 */
   ATL_drm2am_a1_2x1,  /* index 37 */
   ATL_drm2am_a1_1,  /* index 38 */
   ATL_drm2am_a1_2x1,  /* index 39 */
   ATL_drm2am_a1_1,  /* index 40 */
   ATL_drm2am_a1_2x1,  /* index 41 */
   ATL_drm2am_a1_1,  /* index 42 */
   ATL_drm2am_a1_2x1,  /* index 43 */
   ATL_drm2am_a1_1,  /* index 44 */
   ATL_drm2am_a1_2x1,  /* index 45 */
   ATL_drm2am_a1_1,  /* index 46 */
   ATL_drm2am_a1_2x1,  /* index 47 */
   ATL_drm2am_a1_1,  /* index 48 */
   ATL_drm2am_a1_2x1,  /* index 49 */
   ATL_drm2am_a1_1,  /* index 50 */
   ATL_drm2am_a1_2x1,  /* index 51 */
   ATL_drm2am_a1_1,  /* index 52 */
   ATL_drm2am_a1_2x1,  /* index 53 */
   ATL_drm2am_a1_1,  /* index 54 */
   ATL_drm2am_a1_2x1,  /* index 55 */
   ATL_drm2am_a1_1,  /* index 56 */
   ATL_drm2am_a1_2x1,  /* index 57 */
   ATL_drm2am_a1_1,  /* index 58 */
   ATL_drm2am_a1_2x1,  /* index 59 */
   ATL_drm2am_a1_1,  /* index 60 */
   ATL_drm2am_a1_2x1,  /* index 61 */
   ATL_drm2am_a1_1,  /* index 62 */
   ATL_drm2am_a1_2x1,  /* index 63 */
   ATL_drm2am_a1_1,  /* index 64 */
   ATL_drm2am_a1_2x1,  /* index 65 */
   ATL_drm2am_a1_1,  /* index 66 */
   ATL_drm2am_a1_2x1,  /* index 67 */
   ATL_drm2am_a1_1,  /* index 68 */
   ATL_drm2am_a1_2x1,  /* index 69 */
   ATL_drm2am_a1_1,  /* index 70 */
   ATL_drm2am_a1_2x1,  /* index 71 */
   ATL_drm2am_a1_1,  /* index 72 */
   ATL_drm2am_a1_2x1,  /* index 73 */
   ATL_drm2am_a1_1,  /* index 74 */
   ATL_drm2am_a1_2x1,  /* index 75 */
   ATL_drm2am_a1_1,  /* index 76 */
   ATL_drm2am_a1_2x1,  /* index 77 */
   ATL_drm2am_a1_1,  /* index 78 */
   ATL_drm2am_a1_2x1,  /* index 79 */
   ATL_drm2am_a1_1,  /* index 80 */
   ATL_drm2am_a1_2x1,  /* index 81 */
   ATL_drm2am_a1_1,  /* index 82 */
   ATL_drm2am_a1_2x1,  /* index 83 */
   ATL_drm2am_a1_1,  /* index 84 */
   ATL_drm2am_a1_2x1,  /* index 85 */
   ATL_drm2am_a1_1,  /* index 86 */
   ATL_drm2am_a1_2x1,  /* index 87 */
   ATL_drm2am_a1_1,  /* index 88 */
   ATL_drm2am_a1_2x1,  /* index 89 */
   ATL_drm2am_a1_1,  /* index 90 */
   ATL_drm2am_a1_2x1,  /* index 91 */
   ATL_drm2am_a1_1,  /* index 92 */
   ATL_drm2am_a1_2x1,  /* index 93 */
   ATL_drm2am_a1_1,  /* index 94 */
   ATL_drm2am_a1_2x1,  /* index 95 */
   ATL_drm2am_a1_1,  /* index 96 */
   ATL_drm2am_a1_2x1,  /* index 97 */
   ATL_drm2am_a1_1,  /* index 98 */
   ATL_drm2am_a1_2x1,  /* index 99 */
   ATL_drm2am_a1_1,  /* index 100 */
   ATL_drm2am_a1_2x1,  /* index 101 */
   ATL_drm2am_a1_1,  /* index 102 */
   ATL_drm2am_a1_2x1,  /* index 103 */
   ATL_drm2am_a1_1,  /* index 104 */
   ATL_drm2am_a1_2x1,  /* index 105 */
   ATL_drm2am_a1_1,  /* index 106 */
   ATL_drm2am_a1_2x1,  /* index 107 */
   ATL_drm2am_a1_1,  /* index 108 */
   ATL_drm2am_a1_2x1,  /* index 109 */
   ATL_drm2am_a1_1,  /* index 110 */
   ATL_drm2am_a1_2x1,  /* index 111 */
   ATL_drm2am_a1_1,  /* index 112 */
   ATL_drm2am_a1_2x1,  /* index 113 */
   ATL_drm2am_a1_1,  /* index 114 */
   ATL_drm2am_a1_2x1,  /* index 115 */
   ATL_drm2am_a1_1,  /* index 116 */
   ATL_drm2am_a1_2x1,  /* index 117 */
   ATL_drm2am_a1_1,  /* index 118 */
   ATL_drm2am_a1_2x1,  /* index 119 */
   ATL_drm2am_a1_1,  /* index 120 */
   ATL_drm2am_a1_2x1,  /* index 121 */
   ATL_drm2am_a1_1,  /* index 122 */
   ATL_drm2am_a1_2x1,  /* index 123 */
   ATL_drm2am_a1_1,  /* index 124 */
   ATL_drm2am_a1_2x1,  /* index 125 */
   ATL_drm2am_a1_1,  /* index 126 */
   ATL_drm2am_a1_2x1,  /* index 127 */
   ATL_drm2am_a1_1,  /* index 128 */
   ATL_drm2am_a1_2x1,  /* index 129 */
   ATL_drm2am_a1_1,  /* index 130 */
   ATL_drm2am_a1_2x1,  /* index 131 */
   ATL_drm2am_a1_1,  /* index 132 */
   ATL_drm2am_a1_2x1,  /* index 133 */
   ATL_drm2am_a1_1,  /* index 134 */
   ATL_drm2am_a1_2x1,  /* index 135 */
   ATL_drm2am_a1_1,  /* index 136 */
   ATL_drm2am_a1_2x1,  /* index 137 */
   ATL_drm2am_a1_1,  /* index 138 */
   ATL_drm2am_a1_2x1,  /* index 139 */
   ATL_drm2am_a1_1,  /* index 140 */
   ATL_drm2am_a1_2x1,  /* index 141 */
   ATL_drm2am_a1_1,  /* index 142 */
   ATL_drm2am_a1_2x1,  /* index 143 */
   ATL_drm2am_a1_1,  /* index 144 */
   ATL_drm2am_a1_2x1,  /* index 145 */
   ATL_drm2am_a1_1,  /* index 146 */
   ATL_drm2am_a1_2x1,  /* index 147 */
   ATL_drm2am_a1_1,  /* index 148 */
   ATL_drm2am_a1_2x1,  /* index 149 */
   ATL_drm2am_a1_1,  /* index 150 */
   ATL_drm2am_a1_2x1,  /* index 151 */
   ATL_drm2am_a1_1,  /* index 152 */
   ATL_drm2am_a1_2x1,  /* index 153 */
   ATL_drm2am_a1_1,  /* index 154 */
   ATL_drm2am_a1_2x1,  /* index 155 */
   ATL_drm2am_a1_1,  /* index 156 */
   ATL_drm2am_a1_2x1,  /* index 157 */
   ATL_drm2am_a1_1,  /* index 158 */
   ATL_drm2am_a1_2x1,  /* index 159 */
   ATL_drm2am_a1_1,  /* index 160 */
   ATL_drm2am_a1_2x1,  /* index 161 */
   ATL_drm2am_a1_1,  /* index 162 */
   ATL_drm2am_a1_2x1,  /* index 163 */
   ATL_drm2am_a1_1,  /* index 164 */
   ATL_drm2am_a1_2x1,  /* index 165 */
   ATL_drm2am_a1_1,  /* index 166 */
   ATL_drm2am_a1_2x1,  /* index 167 */
   ATL_drm2am_a1_1,  /* index 168 */
   ATL_drm2am_a1_2x1,  /* index 169 */
   ATL_drm2am_a1_1,  /* index 170 */
   ATL_drm2am_a1_2x1,  /* index 171 */
   ATL_drm2am_a1_1,  /* index 172 */
   ATL_drm2am_a1_2x1,  /* index 173 */
   ATL_drm2am_a1_1,  /* index 174 */
   ATL_drm2am_a1_2x1,  /* index 175 */
   ATL_drm2am_a1_1,  /* index 176 */
   ATL_drm2am_a1_2x1,  /* index 177 */
   ATL_drm2am_a1_1,  /* index 178 */
   ATL_drm2am_a1_2x1,  /* index 179 */
   ATL_drm2am_a1_1,  /* index 180 */
   ATL_drm2am_a1_2x1,  /* index 181 */
   ATL_drm2am_a1_1,  /* index 182 */
   ATL_drm2am_a1_2x1,  /* index 183 */
   ATL_drm2am_a1_1,  /* index 184 */
   ATL_drm2am_a1_2x1,  /* index 185 */
   ATL_drm2am_a1_1,  /* index 186 */
   ATL_drm2am_a1_2x1,  /* index 187 */
   ATL_drm2am_a1_1,  /* index 188 */
   ATL_drm2am_a1_2x1,  /* index 189 */
   ATL_drm2am_a1_1,  /* index 190 */
   ATL_drm2am_a1_2x1,  /* index 191 */
   ATL_drm2am_a1_1,  /* index 192 */
   ATL_drm2am_a1_2x1,  /* index 193 */
   ATL_drm2am_a1_1,  /* index 194 */
   ATL_drm2am_a1_2x1,  /* index 195 */
   ATL_drm2am_a1_1,  /* index 196 */
   ATL_drm2am_a1_2x1,  /* index 197 */
   ATL_drm2am_a1_1,  /* index 198 */
   ATL_drm2am_a1_2x1,  /* index 199 */
   ATL_drm2am_a1_1,  /* index 200 */
   ATL_drm2am_a1_2x1,  /* index 201 */
   ATL_drm2am_a1_1,  /* index 202 */
   ATL_drm2am_a1_2x1,  /* index 203 */
   ATL_drm2am_a1_1,  /* index 204 */
   ATL_drm2am_a1_2x1,  /* index 205 */
   ATL_drm2am_a1_1,  /* index 206 */
   ATL_drm2am_a1_2x1,  /* index 207 */
   ATL_drm2am_a1_1,  /* index 208 */
   ATL_drm2am_a1_2x1   /* index 209 */
};


static const cm2am_t ATL_RKK_A2BLK_an[210] =
{
   ATL_dcm2am_an_28,  /* index 0 */
   ATL_dcm2am_an_2x12,  /* index 1 */
   ATL_dcm2am_an_28,  /* index 2 */
   ATL_dcm2am_an_28,  /* index 3 */
   ATL_dcm2am_an_28,  /* index 4 */
   ATL_dcm2am_an_28,  /* index 5 */
   ATL_dcm2am_an_28,  /* index 6 */
   ATL_dcm2am_an_28,  /* index 7 */
   ATL_dcm2am_an_28,  /* index 8 */
   ATL_dcm2am_an_28,  /* index 9 */
   ATL_dcm2am_an_28,  /* index 10 */
   ATL_dcm2am_an_28,  /* index 11 */
   ATL_dcm2am_an_28,  /* index 12 */
   ATL_dcm2am_an_28,  /* index 13 */
   ATL_dcm2am_an_28,  /* index 14 */
   ATL_dcm2am_an_2x12,  /* index 15 */
   ATL_dcm2am_an_28,  /* index 16 */
   ATL_dcm2am_an_28,  /* index 17 */
   ATL_dcm2am_an_28,  /* index 18 */
   ATL_dcm2am_an_2x12,  /* index 19 */
   ATL_dcm2am_an_28,  /* index 20 */
   ATL_dcm2am_an_28,  /* index 21 */
   ATL_dcm2am_an_28,  /* index 22 */
   ATL_dcm2am_an_2x12,  /* index 23 */
   ATL_dcm2am_an_28,  /* index 24 */
   ATL_dcm2am_an_28,  /* index 25 */
   ATL_dcm2am_an_28,  /* index 26 */
   ATL_dcm2am_an_28,  /* index 27 */
   ATL_dcm2am_an_28,  /* index 28 */
   ATL_dcm2am_an_2x12,  /* index 29 */
   ATL_dcm2am_an_28,  /* index 30 */
   ATL_dcm2am_an_28,  /* index 31 */
   ATL_dcm2am_an_28,  /* index 32 */
   ATL_dcm2am_an_2x12,  /* index 33 */
   ATL_dcm2am_an_28,  /* index 34 */
   ATL_dcm2am_an_2x12,  /* index 35 */
   ATL_dcm2am_an_28,  /* index 36 */
   ATL_dcm2am_an_2x12,  /* index 37 */
   ATL_dcm2am_an_28,  /* index 38 */
   ATL_dcm2am_an_2x12,  /* index 39 */
   ATL_dcm2am_an_28,  /* index 40 */
   ATL_dcm2am_an_2x12,  /* index 41 */
   ATL_dcm2am_an_28,  /* index 42 */
   ATL_dcm2am_an_2x12,  /* index 43 */
   ATL_dcm2am_an_28,  /* index 44 */
   ATL_dcm2am_an_2x12,  /* index 45 */
   ATL_dcm2am_an_28,  /* index 46 */
   ATL_dcm2am_an_2x12,  /* index 47 */
   ATL_dcm2am_an_28,  /* index 48 */
   ATL_dcm2am_an_2x12,  /* index 49 */
   ATL_dcm2am_an_28,  /* index 50 */
   ATL_dcm2am_an_2x12,  /* index 51 */
   ATL_dcm2am_an_28,  /* index 52 */
   ATL_dcm2am_an_2x12,  /* index 53 */
   ATL_dcm2am_an_28,  /* index 54 */
   ATL_dcm2am_an_2x12,  /* index 55 */
   ATL_dcm2am_an_28,  /* index 56 */
   ATL_dcm2am_an_2x12,  /* index 57 */
   ATL_dcm2am_an_28,  /* index 58 */
   ATL_dcm2am_an_2x12,  /* index 59 */
   ATL_dcm2am_an_28,  /* index 60 */
   ATL_dcm2am_an_2x12,  /* index 61 */
   ATL_dcm2am_an_28,  /* index 62 */
   ATL_dcm2am_an_2x12,  /* index 63 */
   ATL_dcm2am_an_28,  /* index 64 */
   ATL_dcm2am_an_2x12,  /* index 65 */
   ATL_dcm2am_an_28,  /* index 66 */
   ATL_dcm2am_an_2x12,  /* index 67 */
   ATL_dcm2am_an_28,  /* index 68 */
   ATL_dcm2am_an_2x12,  /* index 69 */
   ATL_dcm2am_an_28,  /* index 70 */
   ATL_dcm2am_an_2x12,  /* index 71 */
   ATL_dcm2am_an_28,  /* index 72 */
   ATL_dcm2am_an_2x12,  /* index 73 */
   ATL_dcm2am_an_28,  /* index 74 */
   ATL_dcm2am_an_2x12,  /* index 75 */
   ATL_dcm2am_an_28,  /* index 76 */
   ATL_dcm2am_an_2x12,  /* index 77 */
   ATL_dcm2am_an_28,  /* index 78 */
   ATL_dcm2am_an_2x12,  /* index 79 */
   ATL_dcm2am_an_28,  /* index 80 */
   ATL_dcm2am_an_2x8,  /* index 81 */
   ATL_dcm2am_an_28,  /* index 82 */
   ATL_dcm2am_an_2x12,  /* index 83 */
   ATL_dcm2am_an_28,  /* index 84 */
   ATL_dcm2am_an_2x12,  /* index 85 */
   ATL_dcm2am_an_28,  /* index 86 */
   ATL_dcm2am_an_2x12,  /* index 87 */
   ATL_dcm2am_an_28,  /* index 88 */
   ATL_dcm2am_an_2x12,  /* index 89 */
   ATL_dcm2am_an_28,  /* index 90 */
   ATL_dcm2am_an_2x12,  /* index 91 */
   ATL_dcm2am_an_28,  /* index 92 */
   ATL_dcm2am_an_2x12,  /* index 93 */
   ATL_dcm2am_an_28,  /* index 94 */
   ATL_dcm2am_an_2x12,  /* index 95 */
   ATL_dcm2am_an_28,  /* index 96 */
   ATL_dcm2am_an_2x12,  /* index 97 */
   ATL_dcm2am_an_28,  /* index 98 */
   ATL_dcm2am_an_2x12,  /* index 99 */
   ATL_dcm2am_an_28,  /* index 100 */
   ATL_dcm2am_an_2x12,  /* index 101 */
   ATL_dcm2am_an_28,  /* index 102 */
   ATL_dcm2am_an_2x12,  /* index 103 */
   ATL_dcm2am_an_28,  /* index 104 */
   ATL_dcm2am_an_2x12,  /* index 105 */
   ATL_dcm2am_an_28,  /* index 106 */
   ATL_dcm2am_an_2x12,  /* index 107 */
   ATL_dcm2am_an_28,  /* index 108 */
   ATL_dcm2am_an_2x12,  /* index 109 */
   ATL_dcm2am_an_28,  /* index 110 */
   ATL_dcm2am_an_2x12,  /* index 111 */
   ATL_dcm2am_an_28,  /* index 112 */
   ATL_dcm2am_an_2x12,  /* index 113 */
   ATL_dcm2am_an_28,  /* index 114 */
   ATL_dcm2am_an_2x12,  /* index 115 */
   ATL_dcm2am_an_28,  /* index 116 */
   ATL_dcm2am_an_2x12,  /* index 117 */
   ATL_dcm2am_an_28,  /* index 118 */
   ATL_dcm2am_an_2x12,  /* index 119 */
   ATL_dcm2am_an_28,  /* index 120 */
   ATL_dcm2am_an_2x12,  /* index 121 */
   ATL_dcm2am_an_28,  /* index 122 */
   ATL_dcm2am_an_2x12,  /* index 123 */
   ATL_dcm2am_an_28,  /* index 124 */
   ATL_dcm2am_an_2x12,  /* index 125 */
   ATL_dcm2am_an_28,  /* index 126 */
   ATL_dcm2am_an_2x12,  /* index 127 */
   ATL_dcm2am_an_28,  /* index 128 */
   ATL_dcm2am_an_2x12,  /* index 129 */
   ATL_dcm2am_an_28,  /* index 130 */
   ATL_dcm2am_an_2x12,  /* index 131 */
   ATL_dcm2am_an_28,  /* index 132 */
   ATL_dcm2am_an_2x12,  /* index 133 */
   ATL_dcm2am_an_28,  /* index 134 */
   ATL_dcm2am_an_2x12,  /* index 135 */
   ATL_dcm2am_an_28,  /* index 136 */
   ATL_dcm2am_an_2x12,  /* index 137 */
   ATL_dcm2am_an_28,  /* index 138 */
   ATL_dcm2am_an_2x12,  /* index 139 */
   ATL_dcm2am_an_28,  /* index 140 */
   ATL_dcm2am_an_2x12,  /* index 141 */
   ATL_dcm2am_an_28,  /* index 142 */
   ATL_dcm2am_an_2x12,  /* index 143 */
   ATL_dcm2am_an_28,  /* index 144 */
   ATL_dcm2am_an_2x12,  /* index 145 */
   ATL_dcm2am_an_28,  /* index 146 */
   ATL_dcm2am_an_2x12,  /* index 147 */
   ATL_dcm2am_an_6,  /* index 148 */
   ATL_dcm2am_an_2x12,  /* index 149 */
   ATL_dcm2am_an_6,  /* index 150 */
   ATL_dcm2am_an_2x12,  /* index 151 */
   ATL_dcm2am_an_6,  /* index 152 */
   ATL_dcm2am_an_2x12,  /* index 153 */
   ATL_dcm2am_an_6,  /* index 154 */
   ATL_dcm2am_an_2x12,  /* index 155 */
   ATL_dcm2am_an_6,  /* index 156 */
   ATL_dcm2am_an_2x12,  /* index 157 */
   ATL_dcm2am_an_6,  /* index 158 */
   ATL_dcm2am_an_2x12,  /* index 159 */
   ATL_dcm2am_an_6,  /* index 160 */
   ATL_dcm2am_an_2x12,  /* index 161 */
   ATL_dcm2am_an_6,  /* index 162 */
   ATL_dcm2am_an_2x12,  /* index 163 */
   ATL_dcm2am_an_6,  /* index 164 */
   ATL_dcm2am_an_2x12,  /* index 165 */
   ATL_dcm2am_an_6,  /* index 166 */
   ATL_dcm2am_an_2x12,  /* index 167 */
   ATL_dcm2am_an_6,  /* index 168 */
   ATL_dcm2am_an_2x12,  /* index 169 */
   ATL_dcm2am_an_6,  /* index 170 */
   ATL_dcm2am_an_2x12,  /* index 171 */
   ATL_dcm2am_an_6,  /* index 172 */
   ATL_dcm2am_an_2x12,  /* index 173 */
   ATL_dcm2am_an_6,  /* index 174 */
   ATL_dcm2am_an_2x12,  /* index 175 */
   ATL_dcm2am_an_6,  /* index 176 */
   ATL_dcm2am_an_2x12,  /* index 177 */
   ATL_dcm2am_an_6,  /* index 178 */
   ATL_dcm2am_an_2x12,  /* index 179 */
   ATL_dcm2am_an_6,  /* index 180 */
   ATL_dcm2am_an_2x12,  /* index 181 */
   ATL_dcm2am_an_6,  /* index 182 */
   ATL_dcm2am_an_2x12,  /* index 183 */
   ATL_dcm2am_an_6,  /* index 184 */
   ATL_dcm2am_an_2x12,  /* index 185 */
   ATL_dcm2am_an_6,  /* index 186 */
   ATL_dcm2am_an_2x12,  /* index 187 */
   ATL_dcm2am_an_6,  /* index 188 */
   ATL_dcm2am_an_2x12,  /* index 189 */
   ATL_dcm2am_an_6,  /* index 190 */
   ATL_dcm2am_an_2x12,  /* index 191 */
   ATL_dcm2am_an_6,  /* index 192 */
   ATL_dcm2am_an_2x12,  /* index 193 */
   ATL_dcm2am_an_6,  /* index 194 */
   ATL_dcm2am_an_2x12,  /* index 195 */
   ATL_dcm2am_an_6,  /* index 196 */
   ATL_dcm2am_an_2x12,  /* index 197 */
   ATL_dcm2am_an_6,  /* index 198 */
   ATL_dcm2am_an_2x12,  /* index 199 */
   ATL_dcm2am_an_6,  /* index 200 */
   ATL_dcm2am_an_2x12,  /* index 201 */
   ATL_dcm2am_an_6,  /* index 202 */
   ATL_dcm2am_an_2x12,  /* index 203 */
   ATL_dcm2am_an_6,  /* index 204 */
   ATL_dcm2am_an_2x12,  /* index 205 */
   ATL_dcm2am_an_6,  /* index 206 */
   ATL_dcm2am_an_2x12,  /* index 207 */
   ATL_dcm2am_an_6,  /* index 208 */
   ATL_dcm2am_an_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_AT2BLK_an[210] =
{
   ATL_drm2am_an_28,  /* index 0 */
   ATL_drm2am_an_2x12,  /* index 1 */
   ATL_drm2am_an_28,  /* index 2 */
   ATL_drm2am_an_28,  /* index 3 */
   ATL_drm2am_an_28,  /* index 4 */
   ATL_drm2am_an_28,  /* index 5 */
   ATL_drm2am_an_28,  /* index 6 */
   ATL_drm2am_an_28,  /* index 7 */
   ATL_drm2am_an_28,  /* index 8 */
   ATL_drm2am_an_28,  /* index 9 */
   ATL_drm2am_an_28,  /* index 10 */
   ATL_drm2am_an_28,  /* index 11 */
   ATL_drm2am_an_28,  /* index 12 */
   ATL_drm2am_an_28,  /* index 13 */
   ATL_drm2am_an_28,  /* index 14 */
   ATL_drm2am_an_2x12,  /* index 15 */
   ATL_drm2am_an_28,  /* index 16 */
   ATL_drm2am_an_28,  /* index 17 */
   ATL_drm2am_an_28,  /* index 18 */
   ATL_drm2am_an_2x12,  /* index 19 */
   ATL_drm2am_an_28,  /* index 20 */
   ATL_drm2am_an_28,  /* index 21 */
   ATL_drm2am_an_28,  /* index 22 */
   ATL_drm2am_an_2x12,  /* index 23 */
   ATL_drm2am_an_28,  /* index 24 */
   ATL_drm2am_an_28,  /* index 25 */
   ATL_drm2am_an_28,  /* index 26 */
   ATL_drm2am_an_28,  /* index 27 */
   ATL_drm2am_an_28,  /* index 28 */
   ATL_drm2am_an_2x12,  /* index 29 */
   ATL_drm2am_an_28,  /* index 30 */
   ATL_drm2am_an_28,  /* index 31 */
   ATL_drm2am_an_28,  /* index 32 */
   ATL_drm2am_an_2x12,  /* index 33 */
   ATL_drm2am_an_28,  /* index 34 */
   ATL_drm2am_an_2x12,  /* index 35 */
   ATL_drm2am_an_28,  /* index 36 */
   ATL_drm2am_an_2x12,  /* index 37 */
   ATL_drm2am_an_28,  /* index 38 */
   ATL_drm2am_an_2x12,  /* index 39 */
   ATL_drm2am_an_28,  /* index 40 */
   ATL_drm2am_an_2x12,  /* index 41 */
   ATL_drm2am_an_28,  /* index 42 */
   ATL_drm2am_an_2x12,  /* index 43 */
   ATL_drm2am_an_28,  /* index 44 */
   ATL_drm2am_an_2x12,  /* index 45 */
   ATL_drm2am_an_28,  /* index 46 */
   ATL_drm2am_an_2x12,  /* index 47 */
   ATL_drm2am_an_28,  /* index 48 */
   ATL_drm2am_an_2x12,  /* index 49 */
   ATL_drm2am_an_28,  /* index 50 */
   ATL_drm2am_an_2x12,  /* index 51 */
   ATL_drm2am_an_28,  /* index 52 */
   ATL_drm2am_an_2x12,  /* index 53 */
   ATL_drm2am_an_28,  /* index 54 */
   ATL_drm2am_an_2x12,  /* index 55 */
   ATL_drm2am_an_28,  /* index 56 */
   ATL_drm2am_an_2x12,  /* index 57 */
   ATL_drm2am_an_28,  /* index 58 */
   ATL_drm2am_an_2x12,  /* index 59 */
   ATL_drm2am_an_28,  /* index 60 */
   ATL_drm2am_an_2x12,  /* index 61 */
   ATL_drm2am_an_28,  /* index 62 */
   ATL_drm2am_an_2x12,  /* index 63 */
   ATL_drm2am_an_28,  /* index 64 */
   ATL_drm2am_an_2x12,  /* index 65 */
   ATL_drm2am_an_28,  /* index 66 */
   ATL_drm2am_an_2x12,  /* index 67 */
   ATL_drm2am_an_28,  /* index 68 */
   ATL_drm2am_an_2x12,  /* index 69 */
   ATL_drm2am_an_28,  /* index 70 */
   ATL_drm2am_an_2x12,  /* index 71 */
   ATL_drm2am_an_28,  /* index 72 */
   ATL_drm2am_an_2x12,  /* index 73 */
   ATL_drm2am_an_28,  /* index 74 */
   ATL_drm2am_an_2x12,  /* index 75 */
   ATL_drm2am_an_28,  /* index 76 */
   ATL_drm2am_an_2x12,  /* index 77 */
   ATL_drm2am_an_28,  /* index 78 */
   ATL_drm2am_an_2x12,  /* index 79 */
   ATL_drm2am_an_28,  /* index 80 */
   ATL_drm2am_an_2x8,  /* index 81 */
   ATL_drm2am_an_28,  /* index 82 */
   ATL_drm2am_an_2x12,  /* index 83 */
   ATL_drm2am_an_28,  /* index 84 */
   ATL_drm2am_an_2x12,  /* index 85 */
   ATL_drm2am_an_28,  /* index 86 */
   ATL_drm2am_an_2x12,  /* index 87 */
   ATL_drm2am_an_28,  /* index 88 */
   ATL_drm2am_an_2x12,  /* index 89 */
   ATL_drm2am_an_28,  /* index 90 */
   ATL_drm2am_an_2x12,  /* index 91 */
   ATL_drm2am_an_28,  /* index 92 */
   ATL_drm2am_an_2x12,  /* index 93 */
   ATL_drm2am_an_28,  /* index 94 */
   ATL_drm2am_an_2x12,  /* index 95 */
   ATL_drm2am_an_28,  /* index 96 */
   ATL_drm2am_an_2x12,  /* index 97 */
   ATL_drm2am_an_28,  /* index 98 */
   ATL_drm2am_an_2x12,  /* index 99 */
   ATL_drm2am_an_28,  /* index 100 */
   ATL_drm2am_an_2x12,  /* index 101 */
   ATL_drm2am_an_28,  /* index 102 */
   ATL_drm2am_an_2x12,  /* index 103 */
   ATL_drm2am_an_28,  /* index 104 */
   ATL_drm2am_an_2x12,  /* index 105 */
   ATL_drm2am_an_28,  /* index 106 */
   ATL_drm2am_an_2x12,  /* index 107 */
   ATL_drm2am_an_28,  /* index 108 */
   ATL_drm2am_an_2x12,  /* index 109 */
   ATL_drm2am_an_28,  /* index 110 */
   ATL_drm2am_an_2x12,  /* index 111 */
   ATL_drm2am_an_28,  /* index 112 */
   ATL_drm2am_an_2x12,  /* index 113 */
   ATL_drm2am_an_28,  /* index 114 */
   ATL_drm2am_an_2x12,  /* index 115 */
   ATL_drm2am_an_28,  /* index 116 */
   ATL_drm2am_an_2x12,  /* index 117 */
   ATL_drm2am_an_28,  /* index 118 */
   ATL_drm2am_an_2x12,  /* index 119 */
   ATL_drm2am_an_28,  /* index 120 */
   ATL_drm2am_an_2x12,  /* index 121 */
   ATL_drm2am_an_28,  /* index 122 */
   ATL_drm2am_an_2x12,  /* index 123 */
   ATL_drm2am_an_28,  /* index 124 */
   ATL_drm2am_an_2x12,  /* index 125 */
   ATL_drm2am_an_28,  /* index 126 */
   ATL_drm2am_an_2x12,  /* index 127 */
   ATL_drm2am_an_28,  /* index 128 */
   ATL_drm2am_an_2x12,  /* index 129 */
   ATL_drm2am_an_28,  /* index 130 */
   ATL_drm2am_an_2x12,  /* index 131 */
   ATL_drm2am_an_28,  /* index 132 */
   ATL_drm2am_an_2x12,  /* index 133 */
   ATL_drm2am_an_28,  /* index 134 */
   ATL_drm2am_an_2x12,  /* index 135 */
   ATL_drm2am_an_28,  /* index 136 */
   ATL_drm2am_an_2x12,  /* index 137 */
   ATL_drm2am_an_28,  /* index 138 */
   ATL_drm2am_an_2x12,  /* index 139 */
   ATL_drm2am_an_28,  /* index 140 */
   ATL_drm2am_an_2x12,  /* index 141 */
   ATL_drm2am_an_28,  /* index 142 */
   ATL_drm2am_an_2x12,  /* index 143 */
   ATL_drm2am_an_28,  /* index 144 */
   ATL_drm2am_an_2x12,  /* index 145 */
   ATL_drm2am_an_28,  /* index 146 */
   ATL_drm2am_an_2x12,  /* index 147 */
   ATL_drm2am_an_6,  /* index 148 */
   ATL_drm2am_an_2x12,  /* index 149 */
   ATL_drm2am_an_6,  /* index 150 */
   ATL_drm2am_an_2x12,  /* index 151 */
   ATL_drm2am_an_6,  /* index 152 */
   ATL_drm2am_an_2x12,  /* index 153 */
   ATL_drm2am_an_6,  /* index 154 */
   ATL_drm2am_an_2x12,  /* index 155 */
   ATL_drm2am_an_6,  /* index 156 */
   ATL_drm2am_an_2x12,  /* index 157 */
   ATL_drm2am_an_6,  /* index 158 */
   ATL_drm2am_an_2x12,  /* index 159 */
   ATL_drm2am_an_6,  /* index 160 */
   ATL_drm2am_an_2x12,  /* index 161 */
   ATL_drm2am_an_6,  /* index 162 */
   ATL_drm2am_an_2x12,  /* index 163 */
   ATL_drm2am_an_6,  /* index 164 */
   ATL_drm2am_an_2x12,  /* index 165 */
   ATL_drm2am_an_6,  /* index 166 */
   ATL_drm2am_an_2x12,  /* index 167 */
   ATL_drm2am_an_6,  /* index 168 */
   ATL_drm2am_an_2x12,  /* index 169 */
   ATL_drm2am_an_6,  /* index 170 */
   ATL_drm2am_an_2x12,  /* index 171 */
   ATL_drm2am_an_6,  /* index 172 */
   ATL_drm2am_an_2x12,  /* index 173 */
   ATL_drm2am_an_6,  /* index 174 */
   ATL_drm2am_an_2x12,  /* index 175 */
   ATL_drm2am_an_6,  /* index 176 */
   ATL_drm2am_an_2x12,  /* index 177 */
   ATL_drm2am_an_6,  /* index 178 */
   ATL_drm2am_an_2x12,  /* index 179 */
   ATL_drm2am_an_6,  /* index 180 */
   ATL_drm2am_an_2x12,  /* index 181 */
   ATL_drm2am_an_6,  /* index 182 */
   ATL_drm2am_an_2x12,  /* index 183 */
   ATL_drm2am_an_6,  /* index 184 */
   ATL_drm2am_an_2x12,  /* index 185 */
   ATL_drm2am_an_6,  /* index 186 */
   ATL_drm2am_an_2x12,  /* index 187 */
   ATL_drm2am_an_6,  /* index 188 */
   ATL_drm2am_an_2x12,  /* index 189 */
   ATL_drm2am_an_6,  /* index 190 */
   ATL_drm2am_an_2x12,  /* index 191 */
   ATL_drm2am_an_6,  /* index 192 */
   ATL_drm2am_an_2x12,  /* index 193 */
   ATL_drm2am_an_6,  /* index 194 */
   ATL_drm2am_an_2x12,  /* index 195 */
   ATL_drm2am_an_6,  /* index 196 */
   ATL_drm2am_an_2x12,  /* index 197 */
   ATL_drm2am_an_6,  /* index 198 */
   ATL_drm2am_an_2x12,  /* index 199 */
   ATL_drm2am_an_6,  /* index 200 */
   ATL_drm2am_an_2x12,  /* index 201 */
   ATL_drm2am_an_6,  /* index 202 */
   ATL_drm2am_an_2x12,  /* index 203 */
   ATL_drm2am_an_6,  /* index 204 */
   ATL_drm2am_an_2x12,  /* index 205 */
   ATL_drm2am_an_6,  /* index 206 */
   ATL_drm2am_an_2x12,  /* index 207 */
   ATL_drm2am_an_6,  /* index 208 */
   ATL_drm2am_an_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_B2BLK_an[210] =
{
   ATL_dcm2am_an_1,  /* index 0 */
   ATL_dcm2am_an_2x1,  /* index 1 */
   ATL_dcm2am_an_1,  /* index 2 */
   ATL_dcm2am_an_1,  /* index 3 */
   ATL_dcm2am_an_1,  /* index 4 */
   ATL_dcm2am_an_1,  /* index 5 */
   ATL_dcm2am_an_1,  /* index 6 */
   ATL_dcm2am_an_1,  /* index 7 */
   ATL_dcm2am_an_1,  /* index 8 */
   ATL_dcm2am_an_1,  /* index 9 */
   ATL_dcm2am_an_1,  /* index 10 */
   ATL_dcm2am_an_1,  /* index 11 */
   ATL_dcm2am_an_1,  /* index 12 */
   ATL_dcm2am_an_1,  /* index 13 */
   ATL_dcm2am_an_1,  /* index 14 */
   ATL_dcm2am_an_2x1,  /* index 15 */
   ATL_dcm2am_an_1,  /* index 16 */
   ATL_dcm2am_an_1,  /* index 17 */
   ATL_dcm2am_an_1,  /* index 18 */
   ATL_dcm2am_an_2x1,  /* index 19 */
   ATL_dcm2am_an_1,  /* index 20 */
   ATL_dcm2am_an_1,  /* index 21 */
   ATL_dcm2am_an_1,  /* index 22 */
   ATL_dcm2am_an_2x1,  /* index 23 */
   ATL_dcm2am_an_1,  /* index 24 */
   ATL_dcm2am_an_1,  /* index 25 */
   ATL_dcm2am_an_1,  /* index 26 */
   ATL_dcm2am_an_1,  /* index 27 */
   ATL_dcm2am_an_1,  /* index 28 */
   ATL_dcm2am_an_2x1,  /* index 29 */
   ATL_dcm2am_an_1,  /* index 30 */
   ATL_dcm2am_an_1,  /* index 31 */
   ATL_dcm2am_an_1,  /* index 32 */
   ATL_dcm2am_an_2x1,  /* index 33 */
   ATL_dcm2am_an_1,  /* index 34 */
   ATL_dcm2am_an_2x1,  /* index 35 */
   ATL_dcm2am_an_1,  /* index 36 */
   ATL_dcm2am_an_2x1,  /* index 37 */
   ATL_dcm2am_an_1,  /* index 38 */
   ATL_dcm2am_an_2x1,  /* index 39 */
   ATL_dcm2am_an_1,  /* index 40 */
   ATL_dcm2am_an_2x1,  /* index 41 */
   ATL_dcm2am_an_1,  /* index 42 */
   ATL_dcm2am_an_2x1,  /* index 43 */
   ATL_dcm2am_an_1,  /* index 44 */
   ATL_dcm2am_an_2x1,  /* index 45 */
   ATL_dcm2am_an_1,  /* index 46 */
   ATL_dcm2am_an_2x1,  /* index 47 */
   ATL_dcm2am_an_1,  /* index 48 */
   ATL_dcm2am_an_2x1,  /* index 49 */
   ATL_dcm2am_an_1,  /* index 50 */
   ATL_dcm2am_an_2x1,  /* index 51 */
   ATL_dcm2am_an_1,  /* index 52 */
   ATL_dcm2am_an_2x1,  /* index 53 */
   ATL_dcm2am_an_1,  /* index 54 */
   ATL_dcm2am_an_2x1,  /* index 55 */
   ATL_dcm2am_an_1,  /* index 56 */
   ATL_dcm2am_an_2x1,  /* index 57 */
   ATL_dcm2am_an_1,  /* index 58 */
   ATL_dcm2am_an_2x1,  /* index 59 */
   ATL_dcm2am_an_1,  /* index 60 */
   ATL_dcm2am_an_2x1,  /* index 61 */
   ATL_dcm2am_an_1,  /* index 62 */
   ATL_dcm2am_an_2x1,  /* index 63 */
   ATL_dcm2am_an_1,  /* index 64 */
   ATL_dcm2am_an_2x1,  /* index 65 */
   ATL_dcm2am_an_1,  /* index 66 */
   ATL_dcm2am_an_2x1,  /* index 67 */
   ATL_dcm2am_an_1,  /* index 68 */
   ATL_dcm2am_an_2x1,  /* index 69 */
   ATL_dcm2am_an_1,  /* index 70 */
   ATL_dcm2am_an_2x1,  /* index 71 */
   ATL_dcm2am_an_1,  /* index 72 */
   ATL_dcm2am_an_2x1,  /* index 73 */
   ATL_dcm2am_an_1,  /* index 74 */
   ATL_dcm2am_an_2x1,  /* index 75 */
   ATL_dcm2am_an_1,  /* index 76 */
   ATL_dcm2am_an_2x1,  /* index 77 */
   ATL_dcm2am_an_1,  /* index 78 */
   ATL_dcm2am_an_2x1,  /* index 79 */
   ATL_dcm2am_an_1,  /* index 80 */
   ATL_dcm2am_an_2x1,  /* index 81 */
   ATL_dcm2am_an_1,  /* index 82 */
   ATL_dcm2am_an_2x1,  /* index 83 */
   ATL_dcm2am_an_1,  /* index 84 */
   ATL_dcm2am_an_2x1,  /* index 85 */
   ATL_dcm2am_an_1,  /* index 86 */
   ATL_dcm2am_an_2x1,  /* index 87 */
   ATL_dcm2am_an_1,  /* index 88 */
   ATL_dcm2am_an_2x1,  /* index 89 */
   ATL_dcm2am_an_1,  /* index 90 */
   ATL_dcm2am_an_2x1,  /* index 91 */
   ATL_dcm2am_an_1,  /* index 92 */
   ATL_dcm2am_an_2x1,  /* index 93 */
   ATL_dcm2am_an_1,  /* index 94 */
   ATL_dcm2am_an_2x1,  /* index 95 */
   ATL_dcm2am_an_1,  /* index 96 */
   ATL_dcm2am_an_2x1,  /* index 97 */
   ATL_dcm2am_an_1,  /* index 98 */
   ATL_dcm2am_an_2x1,  /* index 99 */
   ATL_dcm2am_an_1,  /* index 100 */
   ATL_dcm2am_an_2x1,  /* index 101 */
   ATL_dcm2am_an_1,  /* index 102 */
   ATL_dcm2am_an_2x1,  /* index 103 */
   ATL_dcm2am_an_1,  /* index 104 */
   ATL_dcm2am_an_2x1,  /* index 105 */
   ATL_dcm2am_an_1,  /* index 106 */
   ATL_dcm2am_an_2x1,  /* index 107 */
   ATL_dcm2am_an_1,  /* index 108 */
   ATL_dcm2am_an_2x1,  /* index 109 */
   ATL_dcm2am_an_1,  /* index 110 */
   ATL_dcm2am_an_2x1,  /* index 111 */
   ATL_dcm2am_an_1,  /* index 112 */
   ATL_dcm2am_an_2x1,  /* index 113 */
   ATL_dcm2am_an_1,  /* index 114 */
   ATL_dcm2am_an_2x1,  /* index 115 */
   ATL_dcm2am_an_1,  /* index 116 */
   ATL_dcm2am_an_2x1,  /* index 117 */
   ATL_dcm2am_an_1,  /* index 118 */
   ATL_dcm2am_an_2x1,  /* index 119 */
   ATL_dcm2am_an_1,  /* index 120 */
   ATL_dcm2am_an_2x1,  /* index 121 */
   ATL_dcm2am_an_1,  /* index 122 */
   ATL_dcm2am_an_2x1,  /* index 123 */
   ATL_dcm2am_an_1,  /* index 124 */
   ATL_dcm2am_an_2x1,  /* index 125 */
   ATL_dcm2am_an_1,  /* index 126 */
   ATL_dcm2am_an_2x1,  /* index 127 */
   ATL_dcm2am_an_1,  /* index 128 */
   ATL_dcm2am_an_2x1,  /* index 129 */
   ATL_dcm2am_an_1,  /* index 130 */
   ATL_dcm2am_an_2x1,  /* index 131 */
   ATL_dcm2am_an_1,  /* index 132 */
   ATL_dcm2am_an_2x1,  /* index 133 */
   ATL_dcm2am_an_1,  /* index 134 */
   ATL_dcm2am_an_2x1,  /* index 135 */
   ATL_dcm2am_an_1,  /* index 136 */
   ATL_dcm2am_an_2x1,  /* index 137 */
   ATL_dcm2am_an_1,  /* index 138 */
   ATL_dcm2am_an_2x1,  /* index 139 */
   ATL_dcm2am_an_1,  /* index 140 */
   ATL_dcm2am_an_2x1,  /* index 141 */
   ATL_dcm2am_an_1,  /* index 142 */
   ATL_dcm2am_an_2x1,  /* index 143 */
   ATL_dcm2am_an_1,  /* index 144 */
   ATL_dcm2am_an_2x1,  /* index 145 */
   ATL_dcm2am_an_1,  /* index 146 */
   ATL_dcm2am_an_2x1,  /* index 147 */
   ATL_dcm2am_an_1,  /* index 148 */
   ATL_dcm2am_an_2x1,  /* index 149 */
   ATL_dcm2am_an_1,  /* index 150 */
   ATL_dcm2am_an_2x1,  /* index 151 */
   ATL_dcm2am_an_1,  /* index 152 */
   ATL_dcm2am_an_2x1,  /* index 153 */
   ATL_dcm2am_an_1,  /* index 154 */
   ATL_dcm2am_an_2x1,  /* index 155 */
   ATL_dcm2am_an_1,  /* index 156 */
   ATL_dcm2am_an_2x1,  /* index 157 */
   ATL_dcm2am_an_1,  /* index 158 */
   ATL_dcm2am_an_2x1,  /* index 159 */
   ATL_dcm2am_an_1,  /* index 160 */
   ATL_dcm2am_an_2x1,  /* index 161 */
   ATL_dcm2am_an_1,  /* index 162 */
   ATL_dcm2am_an_2x1,  /* index 163 */
   ATL_dcm2am_an_1,  /* index 164 */
   ATL_dcm2am_an_2x1,  /* index 165 */
   ATL_dcm2am_an_1,  /* index 166 */
   ATL_dcm2am_an_2x1,  /* index 167 */
   ATL_dcm2am_an_1,  /* index 168 */
   ATL_dcm2am_an_2x1,  /* index 169 */
   ATL_dcm2am_an_1,  /* index 170 */
   ATL_dcm2am_an_2x1,  /* index 171 */
   ATL_dcm2am_an_1,  /* index 172 */
   ATL_dcm2am_an_2x1,  /* index 173 */
   ATL_dcm2am_an_1,  /* index 174 */
   ATL_dcm2am_an_2x1,  /* index 175 */
   ATL_dcm2am_an_1,  /* index 176 */
   ATL_dcm2am_an_2x1,  /* index 177 */
   ATL_dcm2am_an_1,  /* index 178 */
   ATL_dcm2am_an_2x1,  /* index 179 */
   ATL_dcm2am_an_1,  /* index 180 */
   ATL_dcm2am_an_2x1,  /* index 181 */
   ATL_dcm2am_an_1,  /* index 182 */
   ATL_dcm2am_an_2x1,  /* index 183 */
   ATL_dcm2am_an_1,  /* index 184 */
   ATL_dcm2am_an_2x1,  /* index 185 */
   ATL_dcm2am_an_1,  /* index 186 */
   ATL_dcm2am_an_2x1,  /* index 187 */
   ATL_dcm2am_an_1,  /* index 188 */
   ATL_dcm2am_an_2x1,  /* index 189 */
   ATL_dcm2am_an_1,  /* index 190 */
   ATL_dcm2am_an_2x1,  /* index 191 */
   ATL_dcm2am_an_1,  /* index 192 */
   ATL_dcm2am_an_2x1,  /* index 193 */
   ATL_dcm2am_an_1,  /* index 194 */
   ATL_dcm2am_an_2x1,  /* index 195 */
   ATL_dcm2am_an_1,  /* index 196 */
   ATL_dcm2am_an_2x1,  /* index 197 */
   ATL_dcm2am_an_1,  /* index 198 */
   ATL_dcm2am_an_2x1,  /* index 199 */
   ATL_dcm2am_an_1,  /* index 200 */
   ATL_dcm2am_an_2x1,  /* index 201 */
   ATL_dcm2am_an_1,  /* index 202 */
   ATL_dcm2am_an_2x1,  /* index 203 */
   ATL_dcm2am_an_1,  /* index 204 */
   ATL_dcm2am_an_2x1,  /* index 205 */
   ATL_dcm2am_an_1,  /* index 206 */
   ATL_dcm2am_an_2x1,  /* index 207 */
   ATL_dcm2am_an_1,  /* index 208 */
   ATL_dcm2am_an_2x1   /* index 209 */
};

static const cm2am_t ATL_RKK_BT2BLK_an[210] =
{
   ATL_drm2am_an_1,  /* index 0 */
   ATL_drm2am_an_2x1,  /* index 1 */
   ATL_drm2am_an_1,  /* index 2 */
   ATL_drm2am_an_1,  /* index 3 */
   ATL_drm2am_an_1,  /* index 4 */
   ATL_drm2am_an_1,  /* index 5 */
   ATL_drm2am_an_1,  /* index 6 */
   ATL_drm2am_an_1,  /* index 7 */
   ATL_drm2am_an_1,  /* index 8 */
   ATL_drm2am_an_1,  /* index 9 */
   ATL_drm2am_an_1,  /* index 10 */
   ATL_drm2am_an_1,  /* index 11 */
   ATL_drm2am_an_1,  /* index 12 */
   ATL_drm2am_an_1,  /* index 13 */
   ATL_drm2am_an_1,  /* index 14 */
   ATL_drm2am_an_2x1,  /* index 15 */
   ATL_drm2am_an_1,  /* index 16 */
   ATL_drm2am_an_1,  /* index 17 */
   ATL_drm2am_an_1,  /* index 18 */
   ATL_drm2am_an_2x1,  /* index 19 */
   ATL_drm2am_an_1,  /* index 20 */
   ATL_drm2am_an_1,  /* index 21 */
   ATL_drm2am_an_1,  /* index 22 */
   ATL_drm2am_an_2x1,  /* index 23 */
   ATL_drm2am_an_1,  /* index 24 */
   ATL_drm2am_an_1,  /* index 25 */
   ATL_drm2am_an_1,  /* index 26 */
   ATL_drm2am_an_1,  /* index 27 */
   ATL_drm2am_an_1,  /* index 28 */
   ATL_drm2am_an_2x1,  /* index 29 */
   ATL_drm2am_an_1,  /* index 30 */
   ATL_drm2am_an_1,  /* index 31 */
   ATL_drm2am_an_1,  /* index 32 */
   ATL_drm2am_an_2x1,  /* index 33 */
   ATL_drm2am_an_1,  /* index 34 */
   ATL_drm2am_an_2x1,  /* index 35 */
   ATL_drm2am_an_1,  /* index 36 */
   ATL_drm2am_an_2x1,  /* index 37 */
   ATL_drm2am_an_1,  /* index 38 */
   ATL_drm2am_an_2x1,  /* index 39 */
   ATL_drm2am_an_1,  /* index 40 */
   ATL_drm2am_an_2x1,  /* index 41 */
   ATL_drm2am_an_1,  /* index 42 */
   ATL_drm2am_an_2x1,  /* index 43 */
   ATL_drm2am_an_1,  /* index 44 */
   ATL_drm2am_an_2x1,  /* index 45 */
   ATL_drm2am_an_1,  /* index 46 */
   ATL_drm2am_an_2x1,  /* index 47 */
   ATL_drm2am_an_1,  /* index 48 */
   ATL_drm2am_an_2x1,  /* index 49 */
   ATL_drm2am_an_1,  /* index 50 */
   ATL_drm2am_an_2x1,  /* index 51 */
   ATL_drm2am_an_1,  /* index 52 */
   ATL_drm2am_an_2x1,  /* index 53 */
   ATL_drm2am_an_1,  /* index 54 */
   ATL_drm2am_an_2x1,  /* index 55 */
   ATL_drm2am_an_1,  /* index 56 */
   ATL_drm2am_an_2x1,  /* index 57 */
   ATL_drm2am_an_1,  /* index 58 */
   ATL_drm2am_an_2x1,  /* index 59 */
   ATL_drm2am_an_1,  /* index 60 */
   ATL_drm2am_an_2x1,  /* index 61 */
   ATL_drm2am_an_1,  /* index 62 */
   ATL_drm2am_an_2x1,  /* index 63 */
   ATL_drm2am_an_1,  /* index 64 */
   ATL_drm2am_an_2x1,  /* index 65 */
   ATL_drm2am_an_1,  /* index 66 */
   ATL_drm2am_an_2x1,  /* index 67 */
   ATL_drm2am_an_1,  /* index 68 */
   ATL_drm2am_an_2x1,  /* index 69 */
   ATL_drm2am_an_1,  /* index 70 */
   ATL_drm2am_an_2x1,  /* index 71 */
   ATL_drm2am_an_1,  /* index 72 */
   ATL_drm2am_an_2x1,  /* index 73 */
   ATL_drm2am_an_1,  /* index 74 */
   ATL_drm2am_an_2x1,  /* index 75 */
   ATL_drm2am_an_1,  /* index 76 */
   ATL_drm2am_an_2x1,  /* index 77 */
   ATL_drm2am_an_1,  /* index 78 */
   ATL_drm2am_an_2x1,  /* index 79 */
   ATL_drm2am_an_1,  /* index 80 */
   ATL_drm2am_an_2x1,  /* index 81 */
   ATL_drm2am_an_1,  /* index 82 */
   ATL_drm2am_an_2x1,  /* index 83 */
   ATL_drm2am_an_1,  /* index 84 */
   ATL_drm2am_an_2x1,  /* index 85 */
   ATL_drm2am_an_1,  /* index 86 */
   ATL_drm2am_an_2x1,  /* index 87 */
   ATL_drm2am_an_1,  /* index 88 */
   ATL_drm2am_an_2x1,  /* index 89 */
   ATL_drm2am_an_1,  /* index 90 */
   ATL_drm2am_an_2x1,  /* index 91 */
   ATL_drm2am_an_1,  /* index 92 */
   ATL_drm2am_an_2x1,  /* index 93 */
   ATL_drm2am_an_1,  /* index 94 */
   ATL_drm2am_an_2x1,  /* index 95 */
   ATL_drm2am_an_1,  /* index 96 */
   ATL_drm2am_an_2x1,  /* index 97 */
   ATL_drm2am_an_1,  /* index 98 */
   ATL_drm2am_an_2x1,  /* index 99 */
   ATL_drm2am_an_1,  /* index 100 */
   ATL_drm2am_an_2x1,  /* index 101 */
   ATL_drm2am_an_1,  /* index 102 */
   ATL_drm2am_an_2x1,  /* index 103 */
   ATL_drm2am_an_1,  /* index 104 */
   ATL_drm2am_an_2x1,  /* index 105 */
   ATL_drm2am_an_1,  /* index 106 */
   ATL_drm2am_an_2x1,  /* index 107 */
   ATL_drm2am_an_1,  /* index 108 */
   ATL_drm2am_an_2x1,  /* index 109 */
   ATL_drm2am_an_1,  /* index 110 */
   ATL_drm2am_an_2x1,  /* index 111 */
   ATL_drm2am_an_1,  /* index 112 */
   ATL_drm2am_an_2x1,  /* index 113 */
   ATL_drm2am_an_1,  /* index 114 */
   ATL_drm2am_an_2x1,  /* index 115 */
   ATL_drm2am_an_1,  /* index 116 */
   ATL_drm2am_an_2x1,  /* index 117 */
   ATL_drm2am_an_1,  /* index 118 */
   ATL_drm2am_an_2x1,  /* index 119 */
   ATL_drm2am_an_1,  /* index 120 */
   ATL_drm2am_an_2x1,  /* index 121 */
   ATL_drm2am_an_1,  /* index 122 */
   ATL_drm2am_an_2x1,  /* index 123 */
   ATL_drm2am_an_1,  /* index 124 */
   ATL_drm2am_an_2x1,  /* index 125 */
   ATL_drm2am_an_1,  /* index 126 */
   ATL_drm2am_an_2x1,  /* index 127 */
   ATL_drm2am_an_1,  /* index 128 */
   ATL_drm2am_an_2x1,  /* index 129 */
   ATL_drm2am_an_1,  /* index 130 */
   ATL_drm2am_an_2x1,  /* index 131 */
   ATL_drm2am_an_1,  /* index 132 */
   ATL_drm2am_an_2x1,  /* index 133 */
   ATL_drm2am_an_1,  /* index 134 */
   ATL_drm2am_an_2x1,  /* index 135 */
   ATL_drm2am_an_1,  /* index 136 */
   ATL_drm2am_an_2x1,  /* index 137 */
   ATL_drm2am_an_1,  /* index 138 */
   ATL_drm2am_an_2x1,  /* index 139 */
   ATL_drm2am_an_1,  /* index 140 */
   ATL_drm2am_an_2x1,  /* index 141 */
   ATL_drm2am_an_1,  /* index 142 */
   ATL_drm2am_an_2x1,  /* index 143 */
   ATL_drm2am_an_1,  /* index 144 */
   ATL_drm2am_an_2x1,  /* index 145 */
   ATL_drm2am_an_1,  /* index 146 */
   ATL_drm2am_an_2x1,  /* index 147 */
   ATL_drm2am_an_1,  /* index 148 */
   ATL_drm2am_an_2x1,  /* index 149 */
   ATL_drm2am_an_1,  /* index 150 */
   ATL_drm2am_an_2x1,  /* index 151 */
   ATL_drm2am_an_1,  /* index 152 */
   ATL_drm2am_an_2x1,  /* index 153 */
   ATL_drm2am_an_1,  /* index 154 */
   ATL_drm2am_an_2x1,  /* index 155 */
   ATL_drm2am_an_1,  /* index 156 */
   ATL_drm2am_an_2x1,  /* index 157 */
   ATL_drm2am_an_1,  /* index 158 */
   ATL_drm2am_an_2x1,  /* index 159 */
   ATL_drm2am_an_1,  /* index 160 */
   ATL_drm2am_an_2x1,  /* index 161 */
   ATL_drm2am_an_1,  /* index 162 */
   ATL_drm2am_an_2x1,  /* index 163 */
   ATL_drm2am_an_1,  /* index 164 */
   ATL_drm2am_an_2x1,  /* index 165 */
   ATL_drm2am_an_1,  /* index 166 */
   ATL_drm2am_an_2x1,  /* index 167 */
   ATL_drm2am_an_1,  /* index 168 */
   ATL_drm2am_an_2x1,  /* index 169 */
   ATL_drm2am_an_1,  /* index 170 */
   ATL_drm2am_an_2x1,  /* index 171 */
   ATL_drm2am_an_1,  /* index 172 */
   ATL_drm2am_an_2x1,  /* index 173 */
   ATL_drm2am_an_1,  /* index 174 */
   ATL_drm2am_an_2x1,  /* index 175 */
   ATL_drm2am_an_1,  /* index 176 */
   ATL_drm2am_an_2x1,  /* index 177 */
   ATL_drm2am_an_1,  /* index 178 */
   ATL_drm2am_an_2x1,  /* index 179 */
   ATL_drm2am_an_1,  /* index 180 */
   ATL_drm2am_an_2x1,  /* index 181 */
   ATL_drm2am_an_1,  /* index 182 */
   ATL_drm2am_an_2x1,  /* index 183 */
   ATL_drm2am_an_1,  /* index 184 */
   ATL_drm2am_an_2x1,  /* index 185 */
   ATL_drm2am_an_1,  /* index 186 */
   ATL_drm2am_an_2x1,  /* index 187 */
   ATL_drm2am_an_1,  /* index 188 */
   ATL_drm2am_an_2x1,  /* index 189 */
   ATL_drm2am_an_1,  /* index 190 */
   ATL_drm2am_an_2x1,  /* index 191 */
   ATL_drm2am_an_1,  /* index 192 */
   ATL_drm2am_an_2x1,  /* index 193 */
   ATL_drm2am_an_1,  /* index 194 */
   ATL_drm2am_an_2x1,  /* index 195 */
   ATL_drm2am_an_1,  /* index 196 */
   ATL_drm2am_an_2x1,  /* index 197 */
   ATL_drm2am_an_1,  /* index 198 */
   ATL_drm2am_an_2x1,  /* index 199 */
   ATL_drm2am_an_1,  /* index 200 */
   ATL_drm2am_an_2x1,  /* index 201 */
   ATL_drm2am_an_1,  /* index 202 */
   ATL_drm2am_an_2x1,  /* index 203 */
   ATL_drm2am_an_1,  /* index 204 */
   ATL_drm2am_an_2x1,  /* index 205 */
   ATL_drm2am_an_1,  /* index 206 */
   ATL_drm2am_an_2x1,  /* index 207 */
   ATL_drm2am_an_1,  /* index 208 */
   ATL_drm2am_an_2x1   /* index 209 */
};


static const cm2am_t ATL_RKK_A2BLK_aX[210] =
{
   ATL_dcm2am_aX_28,  /* index 0 */
   ATL_dcm2am_aX_2x12,  /* index 1 */
   ATL_dcm2am_aX_28,  /* index 2 */
   ATL_dcm2am_aX_28,  /* index 3 */
   ATL_dcm2am_aX_28,  /* index 4 */
   ATL_dcm2am_aX_28,  /* index 5 */
   ATL_dcm2am_aX_28,  /* index 6 */
   ATL_dcm2am_aX_28,  /* index 7 */
   ATL_dcm2am_aX_28,  /* index 8 */
   ATL_dcm2am_aX_28,  /* index 9 */
   ATL_dcm2am_aX_28,  /* index 10 */
   ATL_dcm2am_aX_28,  /* index 11 */
   ATL_dcm2am_aX_28,  /* index 12 */
   ATL_dcm2am_aX_28,  /* index 13 */
   ATL_dcm2am_aX_28,  /* index 14 */
   ATL_dcm2am_aX_2x12,  /* index 15 */
   ATL_dcm2am_aX_28,  /* index 16 */
   ATL_dcm2am_aX_28,  /* index 17 */
   ATL_dcm2am_aX_28,  /* index 18 */
   ATL_dcm2am_aX_2x12,  /* index 19 */
   ATL_dcm2am_aX_28,  /* index 20 */
   ATL_dcm2am_aX_28,  /* index 21 */
   ATL_dcm2am_aX_28,  /* index 22 */
   ATL_dcm2am_aX_2x12,  /* index 23 */
   ATL_dcm2am_aX_28,  /* index 24 */
   ATL_dcm2am_aX_28,  /* index 25 */
   ATL_dcm2am_aX_28,  /* index 26 */
   ATL_dcm2am_aX_28,  /* index 27 */
   ATL_dcm2am_aX_28,  /* index 28 */
   ATL_dcm2am_aX_2x12,  /* index 29 */
   ATL_dcm2am_aX_28,  /* index 30 */
   ATL_dcm2am_aX_28,  /* index 31 */
   ATL_dcm2am_aX_28,  /* index 32 */
   ATL_dcm2am_aX_2x12,  /* index 33 */
   ATL_dcm2am_aX_28,  /* index 34 */
   ATL_dcm2am_aX_2x12,  /* index 35 */
   ATL_dcm2am_aX_28,  /* index 36 */
   ATL_dcm2am_aX_2x12,  /* index 37 */
   ATL_dcm2am_aX_28,  /* index 38 */
   ATL_dcm2am_aX_2x12,  /* index 39 */
   ATL_dcm2am_aX_28,  /* index 40 */
   ATL_dcm2am_aX_2x12,  /* index 41 */
   ATL_dcm2am_aX_28,  /* index 42 */
   ATL_dcm2am_aX_2x12,  /* index 43 */
   ATL_dcm2am_aX_28,  /* index 44 */
   ATL_dcm2am_aX_2x12,  /* index 45 */
   ATL_dcm2am_aX_28,  /* index 46 */
   ATL_dcm2am_aX_2x12,  /* index 47 */
   ATL_dcm2am_aX_28,  /* index 48 */
   ATL_dcm2am_aX_2x12,  /* index 49 */
   ATL_dcm2am_aX_28,  /* index 50 */
   ATL_dcm2am_aX_2x12,  /* index 51 */
   ATL_dcm2am_aX_28,  /* index 52 */
   ATL_dcm2am_aX_2x12,  /* index 53 */
   ATL_dcm2am_aX_28,  /* index 54 */
   ATL_dcm2am_aX_2x12,  /* index 55 */
   ATL_dcm2am_aX_28,  /* index 56 */
   ATL_dcm2am_aX_2x12,  /* index 57 */
   ATL_dcm2am_aX_28,  /* index 58 */
   ATL_dcm2am_aX_2x12,  /* index 59 */
   ATL_dcm2am_aX_28,  /* index 60 */
   ATL_dcm2am_aX_2x12,  /* index 61 */
   ATL_dcm2am_aX_28,  /* index 62 */
   ATL_dcm2am_aX_2x12,  /* index 63 */
   ATL_dcm2am_aX_28,  /* index 64 */
   ATL_dcm2am_aX_2x12,  /* index 65 */
   ATL_dcm2am_aX_28,  /* index 66 */
   ATL_dcm2am_aX_2x12,  /* index 67 */
   ATL_dcm2am_aX_28,  /* index 68 */
   ATL_dcm2am_aX_2x12,  /* index 69 */
   ATL_dcm2am_aX_28,  /* index 70 */
   ATL_dcm2am_aX_2x12,  /* index 71 */
   ATL_dcm2am_aX_28,  /* index 72 */
   ATL_dcm2am_aX_2x12,  /* index 73 */
   ATL_dcm2am_aX_28,  /* index 74 */
   ATL_dcm2am_aX_2x12,  /* index 75 */
   ATL_dcm2am_aX_28,  /* index 76 */
   ATL_dcm2am_aX_2x12,  /* index 77 */
   ATL_dcm2am_aX_28,  /* index 78 */
   ATL_dcm2am_aX_2x12,  /* index 79 */
   ATL_dcm2am_aX_28,  /* index 80 */
   ATL_dcm2am_aX_2x8,  /* index 81 */
   ATL_dcm2am_aX_28,  /* index 82 */
   ATL_dcm2am_aX_2x12,  /* index 83 */
   ATL_dcm2am_aX_28,  /* index 84 */
   ATL_dcm2am_aX_2x12,  /* index 85 */
   ATL_dcm2am_aX_28,  /* index 86 */
   ATL_dcm2am_aX_2x12,  /* index 87 */
   ATL_dcm2am_aX_28,  /* index 88 */
   ATL_dcm2am_aX_2x12,  /* index 89 */
   ATL_dcm2am_aX_28,  /* index 90 */
   ATL_dcm2am_aX_2x12,  /* index 91 */
   ATL_dcm2am_aX_28,  /* index 92 */
   ATL_dcm2am_aX_2x12,  /* index 93 */
   ATL_dcm2am_aX_28,  /* index 94 */
   ATL_dcm2am_aX_2x12,  /* index 95 */
   ATL_dcm2am_aX_28,  /* index 96 */
   ATL_dcm2am_aX_2x12,  /* index 97 */
   ATL_dcm2am_aX_28,  /* index 98 */
   ATL_dcm2am_aX_2x12,  /* index 99 */
   ATL_dcm2am_aX_28,  /* index 100 */
   ATL_dcm2am_aX_2x12,  /* index 101 */
   ATL_dcm2am_aX_28,  /* index 102 */
   ATL_dcm2am_aX_2x12,  /* index 103 */
   ATL_dcm2am_aX_28,  /* index 104 */
   ATL_dcm2am_aX_2x12,  /* index 105 */
   ATL_dcm2am_aX_28,  /* index 106 */
   ATL_dcm2am_aX_2x12,  /* index 107 */
   ATL_dcm2am_aX_28,  /* index 108 */
   ATL_dcm2am_aX_2x12,  /* index 109 */
   ATL_dcm2am_aX_28,  /* index 110 */
   ATL_dcm2am_aX_2x12,  /* index 111 */
   ATL_dcm2am_aX_28,  /* index 112 */
   ATL_dcm2am_aX_2x12,  /* index 113 */
   ATL_dcm2am_aX_28,  /* index 114 */
   ATL_dcm2am_aX_2x12,  /* index 115 */
   ATL_dcm2am_aX_28,  /* index 116 */
   ATL_dcm2am_aX_2x12,  /* index 117 */
   ATL_dcm2am_aX_28,  /* index 118 */
   ATL_dcm2am_aX_2x12,  /* index 119 */
   ATL_dcm2am_aX_28,  /* index 120 */
   ATL_dcm2am_aX_2x12,  /* index 121 */
   ATL_dcm2am_aX_28,  /* index 122 */
   ATL_dcm2am_aX_2x12,  /* index 123 */
   ATL_dcm2am_aX_28,  /* index 124 */
   ATL_dcm2am_aX_2x12,  /* index 125 */
   ATL_dcm2am_aX_28,  /* index 126 */
   ATL_dcm2am_aX_2x12,  /* index 127 */
   ATL_dcm2am_aX_28,  /* index 128 */
   ATL_dcm2am_aX_2x12,  /* index 129 */
   ATL_dcm2am_aX_28,  /* index 130 */
   ATL_dcm2am_aX_2x12,  /* index 131 */
   ATL_dcm2am_aX_28,  /* index 132 */
   ATL_dcm2am_aX_2x12,  /* index 133 */
   ATL_dcm2am_aX_28,  /* index 134 */
   ATL_dcm2am_aX_2x12,  /* index 135 */
   ATL_dcm2am_aX_28,  /* index 136 */
   ATL_dcm2am_aX_2x12,  /* index 137 */
   ATL_dcm2am_aX_28,  /* index 138 */
   ATL_dcm2am_aX_2x12,  /* index 139 */
   ATL_dcm2am_aX_28,  /* index 140 */
   ATL_dcm2am_aX_2x12,  /* index 141 */
   ATL_dcm2am_aX_28,  /* index 142 */
   ATL_dcm2am_aX_2x12,  /* index 143 */
   ATL_dcm2am_aX_28,  /* index 144 */
   ATL_dcm2am_aX_2x12,  /* index 145 */
   ATL_dcm2am_aX_28,  /* index 146 */
   ATL_dcm2am_aX_2x12,  /* index 147 */
   ATL_dcm2am_aX_6,  /* index 148 */
   ATL_dcm2am_aX_2x12,  /* index 149 */
   ATL_dcm2am_aX_6,  /* index 150 */
   ATL_dcm2am_aX_2x12,  /* index 151 */
   ATL_dcm2am_aX_6,  /* index 152 */
   ATL_dcm2am_aX_2x12,  /* index 153 */
   ATL_dcm2am_aX_6,  /* index 154 */
   ATL_dcm2am_aX_2x12,  /* index 155 */
   ATL_dcm2am_aX_6,  /* index 156 */
   ATL_dcm2am_aX_2x12,  /* index 157 */
   ATL_dcm2am_aX_6,  /* index 158 */
   ATL_dcm2am_aX_2x12,  /* index 159 */
   ATL_dcm2am_aX_6,  /* index 160 */
   ATL_dcm2am_aX_2x12,  /* index 161 */
   ATL_dcm2am_aX_6,  /* index 162 */
   ATL_dcm2am_aX_2x12,  /* index 163 */
   ATL_dcm2am_aX_6,  /* index 164 */
   ATL_dcm2am_aX_2x12,  /* index 165 */
   ATL_dcm2am_aX_6,  /* index 166 */
   ATL_dcm2am_aX_2x12,  /* index 167 */
   ATL_dcm2am_aX_6,  /* index 168 */
   ATL_dcm2am_aX_2x12,  /* index 169 */
   ATL_dcm2am_aX_6,  /* index 170 */
   ATL_dcm2am_aX_2x12,  /* index 171 */
   ATL_dcm2am_aX_6,  /* index 172 */
   ATL_dcm2am_aX_2x12,  /* index 173 */
   ATL_dcm2am_aX_6,  /* index 174 */
   ATL_dcm2am_aX_2x12,  /* index 175 */
   ATL_dcm2am_aX_6,  /* index 176 */
   ATL_dcm2am_aX_2x12,  /* index 177 */
   ATL_dcm2am_aX_6,  /* index 178 */
   ATL_dcm2am_aX_2x12,  /* index 179 */
   ATL_dcm2am_aX_6,  /* index 180 */
   ATL_dcm2am_aX_2x12,  /* index 181 */
   ATL_dcm2am_aX_6,  /* index 182 */
   ATL_dcm2am_aX_2x12,  /* index 183 */
   ATL_dcm2am_aX_6,  /* index 184 */
   ATL_dcm2am_aX_2x12,  /* index 185 */
   ATL_dcm2am_aX_6,  /* index 186 */
   ATL_dcm2am_aX_2x12,  /* index 187 */
   ATL_dcm2am_aX_6,  /* index 188 */
   ATL_dcm2am_aX_2x12,  /* index 189 */
   ATL_dcm2am_aX_6,  /* index 190 */
   ATL_dcm2am_aX_2x12,  /* index 191 */
   ATL_dcm2am_aX_6,  /* index 192 */
   ATL_dcm2am_aX_2x12,  /* index 193 */
   ATL_dcm2am_aX_6,  /* index 194 */
   ATL_dcm2am_aX_2x12,  /* index 195 */
   ATL_dcm2am_aX_6,  /* index 196 */
   ATL_dcm2am_aX_2x12,  /* index 197 */
   ATL_dcm2am_aX_6,  /* index 198 */
   ATL_dcm2am_aX_2x12,  /* index 199 */
   ATL_dcm2am_aX_6,  /* index 200 */
   ATL_dcm2am_aX_2x12,  /* index 201 */
   ATL_dcm2am_aX_6,  /* index 202 */
   ATL_dcm2am_aX_2x12,  /* index 203 */
   ATL_dcm2am_aX_6,  /* index 204 */
   ATL_dcm2am_aX_2x12,  /* index 205 */
   ATL_dcm2am_aX_6,  /* index 206 */
   ATL_dcm2am_aX_2x12,  /* index 207 */
   ATL_dcm2am_aX_6,  /* index 208 */
   ATL_dcm2am_aX_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_AT2BLK_aX[210] =
{
   ATL_drm2am_aX_28,  /* index 0 */
   ATL_drm2am_aX_2x12,  /* index 1 */
   ATL_drm2am_aX_28,  /* index 2 */
   ATL_drm2am_aX_28,  /* index 3 */
   ATL_drm2am_aX_28,  /* index 4 */
   ATL_drm2am_aX_28,  /* index 5 */
   ATL_drm2am_aX_28,  /* index 6 */
   ATL_drm2am_aX_28,  /* index 7 */
   ATL_drm2am_aX_28,  /* index 8 */
   ATL_drm2am_aX_28,  /* index 9 */
   ATL_drm2am_aX_28,  /* index 10 */
   ATL_drm2am_aX_28,  /* index 11 */
   ATL_drm2am_aX_28,  /* index 12 */
   ATL_drm2am_aX_28,  /* index 13 */
   ATL_drm2am_aX_28,  /* index 14 */
   ATL_drm2am_aX_2x12,  /* index 15 */
   ATL_drm2am_aX_28,  /* index 16 */
   ATL_drm2am_aX_28,  /* index 17 */
   ATL_drm2am_aX_28,  /* index 18 */
   ATL_drm2am_aX_2x12,  /* index 19 */
   ATL_drm2am_aX_28,  /* index 20 */
   ATL_drm2am_aX_28,  /* index 21 */
   ATL_drm2am_aX_28,  /* index 22 */
   ATL_drm2am_aX_2x12,  /* index 23 */
   ATL_drm2am_aX_28,  /* index 24 */
   ATL_drm2am_aX_28,  /* index 25 */
   ATL_drm2am_aX_28,  /* index 26 */
   ATL_drm2am_aX_28,  /* index 27 */
   ATL_drm2am_aX_28,  /* index 28 */
   ATL_drm2am_aX_2x12,  /* index 29 */
   ATL_drm2am_aX_28,  /* index 30 */
   ATL_drm2am_aX_28,  /* index 31 */
   ATL_drm2am_aX_28,  /* index 32 */
   ATL_drm2am_aX_2x12,  /* index 33 */
   ATL_drm2am_aX_28,  /* index 34 */
   ATL_drm2am_aX_2x12,  /* index 35 */
   ATL_drm2am_aX_28,  /* index 36 */
   ATL_drm2am_aX_2x12,  /* index 37 */
   ATL_drm2am_aX_28,  /* index 38 */
   ATL_drm2am_aX_2x12,  /* index 39 */
   ATL_drm2am_aX_28,  /* index 40 */
   ATL_drm2am_aX_2x12,  /* index 41 */
   ATL_drm2am_aX_28,  /* index 42 */
   ATL_drm2am_aX_2x12,  /* index 43 */
   ATL_drm2am_aX_28,  /* index 44 */
   ATL_drm2am_aX_2x12,  /* index 45 */
   ATL_drm2am_aX_28,  /* index 46 */
   ATL_drm2am_aX_2x12,  /* index 47 */
   ATL_drm2am_aX_28,  /* index 48 */
   ATL_drm2am_aX_2x12,  /* index 49 */
   ATL_drm2am_aX_28,  /* index 50 */
   ATL_drm2am_aX_2x12,  /* index 51 */
   ATL_drm2am_aX_28,  /* index 52 */
   ATL_drm2am_aX_2x12,  /* index 53 */
   ATL_drm2am_aX_28,  /* index 54 */
   ATL_drm2am_aX_2x12,  /* index 55 */
   ATL_drm2am_aX_28,  /* index 56 */
   ATL_drm2am_aX_2x12,  /* index 57 */
   ATL_drm2am_aX_28,  /* index 58 */
   ATL_drm2am_aX_2x12,  /* index 59 */
   ATL_drm2am_aX_28,  /* index 60 */
   ATL_drm2am_aX_2x12,  /* index 61 */
   ATL_drm2am_aX_28,  /* index 62 */
   ATL_drm2am_aX_2x12,  /* index 63 */
   ATL_drm2am_aX_28,  /* index 64 */
   ATL_drm2am_aX_2x12,  /* index 65 */
   ATL_drm2am_aX_28,  /* index 66 */
   ATL_drm2am_aX_2x12,  /* index 67 */
   ATL_drm2am_aX_28,  /* index 68 */
   ATL_drm2am_aX_2x12,  /* index 69 */
   ATL_drm2am_aX_28,  /* index 70 */
   ATL_drm2am_aX_2x12,  /* index 71 */
   ATL_drm2am_aX_28,  /* index 72 */
   ATL_drm2am_aX_2x12,  /* index 73 */
   ATL_drm2am_aX_28,  /* index 74 */
   ATL_drm2am_aX_2x12,  /* index 75 */
   ATL_drm2am_aX_28,  /* index 76 */
   ATL_drm2am_aX_2x12,  /* index 77 */
   ATL_drm2am_aX_28,  /* index 78 */
   ATL_drm2am_aX_2x12,  /* index 79 */
   ATL_drm2am_aX_28,  /* index 80 */
   ATL_drm2am_aX_2x8,  /* index 81 */
   ATL_drm2am_aX_28,  /* index 82 */
   ATL_drm2am_aX_2x12,  /* index 83 */
   ATL_drm2am_aX_28,  /* index 84 */
   ATL_drm2am_aX_2x12,  /* index 85 */
   ATL_drm2am_aX_28,  /* index 86 */
   ATL_drm2am_aX_2x12,  /* index 87 */
   ATL_drm2am_aX_28,  /* index 88 */
   ATL_drm2am_aX_2x12,  /* index 89 */
   ATL_drm2am_aX_28,  /* index 90 */
   ATL_drm2am_aX_2x12,  /* index 91 */
   ATL_drm2am_aX_28,  /* index 92 */
   ATL_drm2am_aX_2x12,  /* index 93 */
   ATL_drm2am_aX_28,  /* index 94 */
   ATL_drm2am_aX_2x12,  /* index 95 */
   ATL_drm2am_aX_28,  /* index 96 */
   ATL_drm2am_aX_2x12,  /* index 97 */
   ATL_drm2am_aX_28,  /* index 98 */
   ATL_drm2am_aX_2x12,  /* index 99 */
   ATL_drm2am_aX_28,  /* index 100 */
   ATL_drm2am_aX_2x12,  /* index 101 */
   ATL_drm2am_aX_28,  /* index 102 */
   ATL_drm2am_aX_2x12,  /* index 103 */
   ATL_drm2am_aX_28,  /* index 104 */
   ATL_drm2am_aX_2x12,  /* index 105 */
   ATL_drm2am_aX_28,  /* index 106 */
   ATL_drm2am_aX_2x12,  /* index 107 */
   ATL_drm2am_aX_28,  /* index 108 */
   ATL_drm2am_aX_2x12,  /* index 109 */
   ATL_drm2am_aX_28,  /* index 110 */
   ATL_drm2am_aX_2x12,  /* index 111 */
   ATL_drm2am_aX_28,  /* index 112 */
   ATL_drm2am_aX_2x12,  /* index 113 */
   ATL_drm2am_aX_28,  /* index 114 */
   ATL_drm2am_aX_2x12,  /* index 115 */
   ATL_drm2am_aX_28,  /* index 116 */
   ATL_drm2am_aX_2x12,  /* index 117 */
   ATL_drm2am_aX_28,  /* index 118 */
   ATL_drm2am_aX_2x12,  /* index 119 */
   ATL_drm2am_aX_28,  /* index 120 */
   ATL_drm2am_aX_2x12,  /* index 121 */
   ATL_drm2am_aX_28,  /* index 122 */
   ATL_drm2am_aX_2x12,  /* index 123 */
   ATL_drm2am_aX_28,  /* index 124 */
   ATL_drm2am_aX_2x12,  /* index 125 */
   ATL_drm2am_aX_28,  /* index 126 */
   ATL_drm2am_aX_2x12,  /* index 127 */
   ATL_drm2am_aX_28,  /* index 128 */
   ATL_drm2am_aX_2x12,  /* index 129 */
   ATL_drm2am_aX_28,  /* index 130 */
   ATL_drm2am_aX_2x12,  /* index 131 */
   ATL_drm2am_aX_28,  /* index 132 */
   ATL_drm2am_aX_2x12,  /* index 133 */
   ATL_drm2am_aX_28,  /* index 134 */
   ATL_drm2am_aX_2x12,  /* index 135 */
   ATL_drm2am_aX_28,  /* index 136 */
   ATL_drm2am_aX_2x12,  /* index 137 */
   ATL_drm2am_aX_28,  /* index 138 */
   ATL_drm2am_aX_2x12,  /* index 139 */
   ATL_drm2am_aX_28,  /* index 140 */
   ATL_drm2am_aX_2x12,  /* index 141 */
   ATL_drm2am_aX_28,  /* index 142 */
   ATL_drm2am_aX_2x12,  /* index 143 */
   ATL_drm2am_aX_28,  /* index 144 */
   ATL_drm2am_aX_2x12,  /* index 145 */
   ATL_drm2am_aX_28,  /* index 146 */
   ATL_drm2am_aX_2x12,  /* index 147 */
   ATL_drm2am_aX_6,  /* index 148 */
   ATL_drm2am_aX_2x12,  /* index 149 */
   ATL_drm2am_aX_6,  /* index 150 */
   ATL_drm2am_aX_2x12,  /* index 151 */
   ATL_drm2am_aX_6,  /* index 152 */
   ATL_drm2am_aX_2x12,  /* index 153 */
   ATL_drm2am_aX_6,  /* index 154 */
   ATL_drm2am_aX_2x12,  /* index 155 */
   ATL_drm2am_aX_6,  /* index 156 */
   ATL_drm2am_aX_2x12,  /* index 157 */
   ATL_drm2am_aX_6,  /* index 158 */
   ATL_drm2am_aX_2x12,  /* index 159 */
   ATL_drm2am_aX_6,  /* index 160 */
   ATL_drm2am_aX_2x12,  /* index 161 */
   ATL_drm2am_aX_6,  /* index 162 */
   ATL_drm2am_aX_2x12,  /* index 163 */
   ATL_drm2am_aX_6,  /* index 164 */
   ATL_drm2am_aX_2x12,  /* index 165 */
   ATL_drm2am_aX_6,  /* index 166 */
   ATL_drm2am_aX_2x12,  /* index 167 */
   ATL_drm2am_aX_6,  /* index 168 */
   ATL_drm2am_aX_2x12,  /* index 169 */
   ATL_drm2am_aX_6,  /* index 170 */
   ATL_drm2am_aX_2x12,  /* index 171 */
   ATL_drm2am_aX_6,  /* index 172 */
   ATL_drm2am_aX_2x12,  /* index 173 */
   ATL_drm2am_aX_6,  /* index 174 */
   ATL_drm2am_aX_2x12,  /* index 175 */
   ATL_drm2am_aX_6,  /* index 176 */
   ATL_drm2am_aX_2x12,  /* index 177 */
   ATL_drm2am_aX_6,  /* index 178 */
   ATL_drm2am_aX_2x12,  /* index 179 */
   ATL_drm2am_aX_6,  /* index 180 */
   ATL_drm2am_aX_2x12,  /* index 181 */
   ATL_drm2am_aX_6,  /* index 182 */
   ATL_drm2am_aX_2x12,  /* index 183 */
   ATL_drm2am_aX_6,  /* index 184 */
   ATL_drm2am_aX_2x12,  /* index 185 */
   ATL_drm2am_aX_6,  /* index 186 */
   ATL_drm2am_aX_2x12,  /* index 187 */
   ATL_drm2am_aX_6,  /* index 188 */
   ATL_drm2am_aX_2x12,  /* index 189 */
   ATL_drm2am_aX_6,  /* index 190 */
   ATL_drm2am_aX_2x12,  /* index 191 */
   ATL_drm2am_aX_6,  /* index 192 */
   ATL_drm2am_aX_2x12,  /* index 193 */
   ATL_drm2am_aX_6,  /* index 194 */
   ATL_drm2am_aX_2x12,  /* index 195 */
   ATL_drm2am_aX_6,  /* index 196 */
   ATL_drm2am_aX_2x12,  /* index 197 */
   ATL_drm2am_aX_6,  /* index 198 */
   ATL_drm2am_aX_2x12,  /* index 199 */
   ATL_drm2am_aX_6,  /* index 200 */
   ATL_drm2am_aX_2x12,  /* index 201 */
   ATL_drm2am_aX_6,  /* index 202 */
   ATL_drm2am_aX_2x12,  /* index 203 */
   ATL_drm2am_aX_6,  /* index 204 */
   ATL_drm2am_aX_2x12,  /* index 205 */
   ATL_drm2am_aX_6,  /* index 206 */
   ATL_drm2am_aX_2x12,  /* index 207 */
   ATL_drm2am_aX_6,  /* index 208 */
   ATL_drm2am_aX_2x12   /* index 209 */
};

static const cm2am_t ATL_RKK_B2BLK_aX[210] =
{
   ATL_dcm2am_aX_1,  /* index 0 */
   ATL_dcm2am_aX_2x1,  /* index 1 */
   ATL_dcm2am_aX_1,  /* index 2 */
   ATL_dcm2am_aX_1,  /* index 3 */
   ATL_dcm2am_aX_1,  /* index 4 */
   ATL_dcm2am_aX_1,  /* index 5 */
   ATL_dcm2am_aX_1,  /* index 6 */
   ATL_dcm2am_aX_1,  /* index 7 */
   ATL_dcm2am_aX_1,  /* index 8 */
   ATL_dcm2am_aX_1,  /* index 9 */
   ATL_dcm2am_aX_1,  /* index 10 */
   ATL_dcm2am_aX_1,  /* index 11 */
   ATL_dcm2am_aX_1,  /* index 12 */
   ATL_dcm2am_aX_1,  /* index 13 */
   ATL_dcm2am_aX_1,  /* index 14 */
   ATL_dcm2am_aX_2x1,  /* index 15 */
   ATL_dcm2am_aX_1,  /* index 16 */
   ATL_dcm2am_aX_1,  /* index 17 */
   ATL_dcm2am_aX_1,  /* index 18 */
   ATL_dcm2am_aX_2x1,  /* index 19 */
   ATL_dcm2am_aX_1,  /* index 20 */
   ATL_dcm2am_aX_1,  /* index 21 */
   ATL_dcm2am_aX_1,  /* index 22 */
   ATL_dcm2am_aX_2x1,  /* index 23 */
   ATL_dcm2am_aX_1,  /* index 24 */
   ATL_dcm2am_aX_1,  /* index 25 */
   ATL_dcm2am_aX_1,  /* index 26 */
   ATL_dcm2am_aX_1,  /* index 27 */
   ATL_dcm2am_aX_1,  /* index 28 */
   ATL_dcm2am_aX_2x1,  /* index 29 */
   ATL_dcm2am_aX_1,  /* index 30 */
   ATL_dcm2am_aX_1,  /* index 31 */
   ATL_dcm2am_aX_1,  /* index 32 */
   ATL_dcm2am_aX_2x1,  /* index 33 */
   ATL_dcm2am_aX_1,  /* index 34 */
   ATL_dcm2am_aX_2x1,  /* index 35 */
   ATL_dcm2am_aX_1,  /* index 36 */
   ATL_dcm2am_aX_2x1,  /* index 37 */
   ATL_dcm2am_aX_1,  /* index 38 */
   ATL_dcm2am_aX_2x1,  /* index 39 */
   ATL_dcm2am_aX_1,  /* index 40 */
   ATL_dcm2am_aX_2x1,  /* index 41 */
   ATL_dcm2am_aX_1,  /* index 42 */
   ATL_dcm2am_aX_2x1,  /* index 43 */
   ATL_dcm2am_aX_1,  /* index 44 */
   ATL_dcm2am_aX_2x1,  /* index 45 */
   ATL_dcm2am_aX_1,  /* index 46 */
   ATL_dcm2am_aX_2x1,  /* index 47 */
   ATL_dcm2am_aX_1,  /* index 48 */
   ATL_dcm2am_aX_2x1,  /* index 49 */
   ATL_dcm2am_aX_1,  /* index 50 */
   ATL_dcm2am_aX_2x1,  /* index 51 */
   ATL_dcm2am_aX_1,  /* index 52 */
   ATL_dcm2am_aX_2x1,  /* index 53 */
   ATL_dcm2am_aX_1,  /* index 54 */
   ATL_dcm2am_aX_2x1,  /* index 55 */
   ATL_dcm2am_aX_1,  /* index 56 */
   ATL_dcm2am_aX_2x1,  /* index 57 */
   ATL_dcm2am_aX_1,  /* index 58 */
   ATL_dcm2am_aX_2x1,  /* index 59 */
   ATL_dcm2am_aX_1,  /* index 60 */
   ATL_dcm2am_aX_2x1,  /* index 61 */
   ATL_dcm2am_aX_1,  /* index 62 */
   ATL_dcm2am_aX_2x1,  /* index 63 */
   ATL_dcm2am_aX_1,  /* index 64 */
   ATL_dcm2am_aX_2x1,  /* index 65 */
   ATL_dcm2am_aX_1,  /* index 66 */
   ATL_dcm2am_aX_2x1,  /* index 67 */
   ATL_dcm2am_aX_1,  /* index 68 */
   ATL_dcm2am_aX_2x1,  /* index 69 */
   ATL_dcm2am_aX_1,  /* index 70 */
   ATL_dcm2am_aX_2x1,  /* index 71 */
   ATL_dcm2am_aX_1,  /* index 72 */
   ATL_dcm2am_aX_2x1,  /* index 73 */
   ATL_dcm2am_aX_1,  /* index 74 */
   ATL_dcm2am_aX_2x1,  /* index 75 */
   ATL_dcm2am_aX_1,  /* index 76 */
   ATL_dcm2am_aX_2x1,  /* index 77 */
   ATL_dcm2am_aX_1,  /* index 78 */
   ATL_dcm2am_aX_2x1,  /* index 79 */
   ATL_dcm2am_aX_1,  /* index 80 */
   ATL_dcm2am_aX_2x1,  /* index 81 */
   ATL_dcm2am_aX_1,  /* index 82 */
   ATL_dcm2am_aX_2x1,  /* index 83 */
   ATL_dcm2am_aX_1,  /* index 84 */
   ATL_dcm2am_aX_2x1,  /* index 85 */
   ATL_dcm2am_aX_1,  /* index 86 */
   ATL_dcm2am_aX_2x1,  /* index 87 */
   ATL_dcm2am_aX_1,  /* index 88 */
   ATL_dcm2am_aX_2x1,  /* index 89 */
   ATL_dcm2am_aX_1,  /* index 90 */
   ATL_dcm2am_aX_2x1,  /* index 91 */
   ATL_dcm2am_aX_1,  /* index 92 */
   ATL_dcm2am_aX_2x1,  /* index 93 */
   ATL_dcm2am_aX_1,  /* index 94 */
   ATL_dcm2am_aX_2x1,  /* index 95 */
   ATL_dcm2am_aX_1,  /* index 96 */
   ATL_dcm2am_aX_2x1,  /* index 97 */
   ATL_dcm2am_aX_1,  /* index 98 */
   ATL_dcm2am_aX_2x1,  /* index 99 */
   ATL_dcm2am_aX_1,  /* index 100 */
   ATL_dcm2am_aX_2x1,  /* index 101 */
   ATL_dcm2am_aX_1,  /* index 102 */
   ATL_dcm2am_aX_2x1,  /* index 103 */
   ATL_dcm2am_aX_1,  /* index 104 */
   ATL_dcm2am_aX_2x1,  /* index 105 */
   ATL_dcm2am_aX_1,  /* index 106 */
   ATL_dcm2am_aX_2x1,  /* index 107 */
   ATL_dcm2am_aX_1,  /* index 108 */
   ATL_dcm2am_aX_2x1,  /* index 109 */
   ATL_dcm2am_aX_1,  /* index 110 */
   ATL_dcm2am_aX_2x1,  /* index 111 */
   ATL_dcm2am_aX_1,  /* index 112 */
   ATL_dcm2am_aX_2x1,  /* index 113 */
   ATL_dcm2am_aX_1,  /* index 114 */
   ATL_dcm2am_aX_2x1,  /* index 115 */
   ATL_dcm2am_aX_1,  /* index 116 */
   ATL_dcm2am_aX_2x1,  /* index 117 */
   ATL_dcm2am_aX_1,  /* index 118 */
   ATL_dcm2am_aX_2x1,  /* index 119 */
   ATL_dcm2am_aX_1,  /* index 120 */
   ATL_dcm2am_aX_2x1,  /* index 121 */
   ATL_dcm2am_aX_1,  /* index 122 */
   ATL_dcm2am_aX_2x1,  /* index 123 */
   ATL_dcm2am_aX_1,  /* index 124 */
   ATL_dcm2am_aX_2x1,  /* index 125 */
   ATL_dcm2am_aX_1,  /* index 126 */
   ATL_dcm2am_aX_2x1,  /* index 127 */
   ATL_dcm2am_aX_1,  /* index 128 */
   ATL_dcm2am_aX_2x1,  /* index 129 */
   ATL_dcm2am_aX_1,  /* index 130 */
   ATL_dcm2am_aX_2x1,  /* index 131 */
   ATL_dcm2am_aX_1,  /* index 132 */
   ATL_dcm2am_aX_2x1,  /* index 133 */
   ATL_dcm2am_aX_1,  /* index 134 */
   ATL_dcm2am_aX_2x1,  /* index 135 */
   ATL_dcm2am_aX_1,  /* index 136 */
   ATL_dcm2am_aX_2x1,  /* index 137 */
   ATL_dcm2am_aX_1,  /* index 138 */
   ATL_dcm2am_aX_2x1,  /* index 139 */
   ATL_dcm2am_aX_1,  /* index 140 */
   ATL_dcm2am_aX_2x1,  /* index 141 */
   ATL_dcm2am_aX_1,  /* index 142 */
   ATL_dcm2am_aX_2x1,  /* index 143 */
   ATL_dcm2am_aX_1,  /* index 144 */
   ATL_dcm2am_aX_2x1,  /* index 145 */
   ATL_dcm2am_aX_1,  /* index 146 */
   ATL_dcm2am_aX_2x1,  /* index 147 */
   ATL_dcm2am_aX_1,  /* index 148 */
   ATL_dcm2am_aX_2x1,  /* index 149 */
   ATL_dcm2am_aX_1,  /* index 150 */
   ATL_dcm2am_aX_2x1,  /* index 151 */
   ATL_dcm2am_aX_1,  /* index 152 */
   ATL_dcm2am_aX_2x1,  /* index 153 */
   ATL_dcm2am_aX_1,  /* index 154 */
   ATL_dcm2am_aX_2x1,  /* index 155 */
   ATL_dcm2am_aX_1,  /* index 156 */
   ATL_dcm2am_aX_2x1,  /* index 157 */
   ATL_dcm2am_aX_1,  /* index 158 */
   ATL_dcm2am_aX_2x1,  /* index 159 */
   ATL_dcm2am_aX_1,  /* index 160 */
   ATL_dcm2am_aX_2x1,  /* index 161 */
   ATL_dcm2am_aX_1,  /* index 162 */
   ATL_dcm2am_aX_2x1,  /* index 163 */
   ATL_dcm2am_aX_1,  /* index 164 */
   ATL_dcm2am_aX_2x1,  /* index 165 */
   ATL_dcm2am_aX_1,  /* index 166 */
   ATL_dcm2am_aX_2x1,  /* index 167 */
   ATL_dcm2am_aX_1,  /* index 168 */
   ATL_dcm2am_aX_2x1,  /* index 169 */
   ATL_dcm2am_aX_1,  /* index 170 */
   ATL_dcm2am_aX_2x1,  /* index 171 */
   ATL_dcm2am_aX_1,  /* index 172 */
   ATL_dcm2am_aX_2x1,  /* index 173 */
   ATL_dcm2am_aX_1,  /* index 174 */
   ATL_dcm2am_aX_2x1,  /* index 175 */
   ATL_dcm2am_aX_1,  /* index 176 */
   ATL_dcm2am_aX_2x1,  /* index 177 */
   ATL_dcm2am_aX_1,  /* index 178 */
   ATL_dcm2am_aX_2x1,  /* index 179 */
   ATL_dcm2am_aX_1,  /* index 180 */
   ATL_dcm2am_aX_2x1,  /* index 181 */
   ATL_dcm2am_aX_1,  /* index 182 */
   ATL_dcm2am_aX_2x1,  /* index 183 */
   ATL_dcm2am_aX_1,  /* index 184 */
   ATL_dcm2am_aX_2x1,  /* index 185 */
   ATL_dcm2am_aX_1,  /* index 186 */
   ATL_dcm2am_aX_2x1,  /* index 187 */
   ATL_dcm2am_aX_1,  /* index 188 */
   ATL_dcm2am_aX_2x1,  /* index 189 */
   ATL_dcm2am_aX_1,  /* index 190 */
   ATL_dcm2am_aX_2x1,  /* index 191 */
   ATL_dcm2am_aX_1,  /* index 192 */
   ATL_dcm2am_aX_2x1,  /* index 193 */
   ATL_dcm2am_aX_1,  /* index 194 */
   ATL_dcm2am_aX_2x1,  /* index 195 */
   ATL_dcm2am_aX_1,  /* index 196 */
   ATL_dcm2am_aX_2x1,  /* index 197 */
   ATL_dcm2am_aX_1,  /* index 198 */
   ATL_dcm2am_aX_2x1,  /* index 199 */
   ATL_dcm2am_aX_1,  /* index 200 */
   ATL_dcm2am_aX_2x1,  /* index 201 */
   ATL_dcm2am_aX_1,  /* index 202 */
   ATL_dcm2am_aX_2x1,  /* index 203 */
   ATL_dcm2am_aX_1,  /* index 204 */
   ATL_dcm2am_aX_2x1,  /* index 205 */
   ATL_dcm2am_aX_1,  /* index 206 */
   ATL_dcm2am_aX_2x1,  /* index 207 */
   ATL_dcm2am_aX_1,  /* index 208 */
   ATL_dcm2am_aX_2x1   /* index 209 */
};

static const cm2am_t ATL_RKK_BT2BLK_aX[210] =
{
   ATL_drm2am_aX_1,  /* index 0 */
   ATL_drm2am_aX_2x1,  /* index 1 */
   ATL_drm2am_aX_1,  /* index 2 */
   ATL_drm2am_aX_1,  /* index 3 */
   ATL_drm2am_aX_1,  /* index 4 */
   ATL_drm2am_aX_1,  /* index 5 */
   ATL_drm2am_aX_1,  /* index 6 */
   ATL_drm2am_aX_1,  /* index 7 */
   ATL_drm2am_aX_1,  /* index 8 */
   ATL_drm2am_aX_1,  /* index 9 */
   ATL_drm2am_aX_1,  /* index 10 */
   ATL_drm2am_aX_1,  /* index 11 */
   ATL_drm2am_aX_1,  /* index 12 */
   ATL_drm2am_aX_1,  /* index 13 */
   ATL_drm2am_aX_1,  /* index 14 */
   ATL_drm2am_aX_2x1,  /* index 15 */
   ATL_drm2am_aX_1,  /* index 16 */
   ATL_drm2am_aX_1,  /* index 17 */
   ATL_drm2am_aX_1,  /* index 18 */
   ATL_drm2am_aX_2x1,  /* index 19 */
   ATL_drm2am_aX_1,  /* index 20 */
   ATL_drm2am_aX_1,  /* index 21 */
   ATL_drm2am_aX_1,  /* index 22 */
   ATL_drm2am_aX_2x1,  /* index 23 */
   ATL_drm2am_aX_1,  /* index 24 */
   ATL_drm2am_aX_1,  /* index 25 */
   ATL_drm2am_aX_1,  /* index 26 */
   ATL_drm2am_aX_1,  /* index 27 */
   ATL_drm2am_aX_1,  /* index 28 */
   ATL_drm2am_aX_2x1,  /* index 29 */
   ATL_drm2am_aX_1,  /* index 30 */
   ATL_drm2am_aX_1,  /* index 31 */
   ATL_drm2am_aX_1,  /* index 32 */
   ATL_drm2am_aX_2x1,  /* index 33 */
   ATL_drm2am_aX_1,  /* index 34 */
   ATL_drm2am_aX_2x1,  /* index 35 */
   ATL_drm2am_aX_1,  /* index 36 */
   ATL_drm2am_aX_2x1,  /* index 37 */
   ATL_drm2am_aX_1,  /* index 38 */
   ATL_drm2am_aX_2x1,  /* index 39 */
   ATL_drm2am_aX_1,  /* index 40 */
   ATL_drm2am_aX_2x1,  /* index 41 */
   ATL_drm2am_aX_1,  /* index 42 */
   ATL_drm2am_aX_2x1,  /* index 43 */
   ATL_drm2am_aX_1,  /* index 44 */
   ATL_drm2am_aX_2x1,  /* index 45 */
   ATL_drm2am_aX_1,  /* index 46 */
   ATL_drm2am_aX_2x1,  /* index 47 */
   ATL_drm2am_aX_1,  /* index 48 */
   ATL_drm2am_aX_2x1,  /* index 49 */
   ATL_drm2am_aX_1,  /* index 50 */
   ATL_drm2am_aX_2x1,  /* index 51 */
   ATL_drm2am_aX_1,  /* index 52 */
   ATL_drm2am_aX_2x1,  /* index 53 */
   ATL_drm2am_aX_1,  /* index 54 */
   ATL_drm2am_aX_2x1,  /* index 55 */
   ATL_drm2am_aX_1,  /* index 56 */
   ATL_drm2am_aX_2x1,  /* index 57 */
   ATL_drm2am_aX_1,  /* index 58 */
   ATL_drm2am_aX_2x1,  /* index 59 */
   ATL_drm2am_aX_1,  /* index 60 */
   ATL_drm2am_aX_2x1,  /* index 61 */
   ATL_drm2am_aX_1,  /* index 62 */
   ATL_drm2am_aX_2x1,  /* index 63 */
   ATL_drm2am_aX_1,  /* index 64 */
   ATL_drm2am_aX_2x1,  /* index 65 */
   ATL_drm2am_aX_1,  /* index 66 */
   ATL_drm2am_aX_2x1,  /* index 67 */
   ATL_drm2am_aX_1,  /* index 68 */
   ATL_drm2am_aX_2x1,  /* index 69 */
   ATL_drm2am_aX_1,  /* index 70 */
   ATL_drm2am_aX_2x1,  /* index 71 */
   ATL_drm2am_aX_1,  /* index 72 */
   ATL_drm2am_aX_2x1,  /* index 73 */
   ATL_drm2am_aX_1,  /* index 74 */
   ATL_drm2am_aX_2x1,  /* index 75 */
   ATL_drm2am_aX_1,  /* index 76 */
   ATL_drm2am_aX_2x1,  /* index 77 */
   ATL_drm2am_aX_1,  /* index 78 */
   ATL_drm2am_aX_2x1,  /* index 79 */
   ATL_drm2am_aX_1,  /* index 80 */
   ATL_drm2am_aX_2x1,  /* index 81 */
   ATL_drm2am_aX_1,  /* index 82 */
   ATL_drm2am_aX_2x1,  /* index 83 */
   ATL_drm2am_aX_1,  /* index 84 */
   ATL_drm2am_aX_2x1,  /* index 85 */
   ATL_drm2am_aX_1,  /* index 86 */
   ATL_drm2am_aX_2x1,  /* index 87 */
   ATL_drm2am_aX_1,  /* index 88 */
   ATL_drm2am_aX_2x1,  /* index 89 */
   ATL_drm2am_aX_1,  /* index 90 */
   ATL_drm2am_aX_2x1,  /* index 91 */
   ATL_drm2am_aX_1,  /* index 92 */
   ATL_drm2am_aX_2x1,  /* index 93 */
   ATL_drm2am_aX_1,  /* index 94 */
   ATL_drm2am_aX_2x1,  /* index 95 */
   ATL_drm2am_aX_1,  /* index 96 */
   ATL_drm2am_aX_2x1,  /* index 97 */
   ATL_drm2am_aX_1,  /* index 98 */
   ATL_drm2am_aX_2x1,  /* index 99 */
   ATL_drm2am_aX_1,  /* index 100 */
   ATL_drm2am_aX_2x1,  /* index 101 */
   ATL_drm2am_aX_1,  /* index 102 */
   ATL_drm2am_aX_2x1,  /* index 103 */
   ATL_drm2am_aX_1,  /* index 104 */
   ATL_drm2am_aX_2x1,  /* index 105 */
   ATL_drm2am_aX_1,  /* index 106 */
   ATL_drm2am_aX_2x1,  /* index 107 */
   ATL_drm2am_aX_1,  /* index 108 */
   ATL_drm2am_aX_2x1,  /* index 109 */
   ATL_drm2am_aX_1,  /* index 110 */
   ATL_drm2am_aX_2x1,  /* index 111 */
   ATL_drm2am_aX_1,  /* index 112 */
   ATL_drm2am_aX_2x1,  /* index 113 */
   ATL_drm2am_aX_1,  /* index 114 */
   ATL_drm2am_aX_2x1,  /* index 115 */
   ATL_drm2am_aX_1,  /* index 116 */
   ATL_drm2am_aX_2x1,  /* index 117 */
   ATL_drm2am_aX_1,  /* index 118 */
   ATL_drm2am_aX_2x1,  /* index 119 */
   ATL_drm2am_aX_1,  /* index 120 */
   ATL_drm2am_aX_2x1,  /* index 121 */
   ATL_drm2am_aX_1,  /* index 122 */
   ATL_drm2am_aX_2x1,  /* index 123 */
   ATL_drm2am_aX_1,  /* index 124 */
   ATL_drm2am_aX_2x1,  /* index 125 */
   ATL_drm2am_aX_1,  /* index 126 */
   ATL_drm2am_aX_2x1,  /* index 127 */
   ATL_drm2am_aX_1,  /* index 128 */
   ATL_drm2am_aX_2x1,  /* index 129 */
   ATL_drm2am_aX_1,  /* index 130 */
   ATL_drm2am_aX_2x1,  /* index 131 */
   ATL_drm2am_aX_1,  /* index 132 */
   ATL_drm2am_aX_2x1,  /* index 133 */
   ATL_drm2am_aX_1,  /* index 134 */
   ATL_drm2am_aX_2x1,  /* index 135 */
   ATL_drm2am_aX_1,  /* index 136 */
   ATL_drm2am_aX_2x1,  /* index 137 */
   ATL_drm2am_aX_1,  /* index 138 */
   ATL_drm2am_aX_2x1,  /* index 139 */
   ATL_drm2am_aX_1,  /* index 140 */
   ATL_drm2am_aX_2x1,  /* index 141 */
   ATL_drm2am_aX_1,  /* index 142 */
   ATL_drm2am_aX_2x1,  /* index 143 */
   ATL_drm2am_aX_1,  /* index 144 */
   ATL_drm2am_aX_2x1,  /* index 145 */
   ATL_drm2am_aX_1,  /* index 146 */
   ATL_drm2am_aX_2x1,  /* index 147 */
   ATL_drm2am_aX_1,  /* index 148 */
   ATL_drm2am_aX_2x1,  /* index 149 */
   ATL_drm2am_aX_1,  /* index 150 */
   ATL_drm2am_aX_2x1,  /* index 151 */
   ATL_drm2am_aX_1,  /* index 152 */
   ATL_drm2am_aX_2x1,  /* index 153 */
   ATL_drm2am_aX_1,  /* index 154 */
   ATL_drm2am_aX_2x1,  /* index 155 */
   ATL_drm2am_aX_1,  /* index 156 */
   ATL_drm2am_aX_2x1,  /* index 157 */
   ATL_drm2am_aX_1,  /* index 158 */
   ATL_drm2am_aX_2x1,  /* index 159 */
   ATL_drm2am_aX_1,  /* index 160 */
   ATL_drm2am_aX_2x1,  /* index 161 */
   ATL_drm2am_aX_1,  /* index 162 */
   ATL_drm2am_aX_2x1,  /* index 163 */
   ATL_drm2am_aX_1,  /* index 164 */
   ATL_drm2am_aX_2x1,  /* index 165 */
   ATL_drm2am_aX_1,  /* index 166 */
   ATL_drm2am_aX_2x1,  /* index 167 */
   ATL_drm2am_aX_1,  /* index 168 */
   ATL_drm2am_aX_2x1,  /* index 169 */
   ATL_drm2am_aX_1,  /* index 170 */
   ATL_drm2am_aX_2x1,  /* index 171 */
   ATL_drm2am_aX_1,  /* index 172 */
   ATL_drm2am_aX_2x1,  /* index 173 */
   ATL_drm2am_aX_1,  /* index 174 */
   ATL_drm2am_aX_2x1,  /* index 175 */
   ATL_drm2am_aX_1,  /* index 176 */
   ATL_drm2am_aX_2x1,  /* index 177 */
   ATL_drm2am_aX_1,  /* index 178 */
   ATL_drm2am_aX_2x1,  /* index 179 */
   ATL_drm2am_aX_1,  /* index 180 */
   ATL_drm2am_aX_2x1,  /* index 181 */
   ATL_drm2am_aX_1,  /* index 182 */
   ATL_drm2am_aX_2x1,  /* index 183 */
   ATL_drm2am_aX_1,  /* index 184 */
   ATL_drm2am_aX_2x1,  /* index 185 */
   ATL_drm2am_aX_1,  /* index 186 */
   ATL_drm2am_aX_2x1,  /* index 187 */
   ATL_drm2am_aX_1,  /* index 188 */
   ATL_drm2am_aX_2x1,  /* index 189 */
   ATL_drm2am_aX_1,  /* index 190 */
   ATL_drm2am_aX_2x1,  /* index 191 */
   ATL_drm2am_aX_1,  /* index 192 */
   ATL_drm2am_aX_2x1,  /* index 193 */
   ATL_drm2am_aX_1,  /* index 194 */
   ATL_drm2am_aX_2x1,  /* index 195 */
   ATL_drm2am_aX_1,  /* index 196 */
   ATL_drm2am_aX_2x1,  /* index 197 */
   ATL_drm2am_aX_1,  /* index 198 */
   ATL_drm2am_aX_2x1,  /* index 199 */
   ATL_drm2am_aX_1,  /* index 200 */
   ATL_drm2am_aX_2x1,  /* index 201 */
   ATL_drm2am_aX_1,  /* index 202 */
   ATL_drm2am_aX_2x1,  /* index 203 */
   ATL_drm2am_aX_1,  /* index 204 */
   ATL_drm2am_aX_2x1,  /* index 205 */
   ATL_drm2am_aX_1,  /* index 206 */
   ATL_drm2am_aX_2x1,  /* index 207 */
   ATL_drm2am_aX_1,  /* index 208 */
   ATL_drm2am_aX_2x1   /* index 209 */
};

static const ammkern_t ATL_AMM_KERN_RKK[210] =
{
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_4_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_18_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_22_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_26_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_32_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
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
   ATL_dAMRK_0_84_13_8x1x2_b0,
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
   ATL_dAMRK_0_124_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_126_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_128_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_130_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_132_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_134_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_136_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_138_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_140_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_142_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_144_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_146_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_148_13_12x1x2_b0,
   ATL_dAMRK_0_0_3_28x1x1_b0,
   ATL_dAMRK_0_150_13_12x1x2_b0,
   ATL_dAMRK_0_151_3_6x1x1_b0,
   ATL_dAMRK_0_152_13_12x1x2_b0,
   ATL_dAMRK_0_153_3_6x1x1_b0,
   ATL_dAMRK_0_154_13_12x1x2_b0,
   ATL_dAMRK_0_155_3_6x1x1_b0,
   ATL_dAMRK_0_156_13_12x1x2_b0,
   ATL_dAMRK_0_157_3_6x1x1_b0,
   ATL_dAMRK_0_158_13_12x1x2_b0,
   ATL_dAMRK_0_159_3_6x1x1_b0,
   ATL_dAMRK_0_160_13_12x1x2_b0,
   ATL_dAMRK_0_161_3_6x1x1_b0,
   ATL_dAMRK_0_162_13_12x1x2_b0,
   ATL_dAMRK_0_163_3_6x1x1_b0,
   ATL_dAMRK_0_164_13_12x1x2_b0,
   ATL_dAMRK_0_165_3_6x1x1_b0,
   ATL_dAMRK_0_166_13_12x1x2_b0,
   ATL_dAMRK_0_167_3_6x1x1_b0,
   ATL_dAMRK_0_168_13_12x1x2_b0,
   ATL_dAMRK_0_169_3_6x1x1_b0,
   ATL_dAMRK_0_170_13_12x1x2_b0,
   ATL_dAMRK_0_171_3_6x1x1_b0,
   ATL_dAMRK_0_172_13_12x1x2_b0,
   ATL_dAMRK_0_173_3_6x1x1_b0,
   ATL_dAMRK_0_174_13_12x1x2_b0,
   ATL_dAMRK_0_175_3_6x1x1_b0,
   ATL_dAMRK_0_176_13_12x1x2_b0,
   ATL_dAMRK_0_177_3_6x1x1_b0,
   ATL_dAMRK_0_178_13_12x1x2_b0,
   ATL_dAMRK_0_179_3_6x1x1_b0,
   ATL_dAMRK_0_180_13_12x1x2_b0,
   ATL_dAMRK_0_181_3_6x1x1_b0,
   ATL_dAMRK_0_182_13_12x1x2_b0,
   ATL_dAMRK_0_183_3_6x1x1_b0,
   ATL_dAMRK_0_184_13_12x1x2_b0,
   ATL_dAMRK_0_185_3_6x1x1_b0,
   ATL_dAMRK_0_186_13_12x1x2_b0,
   ATL_dAMRK_0_187_3_6x1x1_b0,
   ATL_dAMRK_0_188_13_12x1x2_b0,
   ATL_dAMRK_0_189_3_6x1x1_b0,
   ATL_dAMRK_0_190_13_12x1x2_b0,
   ATL_dAMRK_0_191_3_6x1x1_b0,
   ATL_dAMRK_0_192_13_12x1x2_b0,
   ATL_dAMRK_0_193_3_6x1x1_b0,
   ATL_dAMRK_0_194_13_12x1x2_b0,
   ATL_dAMRK_0_195_3_6x1x1_b0,
   ATL_dAMRK_0_196_13_12x1x2_b0,
   ATL_dAMRK_0_197_3_6x1x1_b0,
   ATL_dAMRK_0_198_13_12x1x2_b0,
   ATL_dAMRK_0_199_3_6x1x1_b0,
   ATL_dAMRK_0_200_13_12x1x2_b0,
   ATL_dAMRK_0_201_3_6x1x1_b0,
   ATL_dAMRK_0_202_13_12x1x2_b0,
   ATL_dAMRK_0_203_3_6x1x1_b0,
   ATL_dAMRK_0_204_13_12x1x2_b0,
   ATL_dAMRK_0_205_3_6x1x1_b0,
   ATL_dAMRK_0_206_13_12x1x2_b0,
   ATL_dAMRK_0_207_3_6x1x1_b0,
   ATL_dAMRK_0_208_13_12x1x2_b0,
   ATL_dAMRK_0_209_3_6x1x1_b0,
   ATL_dAMRK_0_210_13_12x1x2_b0,
   ATL_dAMRK_0_211_3_6x1x1_b0,
   ATL_dAMRK_0_212_13_12x1x2_b0
};

static const ammkern_t ATL_AMM_KERN_RKK_b1[210] =
{
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_4_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_18_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_22_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_26_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_32_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
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
   ATL_dAMRK_0_84_13_8x1x2_b1,
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
   ATL_dAMRK_0_124_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_126_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_128_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_130_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_132_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_134_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_136_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_138_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_140_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_142_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_144_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_146_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_148_13_12x1x2_b1,
   ATL_dAMRK_0_0_3_28x1x1_b1,
   ATL_dAMRK_0_150_13_12x1x2_b1,
   ATL_dAMRK_0_151_3_6x1x1_b1,
   ATL_dAMRK_0_152_13_12x1x2_b1,
   ATL_dAMRK_0_153_3_6x1x1_b1,
   ATL_dAMRK_0_154_13_12x1x2_b1,
   ATL_dAMRK_0_155_3_6x1x1_b1,
   ATL_dAMRK_0_156_13_12x1x2_b1,
   ATL_dAMRK_0_157_3_6x1x1_b1,
   ATL_dAMRK_0_158_13_12x1x2_b1,
   ATL_dAMRK_0_159_3_6x1x1_b1,
   ATL_dAMRK_0_160_13_12x1x2_b1,
   ATL_dAMRK_0_161_3_6x1x1_b1,
   ATL_dAMRK_0_162_13_12x1x2_b1,
   ATL_dAMRK_0_163_3_6x1x1_b1,
   ATL_dAMRK_0_164_13_12x1x2_b1,
   ATL_dAMRK_0_165_3_6x1x1_b1,
   ATL_dAMRK_0_166_13_12x1x2_b1,
   ATL_dAMRK_0_167_3_6x1x1_b1,
   ATL_dAMRK_0_168_13_12x1x2_b1,
   ATL_dAMRK_0_169_3_6x1x1_b1,
   ATL_dAMRK_0_170_13_12x1x2_b1,
   ATL_dAMRK_0_171_3_6x1x1_b1,
   ATL_dAMRK_0_172_13_12x1x2_b1,
   ATL_dAMRK_0_173_3_6x1x1_b1,
   ATL_dAMRK_0_174_13_12x1x2_b1,
   ATL_dAMRK_0_175_3_6x1x1_b1,
   ATL_dAMRK_0_176_13_12x1x2_b1,
   ATL_dAMRK_0_177_3_6x1x1_b1,
   ATL_dAMRK_0_178_13_12x1x2_b1,
   ATL_dAMRK_0_179_3_6x1x1_b1,
   ATL_dAMRK_0_180_13_12x1x2_b1,
   ATL_dAMRK_0_181_3_6x1x1_b1,
   ATL_dAMRK_0_182_13_12x1x2_b1,
   ATL_dAMRK_0_183_3_6x1x1_b1,
   ATL_dAMRK_0_184_13_12x1x2_b1,
   ATL_dAMRK_0_185_3_6x1x1_b1,
   ATL_dAMRK_0_186_13_12x1x2_b1,
   ATL_dAMRK_0_187_3_6x1x1_b1,
   ATL_dAMRK_0_188_13_12x1x2_b1,
   ATL_dAMRK_0_189_3_6x1x1_b1,
   ATL_dAMRK_0_190_13_12x1x2_b1,
   ATL_dAMRK_0_191_3_6x1x1_b1,
   ATL_dAMRK_0_192_13_12x1x2_b1,
   ATL_dAMRK_0_193_3_6x1x1_b1,
   ATL_dAMRK_0_194_13_12x1x2_b1,
   ATL_dAMRK_0_195_3_6x1x1_b1,
   ATL_dAMRK_0_196_13_12x1x2_b1,
   ATL_dAMRK_0_197_3_6x1x1_b1,
   ATL_dAMRK_0_198_13_12x1x2_b1,
   ATL_dAMRK_0_199_3_6x1x1_b1,
   ATL_dAMRK_0_200_13_12x1x2_b1,
   ATL_dAMRK_0_201_3_6x1x1_b1,
   ATL_dAMRK_0_202_13_12x1x2_b1,
   ATL_dAMRK_0_203_3_6x1x1_b1,
   ATL_dAMRK_0_204_13_12x1x2_b1,
   ATL_dAMRK_0_205_3_6x1x1_b1,
   ATL_dAMRK_0_206_13_12x1x2_b1,
   ATL_dAMRK_0_207_3_6x1x1_b1,
   ATL_dAMRK_0_208_13_12x1x2_b1,
   ATL_dAMRK_0_209_3_6x1x1_b1,
   ATL_dAMRK_0_210_13_12x1x2_b1,
   ATL_dAMRK_0_211_3_6x1x1_b1,
   ATL_dAMRK_0_212_13_12x1x2_b1
};

static const ammkern_t ATL_AMM_KERN_RKK_bn[210] =
{
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_4_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_18_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_22_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_26_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_32_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
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
   ATL_dAMRK_0_84_13_8x1x2_bn,
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
   ATL_dAMRK_0_124_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_126_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_128_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_130_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_132_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_134_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_136_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_138_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_140_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_142_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_144_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_146_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_148_13_12x1x2_bn,
   ATL_dAMRK_0_0_3_28x1x1_bn,
   ATL_dAMRK_0_150_13_12x1x2_bn,
   ATL_dAMRK_0_151_3_6x1x1_bn,
   ATL_dAMRK_0_152_13_12x1x2_bn,
   ATL_dAMRK_0_153_3_6x1x1_bn,
   ATL_dAMRK_0_154_13_12x1x2_bn,
   ATL_dAMRK_0_155_3_6x1x1_bn,
   ATL_dAMRK_0_156_13_12x1x2_bn,
   ATL_dAMRK_0_157_3_6x1x1_bn,
   ATL_dAMRK_0_158_13_12x1x2_bn,
   ATL_dAMRK_0_159_3_6x1x1_bn,
   ATL_dAMRK_0_160_13_12x1x2_bn,
   ATL_dAMRK_0_161_3_6x1x1_bn,
   ATL_dAMRK_0_162_13_12x1x2_bn,
   ATL_dAMRK_0_163_3_6x1x1_bn,
   ATL_dAMRK_0_164_13_12x1x2_bn,
   ATL_dAMRK_0_165_3_6x1x1_bn,
   ATL_dAMRK_0_166_13_12x1x2_bn,
   ATL_dAMRK_0_167_3_6x1x1_bn,
   ATL_dAMRK_0_168_13_12x1x2_bn,
   ATL_dAMRK_0_169_3_6x1x1_bn,
   ATL_dAMRK_0_170_13_12x1x2_bn,
   ATL_dAMRK_0_171_3_6x1x1_bn,
   ATL_dAMRK_0_172_13_12x1x2_bn,
   ATL_dAMRK_0_173_3_6x1x1_bn,
   ATL_dAMRK_0_174_13_12x1x2_bn,
   ATL_dAMRK_0_175_3_6x1x1_bn,
   ATL_dAMRK_0_176_13_12x1x2_bn,
   ATL_dAMRK_0_177_3_6x1x1_bn,
   ATL_dAMRK_0_178_13_12x1x2_bn,
   ATL_dAMRK_0_179_3_6x1x1_bn,
   ATL_dAMRK_0_180_13_12x1x2_bn,
   ATL_dAMRK_0_181_3_6x1x1_bn,
   ATL_dAMRK_0_182_13_12x1x2_bn,
   ATL_dAMRK_0_183_3_6x1x1_bn,
   ATL_dAMRK_0_184_13_12x1x2_bn,
   ATL_dAMRK_0_185_3_6x1x1_bn,
   ATL_dAMRK_0_186_13_12x1x2_bn,
   ATL_dAMRK_0_187_3_6x1x1_bn,
   ATL_dAMRK_0_188_13_12x1x2_bn,
   ATL_dAMRK_0_189_3_6x1x1_bn,
   ATL_dAMRK_0_190_13_12x1x2_bn,
   ATL_dAMRK_0_191_3_6x1x1_bn,
   ATL_dAMRK_0_192_13_12x1x2_bn,
   ATL_dAMRK_0_193_3_6x1x1_bn,
   ATL_dAMRK_0_194_13_12x1x2_bn,
   ATL_dAMRK_0_195_3_6x1x1_bn,
   ATL_dAMRK_0_196_13_12x1x2_bn,
   ATL_dAMRK_0_197_3_6x1x1_bn,
   ATL_dAMRK_0_198_13_12x1x2_bn,
   ATL_dAMRK_0_199_3_6x1x1_bn,
   ATL_dAMRK_0_200_13_12x1x2_bn,
   ATL_dAMRK_0_201_3_6x1x1_bn,
   ATL_dAMRK_0_202_13_12x1x2_bn,
   ATL_dAMRK_0_203_3_6x1x1_bn,
   ATL_dAMRK_0_204_13_12x1x2_bn,
   ATL_dAMRK_0_205_3_6x1x1_bn,
   ATL_dAMRK_0_206_13_12x1x2_bn,
   ATL_dAMRK_0_207_3_6x1x1_bn,
   ATL_dAMRK_0_208_13_12x1x2_bn,
   ATL_dAMRK_0_209_3_6x1x1_bn,
   ATL_dAMRK_0_210_13_12x1x2_bn,
   ATL_dAMRK_0_211_3_6x1x1_bn,
   ATL_dAMRK_0_212_13_12x1x2_bn
};


#endif  /* end include file guard */
