#ifndef ATLAS_ZAMM_cm2am_a1_H
   #define ATLAS_ZAMM_cm2am_a1_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 16
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 16
#endif
/*
 * mat2blk prototypes
 */
void ATL_zcm2am_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_6C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_6C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_20C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_20C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_22C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_22C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zcm2am_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_zrm2am_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);

static const cm2am_t ATL_AMM_A2BLK_a1[16] =
{
   ATL_zcm2am_a1_4,  /* index 0 */
   ATL_zcm2am_a1_6,  /* index 1 */
   ATL_zcm2am_a1_2x8,  /* index 2 */
   ATL_zcm2am_a1_2x12,  /* index 3 */
   ATL_zcm2am_a1_20,  /* index 4 */
   ATL_zcm2am_a1_22,  /* index 5 */
   ATL_zcm2am_a1_2x12,  /* index 6 */
   ATL_zcm2am_a1_28,  /* index 7 */
   ATL_zcm2am_a1_2x8,  /* index 8 */
   ATL_zcm2am_a1_2x12,  /* index 9 */
   ATL_zcm2am_a1_2x12,  /* index 10 */
   ATL_zcm2am_a1_2x12,  /* index 11 */
   ATL_zcm2am_a1_2x12,  /* index 12 */
   ATL_zcm2am_a1_2x12,  /* index 13 */
   ATL_zcm2am_a1_2x12,  /* index 14 */
   ATL_zcm2am_a1_2x12   /* index 15 */
};

static const cm2am_t ATL_AMM_AT2BLK_a1[16] =
{
   ATL_zrm2am_a1_4,  /* index 0 */
   ATL_zrm2am_a1_6,  /* index 1 */
   ATL_zrm2am_a1_2x8,  /* index 2 */
   ATL_zrm2am_a1_2x12,  /* index 3 */
   ATL_zrm2am_a1_20,  /* index 4 */
   ATL_zrm2am_a1_22,  /* index 5 */
   ATL_zrm2am_a1_2x12,  /* index 6 */
   ATL_zrm2am_a1_28,  /* index 7 */
   ATL_zrm2am_a1_2x8,  /* index 8 */
   ATL_zrm2am_a1_2x12,  /* index 9 */
   ATL_zrm2am_a1_2x12,  /* index 10 */
   ATL_zrm2am_a1_2x12,  /* index 11 */
   ATL_zrm2am_a1_2x12,  /* index 12 */
   ATL_zrm2am_a1_2x12,  /* index 13 */
   ATL_zrm2am_a1_2x12,  /* index 14 */
   ATL_zrm2am_a1_2x12   /* index 15 */
};

static const cm2am_t ATL_AMM_B2BLK_a1[16] =
{
   ATL_zcm2am_a1_1,  /* index 0 */
   ATL_zcm2am_a1_1,  /* index 1 */
   ATL_zcm2am_a1_2x1,  /* index 2 */
   ATL_zcm2am_a1_2x1,  /* index 3 */
   ATL_zcm2am_a1_1,  /* index 4 */
   ATL_zcm2am_a1_1,  /* index 5 */
   ATL_zcm2am_a1_2x1,  /* index 6 */
   ATL_zcm2am_a1_1,  /* index 7 */
   ATL_zcm2am_a1_2x1,  /* index 8 */
   ATL_zcm2am_a1_2x1,  /* index 9 */
   ATL_zcm2am_a1_2x1,  /* index 10 */
   ATL_zcm2am_a1_2x1,  /* index 11 */
   ATL_zcm2am_a1_2x1,  /* index 12 */
   ATL_zcm2am_a1_2x1,  /* index 13 */
   ATL_zcm2am_a1_2x1,  /* index 14 */
   ATL_zcm2am_a1_2x1   /* index 15 */
};

static const cm2am_t ATL_AMM_BT2BLK_a1[16] =
{
   ATL_zrm2am_a1_1,  /* index 0 */
   ATL_zrm2am_a1_1,  /* index 1 */
   ATL_zrm2am_a1_2x1,  /* index 2 */
   ATL_zrm2am_a1_2x1,  /* index 3 */
   ATL_zrm2am_a1_1,  /* index 4 */
   ATL_zrm2am_a1_1,  /* index 5 */
   ATL_zrm2am_a1_2x1,  /* index 6 */
   ATL_zrm2am_a1_1,  /* index 7 */
   ATL_zrm2am_a1_2x1,  /* index 8 */
   ATL_zrm2am_a1_2x1,  /* index 9 */
   ATL_zrm2am_a1_2x1,  /* index 10 */
   ATL_zrm2am_a1_2x1,  /* index 11 */
   ATL_zrm2am_a1_2x1,  /* index 12 */
   ATL_zrm2am_a1_2x1,  /* index 13 */
   ATL_zrm2am_a1_2x1,  /* index 14 */
   ATL_zrm2am_a1_2x1   /* index 15 */
};

