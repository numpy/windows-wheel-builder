#ifndef ATLAS_CAMM_KERN_H
   #define ATLAS_CAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 78
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 78
#endif

#define ATL_MAXM_RKK 80
#define ATL_MAXN_RKK 80
#define ATL_MAXK_RKK 80

/*
 * cblk2mat put function prototypes
 */
void ATL_cablk2cmat_4x2_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_4x2_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_32x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
void ATL_cablk2cmat_12x3_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,const TYPE*,const SCALAR,TYPE *,ATL_CSZT);
/*
 * Column-major to access-major copy function prototypes
 */
void ATL_ccm2am_a1_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_a1_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_a1_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
/*
 * rank-K AMMM kernel prototypes
 */
void ATL_sAMRK_0_3_3_12x3x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_3_3_12x3x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_3_3_12x3x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_4_3_12x3x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_4_3_12x3x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_4_3_12x3x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_0_3_32x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_0_3_32x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_0_3_32x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_36_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_36_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_36_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_40_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_40_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_40_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_44_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_44_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_44_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_48_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_48_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_48_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_52_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_52_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_52_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_56_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_56_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_56_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_60_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_60_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_60_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_64_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_64_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_64_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_68_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_68_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_68_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_72_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_72_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_72_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_76_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_76_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_76_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_80_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_80_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMRK_0_80_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);

static const ablk2cmat_t ATL_RKK_BLK2C_a1_b1[78] =
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


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bn[78] =
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


static const ablk2cmat_t ATL_RKK_BLK2C_a1_b0[78] =
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


static const ablk2cmat_t ATL_RKK_BLK2C_a1_bX[78] =
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


