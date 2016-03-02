#ifndef ATLAS_SAMM_KERN_H
   #define ATLAS_SAMM_KERN_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
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
void ATL_sAMMM_0_0_3_8x4x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_8x4x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_0_3_8x4x1_bn
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
void ATL_sAMMM_0_512_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_512_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_512_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_496_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_496_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_496_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_488_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_488_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_488_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_480_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_480_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_480_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_432_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_432_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_432_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_416_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_416_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_416_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_400_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_400_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_400_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_384_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_384_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_384_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_368_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_368_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_368_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_360_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_360_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_360_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_352_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_352_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_352_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_328_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_328_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_328_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_256_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_256_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_256_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_252_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_252_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_252_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_248_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_248_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_248_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_240_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_240_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_240_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_224_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_224_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_224_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_220_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_220_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_220_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_208_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_208_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_208_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_200_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_200_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_200_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_192_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_192_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_192_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_184_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_184_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_184_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_176_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_176_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_176_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_168_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_168_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_168_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_160_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_160_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_160_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_152_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_152_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_152_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_144_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_144_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_144_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_136_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_136_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_136_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_128_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_128_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_128_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_120_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_120_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_120_13_4x2x4_bn
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
void ATL_sAMMM_0_64_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_64_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_64_13_4x2x4_bn
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
void ATL_sAMMM_0_32_3_32x1x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_32_3_32x1x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_32_3_32x1x1_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_13_4x2x4_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_13_4x2x4_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_28_13_4x2x4_bn
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_8x4x1_b0
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_8x4x1_b1
   (ATL_CSZT,ATL_CSZT,ATL_CSZT,const TYPE*,const TYPE*,TYPE*,
    const TYPE*,const TYPE*,const TYPE*);
void ATL_sAMMM_0_24_3_8x4x1_bn
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

static const ammkern_t ATL_AMM_KERN_b0[48] =
{
   ATL_sAMMM_0_4_13_4x2x4_b0,
   ATL_sAMMM_0_8_13_4x2x4_b0,
   ATL_sAMMM_0_12_3_12x3x1_b0,
   ATL_sAMMM_0_20_13_4x2x4_b0,
   ATL_sAMMM_0_24_3_8x4x1_b0,
   ATL_sAMMM_0_28_13_4x2x4_b0,
   ATL_sAMMM_0_32_3_32x1x1_b0,
   ATL_sAMMM_0_36_13_4x2x4_b0,
   ATL_sAMMM_0_40_13_4x2x4_b0,
   ATL_sAMMM_0_48_13_4x2x4_b0,
   ATL_sAMMM_0_52_13_4x2x4_b0,
   ATL_sAMMM_0_56_13_4x2x4_b0,
   ATL_sAMMM_0_60_13_4x2x4_b0,
   ATL_sAMMM_0_64_13_4x2x4_b0,
   ATL_sAMMM_0_68_13_4x2x4_b0,
   ATL_sAMMM_0_72_13_4x2x4_b0,
   ATL_sAMMM_0_76_13_4x2x4_b0,
   ATL_sAMMM_0_80_13_4x2x4_b0,
   ATL_sAMMM_0_120_13_4x2x4_b0,
   ATL_sAMMM_0_128_13_4x2x4_b0,
   ATL_sAMMM_0_136_13_4x2x4_b0,
   ATL_sAMMM_0_144_13_4x2x4_b0,
   ATL_sAMMM_0_152_13_4x2x4_b0,
   ATL_sAMMM_0_160_13_4x2x4_b0,
   ATL_sAMMM_0_168_13_4x2x4_b0,
   ATL_sAMMM_0_176_13_4x2x4_b0,
   ATL_sAMMM_0_184_13_4x2x4_b0,
   ATL_sAMMM_0_192_13_4x2x4_b0,
   ATL_sAMMM_0_200_13_4x2x4_b0,
   ATL_sAMMM_0_208_13_4x2x4_b0,
   ATL_sAMMM_0_220_13_4x2x4_b0,
   ATL_sAMMM_0_224_13_4x2x4_b0,
   ATL_sAMMM_0_240_13_4x2x4_b0,
   ATL_sAMMM_0_248_13_4x2x4_b0,
   ATL_sAMMM_0_252_13_4x2x4_b0,
   ATL_sAMMM_0_256_13_4x2x4_b0,
   ATL_sAMMM_0_328_13_4x2x4_b0,
   ATL_sAMMM_0_352_13_4x2x4_b0,
   ATL_sAMMM_0_360_13_4x2x4_b0,
   ATL_sAMMM_0_368_13_4x2x4_b0,
   ATL_sAMMM_0_384_13_4x2x4_b0,
   ATL_sAMMM_0_400_13_4x2x4_b0,
   ATL_sAMMM_0_416_13_4x2x4_b0,
   ATL_sAMMM_0_432_13_4x2x4_b0,
   ATL_sAMMM_0_480_13_4x2x4_b0,
   ATL_sAMMM_0_488_13_4x2x4_b0,
   ATL_sAMMM_0_496_13_4x2x4_b0,
   ATL_sAMMM_0_512_13_4x2x4_b0
};

