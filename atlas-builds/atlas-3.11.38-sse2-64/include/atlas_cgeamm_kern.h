#ifndef ATLAS_CAMM_KERN_H
   #define ATLAS_CAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 17
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 17
#endif

void ATL_sAMMM_0_0_3_32x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_32x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_32x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_12x3x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_12x3x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_12x3x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_80_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_80_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_80_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_76_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_76_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_76_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_72_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_72_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_72_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_68_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_68_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_68_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_60_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_60_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_60_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_56_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_56_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_56_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_52_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_52_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_52_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_48_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_48_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_48_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_44_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_44_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_44_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_40_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_40_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_40_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_36_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_36_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_36_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_3_32x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_3_32x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_3_32x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_32x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_32x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_32x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_20_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_20_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_20_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_12_3_12x3x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_12_3_12x3x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_12_3_12x3x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_8_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_8_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_8_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_4_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_4_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_4_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);

static const ammkern_t ATL_AMM_KERN_b0[17] =
{
   ATL_sAMMM_0_4_13_4x2x4_b0,
   ATL_sAMMM_0_8_13_4x2x4_b0,
   ATL_sAMMM_0_12_3_12x3x1_b0,
   ATL_sAMMM_0_20_13_4x2x4_b0,
   ATL_sAMMM_0_24_3_32x1x1_b0,
   ATL_sAMMM_0_28_3_32x1x1_b0,
   ATL_sAMMM_0_36_13_4x2x4_b0,
   ATL_sAMMM_0_40_13_4x2x4_b0,
   ATL_sAMMM_0_44_13_4x2x4_b0,
   ATL_sAMMM_0_48_13_4x2x4_b0,
   ATL_sAMMM_0_52_13_4x2x4_b0,
   ATL_sAMMM_0_56_13_4x2x4_b0,
   ATL_sAMMM_0_60_13_4x2x4_b0,
   ATL_sAMMM_0_68_13_4x2x4_b0,
   ATL_sAMMM_0_72_13_4x2x4_b0,
   ATL_sAMMM_0_76_13_4x2x4_b0,
   ATL_sAMMM_0_80_13_4x2x4_b0
};

static const ammkern_t ATL_AMM_KERN_b1[17] =
{
   ATL_sAMMM_0_4_13_4x2x4_b1,
   ATL_sAMMM_0_8_13_4x2x4_b1,
   ATL_sAMMM_0_12_3_12x3x1_b1,
   ATL_sAMMM_0_20_13_4x2x4_b1,
   ATL_sAMMM_0_24_3_32x1x1_b1,
   ATL_sAMMM_0_28_3_32x1x1_b1,
   ATL_sAMMM_0_36_13_4x2x4_b1,
   ATL_sAMMM_0_40_13_4x2x4_b1,
   ATL_sAMMM_0_44_13_4x2x4_b1,
   ATL_sAMMM_0_48_13_4x2x4_b1,
   ATL_sAMMM_0_52_13_4x2x4_b1,
   ATL_sAMMM_0_56_13_4x2x4_b1,
   ATL_sAMMM_0_60_13_4x2x4_b1,
   ATL_sAMMM_0_68_13_4x2x4_b1,
   ATL_sAMMM_0_72_13_4x2x4_b1,
   ATL_sAMMM_0_76_13_4x2x4_b1,
   ATL_sAMMM_0_80_13_4x2x4_b1
};

static const ammkern_t ATL_AMM_KERN_bn[17] =
{
   ATL_sAMMM_0_4_13_4x2x4_bn,
   ATL_sAMMM_0_8_13_4x2x4_bn,
   ATL_sAMMM_0_12_3_12x3x1_bn,
   ATL_sAMMM_0_20_13_4x2x4_bn,
   ATL_sAMMM_0_24_3_32x1x1_bn,
   ATL_sAMMM_0_28_3_32x1x1_bn,
   ATL_sAMMM_0_36_13_4x2x4_bn,
   ATL_sAMMM_0_40_13_4x2x4_bn,
   ATL_sAMMM_0_44_13_4x2x4_bn,
   ATL_sAMMM_0_48_13_4x2x4_bn,
   ATL_sAMMM_0_52_13_4x2x4_bn,
   ATL_sAMMM_0_56_13_4x2x4_bn,
   ATL_sAMMM_0_60_13_4x2x4_bn,
   ATL_sAMMM_0_68_13_4x2x4_bn,
   ATL_sAMMM_0_72_13_4x2x4_bn,
   ATL_sAMMM_0_76_13_4x2x4_bn,
   ATL_sAMMM_0_80_13_4x2x4_bn
};

static const ammkern_t ATL_AMM_KERN_K1[17] =
{
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_3_12x3x1_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_3_32x1x1_b0,
   ATL_sAMMM_0_0_3_32x1x1_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0
};

static const ammkern_t ATL_AMM_KERN_K1_b1[17] =
{
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_3_12x3x1_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_3_32x1x1_b1,
   ATL_sAMMM_0_0_3_32x1x1_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1
};

static const ammkern_t ATL_AMM_KERN_K1_bn[17] =
{
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_3_12x3x1_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_3_32x1x1_bn,
   ATL_sAMMM_0_0_3_32x1x1_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn
};


#endif  /* end include file guard */