static const cm2am_t ATL_AMM_AC2BLK_a1[16] =
{
   ATL_zcm2am_a1_4C,  /* index 0 */
   ATL_zcm2am_a1_6C,  /* index 1 */
   ATL_zcm2am_a1_2x8C,  /* index 2 */
   ATL_zcm2am_a1_2x12C,  /* index 3 */
   ATL_zcm2am_a1_20C,  /* index 4 */
   ATL_zcm2am_a1_22C,  /* index 5 */
   ATL_zcm2am_a1_2x12C,  /* index 6 */
   ATL_zcm2am_a1_28C,  /* index 7 */
   ATL_zcm2am_a1_2x8C,  /* index 8 */
   ATL_zcm2am_a1_2x12C,  /* index 9 */
   ATL_zcm2am_a1_2x12C,  /* index 10 */
   ATL_zcm2am_a1_2x12C,  /* index 11 */
   ATL_zcm2am_a1_2x12C,  /* index 12 */
   ATL_zcm2am_a1_2x12C,  /* index 13 */
   ATL_zcm2am_a1_2x12C,  /* index 14 */
   ATL_zcm2am_a1_2x12C   /* index 15 */
};

static const cm2am_t ATL_AMM_AH2BLK_a1[16] =
{
   ATL_zrm2am_a1_4C,  /* index 0 */
   ATL_zrm2am_a1_6C,  /* index 1 */
   ATL_zrm2am_a1_2x8C,  /* index 2 */
   ATL_zrm2am_a1_2x12C,  /* index 3 */
   ATL_zrm2am_a1_20C,  /* index 4 */
   ATL_zrm2am_a1_22C,  /* index 5 */
   ATL_zrm2am_a1_2x12C,  /* index 6 */
   ATL_zrm2am_a1_28C,  /* index 7 */
   ATL_zrm2am_a1_2x8C,  /* index 8 */
   ATL_zrm2am_a1_2x12C,  /* index 9 */
   ATL_zrm2am_a1_2x12C,  /* index 10 */
   ATL_zrm2am_a1_2x12C,  /* index 11 */
   ATL_zrm2am_a1_2x12C,  /* index 12 */
   ATL_zrm2am_a1_2x12C,  /* index 13 */
   ATL_zrm2am_a1_2x12C,  /* index 14 */
   ATL_zrm2am_a1_2x12C   /* index 15 */
};

static const cm2am_t ATL_AMM_BC2BLK_a1[16] =
{
   ATL_zcm2am_a1_1C,  /* index 0 */
   ATL_zcm2am_a1_1C,  /* index 1 */
   ATL_zcm2am_a1_2x1C,  /* index 2 */
   ATL_zcm2am_a1_2x1C,  /* index 3 */
   ATL_zcm2am_a1_1C,  /* index 4 */
   ATL_zcm2am_a1_1C,  /* index 5 */
   ATL_zcm2am_a1_2x1C,  /* index 6 */
   ATL_zcm2am_a1_1C,  /* index 7 */
   ATL_zcm2am_a1_2x1C,  /* index 8 */
   ATL_zcm2am_a1_2x1C,  /* index 9 */
   ATL_zcm2am_a1_2x1C,  /* index 10 */
   ATL_zcm2am_a1_2x1C,  /* index 11 */
   ATL_zcm2am_a1_2x1C,  /* index 12 */
   ATL_zcm2am_a1_2x1C,  /* index 13 */
   ATL_zcm2am_a1_2x1C,  /* index 14 */
   ATL_zcm2am_a1_2x1C   /* index 15 */
};

static const cm2am_t ATL_AMM_BH2BLK_a1[16] =
{
   ATL_zrm2am_a1_1C,  /* index 0 */
   ATL_zrm2am_a1_1C,  /* index 1 */
   ATL_zrm2am_a1_2x1C,  /* index 2 */
   ATL_zrm2am_a1_2x1C,  /* index 3 */
   ATL_zrm2am_a1_1C,  /* index 4 */
   ATL_zrm2am_a1_1C,  /* index 5 */
   ATL_zrm2am_a1_2x1C,  /* index 6 */
   ATL_zrm2am_a1_1C,  /* index 7 */
   ATL_zrm2am_a1_2x1C,  /* index 8 */
   ATL_zrm2am_a1_2x1C,  /* index 9 */
   ATL_zrm2am_a1_2x1C,  /* index 10 */
   ATL_zrm2am_a1_2x1C,  /* index 11 */
   ATL_zrm2am_a1_2x1C,  /* index 12 */
   ATL_zrm2am_a1_2x1C,  /* index 13 */
   ATL_zrm2am_a1_2x1C,  /* index 14 */
   ATL_zrm2am_a1_2x1C   /* index 15 */
};


#endif  /* end include file guard */