static const ammkern_t ATL_AMM_KERN_b1[48] =
{
   ATL_sAMMM_0_4_13_4x2x4_b1,
   ATL_sAMMM_0_8_13_4x2x4_b1,
   ATL_sAMMM_0_12_3_12x3x1_b1,
   ATL_sAMMM_0_20_13_4x2x4_b1,
   ATL_sAMMM_0_24_3_8x4x1_b1,
   ATL_sAMMM_0_28_13_4x2x4_b1,
   ATL_sAMMM_0_32_3_32x1x1_b1,
   ATL_sAMMM_0_36_13_4x2x4_b1,
   ATL_sAMMM_0_40_13_4x2x4_b1,
   ATL_sAMMM_0_48_13_4x2x4_b1,
   ATL_sAMMM_0_52_13_4x2x4_b1,
   ATL_sAMMM_0_56_13_4x2x4_b1,
   ATL_sAMMM_0_60_13_4x2x4_b1,
   ATL_sAMMM_0_64_13_4x2x4_b1,
   ATL_sAMMM_0_68_13_4x2x4_b1,
   ATL_sAMMM_0_72_13_4x2x4_b1,
   ATL_sAMMM_0_76_13_4x2x4_b1,
   ATL_sAMMM_0_80_13_4x2x4_b1,
   ATL_sAMMM_0_120_13_4x2x4_b1,
   ATL_sAMMM_0_128_13_4x2x4_b1,
   ATL_sAMMM_0_136_13_4x2x4_b1,
   ATL_sAMMM_0_144_13_4x2x4_b1,
   ATL_sAMMM_0_152_13_4x2x4_b1,
   ATL_sAMMM_0_160_13_4x2x4_b1,
   ATL_sAMMM_0_168_13_4x2x4_b1,
   ATL_sAMMM_0_176_13_4x2x4_b1,
   ATL_sAMMM_0_184_13_4x2x4_b1,
   ATL_sAMMM_0_192_13_4x2x4_b1,
   ATL_sAMMM_0_200_13_4x2x4_b1,
   ATL_sAMMM_0_208_13_4x2x4_b1,
   ATL_sAMMM_0_220_13_4x2x4_b1,
   ATL_sAMMM_0_224_13_4x2x4_b1,
   ATL_sAMMM_0_240_13_4x2x4_b1,
   ATL_sAMMM_0_248_13_4x2x4_b1,
   ATL_sAMMM_0_252_13_4x2x4_b1,
   ATL_sAMMM_0_256_13_4x2x4_b1,
   ATL_sAMMM_0_328_13_4x2x4_b1,
   ATL_sAMMM_0_352_13_4x2x4_b1,
   ATL_sAMMM_0_360_13_4x2x4_b1,
   ATL_sAMMM_0_368_13_4x2x4_b1,
   ATL_sAMMM_0_384_13_4x2x4_b1,
   ATL_sAMMM_0_400_13_4x2x4_b1,
   ATL_sAMMM_0_416_13_4x2x4_b1,
   ATL_sAMMM_0_432_13_4x2x4_b1,
   ATL_sAMMM_0_480_13_4x2x4_b1,
   ATL_sAMMM_0_488_13_4x2x4_b1,
   ATL_sAMMM_0_496_13_4x2x4_b1,
   ATL_sAMMM_0_512_13_4x2x4_b1
};

