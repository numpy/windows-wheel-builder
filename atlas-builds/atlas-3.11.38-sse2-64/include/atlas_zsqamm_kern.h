#ifndef ATLAS_ZAMM_KERN_H
   #define ATLAS_ZAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 16
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 16
#endif

void ATL_dAMMM_0_0_3_28x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_28x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_28x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_22x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_22x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_22x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_20x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_20x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_20x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_8x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_8x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_13_8x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_4x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_4x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_0_3_4x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_108_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_108_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_108_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_96_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_96_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_96_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_72_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_72_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_72_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_60_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_60_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_60_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_48_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_48_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_48_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_36_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_36_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_36_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_32_13_8x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_32_13_8x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_32_13_8x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_28_3_28x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_28_3_28x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_28_3_28x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_24_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_24_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_24_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_22x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_22x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_22x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_20x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_20x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_20x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_12_13_12x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_12_13_12x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_12_13_12x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_8_13_8x1x2_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_8_13_8x1x2_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_8_13_8x1x2_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_6_3_6x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_6_3_6x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_6_3_6x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_4x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_4x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_dAMMM_0_120_3_4x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);

static const ammkern_t ATL_AMM_KERN_b0[16] =
{
   ATL_dAMMM_0_120_3_4x1x1_b0,
   ATL_dAMMM_0_6_3_6x1x1_b0,
   ATL_dAMMM_0_8_13_8x1x2_b0,
   ATL_dAMMM_0_12_13_12x1x2_b0,
   ATL_dAMMM_0_120_3_20x1x1_b0,
   ATL_dAMMM_0_120_3_22x1x1_b0,
   ATL_dAMMM_0_24_13_12x1x2_b0,
   ATL_dAMMM_0_28_3_28x1x1_b0,
   ATL_dAMMM_0_32_13_8x1x2_b0,
   ATL_dAMMM_0_36_13_12x1x2_b0,
   ATL_dAMMM_0_48_13_12x1x2_b0,
   ATL_dAMMM_0_60_13_12x1x2_b0,
   ATL_dAMMM_0_72_13_12x1x2_b0,
   ATL_dAMMM_0_96_13_12x1x2_b0,
   ATL_dAMMM_0_108_13_12x1x2_b0,
   ATL_dAMMM_0_120_13_12x1x2_b0
};

static const ammkern_t ATL_AMM_KERN_b1[16] =
{
   ATL_dAMMM_0_120_3_4x1x1_b1,
   ATL_dAMMM_0_6_3_6x1x1_b1,
   ATL_dAMMM_0_8_13_8x1x2_b1,
   ATL_dAMMM_0_12_13_12x1x2_b1,
   ATL_dAMMM_0_120_3_20x1x1_b1,
   ATL_dAMMM_0_120_3_22x1x1_b1,
   ATL_dAMMM_0_24_13_12x1x2_b1,
   ATL_dAMMM_0_28_3_28x1x1_b1,
   ATL_dAMMM_0_32_13_8x1x2_b1,
   ATL_dAMMM_0_36_13_12x1x2_b1,
   ATL_dAMMM_0_48_13_12x1x2_b1,
   ATL_dAMMM_0_60_13_12x1x2_b1,
   ATL_dAMMM_0_72_13_12x1x2_b1,
   ATL_dAMMM_0_96_13_12x1x2_b1,
   ATL_dAMMM_0_108_13_12x1x2_b1,
   ATL_dAMMM_0_120_13_12x1x2_b1
};

static const ammkern_t ATL_AMM_KERN_bn[16] =
{
   ATL_dAMMM_0_120_3_4x1x1_bn,
   ATL_dAMMM_0_6_3_6x1x1_bn,
   ATL_dAMMM_0_8_13_8x1x2_bn,
   ATL_dAMMM_0_12_13_12x1x2_bn,
   ATL_dAMMM_0_120_3_20x1x1_bn,
   ATL_dAMMM_0_120_3_22x1x1_bn,
   ATL_dAMMM_0_24_13_12x1x2_bn,
   ATL_dAMMM_0_28_3_28x1x1_bn,
   ATL_dAMMM_0_32_13_8x1x2_bn,
   ATL_dAMMM_0_36_13_12x1x2_bn,
   ATL_dAMMM_0_48_13_12x1x2_bn,
   ATL_dAMMM_0_60_13_12x1x2_bn,
   ATL_dAMMM_0_72_13_12x1x2_bn,
   ATL_dAMMM_0_96_13_12x1x2_bn,
   ATL_dAMMM_0_108_13_12x1x2_bn,
   ATL_dAMMM_0_120_13_12x1x2_bn
};

static const ammkern_t ATL_AMM_KERN_K1[16] =
{
   ATL_dAMMM_0_0_3_4x1x1_b0,
   ATL_dAMMM_0_0_3_6x1x1_b0,
   ATL_dAMMM_0_0_13_8x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_3_20x1x1_b0,
   ATL_dAMMM_0_0_3_22x1x1_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_3_28x1x1_b0,
   ATL_dAMMM_0_0_13_8x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0,
   ATL_dAMMM_0_0_13_12x1x2_b0
};

static const ammkern_t ATL_AMM_KERN_K1_b1[16] =
{
   ATL_dAMMM_0_0_3_4x1x1_b1,
   ATL_dAMMM_0_0_3_6x1x1_b1,
   ATL_dAMMM_0_0_13_8x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_3_20x1x1_b1,
   ATL_dAMMM_0_0_3_22x1x1_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_3_28x1x1_b1,
   ATL_dAMMM_0_0_13_8x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1,
   ATL_dAMMM_0_0_13_12x1x2_b1
};

static const ammkern_t ATL_AMM_KERN_K1_bn[16] =
{
   ATL_dAMMM_0_0_3_4x1x1_bn,
   ATL_dAMMM_0_0_3_6x1x1_bn,
   ATL_dAMMM_0_0_13_8x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_3_20x1x1_bn,
   ATL_dAMMM_0_0_3_22x1x1_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_3_28x1x1_bn,
   ATL_dAMMM_0_0_13_8x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn,
   ATL_dAMMM_0_0_13_12x1x2_bn
};


#endif  /* end include file guard */