static const cm2am_t ATL_RKK_A2BLK_a1[78] =
{
   ATL_ccm2am_a1_12,  /* index 0 */
   ATL_ccm2am_a1_12,  /* index 1 */
   ATL_ccm2am_a1_32,  /* index 2 */
   ATL_ccm2am_a1_32,  /* index 3 */
   ATL_ccm2am_a1_32,  /* index 4 */
   ATL_ccm2am_a1_32,  /* index 5 */
   ATL_ccm2am_a1_32,  /* index 6 */
   ATL_ccm2am_a1_32,  /* index 7 */
   ATL_ccm2am_a1_32,  /* index 8 */
   ATL_ccm2am_a1_32,  /* index 9 */
   ATL_ccm2am_a1_32,  /* index 10 */
   ATL_ccm2am_a1_32,  /* index 11 */
   ATL_ccm2am_a1_32,  /* index 12 */
   ATL_ccm2am_a1_32,  /* index 13 */
   ATL_ccm2am_a1_32,  /* index 14 */
   ATL_ccm2am_a1_32,  /* index 15 */
   ATL_ccm2am_a1_32,  /* index 16 */
   ATL_ccm2am_a1_32,  /* index 17 */
   ATL_ccm2am_a1_32,  /* index 18 */
   ATL_ccm2am_a1_32,  /* index 19 */
   ATL_ccm2am_a1_32,  /* index 20 */
   ATL_ccm2am_a1_32,  /* index 21 */
   ATL_ccm2am_a1_32,  /* index 22 */
   ATL_ccm2am_a1_32,  /* index 23 */
   ATL_ccm2am_a1_32,  /* index 24 */
   ATL_ccm2am_a1_32,  /* index 25 */
   ATL_ccm2am_a1_32,  /* index 26 */
   ATL_ccm2am_a1_32,  /* index 27 */
   ATL_ccm2am_a1_32,  /* index 28 */
   ATL_ccm2am_a1_32,  /* index 29 */
   ATL_ccm2am_a1_32,  /* index 30 */
   ATL_ccm2am_a1_32,  /* index 31 */
   ATL_ccm2am_a1_32,  /* index 32 */
   ATL_ccm2am_a1_4x4,  /* index 33 */
   ATL_ccm2am_a1_32,  /* index 34 */
   ATL_ccm2am_a1_32,  /* index 35 */
   ATL_ccm2am_a1_32,  /* index 36 */
   ATL_ccm2am_a1_4x4,  /* index 37 */
   ATL_ccm2am_a1_32,  /* index 38 */
   ATL_ccm2am_a1_32,  /* index 39 */
   ATL_ccm2am_a1_32,  /* index 40 */
   ATL_ccm2am_a1_4x4,  /* index 41 */
   ATL_ccm2am_a1_32,  /* index 42 */
   ATL_ccm2am_a1_32,  /* index 43 */
   ATL_ccm2am_a1_32,  /* index 44 */
   ATL_ccm2am_a1_4x4,  /* index 45 */
   ATL_ccm2am_a1_32,  /* index 46 */
   ATL_ccm2am_a1_32,  /* index 47 */
   ATL_ccm2am_a1_32,  /* index 48 */
   ATL_ccm2am_a1_4x4,  /* index 49 */
   ATL_ccm2am_a1_32,  /* index 50 */
   ATL_ccm2am_a1_32,  /* index 51 */
   ATL_ccm2am_a1_32,  /* index 52 */
   ATL_ccm2am_a1_4x4,  /* index 53 */
   ATL_ccm2am_a1_32,  /* index 54 */
   ATL_ccm2am_a1_32,  /* index 55 */
   ATL_ccm2am_a1_32,  /* index 56 */
   ATL_ccm2am_a1_4x4,  /* index 57 */
   ATL_ccm2am_a1_32,  /* index 58 */
   ATL_ccm2am_a1_32,  /* index 59 */
   ATL_ccm2am_a1_32,  /* index 60 */
   ATL_ccm2am_a1_4x4,  /* index 61 */
   ATL_ccm2am_a1_32,  /* index 62 */
   ATL_ccm2am_a1_32,  /* index 63 */
   ATL_ccm2am_a1_32,  /* index 64 */
   ATL_ccm2am_a1_4x4,  /* index 65 */
   ATL_ccm2am_a1_32,  /* index 66 */
   ATL_ccm2am_a1_32,  /* index 67 */
   ATL_ccm2am_a1_32,  /* index 68 */
   ATL_ccm2am_a1_4x4,  /* index 69 */
   ATL_ccm2am_a1_32,  /* index 70 */
   ATL_ccm2am_a1_32,  /* index 71 */
   ATL_ccm2am_a1_32,  /* index 72 */
   ATL_ccm2am_a1_4x4,  /* index 73 */
   ATL_ccm2am_a1_32,  /* index 74 */
   ATL_ccm2am_a1_32,  /* index 75 */
   ATL_ccm2am_a1_32,  /* index 76 */
   ATL_ccm2am_a1_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_AT2BLK_a1[78] =
{
   ATL_crm2am_a1_12,  /* index 0 */
   ATL_crm2am_a1_12,  /* index 1 */
   ATL_crm2am_a1_32,  /* index 2 */
   ATL_crm2am_a1_32,  /* index 3 */
   ATL_crm2am_a1_32,  /* index 4 */
   ATL_crm2am_a1_32,  /* index 5 */
   ATL_crm2am_a1_32,  /* index 6 */
   ATL_crm2am_a1_32,  /* index 7 */
   ATL_crm2am_a1_32,  /* index 8 */
   ATL_crm2am_a1_32,  /* index 9 */
   ATL_crm2am_a1_32,  /* index 10 */
   ATL_crm2am_a1_32,  /* index 11 */
   ATL_crm2am_a1_32,  /* index 12 */
   ATL_crm2am_a1_32,  /* index 13 */
   ATL_crm2am_a1_32,  /* index 14 */
   ATL_crm2am_a1_32,  /* index 15 */
   ATL_crm2am_a1_32,  /* index 16 */
   ATL_crm2am_a1_32,  /* index 17 */
   ATL_crm2am_a1_32,  /* index 18 */
   ATL_crm2am_a1_32,  /* index 19 */
   ATL_crm2am_a1_32,  /* index 20 */
   ATL_crm2am_a1_32,  /* index 21 */
   ATL_crm2am_a1_32,  /* index 22 */
   ATL_crm2am_a1_32,  /* index 23 */
   ATL_crm2am_a1_32,  /* index 24 */
   ATL_crm2am_a1_32,  /* index 25 */
   ATL_crm2am_a1_32,  /* index 26 */
   ATL_crm2am_a1_32,  /* index 27 */
   ATL_crm2am_a1_32,  /* index 28 */
   ATL_crm2am_a1_32,  /* index 29 */
   ATL_crm2am_a1_32,  /* index 30 */
   ATL_crm2am_a1_32,  /* index 31 */
   ATL_crm2am_a1_32,  /* index 32 */
   ATL_crm2am_a1_4x4,  /* index 33 */
   ATL_crm2am_a1_32,  /* index 34 */
   ATL_crm2am_a1_32,  /* index 35 */
   ATL_crm2am_a1_32,  /* index 36 */
   ATL_crm2am_a1_4x4,  /* index 37 */
   ATL_crm2am_a1_32,  /* index 38 */
   ATL_crm2am_a1_32,  /* index 39 */
   ATL_crm2am_a1_32,  /* index 40 */
   ATL_crm2am_a1_4x4,  /* index 41 */
   ATL_crm2am_a1_32,  /* index 42 */
   ATL_crm2am_a1_32,  /* index 43 */
   ATL_crm2am_a1_32,  /* index 44 */
   ATL_crm2am_a1_4x4,  /* index 45 */
   ATL_crm2am_a1_32,  /* index 46 */
   ATL_crm2am_a1_32,  /* index 47 */
   ATL_crm2am_a1_32,  /* index 48 */
   ATL_crm2am_a1_4x4,  /* index 49 */
   ATL_crm2am_a1_32,  /* index 50 */
   ATL_crm2am_a1_32,  /* index 51 */
   ATL_crm2am_a1_32,  /* index 52 */
   ATL_crm2am_a1_4x4,  /* index 53 */
   ATL_crm2am_a1_32,  /* index 54 */
   ATL_crm2am_a1_32,  /* index 55 */
   ATL_crm2am_a1_32,  /* index 56 */
   ATL_crm2am_a1_4x4,  /* index 57 */
   ATL_crm2am_a1_32,  /* index 58 */
   ATL_crm2am_a1_32,  /* index 59 */
   ATL_crm2am_a1_32,  /* index 60 */
   ATL_crm2am_a1_4x4,  /* index 61 */
   ATL_crm2am_a1_32,  /* index 62 */
   ATL_crm2am_a1_32,  /* index 63 */
   ATL_crm2am_a1_32,  /* index 64 */
   ATL_crm2am_a1_4x4,  /* index 65 */
   ATL_crm2am_a1_32,  /* index 66 */
   ATL_crm2am_a1_32,  /* index 67 */
   ATL_crm2am_a1_32,  /* index 68 */
   ATL_crm2am_a1_4x4,  /* index 69 */
   ATL_crm2am_a1_32,  /* index 70 */
   ATL_crm2am_a1_32,  /* index 71 */
   ATL_crm2am_a1_32,  /* index 72 */
   ATL_crm2am_a1_4x4,  /* index 73 */
   ATL_crm2am_a1_32,  /* index 74 */
   ATL_crm2am_a1_32,  /* index 75 */
   ATL_crm2am_a1_32,  /* index 76 */
   ATL_crm2am_a1_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_B2BLK_a1[78] =
{
   ATL_ccm2am_a1_3,  /* index 0 */
   ATL_ccm2am_a1_3,  /* index 1 */
   ATL_ccm2am_a1_1,  /* index 2 */
   ATL_ccm2am_a1_1,  /* index 3 */
   ATL_ccm2am_a1_1,  /* index 4 */
   ATL_ccm2am_a1_1,  /* index 5 */
   ATL_ccm2am_a1_1,  /* index 6 */
   ATL_ccm2am_a1_1,  /* index 7 */
   ATL_ccm2am_a1_1,  /* index 8 */
   ATL_ccm2am_a1_1,  /* index 9 */
   ATL_ccm2am_a1_1,  /* index 10 */
   ATL_ccm2am_a1_1,  /* index 11 */
   ATL_ccm2am_a1_1,  /* index 12 */
   ATL_ccm2am_a1_1,  /* index 13 */
   ATL_ccm2am_a1_1,  /* index 14 */
   ATL_ccm2am_a1_1,  /* index 15 */
   ATL_ccm2am_a1_1,  /* index 16 */
   ATL_ccm2am_a1_1,  /* index 17 */
   ATL_ccm2am_a1_1,  /* index 18 */
   ATL_ccm2am_a1_1,  /* index 19 */
   ATL_ccm2am_a1_1,  /* index 20 */
   ATL_ccm2am_a1_1,  /* index 21 */
   ATL_ccm2am_a1_1,  /* index 22 */
   ATL_ccm2am_a1_1,  /* index 23 */
   ATL_ccm2am_a1_1,  /* index 24 */
   ATL_ccm2am_a1_1,  /* index 25 */
   ATL_ccm2am_a1_1,  /* index 26 */
   ATL_ccm2am_a1_1,  /* index 27 */
   ATL_ccm2am_a1_1,  /* index 28 */
   ATL_ccm2am_a1_1,  /* index 29 */
   ATL_ccm2am_a1_1,  /* index 30 */
   ATL_ccm2am_a1_1,  /* index 31 */
   ATL_ccm2am_a1_1,  /* index 32 */
   ATL_ccm2am_a1_4x2,  /* index 33 */
   ATL_ccm2am_a1_1,  /* index 34 */
   ATL_ccm2am_a1_1,  /* index 35 */
   ATL_ccm2am_a1_1,  /* index 36 */
   ATL_ccm2am_a1_4x2,  /* index 37 */
   ATL_ccm2am_a1_1,  /* index 38 */
   ATL_ccm2am_a1_1,  /* index 39 */
   ATL_ccm2am_a1_1,  /* index 40 */
   ATL_ccm2am_a1_4x2,  /* index 41 */
   ATL_ccm2am_a1_1,  /* index 42 */
   ATL_ccm2am_a1_1,  /* index 43 */
   ATL_ccm2am_a1_1,  /* index 44 */
   ATL_ccm2am_a1_4x2,  /* index 45 */
   ATL_ccm2am_a1_1,  /* index 46 */
   ATL_ccm2am_a1_1,  /* index 47 */
   ATL_ccm2am_a1_1,  /* index 48 */
   ATL_ccm2am_a1_4x2,  /* index 49 */
   ATL_ccm2am_a1_1,  /* index 50 */
   ATL_ccm2am_a1_1,  /* index 51 */
   ATL_ccm2am_a1_1,  /* index 52 */
   ATL_ccm2am_a1_4x2,  /* index 53 */
   ATL_ccm2am_a1_1,  /* index 54 */
   ATL_ccm2am_a1_1,  /* index 55 */
   ATL_ccm2am_a1_1,  /* index 56 */
   ATL_ccm2am_a1_4x2,  /* index 57 */
   ATL_ccm2am_a1_1,  /* index 58 */
   ATL_ccm2am_a1_1,  /* index 59 */
   ATL_ccm2am_a1_1,  /* index 60 */
   ATL_ccm2am_a1_4x2,  /* index 61 */
   ATL_ccm2am_a1_1,  /* index 62 */
   ATL_ccm2am_a1_1,  /* index 63 */
   ATL_ccm2am_a1_1,  /* index 64 */
   ATL_ccm2am_a1_4x2,  /* index 65 */
   ATL_ccm2am_a1_1,  /* index 66 */
   ATL_ccm2am_a1_1,  /* index 67 */
   ATL_ccm2am_a1_1,  /* index 68 */
   ATL_ccm2am_a1_4x2,  /* index 69 */
   ATL_ccm2am_a1_1,  /* index 70 */
   ATL_ccm2am_a1_1,  /* index 71 */
   ATL_ccm2am_a1_1,  /* index 72 */
   ATL_ccm2am_a1_4x2,  /* index 73 */
   ATL_ccm2am_a1_1,  /* index 74 */
   ATL_ccm2am_a1_1,  /* index 75 */
   ATL_ccm2am_a1_1,  /* index 76 */
   ATL_ccm2am_a1_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_BT2BLK_a1[78] =
{
   ATL_crm2am_a1_3,  /* index 0 */
   ATL_crm2am_a1_3,  /* index 1 */
   ATL_crm2am_a1_1,  /* index 2 */
   ATL_crm2am_a1_1,  /* index 3 */
   ATL_crm2am_a1_1,  /* index 4 */
   ATL_crm2am_a1_1,  /* index 5 */
   ATL_crm2am_a1_1,  /* index 6 */
   ATL_crm2am_a1_1,  /* index 7 */
   ATL_crm2am_a1_1,  /* index 8 */
   ATL_crm2am_a1_1,  /* index 9 */
   ATL_crm2am_a1_1,  /* index 10 */
   ATL_crm2am_a1_1,  /* index 11 */
   ATL_crm2am_a1_1,  /* index 12 */
   ATL_crm2am_a1_1,  /* index 13 */
   ATL_crm2am_a1_1,  /* index 14 */
   ATL_crm2am_a1_1,  /* index 15 */
   ATL_crm2am_a1_1,  /* index 16 */
   ATL_crm2am_a1_1,  /* index 17 */
   ATL_crm2am_a1_1,  /* index 18 */
   ATL_crm2am_a1_1,  /* index 19 */
   ATL_crm2am_a1_1,  /* index 20 */
   ATL_crm2am_a1_1,  /* index 21 */
   ATL_crm2am_a1_1,  /* index 22 */
   ATL_crm2am_a1_1,  /* index 23 */
   ATL_crm2am_a1_1,  /* index 24 */
   ATL_crm2am_a1_1,  /* index 25 */
   ATL_crm2am_a1_1,  /* index 26 */
   ATL_crm2am_a1_1,  /* index 27 */
   ATL_crm2am_a1_1,  /* index 28 */
   ATL_crm2am_a1_1,  /* index 29 */
   ATL_crm2am_a1_1,  /* index 30 */
   ATL_crm2am_a1_1,  /* index 31 */
   ATL_crm2am_a1_1,  /* index 32 */
   ATL_crm2am_a1_4x2,  /* index 33 */
   ATL_crm2am_a1_1,  /* index 34 */
   ATL_crm2am_a1_1,  /* index 35 */
   ATL_crm2am_a1_1,  /* index 36 */
   ATL_crm2am_a1_4x2,  /* index 37 */
   ATL_crm2am_a1_1,  /* index 38 */
   ATL_crm2am_a1_1,  /* index 39 */
   ATL_crm2am_a1_1,  /* index 40 */
   ATL_crm2am_a1_4x2,  /* index 41 */
   ATL_crm2am_a1_1,  /* index 42 */
   ATL_crm2am_a1_1,  /* index 43 */
   ATL_crm2am_a1_1,  /* index 44 */
   ATL_crm2am_a1_4x2,  /* index 45 */
   ATL_crm2am_a1_1,  /* index 46 */
   ATL_crm2am_a1_1,  /* index 47 */
   ATL_crm2am_a1_1,  /* index 48 */
   ATL_crm2am_a1_4x2,  /* index 49 */
   ATL_crm2am_a1_1,  /* index 50 */
   ATL_crm2am_a1_1,  /* index 51 */
   ATL_crm2am_a1_1,  /* index 52 */
   ATL_crm2am_a1_4x2,  /* index 53 */
   ATL_crm2am_a1_1,  /* index 54 */
   ATL_crm2am_a1_1,  /* index 55 */
   ATL_crm2am_a1_1,  /* index 56 */
   ATL_crm2am_a1_4x2,  /* index 57 */
   ATL_crm2am_a1_1,  /* index 58 */
   ATL_crm2am_a1_1,  /* index 59 */
   ATL_crm2am_a1_1,  /* index 60 */
   ATL_crm2am_a1_4x2,  /* index 61 */
   ATL_crm2am_a1_1,  /* index 62 */
   ATL_crm2am_a1_1,  /* index 63 */
   ATL_crm2am_a1_1,  /* index 64 */
   ATL_crm2am_a1_4x2,  /* index 65 */
   ATL_crm2am_a1_1,  /* index 66 */
   ATL_crm2am_a1_1,  /* index 67 */
   ATL_crm2am_a1_1,  /* index 68 */
   ATL_crm2am_a1_4x2,  /* index 69 */
   ATL_crm2am_a1_1,  /* index 70 */
   ATL_crm2am_a1_1,  /* index 71 */
   ATL_crm2am_a1_1,  /* index 72 */
   ATL_crm2am_a1_4x2,  /* index 73 */
   ATL_crm2am_a1_1,  /* index 74 */
   ATL_crm2am_a1_1,  /* index 75 */
   ATL_crm2am_a1_1,  /* index 76 */
   ATL_crm2am_a1_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_AC2BLK_a1[78] =
{
   ATL_ccm2am_a1_12C,  /* index 0 */
   ATL_ccm2am_a1_12C,  /* index 1 */
   ATL_ccm2am_a1_32C,  /* index 2 */
   ATL_ccm2am_a1_32C,  /* index 3 */
   ATL_ccm2am_a1_32C,  /* index 4 */
   ATL_ccm2am_a1_32C,  /* index 5 */
   ATL_ccm2am_a1_32C,  /* index 6 */
   ATL_ccm2am_a1_32C,  /* index 7 */
   ATL_ccm2am_a1_32C,  /* index 8 */
   ATL_ccm2am_a1_32C,  /* index 9 */
   ATL_ccm2am_a1_32C,  /* index 10 */
   ATL_ccm2am_a1_32C,  /* index 11 */
   ATL_ccm2am_a1_32C,  /* index 12 */
   ATL_ccm2am_a1_32C,  /* index 13 */
   ATL_ccm2am_a1_32C,  /* index 14 */
   ATL_ccm2am_a1_32C,  /* index 15 */
   ATL_ccm2am_a1_32C,  /* index 16 */
   ATL_ccm2am_a1_32C,  /* index 17 */
   ATL_ccm2am_a1_32C,  /* index 18 */
   ATL_ccm2am_a1_32C,  /* index 19 */
   ATL_ccm2am_a1_32C,  /* index 20 */
   ATL_ccm2am_a1_32C,  /* index 21 */
   ATL_ccm2am_a1_32C,  /* index 22 */
   ATL_ccm2am_a1_32C,  /* index 23 */
   ATL_ccm2am_a1_32C,  /* index 24 */
   ATL_ccm2am_a1_32C,  /* index 25 */
   ATL_ccm2am_a1_32C,  /* index 26 */
   ATL_ccm2am_a1_32C,  /* index 27 */
   ATL_ccm2am_a1_32C,  /* index 28 */
   ATL_ccm2am_a1_32C,  /* index 29 */
   ATL_ccm2am_a1_32C,  /* index 30 */
   ATL_ccm2am_a1_32C,  /* index 31 */
   ATL_ccm2am_a1_32C,  /* index 32 */
   ATL_ccm2am_a1_4x4C,  /* index 33 */
   ATL_ccm2am_a1_32C,  /* index 34 */
   ATL_ccm2am_a1_32C,  /* index 35 */
   ATL_ccm2am_a1_32C,  /* index 36 */
   ATL_ccm2am_a1_4x4C,  /* index 37 */
   ATL_ccm2am_a1_32C,  /* index 38 */
   ATL_ccm2am_a1_32C,  /* index 39 */
   ATL_ccm2am_a1_32C,  /* index 40 */
   ATL_ccm2am_a1_4x4C,  /* index 41 */
   ATL_ccm2am_a1_32C,  /* index 42 */
   ATL_ccm2am_a1_32C,  /* index 43 */
   ATL_ccm2am_a1_32C,  /* index 44 */
   ATL_ccm2am_a1_4x4C,  /* index 45 */
   ATL_ccm2am_a1_32C,  /* index 46 */
   ATL_ccm2am_a1_32C,  /* index 47 */
   ATL_ccm2am_a1_32C,  /* index 48 */
   ATL_ccm2am_a1_4x4C,  /* index 49 */
   ATL_ccm2am_a1_32C,  /* index 50 */
   ATL_ccm2am_a1_32C,  /* index 51 */
   ATL_ccm2am_a1_32C,  /* index 52 */
   ATL_ccm2am_a1_4x4C,  /* index 53 */
   ATL_ccm2am_a1_32C,  /* index 54 */
   ATL_ccm2am_a1_32C,  /* index 55 */
   ATL_ccm2am_a1_32C,  /* index 56 */
   ATL_ccm2am_a1_4x4C,  /* index 57 */
   ATL_ccm2am_a1_32C,  /* index 58 */
   ATL_ccm2am_a1_32C,  /* index 59 */
   ATL_ccm2am_a1_32C,  /* index 60 */
   ATL_ccm2am_a1_4x4C,  /* index 61 */
   ATL_ccm2am_a1_32C,  /* index 62 */
   ATL_ccm2am_a1_32C,  /* index 63 */
   ATL_ccm2am_a1_32C,  /* index 64 */
   ATL_ccm2am_a1_4x4C,  /* index 65 */
   ATL_ccm2am_a1_32C,  /* index 66 */
   ATL_ccm2am_a1_32C,  /* index 67 */
   ATL_ccm2am_a1_32C,  /* index 68 */
   ATL_ccm2am_a1_4x4C,  /* index 69 */
   ATL_ccm2am_a1_32C,  /* index 70 */
   ATL_ccm2am_a1_32C,  /* index 71 */
   ATL_ccm2am_a1_32C,  /* index 72 */
   ATL_ccm2am_a1_4x4C,  /* index 73 */
   ATL_ccm2am_a1_32C,  /* index 74 */
   ATL_ccm2am_a1_32C,  /* index 75 */
   ATL_ccm2am_a1_32C,  /* index 76 */
   ATL_ccm2am_a1_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_AH2BLK_a1[78] =
{
   ATL_crm2am_a1_12C,  /* index 0 */
   ATL_crm2am_a1_12C,  /* index 1 */
   ATL_crm2am_a1_32C,  /* index 2 */
   ATL_crm2am_a1_32C,  /* index 3 */
   ATL_crm2am_a1_32C,  /* index 4 */
   ATL_crm2am_a1_32C,  /* index 5 */
   ATL_crm2am_a1_32C,  /* index 6 */
   ATL_crm2am_a1_32C,  /* index 7 */
   ATL_crm2am_a1_32C,  /* index 8 */
   ATL_crm2am_a1_32C,  /* index 9 */
   ATL_crm2am_a1_32C,  /* index 10 */
   ATL_crm2am_a1_32C,  /* index 11 */
   ATL_crm2am_a1_32C,  /* index 12 */
   ATL_crm2am_a1_32C,  /* index 13 */
   ATL_crm2am_a1_32C,  /* index 14 */
   ATL_crm2am_a1_32C,  /* index 15 */
   ATL_crm2am_a1_32C,  /* index 16 */
   ATL_crm2am_a1_32C,  /* index 17 */
   ATL_crm2am_a1_32C,  /* index 18 */
   ATL_crm2am_a1_32C,  /* index 19 */
   ATL_crm2am_a1_32C,  /* index 20 */
   ATL_crm2am_a1_32C,  /* index 21 */
   ATL_crm2am_a1_32C,  /* index 22 */
   ATL_crm2am_a1_32C,  /* index 23 */
   ATL_crm2am_a1_32C,  /* index 24 */
   ATL_crm2am_a1_32C,  /* index 25 */
   ATL_crm2am_a1_32C,  /* index 26 */
   ATL_crm2am_a1_32C,  /* index 27 */
   ATL_crm2am_a1_32C,  /* index 28 */
   ATL_crm2am_a1_32C,  /* index 29 */
   ATL_crm2am_a1_32C,  /* index 30 */
   ATL_crm2am_a1_32C,  /* index 31 */
   ATL_crm2am_a1_32C,  /* index 32 */
   ATL_crm2am_a1_4x4C,  /* index 33 */
   ATL_crm2am_a1_32C,  /* index 34 */
   ATL_crm2am_a1_32C,  /* index 35 */
   ATL_crm2am_a1_32C,  /* index 36 */
   ATL_crm2am_a1_4x4C,  /* index 37 */
   ATL_crm2am_a1_32C,  /* index 38 */
   ATL_crm2am_a1_32C,  /* index 39 */
   ATL_crm2am_a1_32C,  /* index 40 */
   ATL_crm2am_a1_4x4C,  /* index 41 */
   ATL_crm2am_a1_32C,  /* index 42 */
   ATL_crm2am_a1_32C,  /* index 43 */
   ATL_crm2am_a1_32C,  /* index 44 */
   ATL_crm2am_a1_4x4C,  /* index 45 */
   ATL_crm2am_a1_32C,  /* index 46 */
   ATL_crm2am_a1_32C,  /* index 47 */
   ATL_crm2am_a1_32C,  /* index 48 */
   ATL_crm2am_a1_4x4C,  /* index 49 */
   ATL_crm2am_a1_32C,  /* index 50 */
   ATL_crm2am_a1_32C,  /* index 51 */
   ATL_crm2am_a1_32C,  /* index 52 */
   ATL_crm2am_a1_4x4C,  /* index 53 */
   ATL_crm2am_a1_32C,  /* index 54 */
   ATL_crm2am_a1_32C,  /* index 55 */
   ATL_crm2am_a1_32C,  /* index 56 */
   ATL_crm2am_a1_4x4C,  /* index 57 */
   ATL_crm2am_a1_32C,  /* index 58 */
   ATL_crm2am_a1_32C,  /* index 59 */
   ATL_crm2am_a1_32C,  /* index 60 */
   ATL_crm2am_a1_4x4C,  /* index 61 */
   ATL_crm2am_a1_32C,  /* index 62 */
   ATL_crm2am_a1_32C,  /* index 63 */
   ATL_crm2am_a1_32C,  /* index 64 */
   ATL_crm2am_a1_4x4C,  /* index 65 */
   ATL_crm2am_a1_32C,  /* index 66 */
   ATL_crm2am_a1_32C,  /* index 67 */
   ATL_crm2am_a1_32C,  /* index 68 */
   ATL_crm2am_a1_4x4C,  /* index 69 */
   ATL_crm2am_a1_32C,  /* index 70 */
   ATL_crm2am_a1_32C,  /* index 71 */
   ATL_crm2am_a1_32C,  /* index 72 */
   ATL_crm2am_a1_4x4C,  /* index 73 */
   ATL_crm2am_a1_32C,  /* index 74 */
   ATL_crm2am_a1_32C,  /* index 75 */
   ATL_crm2am_a1_32C,  /* index 76 */
   ATL_crm2am_a1_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_BC2BLK_a1[78] =
{
   ATL_ccm2am_a1_3C,  /* index 0 */
   ATL_ccm2am_a1_3C,  /* index 1 */
   ATL_ccm2am_a1_1C,  /* index 2 */
   ATL_ccm2am_a1_1C,  /* index 3 */
   ATL_ccm2am_a1_1C,  /* index 4 */
   ATL_ccm2am_a1_1C,  /* index 5 */
   ATL_ccm2am_a1_1C,  /* index 6 */
   ATL_ccm2am_a1_1C,  /* index 7 */
   ATL_ccm2am_a1_1C,  /* index 8 */
   ATL_ccm2am_a1_1C,  /* index 9 */
   ATL_ccm2am_a1_1C,  /* index 10 */
   ATL_ccm2am_a1_1C,  /* index 11 */
   ATL_ccm2am_a1_1C,  /* index 12 */
   ATL_ccm2am_a1_1C,  /* index 13 */
   ATL_ccm2am_a1_1C,  /* index 14 */
   ATL_ccm2am_a1_1C,  /* index 15 */
   ATL_ccm2am_a1_1C,  /* index 16 */
   ATL_ccm2am_a1_1C,  /* index 17 */
   ATL_ccm2am_a1_1C,  /* index 18 */
   ATL_ccm2am_a1_1C,  /* index 19 */
   ATL_ccm2am_a1_1C,  /* index 20 */
   ATL_ccm2am_a1_1C,  /* index 21 */
   ATL_ccm2am_a1_1C,  /* index 22 */
   ATL_ccm2am_a1_1C,  /* index 23 */
   ATL_ccm2am_a1_1C,  /* index 24 */
   ATL_ccm2am_a1_1C,  /* index 25 */
   ATL_ccm2am_a1_1C,  /* index 26 */
   ATL_ccm2am_a1_1C,  /* index 27 */
   ATL_ccm2am_a1_1C,  /* index 28 */
   ATL_ccm2am_a1_1C,  /* index 29 */
   ATL_ccm2am_a1_1C,  /* index 30 */
   ATL_ccm2am_a1_1C,  /* index 31 */
   ATL_ccm2am_a1_1C,  /* index 32 */
   ATL_ccm2am_a1_4x2C,  /* index 33 */
   ATL_ccm2am_a1_1C,  /* index 34 */
   ATL_ccm2am_a1_1C,  /* index 35 */
   ATL_ccm2am_a1_1C,  /* index 36 */
   ATL_ccm2am_a1_4x2C,  /* index 37 */
   ATL_ccm2am_a1_1C,  /* index 38 */
   ATL_ccm2am_a1_1C,  /* index 39 */
   ATL_ccm2am_a1_1C,  /* index 40 */
   ATL_ccm2am_a1_4x2C,  /* index 41 */
   ATL_ccm2am_a1_1C,  /* index 42 */
   ATL_ccm2am_a1_1C,  /* index 43 */
   ATL_ccm2am_a1_1C,  /* index 44 */
   ATL_ccm2am_a1_4x2C,  /* index 45 */
   ATL_ccm2am_a1_1C,  /* index 46 */
   ATL_ccm2am_a1_1C,  /* index 47 */
   ATL_ccm2am_a1_1C,  /* index 48 */
   ATL_ccm2am_a1_4x2C,  /* index 49 */
   ATL_ccm2am_a1_1C,  /* index 50 */
   ATL_ccm2am_a1_1C,  /* index 51 */
   ATL_ccm2am_a1_1C,  /* index 52 */
   ATL_ccm2am_a1_4x2C,  /* index 53 */
   ATL_ccm2am_a1_1C,  /* index 54 */
   ATL_ccm2am_a1_1C,  /* index 55 */
   ATL_ccm2am_a1_1C,  /* index 56 */
   ATL_ccm2am_a1_4x2C,  /* index 57 */
   ATL_ccm2am_a1_1C,  /* index 58 */
   ATL_ccm2am_a1_1C,  /* index 59 */
   ATL_ccm2am_a1_1C,  /* index 60 */
   ATL_ccm2am_a1_4x2C,  /* index 61 */
   ATL_ccm2am_a1_1C,  /* index 62 */
   ATL_ccm2am_a1_1C,  /* index 63 */
   ATL_ccm2am_a1_1C,  /* index 64 */
   ATL_ccm2am_a1_4x2C,  /* index 65 */
   ATL_ccm2am_a1_1C,  /* index 66 */
   ATL_ccm2am_a1_1C,  /* index 67 */
   ATL_ccm2am_a1_1C,  /* index 68 */
   ATL_ccm2am_a1_4x2C,  /* index 69 */
   ATL_ccm2am_a1_1C,  /* index 70 */
   ATL_ccm2am_a1_1C,  /* index 71 */
   ATL_ccm2am_a1_1C,  /* index 72 */
   ATL_ccm2am_a1_4x2C,  /* index 73 */
   ATL_ccm2am_a1_1C,  /* index 74 */
   ATL_ccm2am_a1_1C,  /* index 75 */
   ATL_ccm2am_a1_1C,  /* index 76 */
   ATL_ccm2am_a1_4x2C   /* index 77 */
};

static const cm2am_t ATL_RKK_BH2BLK_a1[78] =
{
   ATL_crm2am_a1_3C,  /* index 0 */
   ATL_crm2am_a1_3C,  /* index 1 */
   ATL_crm2am_a1_1C,  /* index 2 */
   ATL_crm2am_a1_1C,  /* index 3 */
   ATL_crm2am_a1_1C,  /* index 4 */
   ATL_crm2am_a1_1C,  /* index 5 */
   ATL_crm2am_a1_1C,  /* index 6 */
   ATL_crm2am_a1_1C,  /* index 7 */
   ATL_crm2am_a1_1C,  /* index 8 */
   ATL_crm2am_a1_1C,  /* index 9 */
   ATL_crm2am_a1_1C,  /* index 10 */
   ATL_crm2am_a1_1C,  /* index 11 */
   ATL_crm2am_a1_1C,  /* index 12 */
   ATL_crm2am_a1_1C,  /* index 13 */
   ATL_crm2am_a1_1C,  /* index 14 */
   ATL_crm2am_a1_1C,  /* index 15 */
   ATL_crm2am_a1_1C,  /* index 16 */
   ATL_crm2am_a1_1C,  /* index 17 */
   ATL_crm2am_a1_1C,  /* index 18 */
   ATL_crm2am_a1_1C,  /* index 19 */
   ATL_crm2am_a1_1C,  /* index 20 */
   ATL_crm2am_a1_1C,  /* index 21 */
   ATL_crm2am_a1_1C,  /* index 22 */
   ATL_crm2am_a1_1C,  /* index 23 */
   ATL_crm2am_a1_1C,  /* index 24 */
   ATL_crm2am_a1_1C,  /* index 25 */
   ATL_crm2am_a1_1C,  /* index 26 */
   ATL_crm2am_a1_1C,  /* index 27 */
   ATL_crm2am_a1_1C,  /* index 28 */
   ATL_crm2am_a1_1C,  /* index 29 */
   ATL_crm2am_a1_1C,  /* index 30 */
   ATL_crm2am_a1_1C,  /* index 31 */
   ATL_crm2am_a1_1C,  /* index 32 */
   ATL_crm2am_a1_4x2C,  /* index 33 */
   ATL_crm2am_a1_1C,  /* index 34 */
   ATL_crm2am_a1_1C,  /* index 35 */
   ATL_crm2am_a1_1C,  /* index 36 */
   ATL_crm2am_a1_4x2C,  /* index 37 */
   ATL_crm2am_a1_1C,  /* index 38 */
   ATL_crm2am_a1_1C,  /* index 39 */
   ATL_crm2am_a1_1C,  /* index 40 */
   ATL_crm2am_a1_4x2C,  /* index 41 */
   ATL_crm2am_a1_1C,  /* index 42 */
   ATL_crm2am_a1_1C,  /* index 43 */
   ATL_crm2am_a1_1C,  /* index 44 */
   ATL_crm2am_a1_4x2C,  /* index 45 */
   ATL_crm2am_a1_1C,  /* index 46 */
   ATL_crm2am_a1_1C,  /* index 47 */
   ATL_crm2am_a1_1C,  /* index 48 */
   ATL_crm2am_a1_4x2C,  /* index 49 */
   ATL_crm2am_a1_1C,  /* index 50 */
   ATL_crm2am_a1_1C,  /* index 51 */
   ATL_crm2am_a1_1C,  /* index 52 */
   ATL_crm2am_a1_4x2C,  /* index 53 */
   ATL_crm2am_a1_1C,  /* index 54 */
   ATL_crm2am_a1_1C,  /* index 55 */
   ATL_crm2am_a1_1C,  /* index 56 */
   ATL_crm2am_a1_4x2C,  /* index 57 */
   ATL_crm2am_a1_1C,  /* index 58 */
   ATL_crm2am_a1_1C,  /* index 59 */
   ATL_crm2am_a1_1C,  /* index 60 */
   ATL_crm2am_a1_4x2C,  /* index 61 */
   ATL_crm2am_a1_1C,  /* index 62 */
   ATL_crm2am_a1_1C,  /* index 63 */
   ATL_crm2am_a1_1C,  /* index 64 */
   ATL_crm2am_a1_4x2C,  /* index 65 */
   ATL_crm2am_a1_1C,  /* index 66 */
   ATL_crm2am_a1_1C,  /* index 67 */
   ATL_crm2am_a1_1C,  /* index 68 */
   ATL_crm2am_a1_4x2C,  /* index 69 */
   ATL_crm2am_a1_1C,  /* index 70 */
   ATL_crm2am_a1_1C,  /* index 71 */
   ATL_crm2am_a1_1C,  /* index 72 */
   ATL_crm2am_a1_4x2C,  /* index 73 */
   ATL_crm2am_a1_1C,  /* index 74 */
   ATL_crm2am_a1_1C,  /* index 75 */
   ATL_crm2am_a1_1C,  /* index 76 */
   ATL_crm2am_a1_4x2C   /* index 77 */
};


static const cm2am_t ATL_RKK_A2BLK_an[78] =
{
   ATL_ccm2am_an_12,  /* index 0 */
   ATL_ccm2am_an_12,  /* index 1 */
   ATL_ccm2am_an_32,  /* index 2 */
   ATL_ccm2am_an_32,  /* index 3 */
   ATL_ccm2am_an_32,  /* index 4 */
   ATL_ccm2am_an_32,  /* index 5 */
   ATL_ccm2am_an_32,  /* index 6 */
   ATL_ccm2am_an_32,  /* index 7 */
   ATL_ccm2am_an_32,  /* index 8 */
   ATL_ccm2am_an_32,  /* index 9 */
   ATL_ccm2am_an_32,  /* index 10 */
   ATL_ccm2am_an_32,  /* index 11 */
   ATL_ccm2am_an_32,  /* index 12 */
   ATL_ccm2am_an_32,  /* index 13 */
   ATL_ccm2am_an_32,  /* index 14 */
   ATL_ccm2am_an_32,  /* index 15 */
   ATL_ccm2am_an_32,  /* index 16 */
   ATL_ccm2am_an_32,  /* index 17 */
   ATL_ccm2am_an_32,  /* index 18 */
   ATL_ccm2am_an_32,  /* index 19 */
   ATL_ccm2am_an_32,  /* index 20 */
   ATL_ccm2am_an_32,  /* index 21 */
   ATL_ccm2am_an_32,  /* index 22 */
   ATL_ccm2am_an_32,  /* index 23 */
   ATL_ccm2am_an_32,  /* index 24 */
   ATL_ccm2am_an_32,  /* index 25 */
   ATL_ccm2am_an_32,  /* index 26 */
   ATL_ccm2am_an_32,  /* index 27 */
   ATL_ccm2am_an_32,  /* index 28 */
   ATL_ccm2am_an_32,  /* index 29 */
   ATL_ccm2am_an_32,  /* index 30 */
   ATL_ccm2am_an_32,  /* index 31 */
   ATL_ccm2am_an_32,  /* index 32 */
   ATL_ccm2am_an_4x4,  /* index 33 */
   ATL_ccm2am_an_32,  /* index 34 */
   ATL_ccm2am_an_32,  /* index 35 */
   ATL_ccm2am_an_32,  /* index 36 */
   ATL_ccm2am_an_4x4,  /* index 37 */
   ATL_ccm2am_an_32,  /* index 38 */
   ATL_ccm2am_an_32,  /* index 39 */
   ATL_ccm2am_an_32,  /* index 40 */
   ATL_ccm2am_an_4x4,  /* index 41 */
   ATL_ccm2am_an_32,  /* index 42 */
   ATL_ccm2am_an_32,  /* index 43 */
   ATL_ccm2am_an_32,  /* index 44 */
   ATL_ccm2am_an_4x4,  /* index 45 */
   ATL_ccm2am_an_32,  /* index 46 */
   ATL_ccm2am_an_32,  /* index 47 */
   ATL_ccm2am_an_32,  /* index 48 */
   ATL_ccm2am_an_4x4,  /* index 49 */
   ATL_ccm2am_an_32,  /* index 50 */
   ATL_ccm2am_an_32,  /* index 51 */
   ATL_ccm2am_an_32,  /* index 52 */
   ATL_ccm2am_an_4x4,  /* index 53 */
   ATL_ccm2am_an_32,  /* index 54 */
   ATL_ccm2am_an_32,  /* index 55 */
   ATL_ccm2am_an_32,  /* index 56 */
   ATL_ccm2am_an_4x4,  /* index 57 */
   ATL_ccm2am_an_32,  /* index 58 */
   ATL_ccm2am_an_32,  /* index 59 */
   ATL_ccm2am_an_32,  /* index 60 */
   ATL_ccm2am_an_4x4,  /* index 61 */
   ATL_ccm2am_an_32,  /* index 62 */
   ATL_ccm2am_an_32,  /* index 63 */
   ATL_ccm2am_an_32,  /* index 64 */
   ATL_ccm2am_an_4x4,  /* index 65 */
   ATL_ccm2am_an_32,  /* index 66 */
   ATL_ccm2am_an_32,  /* index 67 */
   ATL_ccm2am_an_32,  /* index 68 */
   ATL_ccm2am_an_4x4,  /* index 69 */
   ATL_ccm2am_an_32,  /* index 70 */
   ATL_ccm2am_an_32,  /* index 71 */
   ATL_ccm2am_an_32,  /* index 72 */
   ATL_ccm2am_an_4x4,  /* index 73 */
   ATL_ccm2am_an_32,  /* index 74 */
   ATL_ccm2am_an_32,  /* index 75 */
   ATL_ccm2am_an_32,  /* index 76 */
   ATL_ccm2am_an_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_AT2BLK_an[78] =
{
   ATL_crm2am_an_12,  /* index 0 */
   ATL_crm2am_an_12,  /* index 1 */
   ATL_crm2am_an_32,  /* index 2 */
   ATL_crm2am_an_32,  /* index 3 */
   ATL_crm2am_an_32,  /* index 4 */
   ATL_crm2am_an_32,  /* index 5 */
   ATL_crm2am_an_32,  /* index 6 */
   ATL_crm2am_an_32,  /* index 7 */
   ATL_crm2am_an_32,  /* index 8 */
   ATL_crm2am_an_32,  /* index 9 */
   ATL_crm2am_an_32,  /* index 10 */
   ATL_crm2am_an_32,  /* index 11 */
   ATL_crm2am_an_32,  /* index 12 */
   ATL_crm2am_an_32,  /* index 13 */
   ATL_crm2am_an_32,  /* index 14 */
   ATL_crm2am_an_32,  /* index 15 */
   ATL_crm2am_an_32,  /* index 16 */
   ATL_crm2am_an_32,  /* index 17 */
   ATL_crm2am_an_32,  /* index 18 */
   ATL_crm2am_an_32,  /* index 19 */
   ATL_crm2am_an_32,  /* index 20 */
   ATL_crm2am_an_32,  /* index 21 */
   ATL_crm2am_an_32,  /* index 22 */
   ATL_crm2am_an_32,  /* index 23 */
   ATL_crm2am_an_32,  /* index 24 */
   ATL_crm2am_an_32,  /* index 25 */
   ATL_crm2am_an_32,  /* index 26 */
   ATL_crm2am_an_32,  /* index 27 */
   ATL_crm2am_an_32,  /* index 28 */
   ATL_crm2am_an_32,  /* index 29 */
   ATL_crm2am_an_32,  /* index 30 */
   ATL_crm2am_an_32,  /* index 31 */
   ATL_crm2am_an_32,  /* index 32 */
   ATL_crm2am_an_4x4,  /* index 33 */
   ATL_crm2am_an_32,  /* index 34 */
   ATL_crm2am_an_32,  /* index 35 */
   ATL_crm2am_an_32,  /* index 36 */
   ATL_crm2am_an_4x4,  /* index 37 */
   ATL_crm2am_an_32,  /* index 38 */
   ATL_crm2am_an_32,  /* index 39 */
   ATL_crm2am_an_32,  /* index 40 */
   ATL_crm2am_an_4x4,  /* index 41 */
   ATL_crm2am_an_32,  /* index 42 */
   ATL_crm2am_an_32,  /* index 43 */
   ATL_crm2am_an_32,  /* index 44 */
   ATL_crm2am_an_4x4,  /* index 45 */
   ATL_crm2am_an_32,  /* index 46 */
   ATL_crm2am_an_32,  /* index 47 */
   ATL_crm2am_an_32,  /* index 48 */
   ATL_crm2am_an_4x4,  /* index 49 */
   ATL_crm2am_an_32,  /* index 50 */
   ATL_crm2am_an_32,  /* index 51 */
   ATL_crm2am_an_32,  /* index 52 */
   ATL_crm2am_an_4x4,  /* index 53 */
   ATL_crm2am_an_32,  /* index 54 */
   ATL_crm2am_an_32,  /* index 55 */
   ATL_crm2am_an_32,  /* index 56 */
   ATL_crm2am_an_4x4,  /* index 57 */
   ATL_crm2am_an_32,  /* index 58 */
   ATL_crm2am_an_32,  /* index 59 */
   ATL_crm2am_an_32,  /* index 60 */
   ATL_crm2am_an_4x4,  /* index 61 */
   ATL_crm2am_an_32,  /* index 62 */
   ATL_crm2am_an_32,  /* index 63 */
   ATL_crm2am_an_32,  /* index 64 */
   ATL_crm2am_an_4x4,  /* index 65 */
   ATL_crm2am_an_32,  /* index 66 */
   ATL_crm2am_an_32,  /* index 67 */
   ATL_crm2am_an_32,  /* index 68 */
   ATL_crm2am_an_4x4,  /* index 69 */
   ATL_crm2am_an_32,  /* index 70 */
   ATL_crm2am_an_32,  /* index 71 */
   ATL_crm2am_an_32,  /* index 72 */
   ATL_crm2am_an_4x4,  /* index 73 */
   ATL_crm2am_an_32,  /* index 74 */
   ATL_crm2am_an_32,  /* index 75 */
   ATL_crm2am_an_32,  /* index 76 */
   ATL_crm2am_an_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_B2BLK_an[78] =
{
   ATL_ccm2am_an_3,  /* index 0 */
   ATL_ccm2am_an_3,  /* index 1 */
   ATL_ccm2am_an_1,  /* index 2 */
   ATL_ccm2am_an_1,  /* index 3 */
   ATL_ccm2am_an_1,  /* index 4 */
   ATL_ccm2am_an_1,  /* index 5 */
   ATL_ccm2am_an_1,  /* index 6 */
   ATL_ccm2am_an_1,  /* index 7 */
   ATL_ccm2am_an_1,  /* index 8 */
   ATL_ccm2am_an_1,  /* index 9 */
   ATL_ccm2am_an_1,  /* index 10 */
   ATL_ccm2am_an_1,  /* index 11 */
   ATL_ccm2am_an_1,  /* index 12 */
   ATL_ccm2am_an_1,  /* index 13 */
   ATL_ccm2am_an_1,  /* index 14 */
   ATL_ccm2am_an_1,  /* index 15 */
   ATL_ccm2am_an_1,  /* index 16 */
   ATL_ccm2am_an_1,  /* index 17 */
   ATL_ccm2am_an_1,  /* index 18 */
   ATL_ccm2am_an_1,  /* index 19 */
   ATL_ccm2am_an_1,  /* index 20 */
   ATL_ccm2am_an_1,  /* index 21 */
   ATL_ccm2am_an_1,  /* index 22 */
   ATL_ccm2am_an_1,  /* index 23 */
   ATL_ccm2am_an_1,  /* index 24 */
   ATL_ccm2am_an_1,  /* index 25 */
   ATL_ccm2am_an_1,  /* index 26 */
   ATL_ccm2am_an_1,  /* index 27 */
   ATL_ccm2am_an_1,  /* index 28 */
   ATL_ccm2am_an_1,  /* index 29 */
   ATL_ccm2am_an_1,  /* index 30 */
   ATL_ccm2am_an_1,  /* index 31 */
   ATL_ccm2am_an_1,  /* index 32 */
   ATL_ccm2am_an_4x2,  /* index 33 */
   ATL_ccm2am_an_1,  /* index 34 */
   ATL_ccm2am_an_1,  /* index 35 */
   ATL_ccm2am_an_1,  /* index 36 */
   ATL_ccm2am_an_4x2,  /* index 37 */
   ATL_ccm2am_an_1,  /* index 38 */
   ATL_ccm2am_an_1,  /* index 39 */
   ATL_ccm2am_an_1,  /* index 40 */
   ATL_ccm2am_an_4x2,  /* index 41 */
   ATL_ccm2am_an_1,  /* index 42 */
   ATL_ccm2am_an_1,  /* index 43 */
   ATL_ccm2am_an_1,  /* index 44 */
   ATL_ccm2am_an_4x2,  /* index 45 */
   ATL_ccm2am_an_1,  /* index 46 */
   ATL_ccm2am_an_1,  /* index 47 */
   ATL_ccm2am_an_1,  /* index 48 */
   ATL_ccm2am_an_4x2,  /* index 49 */
   ATL_ccm2am_an_1,  /* index 50 */
   ATL_ccm2am_an_1,  /* index 51 */
   ATL_ccm2am_an_1,  /* index 52 */
   ATL_ccm2am_an_4x2,  /* index 53 */
   ATL_ccm2am_an_1,  /* index 54 */
   ATL_ccm2am_an_1,  /* index 55 */
   ATL_ccm2am_an_1,  /* index 56 */
   ATL_ccm2am_an_4x2,  /* index 57 */
   ATL_ccm2am_an_1,  /* index 58 */
   ATL_ccm2am_an_1,  /* index 59 */
   ATL_ccm2am_an_1,  /* index 60 */
   ATL_ccm2am_an_4x2,  /* index 61 */
   ATL_ccm2am_an_1,  /* index 62 */
   ATL_ccm2am_an_1,  /* index 63 */
   ATL_ccm2am_an_1,  /* index 64 */
   ATL_ccm2am_an_4x2,  /* index 65 */
   ATL_ccm2am_an_1,  /* index 66 */
   ATL_ccm2am_an_1,  /* index 67 */
   ATL_ccm2am_an_1,  /* index 68 */
   ATL_ccm2am_an_4x2,  /* index 69 */
   ATL_ccm2am_an_1,  /* index 70 */
   ATL_ccm2am_an_1,  /* index 71 */
   ATL_ccm2am_an_1,  /* index 72 */
   ATL_ccm2am_an_4x2,  /* index 73 */
   ATL_ccm2am_an_1,  /* index 74 */
   ATL_ccm2am_an_1,  /* index 75 */
   ATL_ccm2am_an_1,  /* index 76 */
   ATL_ccm2am_an_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_BT2BLK_an[78] =
{
   ATL_crm2am_an_3,  /* index 0 */
   ATL_crm2am_an_3,  /* index 1 */
   ATL_crm2am_an_1,  /* index 2 */
   ATL_crm2am_an_1,  /* index 3 */
   ATL_crm2am_an_1,  /* index 4 */
   ATL_crm2am_an_1,  /* index 5 */
   ATL_crm2am_an_1,  /* index 6 */
   ATL_crm2am_an_1,  /* index 7 */
   ATL_crm2am_an_1,  /* index 8 */
   ATL_crm2am_an_1,  /* index 9 */
   ATL_crm2am_an_1,  /* index 10 */
   ATL_crm2am_an_1,  /* index 11 */
   ATL_crm2am_an_1,  /* index 12 */
   ATL_crm2am_an_1,  /* index 13 */
   ATL_crm2am_an_1,  /* index 14 */
   ATL_crm2am_an_1,  /* index 15 */
   ATL_crm2am_an_1,  /* index 16 */
   ATL_crm2am_an_1,  /* index 17 */
   ATL_crm2am_an_1,  /* index 18 */
   ATL_crm2am_an_1,  /* index 19 */
   ATL_crm2am_an_1,  /* index 20 */
   ATL_crm2am_an_1,  /* index 21 */
   ATL_crm2am_an_1,  /* index 22 */
   ATL_crm2am_an_1,  /* index 23 */
   ATL_crm2am_an_1,  /* index 24 */
   ATL_crm2am_an_1,  /* index 25 */
   ATL_crm2am_an_1,  /* index 26 */
   ATL_crm2am_an_1,  /* index 27 */
   ATL_crm2am_an_1,  /* index 28 */
   ATL_crm2am_an_1,  /* index 29 */
   ATL_crm2am_an_1,  /* index 30 */
   ATL_crm2am_an_1,  /* index 31 */
   ATL_crm2am_an_1,  /* index 32 */
   ATL_crm2am_an_4x2,  /* index 33 */
   ATL_crm2am_an_1,  /* index 34 */
   ATL_crm2am_an_1,  /* index 35 */
   ATL_crm2am_an_1,  /* index 36 */
   ATL_crm2am_an_4x2,  /* index 37 */
   ATL_crm2am_an_1,  /* index 38 */
   ATL_crm2am_an_1,  /* index 39 */
   ATL_crm2am_an_1,  /* index 40 */
   ATL_crm2am_an_4x2,  /* index 41 */
   ATL_crm2am_an_1,  /* index 42 */
   ATL_crm2am_an_1,  /* index 43 */
   ATL_crm2am_an_1,  /* index 44 */
   ATL_crm2am_an_4x2,  /* index 45 */
   ATL_crm2am_an_1,  /* index 46 */
   ATL_crm2am_an_1,  /* index 47 */
   ATL_crm2am_an_1,  /* index 48 */
   ATL_crm2am_an_4x2,  /* index 49 */
   ATL_crm2am_an_1,  /* index 50 */
   ATL_crm2am_an_1,  /* index 51 */
   ATL_crm2am_an_1,  /* index 52 */
   ATL_crm2am_an_4x2,  /* index 53 */
   ATL_crm2am_an_1,  /* index 54 */
   ATL_crm2am_an_1,  /* index 55 */
   ATL_crm2am_an_1,  /* index 56 */
   ATL_crm2am_an_4x2,  /* index 57 */
   ATL_crm2am_an_1,  /* index 58 */
   ATL_crm2am_an_1,  /* index 59 */
   ATL_crm2am_an_1,  /* index 60 */
   ATL_crm2am_an_4x2,  /* index 61 */
   ATL_crm2am_an_1,  /* index 62 */
   ATL_crm2am_an_1,  /* index 63 */
   ATL_crm2am_an_1,  /* index 64 */
   ATL_crm2am_an_4x2,  /* index 65 */
   ATL_crm2am_an_1,  /* index 66 */
   ATL_crm2am_an_1,  /* index 67 */
   ATL_crm2am_an_1,  /* index 68 */
   ATL_crm2am_an_4x2,  /* index 69 */
   ATL_crm2am_an_1,  /* index 70 */
   ATL_crm2am_an_1,  /* index 71 */
   ATL_crm2am_an_1,  /* index 72 */
   ATL_crm2am_an_4x2,  /* index 73 */
   ATL_crm2am_an_1,  /* index 74 */
   ATL_crm2am_an_1,  /* index 75 */
   ATL_crm2am_an_1,  /* index 76 */
   ATL_crm2am_an_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_AC2BLK_an[78] =
{
   ATL_ccm2am_an_12C,  /* index 0 */
   ATL_ccm2am_an_12C,  /* index 1 */
   ATL_ccm2am_an_32C,  /* index 2 */
   ATL_ccm2am_an_32C,  /* index 3 */
   ATL_ccm2am_an_32C,  /* index 4 */
   ATL_ccm2am_an_32C,  /* index 5 */
   ATL_ccm2am_an_32C,  /* index 6 */
   ATL_ccm2am_an_32C,  /* index 7 */
   ATL_ccm2am_an_32C,  /* index 8 */
   ATL_ccm2am_an_32C,  /* index 9 */
   ATL_ccm2am_an_32C,  /* index 10 */
   ATL_ccm2am_an_32C,  /* index 11 */
   ATL_ccm2am_an_32C,  /* index 12 */
   ATL_ccm2am_an_32C,  /* index 13 */
   ATL_ccm2am_an_32C,  /* index 14 */
   ATL_ccm2am_an_32C,  /* index 15 */
   ATL_ccm2am_an_32C,  /* index 16 */
   ATL_ccm2am_an_32C,  /* index 17 */
   ATL_ccm2am_an_32C,  /* index 18 */
   ATL_ccm2am_an_32C,  /* index 19 */
   ATL_ccm2am_an_32C,  /* index 20 */
   ATL_ccm2am_an_32C,  /* index 21 */
   ATL_ccm2am_an_32C,  /* index 22 */
   ATL_ccm2am_an_32C,  /* index 23 */
   ATL_ccm2am_an_32C,  /* index 24 */
   ATL_ccm2am_an_32C,  /* index 25 */
   ATL_ccm2am_an_32C,  /* index 26 */
   ATL_ccm2am_an_32C,  /* index 27 */
   ATL_ccm2am_an_32C,  /* index 28 */
   ATL_ccm2am_an_32C,  /* index 29 */
   ATL_ccm2am_an_32C,  /* index 30 */
   ATL_ccm2am_an_32C,  /* index 31 */
   ATL_ccm2am_an_32C,  /* index 32 */
   ATL_ccm2am_an_4x4C,  /* index 33 */
   ATL_ccm2am_an_32C,  /* index 34 */
   ATL_ccm2am_an_32C,  /* index 35 */
   ATL_ccm2am_an_32C,  /* index 36 */
   ATL_ccm2am_an_4x4C,  /* index 37 */
   ATL_ccm2am_an_32C,  /* index 38 */
   ATL_ccm2am_an_32C,  /* index 39 */
   ATL_ccm2am_an_32C,  /* index 40 */
   ATL_ccm2am_an_4x4C,  /* index 41 */
   ATL_ccm2am_an_32C,  /* index 42 */
   ATL_ccm2am_an_32C,  /* index 43 */
   ATL_ccm2am_an_32C,  /* index 44 */
   ATL_ccm2am_an_4x4C,  /* index 45 */
   ATL_ccm2am_an_32C,  /* index 46 */
   ATL_ccm2am_an_32C,  /* index 47 */
   ATL_ccm2am_an_32C,  /* index 48 */
   ATL_ccm2am_an_4x4C,  /* index 49 */
   ATL_ccm2am_an_32C,  /* index 50 */
   ATL_ccm2am_an_32C,  /* index 51 */
   ATL_ccm2am_an_32C,  /* index 52 */
   ATL_ccm2am_an_4x4C,  /* index 53 */
   ATL_ccm2am_an_32C,  /* index 54 */
   ATL_ccm2am_an_32C,  /* index 55 */
   ATL_ccm2am_an_32C,  /* index 56 */
   ATL_ccm2am_an_4x4C,  /* index 57 */
   ATL_ccm2am_an_32C,  /* index 58 */
   ATL_ccm2am_an_32C,  /* index 59 */
   ATL_ccm2am_an_32C,  /* index 60 */
   ATL_ccm2am_an_4x4C,  /* index 61 */
   ATL_ccm2am_an_32C,  /* index 62 */
   ATL_ccm2am_an_32C,  /* index 63 */
   ATL_ccm2am_an_32C,  /* index 64 */
   ATL_ccm2am_an_4x4C,  /* index 65 */
   ATL_ccm2am_an_32C,  /* index 66 */
   ATL_ccm2am_an_32C,  /* index 67 */
   ATL_ccm2am_an_32C,  /* index 68 */
   ATL_ccm2am_an_4x4C,  /* index 69 */
   ATL_ccm2am_an_32C,  /* index 70 */
   ATL_ccm2am_an_32C,  /* index 71 */
   ATL_ccm2am_an_32C,  /* index 72 */
   ATL_ccm2am_an_4x4C,  /* index 73 */
   ATL_ccm2am_an_32C,  /* index 74 */
   ATL_ccm2am_an_32C,  /* index 75 */
   ATL_ccm2am_an_32C,  /* index 76 */
   ATL_ccm2am_an_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_AH2BLK_an[78] =
{
   ATL_crm2am_an_12C,  /* index 0 */
   ATL_crm2am_an_12C,  /* index 1 */
   ATL_crm2am_an_32C,  /* index 2 */
   ATL_crm2am_an_32C,  /* index 3 */
   ATL_crm2am_an_32C,  /* index 4 */
   ATL_crm2am_an_32C,  /* index 5 */
   ATL_crm2am_an_32C,  /* index 6 */
   ATL_crm2am_an_32C,  /* index 7 */
   ATL_crm2am_an_32C,  /* index 8 */
   ATL_crm2am_an_32C,  /* index 9 */
   ATL_crm2am_an_32C,  /* index 10 */
   ATL_crm2am_an_32C,  /* index 11 */
   ATL_crm2am_an_32C,  /* index 12 */
   ATL_crm2am_an_32C,  /* index 13 */
   ATL_crm2am_an_32C,  /* index 14 */
   ATL_crm2am_an_32C,  /* index 15 */
   ATL_crm2am_an_32C,  /* index 16 */
   ATL_crm2am_an_32C,  /* index 17 */
   ATL_crm2am_an_32C,  /* index 18 */
   ATL_crm2am_an_32C,  /* index 19 */
   ATL_crm2am_an_32C,  /* index 20 */
   ATL_crm2am_an_32C,  /* index 21 */
   ATL_crm2am_an_32C,  /* index 22 */
   ATL_crm2am_an_32C,  /* index 23 */
   ATL_crm2am_an_32C,  /* index 24 */
   ATL_crm2am_an_32C,  /* index 25 */
   ATL_crm2am_an_32C,  /* index 26 */
   ATL_crm2am_an_32C,  /* index 27 */
   ATL_crm2am_an_32C,  /* index 28 */
   ATL_crm2am_an_32C,  /* index 29 */
   ATL_crm2am_an_32C,  /* index 30 */
   ATL_crm2am_an_32C,  /* index 31 */
   ATL_crm2am_an_32C,  /* index 32 */
   ATL_crm2am_an_4x4C,  /* index 33 */
   ATL_crm2am_an_32C,  /* index 34 */
   ATL_crm2am_an_32C,  /* index 35 */
   ATL_crm2am_an_32C,  /* index 36 */
   ATL_crm2am_an_4x4C,  /* index 37 */
   ATL_crm2am_an_32C,  /* index 38 */
   ATL_crm2am_an_32C,  /* index 39 */
   ATL_crm2am_an_32C,  /* index 40 */
   ATL_crm2am_an_4x4C,  /* index 41 */
   ATL_crm2am_an_32C,  /* index 42 */
   ATL_crm2am_an_32C,  /* index 43 */
   ATL_crm2am_an_32C,  /* index 44 */
   ATL_crm2am_an_4x4C,  /* index 45 */
   ATL_crm2am_an_32C,  /* index 46 */
   ATL_crm2am_an_32C,  /* index 47 */
   ATL_crm2am_an_32C,  /* index 48 */
   ATL_crm2am_an_4x4C,  /* index 49 */
   ATL_crm2am_an_32C,  /* index 50 */
   ATL_crm2am_an_32C,  /* index 51 */
   ATL_crm2am_an_32C,  /* index 52 */
   ATL_crm2am_an_4x4C,  /* index 53 */
   ATL_crm2am_an_32C,  /* index 54 */
   ATL_crm2am_an_32C,  /* index 55 */
   ATL_crm2am_an_32C,  /* index 56 */
   ATL_crm2am_an_4x4C,  /* index 57 */
   ATL_crm2am_an_32C,  /* index 58 */
   ATL_crm2am_an_32C,  /* index 59 */
   ATL_crm2am_an_32C,  /* index 60 */
   ATL_crm2am_an_4x4C,  /* index 61 */
   ATL_crm2am_an_32C,  /* index 62 */
   ATL_crm2am_an_32C,  /* index 63 */
   ATL_crm2am_an_32C,  /* index 64 */
   ATL_crm2am_an_4x4C,  /* index 65 */
   ATL_crm2am_an_32C,  /* index 66 */
   ATL_crm2am_an_32C,  /* index 67 */
   ATL_crm2am_an_32C,  /* index 68 */
   ATL_crm2am_an_4x4C,  /* index 69 */
   ATL_crm2am_an_32C,  /* index 70 */
   ATL_crm2am_an_32C,  /* index 71 */
   ATL_crm2am_an_32C,  /* index 72 */
   ATL_crm2am_an_4x4C,  /* index 73 */
   ATL_crm2am_an_32C,  /* index 74 */
   ATL_crm2am_an_32C,  /* index 75 */
   ATL_crm2am_an_32C,  /* index 76 */
   ATL_crm2am_an_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_BC2BLK_an[78] =
{
   ATL_ccm2am_an_3C,  /* index 0 */
   ATL_ccm2am_an_3C,  /* index 1 */
   ATL_ccm2am_an_1C,  /* index 2 */
   ATL_ccm2am_an_1C,  /* index 3 */
   ATL_ccm2am_an_1C,  /* index 4 */
   ATL_ccm2am_an_1C,  /* index 5 */
   ATL_ccm2am_an_1C,  /* index 6 */
   ATL_ccm2am_an_1C,  /* index 7 */
   ATL_ccm2am_an_1C,  /* index 8 */
   ATL_ccm2am_an_1C,  /* index 9 */
   ATL_ccm2am_an_1C,  /* index 10 */
   ATL_ccm2am_an_1C,  /* index 11 */
   ATL_ccm2am_an_1C,  /* index 12 */
   ATL_ccm2am_an_1C,  /* index 13 */
   ATL_ccm2am_an_1C,  /* index 14 */
   ATL_ccm2am_an_1C,  /* index 15 */
   ATL_ccm2am_an_1C,  /* index 16 */
   ATL_ccm2am_an_1C,  /* index 17 */
   ATL_ccm2am_an_1C,  /* index 18 */
   ATL_ccm2am_an_1C,  /* index 19 */
   ATL_ccm2am_an_1C,  /* index 20 */
   ATL_ccm2am_an_1C,  /* index 21 */
   ATL_ccm2am_an_1C,  /* index 22 */
   ATL_ccm2am_an_1C,  /* index 23 */
   ATL_ccm2am_an_1C,  /* index 24 */
   ATL_ccm2am_an_1C,  /* index 25 */
   ATL_ccm2am_an_1C,  /* index 26 */
   ATL_ccm2am_an_1C,  /* index 27 */
   ATL_ccm2am_an_1C,  /* index 28 */
   ATL_ccm2am_an_1C,  /* index 29 */
   ATL_ccm2am_an_1C,  /* index 30 */
   ATL_ccm2am_an_1C,  /* index 31 */
   ATL_ccm2am_an_1C,  /* index 32 */
   ATL_ccm2am_an_4x2C,  /* index 33 */
   ATL_ccm2am_an_1C,  /* index 34 */
   ATL_ccm2am_an_1C,  /* index 35 */
   ATL_ccm2am_an_1C,  /* index 36 */
   ATL_ccm2am_an_4x2C,  /* index 37 */
   ATL_ccm2am_an_1C,  /* index 38 */
   ATL_ccm2am_an_1C,  /* index 39 */
   ATL_ccm2am_an_1C,  /* index 40 */
   ATL_ccm2am_an_4x2C,  /* index 41 */
   ATL_ccm2am_an_1C,  /* index 42 */
   ATL_ccm2am_an_1C,  /* index 43 */
   ATL_ccm2am_an_1C,  /* index 44 */
   ATL_ccm2am_an_4x2C,  /* index 45 */
   ATL_ccm2am_an_1C,  /* index 46 */
   ATL_ccm2am_an_1C,  /* index 47 */
   ATL_ccm2am_an_1C,  /* index 48 */
   ATL_ccm2am_an_4x2C,  /* index 49 */
   ATL_ccm2am_an_1C,  /* index 50 */
   ATL_ccm2am_an_1C,  /* index 51 */
   ATL_ccm2am_an_1C,  /* index 52 */
   ATL_ccm2am_an_4x2C,  /* index 53 */
   ATL_ccm2am_an_1C,  /* index 54 */
   ATL_ccm2am_an_1C,  /* index 55 */
   ATL_ccm2am_an_1C,  /* index 56 */
   ATL_ccm2am_an_4x2C,  /* index 57 */
   ATL_ccm2am_an_1C,  /* index 58 */
   ATL_ccm2am_an_1C,  /* index 59 */
   ATL_ccm2am_an_1C,  /* index 60 */
   ATL_ccm2am_an_4x2C,  /* index 61 */
   ATL_ccm2am_an_1C,  /* index 62 */
   ATL_ccm2am_an_1C,  /* index 63 */
   ATL_ccm2am_an_1C,  /* index 64 */
   ATL_ccm2am_an_4x2C,  /* index 65 */
   ATL_ccm2am_an_1C,  /* index 66 */
   ATL_ccm2am_an_1C,  /* index 67 */
   ATL_ccm2am_an_1C,  /* index 68 */
   ATL_ccm2am_an_4x2C,  /* index 69 */
   ATL_ccm2am_an_1C,  /* index 70 */
   ATL_ccm2am_an_1C,  /* index 71 */
   ATL_ccm2am_an_1C,  /* index 72 */
   ATL_ccm2am_an_4x2C,  /* index 73 */
   ATL_ccm2am_an_1C,  /* index 74 */
   ATL_ccm2am_an_1C,  /* index 75 */
   ATL_ccm2am_an_1C,  /* index 76 */
   ATL_ccm2am_an_4x2C   /* index 77 */
};

static const cm2am_t ATL_RKK_BH2BLK_an[78] =
{
   ATL_crm2am_an_3C,  /* index 0 */
   ATL_crm2am_an_3C,  /* index 1 */
   ATL_crm2am_an_1C,  /* index 2 */
   ATL_crm2am_an_1C,  /* index 3 */
   ATL_crm2am_an_1C,  /* index 4 */
   ATL_crm2am_an_1C,  /* index 5 */
   ATL_crm2am_an_1C,  /* index 6 */
   ATL_crm2am_an_1C,  /* index 7 */
   ATL_crm2am_an_1C,  /* index 8 */
   ATL_crm2am_an_1C,  /* index 9 */
   ATL_crm2am_an_1C,  /* index 10 */
   ATL_crm2am_an_1C,  /* index 11 */
   ATL_crm2am_an_1C,  /* index 12 */
   ATL_crm2am_an_1C,  /* index 13 */
   ATL_crm2am_an_1C,  /* index 14 */
   ATL_crm2am_an_1C,  /* index 15 */
   ATL_crm2am_an_1C,  /* index 16 */
   ATL_crm2am_an_1C,  /* index 17 */
   ATL_crm2am_an_1C,  /* index 18 */
   ATL_crm2am_an_1C,  /* index 19 */
   ATL_crm2am_an_1C,  /* index 20 */
   ATL_crm2am_an_1C,  /* index 21 */
   ATL_crm2am_an_1C,  /* index 22 */
   ATL_crm2am_an_1C,  /* index 23 */
   ATL_crm2am_an_1C,  /* index 24 */
   ATL_crm2am_an_1C,  /* index 25 */
   ATL_crm2am_an_1C,  /* index 26 */
   ATL_crm2am_an_1C,  /* index 27 */
   ATL_crm2am_an_1C,  /* index 28 */
   ATL_crm2am_an_1C,  /* index 29 */
   ATL_crm2am_an_1C,  /* index 30 */
   ATL_crm2am_an_1C,  /* index 31 */
   ATL_crm2am_an_1C,  /* index 32 */
   ATL_crm2am_an_4x2C,  /* index 33 */
   ATL_crm2am_an_1C,  /* index 34 */
   ATL_crm2am_an_1C,  /* index 35 */
   ATL_crm2am_an_1C,  /* index 36 */
   ATL_crm2am_an_4x2C,  /* index 37 */
   ATL_crm2am_an_1C,  /* index 38 */
   ATL_crm2am_an_1C,  /* index 39 */
   ATL_crm2am_an_1C,  /* index 40 */
   ATL_crm2am_an_4x2C,  /* index 41 */
   ATL_crm2am_an_1C,  /* index 42 */
   ATL_crm2am_an_1C,  /* index 43 */
   ATL_crm2am_an_1C,  /* index 44 */
   ATL_crm2am_an_4x2C,  /* index 45 */
   ATL_crm2am_an_1C,  /* index 46 */
   ATL_crm2am_an_1C,  /* index 47 */
   ATL_crm2am_an_1C,  /* index 48 */
   ATL_crm2am_an_4x2C,  /* index 49 */
   ATL_crm2am_an_1C,  /* index 50 */
   ATL_crm2am_an_1C,  /* index 51 */
   ATL_crm2am_an_1C,  /* index 52 */
   ATL_crm2am_an_4x2C,  /* index 53 */
   ATL_crm2am_an_1C,  /* index 54 */
   ATL_crm2am_an_1C,  /* index 55 */
   ATL_crm2am_an_1C,  /* index 56 */
   ATL_crm2am_an_4x2C,  /* index 57 */
   ATL_crm2am_an_1C,  /* index 58 */
   ATL_crm2am_an_1C,  /* index 59 */
   ATL_crm2am_an_1C,  /* index 60 */
   ATL_crm2am_an_4x2C,  /* index 61 */
   ATL_crm2am_an_1C,  /* index 62 */
   ATL_crm2am_an_1C,  /* index 63 */
   ATL_crm2am_an_1C,  /* index 64 */
   ATL_crm2am_an_4x2C,  /* index 65 */
   ATL_crm2am_an_1C,  /* index 66 */
   ATL_crm2am_an_1C,  /* index 67 */
   ATL_crm2am_an_1C,  /* index 68 */
   ATL_crm2am_an_4x2C,  /* index 69 */
   ATL_crm2am_an_1C,  /* index 70 */
   ATL_crm2am_an_1C,  /* index 71 */
   ATL_crm2am_an_1C,  /* index 72 */
   ATL_crm2am_an_4x2C,  /* index 73 */
   ATL_crm2am_an_1C,  /* index 74 */
   ATL_crm2am_an_1C,  /* index 75 */
   ATL_crm2am_an_1C,  /* index 76 */
   ATL_crm2am_an_4x2C   /* index 77 */
};


static const cm2am_t ATL_RKK_A2BLK_aX[78] =
{
   ATL_ccm2am_aX_12,  /* index 0 */
   ATL_ccm2am_aX_12,  /* index 1 */
   ATL_ccm2am_aX_32,  /* index 2 */
   ATL_ccm2am_aX_32,  /* index 3 */
   ATL_ccm2am_aX_32,  /* index 4 */
   ATL_ccm2am_aX_32,  /* index 5 */
   ATL_ccm2am_aX_32,  /* index 6 */
   ATL_ccm2am_aX_32,  /* index 7 */
   ATL_ccm2am_aX_32,  /* index 8 */
   ATL_ccm2am_aX_32,  /* index 9 */
   ATL_ccm2am_aX_32,  /* index 10 */
   ATL_ccm2am_aX_32,  /* index 11 */
   ATL_ccm2am_aX_32,  /* index 12 */
   ATL_ccm2am_aX_32,  /* index 13 */
   ATL_ccm2am_aX_32,  /* index 14 */
   ATL_ccm2am_aX_32,  /* index 15 */
   ATL_ccm2am_aX_32,  /* index 16 */
   ATL_ccm2am_aX_32,  /* index 17 */
   ATL_ccm2am_aX_32,  /* index 18 */
   ATL_ccm2am_aX_32,  /* index 19 */
   ATL_ccm2am_aX_32,  /* index 20 */
   ATL_ccm2am_aX_32,  /* index 21 */
   ATL_ccm2am_aX_32,  /* index 22 */
   ATL_ccm2am_aX_32,  /* index 23 */
   ATL_ccm2am_aX_32,  /* index 24 */
   ATL_ccm2am_aX_32,  /* index 25 */
   ATL_ccm2am_aX_32,  /* index 26 */
   ATL_ccm2am_aX_32,  /* index 27 */
   ATL_ccm2am_aX_32,  /* index 28 */
   ATL_ccm2am_aX_32,  /* index 29 */
   ATL_ccm2am_aX_32,  /* index 30 */
   ATL_ccm2am_aX_32,  /* index 31 */
   ATL_ccm2am_aX_32,  /* index 32 */
   ATL_ccm2am_aX_4x4,  /* index 33 */
   ATL_ccm2am_aX_32,  /* index 34 */
   ATL_ccm2am_aX_32,  /* index 35 */
   ATL_ccm2am_aX_32,  /* index 36 */
   ATL_ccm2am_aX_4x4,  /* index 37 */
   ATL_ccm2am_aX_32,  /* index 38 */
   ATL_ccm2am_aX_32,  /* index 39 */
   ATL_ccm2am_aX_32,  /* index 40 */
   ATL_ccm2am_aX_4x4,  /* index 41 */
   ATL_ccm2am_aX_32,  /* index 42 */
   ATL_ccm2am_aX_32,  /* index 43 */
   ATL_ccm2am_aX_32,  /* index 44 */
   ATL_ccm2am_aX_4x4,  /* index 45 */
   ATL_ccm2am_aX_32,  /* index 46 */
   ATL_ccm2am_aX_32,  /* index 47 */
   ATL_ccm2am_aX_32,  /* index 48 */
   ATL_ccm2am_aX_4x4,  /* index 49 */
   ATL_ccm2am_aX_32,  /* index 50 */
   ATL_ccm2am_aX_32,  /* index 51 */
   ATL_ccm2am_aX_32,  /* index 52 */
   ATL_ccm2am_aX_4x4,  /* index 53 */
   ATL_ccm2am_aX_32,  /* index 54 */
   ATL_ccm2am_aX_32,  /* index 55 */
   ATL_ccm2am_aX_32,  /* index 56 */
   ATL_ccm2am_aX_4x4,  /* index 57 */
   ATL_ccm2am_aX_32,  /* index 58 */
   ATL_ccm2am_aX_32,  /* index 59 */
   ATL_ccm2am_aX_32,  /* index 60 */
   ATL_ccm2am_aX_4x4,  /* index 61 */
   ATL_ccm2am_aX_32,  /* index 62 */
   ATL_ccm2am_aX_32,  /* index 63 */
   ATL_ccm2am_aX_32,  /* index 64 */
   ATL_ccm2am_aX_4x4,  /* index 65 */
   ATL_ccm2am_aX_32,  /* index 66 */
   ATL_ccm2am_aX_32,  /* index 67 */
   ATL_ccm2am_aX_32,  /* index 68 */
   ATL_ccm2am_aX_4x4,  /* index 69 */
   ATL_ccm2am_aX_32,  /* index 70 */
   ATL_ccm2am_aX_32,  /* index 71 */
   ATL_ccm2am_aX_32,  /* index 72 */
   ATL_ccm2am_aX_4x4,  /* index 73 */
   ATL_ccm2am_aX_32,  /* index 74 */
   ATL_ccm2am_aX_32,  /* index 75 */
   ATL_ccm2am_aX_32,  /* index 76 */
   ATL_ccm2am_aX_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_AT2BLK_aX[78] =
{
   ATL_crm2am_aX_12,  /* index 0 */
   ATL_crm2am_aX_12,  /* index 1 */
   ATL_crm2am_aX_32,  /* index 2 */
   ATL_crm2am_aX_32,  /* index 3 */
   ATL_crm2am_aX_32,  /* index 4 */
   ATL_crm2am_aX_32,  /* index 5 */
   ATL_crm2am_aX_32,  /* index 6 */
   ATL_crm2am_aX_32,  /* index 7 */
   ATL_crm2am_aX_32,  /* index 8 */
   ATL_crm2am_aX_32,  /* index 9 */
   ATL_crm2am_aX_32,  /* index 10 */
   ATL_crm2am_aX_32,  /* index 11 */
   ATL_crm2am_aX_32,  /* index 12 */
   ATL_crm2am_aX_32,  /* index 13 */
   ATL_crm2am_aX_32,  /* index 14 */
   ATL_crm2am_aX_32,  /* index 15 */
   ATL_crm2am_aX_32,  /* index 16 */
   ATL_crm2am_aX_32,  /* index 17 */
   ATL_crm2am_aX_32,  /* index 18 */
   ATL_crm2am_aX_32,  /* index 19 */
   ATL_crm2am_aX_32,  /* index 20 */
   ATL_crm2am_aX_32,  /* index 21 */
   ATL_crm2am_aX_32,  /* index 22 */
   ATL_crm2am_aX_32,  /* index 23 */
   ATL_crm2am_aX_32,  /* index 24 */
   ATL_crm2am_aX_32,  /* index 25 */
   ATL_crm2am_aX_32,  /* index 26 */
   ATL_crm2am_aX_32,  /* index 27 */
   ATL_crm2am_aX_32,  /* index 28 */
   ATL_crm2am_aX_32,  /* index 29 */
   ATL_crm2am_aX_32,  /* index 30 */
   ATL_crm2am_aX_32,  /* index 31 */
   ATL_crm2am_aX_32,  /* index 32 */
   ATL_crm2am_aX_4x4,  /* index 33 */
   ATL_crm2am_aX_32,  /* index 34 */
   ATL_crm2am_aX_32,  /* index 35 */
   ATL_crm2am_aX_32,  /* index 36 */
   ATL_crm2am_aX_4x4,  /* index 37 */
   ATL_crm2am_aX_32,  /* index 38 */
   ATL_crm2am_aX_32,  /* index 39 */
   ATL_crm2am_aX_32,  /* index 40 */
   ATL_crm2am_aX_4x4,  /* index 41 */
   ATL_crm2am_aX_32,  /* index 42 */
   ATL_crm2am_aX_32,  /* index 43 */
   ATL_crm2am_aX_32,  /* index 44 */
   ATL_crm2am_aX_4x4,  /* index 45 */
   ATL_crm2am_aX_32,  /* index 46 */
   ATL_crm2am_aX_32,  /* index 47 */
   ATL_crm2am_aX_32,  /* index 48 */
   ATL_crm2am_aX_4x4,  /* index 49 */
   ATL_crm2am_aX_32,  /* index 50 */
   ATL_crm2am_aX_32,  /* index 51 */
   ATL_crm2am_aX_32,  /* index 52 */
   ATL_crm2am_aX_4x4,  /* index 53 */
   ATL_crm2am_aX_32,  /* index 54 */
   ATL_crm2am_aX_32,  /* index 55 */
   ATL_crm2am_aX_32,  /* index 56 */
   ATL_crm2am_aX_4x4,  /* index 57 */
   ATL_crm2am_aX_32,  /* index 58 */
   ATL_crm2am_aX_32,  /* index 59 */
   ATL_crm2am_aX_32,  /* index 60 */
   ATL_crm2am_aX_4x4,  /* index 61 */
   ATL_crm2am_aX_32,  /* index 62 */
   ATL_crm2am_aX_32,  /* index 63 */
   ATL_crm2am_aX_32,  /* index 64 */
   ATL_crm2am_aX_4x4,  /* index 65 */
   ATL_crm2am_aX_32,  /* index 66 */
   ATL_crm2am_aX_32,  /* index 67 */
   ATL_crm2am_aX_32,  /* index 68 */
   ATL_crm2am_aX_4x4,  /* index 69 */
   ATL_crm2am_aX_32,  /* index 70 */
   ATL_crm2am_aX_32,  /* index 71 */
   ATL_crm2am_aX_32,  /* index 72 */
   ATL_crm2am_aX_4x4,  /* index 73 */
   ATL_crm2am_aX_32,  /* index 74 */
   ATL_crm2am_aX_32,  /* index 75 */
   ATL_crm2am_aX_32,  /* index 76 */
   ATL_crm2am_aX_4x4   /* index 77 */
};

static const cm2am_t ATL_RKK_B2BLK_aX[78] =
{
   ATL_ccm2am_aX_3,  /* index 0 */
   ATL_ccm2am_aX_3,  /* index 1 */
   ATL_ccm2am_aX_1,  /* index 2 */
   ATL_ccm2am_aX_1,  /* index 3 */
   ATL_ccm2am_aX_1,  /* index 4 */
   ATL_ccm2am_aX_1,  /* index 5 */
   ATL_ccm2am_aX_1,  /* index 6 */
   ATL_ccm2am_aX_1,  /* index 7 */
   ATL_ccm2am_aX_1,  /* index 8 */
   ATL_ccm2am_aX_1,  /* index 9 */
   ATL_ccm2am_aX_1,  /* index 10 */
   ATL_ccm2am_aX_1,  /* index 11 */
   ATL_ccm2am_aX_1,  /* index 12 */
   ATL_ccm2am_aX_1,  /* index 13 */
   ATL_ccm2am_aX_1,  /* index 14 */
   ATL_ccm2am_aX_1,  /* index 15 */
   ATL_ccm2am_aX_1,  /* index 16 */
   ATL_ccm2am_aX_1,  /* index 17 */
   ATL_ccm2am_aX_1,  /* index 18 */
   ATL_ccm2am_aX_1,  /* index 19 */
   ATL_ccm2am_aX_1,  /* index 20 */
   ATL_ccm2am_aX_1,  /* index 21 */
   ATL_ccm2am_aX_1,  /* index 22 */
   ATL_ccm2am_aX_1,  /* index 23 */
   ATL_ccm2am_aX_1,  /* index 24 */
   ATL_ccm2am_aX_1,  /* index 25 */
   ATL_ccm2am_aX_1,  /* index 26 */
   ATL_ccm2am_aX_1,  /* index 27 */
   ATL_ccm2am_aX_1,  /* index 28 */
   ATL_ccm2am_aX_1,  /* index 29 */
   ATL_ccm2am_aX_1,  /* index 30 */
   ATL_ccm2am_aX_1,  /* index 31 */
   ATL_ccm2am_aX_1,  /* index 32 */
   ATL_ccm2am_aX_4x2,  /* index 33 */
   ATL_ccm2am_aX_1,  /* index 34 */
   ATL_ccm2am_aX_1,  /* index 35 */
   ATL_ccm2am_aX_1,  /* index 36 */
   ATL_ccm2am_aX_4x2,  /* index 37 */
   ATL_ccm2am_aX_1,  /* index 38 */
   ATL_ccm2am_aX_1,  /* index 39 */
   ATL_ccm2am_aX_1,  /* index 40 */
   ATL_ccm2am_aX_4x2,  /* index 41 */
   ATL_ccm2am_aX_1,  /* index 42 */
   ATL_ccm2am_aX_1,  /* index 43 */
   ATL_ccm2am_aX_1,  /* index 44 */
   ATL_ccm2am_aX_4x2,  /* index 45 */
   ATL_ccm2am_aX_1,  /* index 46 */
   ATL_ccm2am_aX_1,  /* index 47 */
   ATL_ccm2am_aX_1,  /* index 48 */
   ATL_ccm2am_aX_4x2,  /* index 49 */
   ATL_ccm2am_aX_1,  /* index 50 */
   ATL_ccm2am_aX_1,  /* index 51 */
   ATL_ccm2am_aX_1,  /* index 52 */
   ATL_ccm2am_aX_4x2,  /* index 53 */
   ATL_ccm2am_aX_1,  /* index 54 */
   ATL_ccm2am_aX_1,  /* index 55 */
   ATL_ccm2am_aX_1,  /* index 56 */
   ATL_ccm2am_aX_4x2,  /* index 57 */
   ATL_ccm2am_aX_1,  /* index 58 */
   ATL_ccm2am_aX_1,  /* index 59 */
   ATL_ccm2am_aX_1,  /* index 60 */
   ATL_ccm2am_aX_4x2,  /* index 61 */
   ATL_ccm2am_aX_1,  /* index 62 */
   ATL_ccm2am_aX_1,  /* index 63 */
   ATL_ccm2am_aX_1,  /* index 64 */
   ATL_ccm2am_aX_4x2,  /* index 65 */
   ATL_ccm2am_aX_1,  /* index 66 */
   ATL_ccm2am_aX_1,  /* index 67 */
   ATL_ccm2am_aX_1,  /* index 68 */
   ATL_ccm2am_aX_4x2,  /* index 69 */
   ATL_ccm2am_aX_1,  /* index 70 */
   ATL_ccm2am_aX_1,  /* index 71 */
   ATL_ccm2am_aX_1,  /* index 72 */
   ATL_ccm2am_aX_4x2,  /* index 73 */
   ATL_ccm2am_aX_1,  /* index 74 */
   ATL_ccm2am_aX_1,  /* index 75 */
   ATL_ccm2am_aX_1,  /* index 76 */
   ATL_ccm2am_aX_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_BT2BLK_aX[78] =
{
   ATL_crm2am_aX_3,  /* index 0 */
   ATL_crm2am_aX_3,  /* index 1 */
   ATL_crm2am_aX_1,  /* index 2 */
   ATL_crm2am_aX_1,  /* index 3 */
   ATL_crm2am_aX_1,  /* index 4 */
   ATL_crm2am_aX_1,  /* index 5 */
   ATL_crm2am_aX_1,  /* index 6 */
   ATL_crm2am_aX_1,  /* index 7 */
   ATL_crm2am_aX_1,  /* index 8 */
   ATL_crm2am_aX_1,  /* index 9 */
   ATL_crm2am_aX_1,  /* index 10 */
   ATL_crm2am_aX_1,  /* index 11 */
   ATL_crm2am_aX_1,  /* index 12 */
   ATL_crm2am_aX_1,  /* index 13 */
   ATL_crm2am_aX_1,  /* index 14 */
   ATL_crm2am_aX_1,  /* index 15 */
   ATL_crm2am_aX_1,  /* index 16 */
   ATL_crm2am_aX_1,  /* index 17 */
   ATL_crm2am_aX_1,  /* index 18 */
   ATL_crm2am_aX_1,  /* index 19 */
   ATL_crm2am_aX_1,  /* index 20 */
   ATL_crm2am_aX_1,  /* index 21 */
   ATL_crm2am_aX_1,  /* index 22 */
   ATL_crm2am_aX_1,  /* index 23 */
   ATL_crm2am_aX_1,  /* index 24 */
   ATL_crm2am_aX_1,  /* index 25 */
   ATL_crm2am_aX_1,  /* index 26 */
   ATL_crm2am_aX_1,  /* index 27 */
   ATL_crm2am_aX_1,  /* index 28 */
   ATL_crm2am_aX_1,  /* index 29 */
   ATL_crm2am_aX_1,  /* index 30 */
   ATL_crm2am_aX_1,  /* index 31 */
   ATL_crm2am_aX_1,  /* index 32 */
   ATL_crm2am_aX_4x2,  /* index 33 */
   ATL_crm2am_aX_1,  /* index 34 */
   ATL_crm2am_aX_1,  /* index 35 */
   ATL_crm2am_aX_1,  /* index 36 */
   ATL_crm2am_aX_4x2,  /* index 37 */
   ATL_crm2am_aX_1,  /* index 38 */
   ATL_crm2am_aX_1,  /* index 39 */
   ATL_crm2am_aX_1,  /* index 40 */
   ATL_crm2am_aX_4x2,  /* index 41 */
   ATL_crm2am_aX_1,  /* index 42 */
   ATL_crm2am_aX_1,  /* index 43 */
   ATL_crm2am_aX_1,  /* index 44 */
   ATL_crm2am_aX_4x2,  /* index 45 */
   ATL_crm2am_aX_1,  /* index 46 */
   ATL_crm2am_aX_1,  /* index 47 */
   ATL_crm2am_aX_1,  /* index 48 */
   ATL_crm2am_aX_4x2,  /* index 49 */
   ATL_crm2am_aX_1,  /* index 50 */
   ATL_crm2am_aX_1,  /* index 51 */
   ATL_crm2am_aX_1,  /* index 52 */
   ATL_crm2am_aX_4x2,  /* index 53 */
   ATL_crm2am_aX_1,  /* index 54 */
   ATL_crm2am_aX_1,  /* index 55 */
   ATL_crm2am_aX_1,  /* index 56 */
   ATL_crm2am_aX_4x2,  /* index 57 */
   ATL_crm2am_aX_1,  /* index 58 */
   ATL_crm2am_aX_1,  /* index 59 */
   ATL_crm2am_aX_1,  /* index 60 */
   ATL_crm2am_aX_4x2,  /* index 61 */
   ATL_crm2am_aX_1,  /* index 62 */
   ATL_crm2am_aX_1,  /* index 63 */
   ATL_crm2am_aX_1,  /* index 64 */
   ATL_crm2am_aX_4x2,  /* index 65 */
   ATL_crm2am_aX_1,  /* index 66 */
   ATL_crm2am_aX_1,  /* index 67 */
   ATL_crm2am_aX_1,  /* index 68 */
   ATL_crm2am_aX_4x2,  /* index 69 */
   ATL_crm2am_aX_1,  /* index 70 */
   ATL_crm2am_aX_1,  /* index 71 */
   ATL_crm2am_aX_1,  /* index 72 */
   ATL_crm2am_aX_4x2,  /* index 73 */
   ATL_crm2am_aX_1,  /* index 74 */
   ATL_crm2am_aX_1,  /* index 75 */
   ATL_crm2am_aX_1,  /* index 76 */
   ATL_crm2am_aX_4x2   /* index 77 */
};

static const cm2am_t ATL_RKK_AC2BLK_aX[78] =
{
   ATL_ccm2am_aX_12C,  /* index 0 */
   ATL_ccm2am_aX_12C,  /* index 1 */
   ATL_ccm2am_aX_32C,  /* index 2 */
   ATL_ccm2am_aX_32C,  /* index 3 */
   ATL_ccm2am_aX_32C,  /* index 4 */
   ATL_ccm2am_aX_32C,  /* index 5 */
   ATL_ccm2am_aX_32C,  /* index 6 */
   ATL_ccm2am_aX_32C,  /* index 7 */
   ATL_ccm2am_aX_32C,  /* index 8 */
   ATL_ccm2am_aX_32C,  /* index 9 */
   ATL_ccm2am_aX_32C,  /* index 10 */
   ATL_ccm2am_aX_32C,  /* index 11 */
   ATL_ccm2am_aX_32C,  /* index 12 */
   ATL_ccm2am_aX_32C,  /* index 13 */
   ATL_ccm2am_aX_32C,  /* index 14 */
   ATL_ccm2am_aX_32C,  /* index 15 */
   ATL_ccm2am_aX_32C,  /* index 16 */
   ATL_ccm2am_aX_32C,  /* index 17 */
   ATL_ccm2am_aX_32C,  /* index 18 */
   ATL_ccm2am_aX_32C,  /* index 19 */
   ATL_ccm2am_aX_32C,  /* index 20 */
   ATL_ccm2am_aX_32C,  /* index 21 */
   ATL_ccm2am_aX_32C,  /* index 22 */
   ATL_ccm2am_aX_32C,  /* index 23 */
   ATL_ccm2am_aX_32C,  /* index 24 */
   ATL_ccm2am_aX_32C,  /* index 25 */
   ATL_ccm2am_aX_32C,  /* index 26 */
   ATL_ccm2am_aX_32C,  /* index 27 */
   ATL_ccm2am_aX_32C,  /* index 28 */
   ATL_ccm2am_aX_32C,  /* index 29 */
   ATL_ccm2am_aX_32C,  /* index 30 */
   ATL_ccm2am_aX_32C,  /* index 31 */
   ATL_ccm2am_aX_32C,  /* index 32 */
   ATL_ccm2am_aX_4x4C,  /* index 33 */
   ATL_ccm2am_aX_32C,  /* index 34 */
   ATL_ccm2am_aX_32C,  /* index 35 */
   ATL_ccm2am_aX_32C,  /* index 36 */
   ATL_ccm2am_aX_4x4C,  /* index 37 */
   ATL_ccm2am_aX_32C,  /* index 38 */
   ATL_ccm2am_aX_32C,  /* index 39 */
   ATL_ccm2am_aX_32C,  /* index 40 */
   ATL_ccm2am_aX_4x4C,  /* index 41 */
   ATL_ccm2am_aX_32C,  /* index 42 */
   ATL_ccm2am_aX_32C,  /* index 43 */
   ATL_ccm2am_aX_32C,  /* index 44 */
   ATL_ccm2am_aX_4x4C,  /* index 45 */
   ATL_ccm2am_aX_32C,  /* index 46 */
   ATL_ccm2am_aX_32C,  /* index 47 */
   ATL_ccm2am_aX_32C,  /* index 48 */
   ATL_ccm2am_aX_4x4C,  /* index 49 */
   ATL_ccm2am_aX_32C,  /* index 50 */
   ATL_ccm2am_aX_32C,  /* index 51 */
   ATL_ccm2am_aX_32C,  /* index 52 */
   ATL_ccm2am_aX_4x4C,  /* index 53 */
   ATL_ccm2am_aX_32C,  /* index 54 */
   ATL_ccm2am_aX_32C,  /* index 55 */
   ATL_ccm2am_aX_32C,  /* index 56 */
   ATL_ccm2am_aX_4x4C,  /* index 57 */
   ATL_ccm2am_aX_32C,  /* index 58 */
   ATL_ccm2am_aX_32C,  /* index 59 */
   ATL_ccm2am_aX_32C,  /* index 60 */
   ATL_ccm2am_aX_4x4C,  /* index 61 */
   ATL_ccm2am_aX_32C,  /* index 62 */
   ATL_ccm2am_aX_32C,  /* index 63 */
   ATL_ccm2am_aX_32C,  /* index 64 */
   ATL_ccm2am_aX_4x4C,  /* index 65 */
   ATL_ccm2am_aX_32C,  /* index 66 */
   ATL_ccm2am_aX_32C,  /* index 67 */
   ATL_ccm2am_aX_32C,  /* index 68 */
   ATL_ccm2am_aX_4x4C,  /* index 69 */
   ATL_ccm2am_aX_32C,  /* index 70 */
   ATL_ccm2am_aX_32C,  /* index 71 */
   ATL_ccm2am_aX_32C,  /* index 72 */
   ATL_ccm2am_aX_4x4C,  /* index 73 */
   ATL_ccm2am_aX_32C,  /* index 74 */
   ATL_ccm2am_aX_32C,  /* index 75 */
   ATL_ccm2am_aX_32C,  /* index 76 */
   ATL_ccm2am_aX_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_AH2BLK_aX[78] =
{
   ATL_crm2am_aX_12C,  /* index 0 */
   ATL_crm2am_aX_12C,  /* index 1 */
   ATL_crm2am_aX_32C,  /* index 2 */
   ATL_crm2am_aX_32C,  /* index 3 */
   ATL_crm2am_aX_32C,  /* index 4 */
   ATL_crm2am_aX_32C,  /* index 5 */
   ATL_crm2am_aX_32C,  /* index 6 */
   ATL_crm2am_aX_32C,  /* index 7 */
   ATL_crm2am_aX_32C,  /* index 8 */
   ATL_crm2am_aX_32C,  /* index 9 */
   ATL_crm2am_aX_32C,  /* index 10 */
   ATL_crm2am_aX_32C,  /* index 11 */
   ATL_crm2am_aX_32C,  /* index 12 */
   ATL_crm2am_aX_32C,  /* index 13 */
   ATL_crm2am_aX_32C,  /* index 14 */
   ATL_crm2am_aX_32C,  /* index 15 */
   ATL_crm2am_aX_32C,  /* index 16 */
   ATL_crm2am_aX_32C,  /* index 17 */
   ATL_crm2am_aX_32C,  /* index 18 */
   ATL_crm2am_aX_32C,  /* index 19 */
   ATL_crm2am_aX_32C,  /* index 20 */
   ATL_crm2am_aX_32C,  /* index 21 */
   ATL_crm2am_aX_32C,  /* index 22 */
   ATL_crm2am_aX_32C,  /* index 23 */
   ATL_crm2am_aX_32C,  /* index 24 */
   ATL_crm2am_aX_32C,  /* index 25 */
   ATL_crm2am_aX_32C,  /* index 26 */
   ATL_crm2am_aX_32C,  /* index 27 */
   ATL_crm2am_aX_32C,  /* index 28 */
   ATL_crm2am_aX_32C,  /* index 29 */
   ATL_crm2am_aX_32C,  /* index 30 */
   ATL_crm2am_aX_32C,  /* index 31 */
   ATL_crm2am_aX_32C,  /* index 32 */
   ATL_crm2am_aX_4x4C,  /* index 33 */
   ATL_crm2am_aX_32C,  /* index 34 */
   ATL_crm2am_aX_32C,  /* index 35 */
   ATL_crm2am_aX_32C,  /* index 36 */
   ATL_crm2am_aX_4x4C,  /* index 37 */
   ATL_crm2am_aX_32C,  /* index 38 */
   ATL_crm2am_aX_32C,  /* index 39 */
   ATL_crm2am_aX_32C,  /* index 40 */
   ATL_crm2am_aX_4x4C,  /* index 41 */
   ATL_crm2am_aX_32C,  /* index 42 */
   ATL_crm2am_aX_32C,  /* index 43 */
   ATL_crm2am_aX_32C,  /* index 44 */
   ATL_crm2am_aX_4x4C,  /* index 45 */
   ATL_crm2am_aX_32C,  /* index 46 */
   ATL_crm2am_aX_32C,  /* index 47 */
   ATL_crm2am_aX_32C,  /* index 48 */
   ATL_crm2am_aX_4x4C,  /* index 49 */
   ATL_crm2am_aX_32C,  /* index 50 */
   ATL_crm2am_aX_32C,  /* index 51 */
   ATL_crm2am_aX_32C,  /* index 52 */
   ATL_crm2am_aX_4x4C,  /* index 53 */
   ATL_crm2am_aX_32C,  /* index 54 */
   ATL_crm2am_aX_32C,  /* index 55 */
   ATL_crm2am_aX_32C,  /* index 56 */
   ATL_crm2am_aX_4x4C,  /* index 57 */
   ATL_crm2am_aX_32C,  /* index 58 */
   ATL_crm2am_aX_32C,  /* index 59 */
   ATL_crm2am_aX_32C,  /* index 60 */
   ATL_crm2am_aX_4x4C,  /* index 61 */
   ATL_crm2am_aX_32C,  /* index 62 */
   ATL_crm2am_aX_32C,  /* index 63 */
   ATL_crm2am_aX_32C,  /* index 64 */
   ATL_crm2am_aX_4x4C,  /* index 65 */
   ATL_crm2am_aX_32C,  /* index 66 */
   ATL_crm2am_aX_32C,  /* index 67 */
   ATL_crm2am_aX_32C,  /* index 68 */
   ATL_crm2am_aX_4x4C,  /* index 69 */
   ATL_crm2am_aX_32C,  /* index 70 */
   ATL_crm2am_aX_32C,  /* index 71 */
   ATL_crm2am_aX_32C,  /* index 72 */
   ATL_crm2am_aX_4x4C,  /* index 73 */
   ATL_crm2am_aX_32C,  /* index 74 */
   ATL_crm2am_aX_32C,  /* index 75 */
   ATL_crm2am_aX_32C,  /* index 76 */
   ATL_crm2am_aX_4x4C   /* index 77 */
};

static const cm2am_t ATL_RKK_BC2BLK_aX[78] =
{
   ATL_ccm2am_aX_3C,  /* index 0 */
   ATL_ccm2am_aX_3C,  /* index 1 */
   ATL_ccm2am_aX_1C,  /* index 2 */
   ATL_ccm2am_aX_1C,  /* index 3 */
   ATL_ccm2am_aX_1C,  /* index 4 */
   ATL_ccm2am_aX_1C,  /* index 5 */
   ATL_ccm2am_aX_1C,  /* index 6 */
   ATL_ccm2am_aX_1C,  /* index 7 */
   ATL_ccm2am_aX_1C,  /* index 8 */
   ATL_ccm2am_aX_1C,  /* index 9 */
   ATL_ccm2am_aX_1C,  /* index 10 */
   ATL_ccm2am_aX_1C,  /* index 11 */
   ATL_ccm2am_aX_1C,  /* index 12 */
   ATL_ccm2am_aX_1C,  /* index 13 */
   ATL_ccm2am_aX_1C,  /* index 14 */
   ATL_ccm2am_aX_1C,  /* index 15 */
   ATL_ccm2am_aX_1C,  /* index 16 */
   ATL_ccm2am_aX_1C,  /* index 17 */
   ATL_ccm2am_aX_1C,  /* index 18 */
   ATL_ccm2am_aX_1C,  /* index 19 */
   ATL_ccm2am_aX_1C,  /* index 20 */
   ATL_ccm2am_aX_1C,  /* index 21 */
   ATL_ccm2am_aX_1C,  /* index 22 */
   ATL_ccm2am_aX_1C,  /* index 23 */
   ATL_ccm2am_aX_1C,  /* index 24 */
   ATL_ccm2am_aX_1C,  /* index 25 */
   ATL_ccm2am_aX_1C,  /* index 26 */
   ATL_ccm2am_aX_1C,  /* index 27 */
   ATL_ccm2am_aX_1C,  /* index 28 */
   ATL_ccm2am_aX_1C,  /* index 29 */
   ATL_ccm2am_aX_1C,  /* index 30 */
   ATL_ccm2am_aX_1C,  /* index 31 */
   ATL_ccm2am_aX_1C,  /* index 32 */
   ATL_ccm2am_aX_4x2C,  /* index 33 */
   ATL_ccm2am_aX_1C,  /* index 34 */
   ATL_ccm2am_aX_1C,  /* index 35 */
   ATL_ccm2am_aX_1C,  /* index 36 */
   ATL_ccm2am_aX_4x2C,  /* index 37 */
   ATL_ccm2am_aX_1C,  /* index 38 */
   ATL_ccm2am_aX_1C,  /* index 39 */
   ATL_ccm2am_aX_1C,  /* index 40 */
   ATL_ccm2am_aX_4x2C,  /* index 41 */
   ATL_ccm2am_aX_1C,  /* index 42 */
   ATL_ccm2am_aX_1C,  /* index 43 */
   ATL_ccm2am_aX_1C,  /* index 44 */
   ATL_ccm2am_aX_4x2C,  /* index 45 */
   ATL_ccm2am_aX_1C,  /* index 46 */
   ATL_ccm2am_aX_1C,  /* index 47 */
   ATL_ccm2am_aX_1C,  /* index 48 */
   ATL_ccm2am_aX_4x2C,  /* index 49 */
   ATL_ccm2am_aX_1C,  /* index 50 */
   ATL_ccm2am_aX_1C,  /* index 51 */
   ATL_ccm2am_aX_1C,  /* index 52 */
   ATL_ccm2am_aX_4x2C,  /* index 53 */
   ATL_ccm2am_aX_1C,  /* index 54 */
   ATL_ccm2am_aX_1C,  /* index 55 */
   ATL_ccm2am_aX_1C,  /* index 56 */
   ATL_ccm2am_aX_4x2C,  /* index 57 */
   ATL_ccm2am_aX_1C,  /* index 58 */
   ATL_ccm2am_aX_1C,  /* index 59 */
   ATL_ccm2am_aX_1C,  /* index 60 */
   ATL_ccm2am_aX_4x2C,  /* index 61 */
   ATL_ccm2am_aX_1C,  /* index 62 */
   ATL_ccm2am_aX_1C,  /* index 63 */
   ATL_ccm2am_aX_1C,  /* index 64 */
   ATL_ccm2am_aX_4x2C,  /* index 65 */
   ATL_ccm2am_aX_1C,  /* index 66 */
   ATL_ccm2am_aX_1C,  /* index 67 */
   ATL_ccm2am_aX_1C,  /* index 68 */
   ATL_ccm2am_aX_4x2C,  /* index 69 */
   ATL_ccm2am_aX_1C,  /* index 70 */
   ATL_ccm2am_aX_1C,  /* index 71 */
   ATL_ccm2am_aX_1C,  /* index 72 */
   ATL_ccm2am_aX_4x2C,  /* index 73 */
   ATL_ccm2am_aX_1C,  /* index 74 */
   ATL_ccm2am_aX_1C,  /* index 75 */
   ATL_ccm2am_aX_1C,  /* index 76 */
   ATL_ccm2am_aX_4x2C   /* index 77 */
};

static const cm2am_t ATL_RKK_BH2BLK_aX[78] =
{
   ATL_crm2am_aX_3C,  /* index 0 */
   ATL_crm2am_aX_3C,  /* index 1 */
   ATL_crm2am_aX_1C,  /* index 2 */
   ATL_crm2am_aX_1C,  /* index 3 */
   ATL_crm2am_aX_1C,  /* index 4 */
   ATL_crm2am_aX_1C,  /* index 5 */
   ATL_crm2am_aX_1C,  /* index 6 */
   ATL_crm2am_aX_1C,  /* index 7 */
   ATL_crm2am_aX_1C,  /* index 8 */
   ATL_crm2am_aX_1C,  /* index 9 */
   ATL_crm2am_aX_1C,  /* index 10 */
   ATL_crm2am_aX_1C,  /* index 11 */
   ATL_crm2am_aX_1C,  /* index 12 */
   ATL_crm2am_aX_1C,  /* index 13 */
   ATL_crm2am_aX_1C,  /* index 14 */
   ATL_crm2am_aX_1C,  /* index 15 */
   ATL_crm2am_aX_1C,  /* index 16 */
   ATL_crm2am_aX_1C,  /* index 17 */
   ATL_crm2am_aX_1C,  /* index 18 */
   ATL_crm2am_aX_1C,  /* index 19 */
   ATL_crm2am_aX_1C,  /* index 20 */
   ATL_crm2am_aX_1C,  /* index 21 */
   ATL_crm2am_aX_1C,  /* index 22 */
   ATL_crm2am_aX_1C,  /* index 23 */
   ATL_crm2am_aX_1C,  /* index 24 */
   ATL_crm2am_aX_1C,  /* index 25 */
   ATL_crm2am_aX_1C,  /* index 26 */
   ATL_crm2am_aX_1C,  /* index 27 */
   ATL_crm2am_aX_1C,  /* index 28 */
   ATL_crm2am_aX_1C,  /* index 29 */
   ATL_crm2am_aX_1C,  /* index 30 */
   ATL_crm2am_aX_1C,  /* index 31 */
   ATL_crm2am_aX_1C,  /* index 32 */
   ATL_crm2am_aX_4x2C,  /* index 33 */
   ATL_crm2am_aX_1C,  /* index 34 */
   ATL_crm2am_aX_1C,  /* index 35 */
   ATL_crm2am_aX_1C,  /* index 36 */
   ATL_crm2am_aX_4x2C,  /* index 37 */
   ATL_crm2am_aX_1C,  /* index 38 */
   ATL_crm2am_aX_1C,  /* index 39 */
   ATL_crm2am_aX_1C,  /* index 40 */
   ATL_crm2am_aX_4x2C,  /* index 41 */
   ATL_crm2am_aX_1C,  /* index 42 */
   ATL_crm2am_aX_1C,  /* index 43 */
   ATL_crm2am_aX_1C,  /* index 44 */
   ATL_crm2am_aX_4x2C,  /* index 45 */
   ATL_crm2am_aX_1C,  /* index 46 */
   ATL_crm2am_aX_1C,  /* index 47 */
   ATL_crm2am_aX_1C,  /* index 48 */
   ATL_crm2am_aX_4x2C,  /* index 49 */
   ATL_crm2am_aX_1C,  /* index 50 */
   ATL_crm2am_aX_1C,  /* index 51 */
   ATL_crm2am_aX_1C,  /* index 52 */
   ATL_crm2am_aX_4x2C,  /* index 53 */
   ATL_crm2am_aX_1C,  /* index 54 */
   ATL_crm2am_aX_1C,  /* index 55 */
   ATL_crm2am_aX_1C,  /* index 56 */
   ATL_crm2am_aX_4x2C,  /* index 57 */
   ATL_crm2am_aX_1C,  /* index 58 */
   ATL_crm2am_aX_1C,  /* index 59 */
   ATL_crm2am_aX_1C,  /* index 60 */
   ATL_crm2am_aX_4x2C,  /* index 61 */
   ATL_crm2am_aX_1C,  /* index 62 */
   ATL_crm2am_aX_1C,  /* index 63 */
   ATL_crm2am_aX_1C,  /* index 64 */
   ATL_crm2am_aX_4x2C,  /* index 65 */
   ATL_crm2am_aX_1C,  /* index 66 */
   ATL_crm2am_aX_1C,  /* index 67 */
   ATL_crm2am_aX_1C,  /* index 68 */
   ATL_crm2am_aX_4x2C,  /* index 69 */
   ATL_crm2am_aX_1C,  /* index 70 */
   ATL_crm2am_aX_1C,  /* index 71 */
   ATL_crm2am_aX_1C,  /* index 72 */
   ATL_crm2am_aX_4x2C,  /* index 73 */
   ATL_crm2am_aX_1C,  /* index 74 */
   ATL_crm2am_aX_1C,  /* index 75 */
   ATL_crm2am_aX_1C,  /* index 76 */
   ATL_crm2am_aX_4x2C   /* index 77 */
};

static const ammkern_t ATL_AMM_KERN_RKK[78] =
{
   ATL_sAMRK_0_3_3_12x3x1_b0,
   ATL_sAMRK_0_4_3_12x3x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_36_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_40_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_44_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_48_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_52_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_56_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_60_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_64_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_68_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_72_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_76_13_4x2x4_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_0_3_32x1x1_b0,
   ATL_sAMRK_0_80_13_4x2x4_b0
};

static const ammkern_t ATL_AMM_KERN_RKK_b1[78] =
{
   ATL_sAMRK_0_3_3_12x3x1_b1,
   ATL_sAMRK_0_4_3_12x3x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_36_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_40_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_44_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_48_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_52_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_56_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_60_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_64_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_68_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_72_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_76_13_4x2x4_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_0_3_32x1x1_b1,
   ATL_sAMRK_0_80_13_4x2x4_b1
};

static const ammkern_t ATL_AMM_KERN_RKK_bn[78] =
{
   ATL_sAMRK_0_3_3_12x3x1_bn,
   ATL_sAMRK_0_4_3_12x3x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_36_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_40_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_44_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_48_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_52_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_56_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_60_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_64_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_68_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_72_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_76_13_4x2x4_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_0_3_32x1x1_bn,
   ATL_sAMRK_0_80_13_4x2x4_bn
};


#endif  /* end include file guard */