static const ammkern_t ATL_AMM_KERN_bn[48] =
{
   ATL_sAMMM_0_4_13_4x2x4_bn,
   ATL_sAMMM_0_8_13_4x2x4_bn,
   ATL_sAMMM_0_12_3_12x3x1_bn,
   ATL_sAMMM_0_20_13_4x2x4_bn,
   ATL_sAMMM_0_24_3_8x4x1_bn,
   ATL_sAMMM_0_28_13_4x2x4_bn,
   ATL_sAMMM_0_32_3_32x1x1_bn,
   ATL_sAMMM_0_36_13_4x2x4_bn,
   ATL_sAMMM_0_40_13_4x2x4_bn,
   ATL_sAMMM_0_48_13_4x2x4_bn,
   ATL_sAMMM_0_52_13_4x2x4_bn,
   ATL_sAMMM_0_56_13_4x2x4_bn,
   ATL_sAMMM_0_60_13_4x2x4_bn,
   ATL_sAMMM_0_64_13_4x2x4_bn,
   ATL_sAMMM_0_68_13_4x2x4_bn,
   ATL_sAMMM_0_72_13_4x2x4_bn,
   ATL_sAMMM_0_76_13_4x2x4_bn,
   ATL_sAMMM_0_80_13_4x2x4_bn,
   ATL_sAMMM_0_120_13_4x2x4_bn,
   ATL_sAMMM_0_128_13_4x2x4_bn,
   ATL_sAMMM_0_136_13_4x2x4_bn,
   ATL_sAMMM_0_144_13_4x2x4_bn,
   ATL_sAMMM_0_152_13_4x2x4_bn,
   ATL_sAMMM_0_160_13_4x2x4_bn,
   ATL_sAMMM_0_168_13_4x2x4_bn,
   ATL_sAMMM_0_176_13_4x2x4_bn,
   ATL_sAMMM_0_184_13_4x2x4_bn,
   ATL_sAMMM_0_192_13_4x2x4_bn,
   ATL_sAMMM_0_200_13_4x2x4_bn,
   ATL_sAMMM_0_208_13_4x2x4_bn,
   ATL_sAMMM_0_220_13_4x2x4_bn,
   ATL_sAMMM_0_224_13_4x2x4_bn,
   ATL_sAMMM_0_240_13_4x2x4_bn,
   ATL_sAMMM_0_248_13_4x2x4_bn,
   ATL_sAMMM_0_252_13_4x2x4_bn,
   ATL_sAMMM_0_256_13_4x2x4_bn,
   ATL_sAMMM_0_328_13_4x2x4_bn,
   ATL_sAMMM_0_352_13_4x2x4_bn,
   ATL_sAMMM_0_360_13_4x2x4_bn,
   ATL_sAMMM_0_368_13_4x2x4_bn,
   ATL_sAMMM_0_384_13_4x2x4_bn,
   ATL_sAMMM_0_400_13_4x2x4_bn,
   ATL_sAMMM_0_416_13_4x2x4_bn,
   ATL_sAMMM_0_432_13_4x2x4_bn,
   ATL_sAMMM_0_480_13_4x2x4_bn,
   ATL_sAMMM_0_488_13_4x2x4_bn,
   ATL_sAMMM_0_496_13_4x2x4_bn,
   ATL_sAMMM_0_512_13_4x2x4_bn
};

static const ammkern_t ATL_AMM_KERN_K1[48] =
{
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_3_12x3x1_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
   ATL_sAMMM_0_0_3_8x4x1_b0,
   ATL_sAMMM_0_0_13_4x2x4_b0,
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

static const ammkern_t ATL_AMM_KERN_K1_b1[48] =
{
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_3_12x3x1_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
   ATL_sAMMM_0_0_3_8x4x1_b1,
   ATL_sAMMM_0_0_13_4x2x4_b1,
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

static const ammkern_t ATL_AMM_KERN_K1_bn[48] =
{
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_3_12x3x1_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
   ATL_sAMMM_0_0_3_8x4x1_bn,
   ATL_sAMMM_0_0_13_4x2x4_bn,
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
