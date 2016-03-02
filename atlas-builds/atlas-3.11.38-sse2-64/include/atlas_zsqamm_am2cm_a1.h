#ifndef ATLAS_ZAMM_am2cm_a1_H
   #define ATLAS_ZAMM_am2cm_a1_H

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
void ATL_zam2cm_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_6C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_6C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x8C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_2x12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_20C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_20C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_22C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_22C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2cm_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_zam2rm_a1_28C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);

static const am2cm_t ATL_AMM_BLK2A_a1[16] =
{
   ATL_zam2cm_a1_4,  /* index 0 */
   ATL_zam2cm_a1_6,  /* index 1 */
   ATL_zam2cm_a1_2x8,  /* index 2 */
   ATL_zam2cm_a1_2x12,  /* index 3 */
   ATL_zam2cm_a1_20,  /* index 4 */
   ATL_zam2cm_a1_22,  /* index 5 */
   ATL_zam2cm_a1_2x12,  /* index 6 */
   ATL_zam2cm_a1_28,  /* index 7 */
   ATL_zam2cm_a1_2x8,  /* index 8 */
   ATL_zam2cm_a1_2x12,  /* index 9 */
   ATL_zam2cm_a1_2x12,  /* index 10 */
   ATL_zam2cm_a1_2x12,  /* index 11 */
   ATL_zam2cm_a1_2x12,  /* index 12 */
   ATL_zam2cm_a1_2x12,  /* index 13 */
   ATL_zam2cm_a1_2x12,  /* index 14 */
   ATL_zam2cm_a1_2x12   /* index 15 */
};

static const am2cm_t ATL_AMM_BLK2AT_a1[16] =
{
   ATL_zam2rm_a1_4,  /* index 0 */
   ATL_zam2rm_a1_6,  /* index 1 */
   ATL_zam2rm_a1_2x8,  /* index 2 */
   ATL_zam2rm_a1_2x12,  /* index 3 */
   ATL_zam2rm_a1_20,  /* index 4 */
   ATL_zam2rm_a1_22,  /* index 5 */
   ATL_zam2rm_a1_2x12,  /* index 6 */
   ATL_zam2rm_a1_28,  /* index 7 */
   ATL_zam2rm_a1_2x8,  /* index 8 */
   ATL_zam2rm_a1_2x12,  /* index 9 */
   ATL_zam2rm_a1_2x12,  /* index 10 */
   ATL_zam2rm_a1_2x12,  /* index 11 */
   ATL_zam2rm_a1_2x12,  /* index 12 */
   ATL_zam2rm_a1_2x12,  /* index 13 */
   ATL_zam2rm_a1_2x12,  /* index 14 */
   ATL_zam2rm_a1_2x12   /* index 15 */
};

static const am2cm_t ATL_AMM_BLK2B_a1[16] =
{
   ATL_zam2cm_a1_1,  /* index 0 */
   ATL_zam2cm_a1_1,  /* index 1 */
   ATL_zam2cm_a1_2x1,  /* index 2 */
   ATL_zam2cm_a1_2x1,  /* index 3 */
   ATL_zam2cm_a1_1,  /* index 4 */
   ATL_zam2cm_a1_1,  /* index 5 */
   ATL_zam2cm_a1_2x1,  /* index 6 */
   ATL_zam2cm_a1_1,  /* index 7 */
   ATL_zam2cm_a1_2x1,  /* index 8 */
   ATL_zam2cm_a1_2x1,  /* index 9 */
   ATL_zam2cm_a1_2x1,  /* index 10 */
   ATL_zam2cm_a1_2x1,  /* index 11 */
   ATL_zam2cm_a1_2x1,  /* index 12 */
   ATL_zam2cm_a1_2x1,  /* index 13 */
   ATL_zam2cm_a1_2x1,  /* index 14 */
   ATL_zam2cm_a1_2x1   /* index 15 */
};

static const am2cm_t ATL_AMM_BLK2BT_a1[16] =
{
   ATL_zam2rm_a1_1,  /* index 0 */
   ATL_zam2rm_a1_1,  /* index 1 */
   ATL_zam2rm_a1_2x1,  /* index 2 */
   ATL_zam2rm_a1_2x1,  /* index 3 */
   ATL_zam2rm_a1_1,  /* index 4 */
   ATL_zam2rm_a1_1,  /* index 5 */
   ATL_zam2rm_a1_2x1,  /* index 6 */
   ATL_zam2rm_a1_1,  /* index 7 */
   ATL_zam2rm_a1_2x1,  /* index 8 */
   ATL_zam2rm_a1_2x1,  /* index 9 */
   ATL_zam2rm_a1_2x1,  /* index 10 */
   ATL_zam2rm_a1_2x1,  /* index 11 */
   ATL_zam2rm_a1_2x1,  /* index 12 */
   ATL_zam2rm_a1_2x1,  /* index 13 */
   ATL_zam2rm_a1_2x1,  /* index 14 */
   ATL_zam2rm_a1_2x1   /* index 15 */
};

static const am2cm_t ATL_AMM_BLKC2A_a1[16] =
{
   ATL_zam2cm_a1_4C,  /* index 0 */
   ATL_zam2cm_a1_6C,  /* index 1 */
   ATL_zam2cm_a1_2x8C,  /* index 2 */
   ATL_zam2cm_a1_2x12C,  /* index 3 */
   ATL_zam2cm_a1_20C,  /* index 4 */
   ATL_zam2cm_a1_22C,  /* index 5 */
   ATL_zam2cm_a1_2x12C,  /* index 6 */
   ATL_zam2cm_a1_28C,  /* index 7 */
   ATL_zam2cm_a1_2x8C,  /* index 8 */
   ATL_zam2cm_a1_2x12C,  /* index 9 */
   ATL_zam2cm_a1_2x12C,  /* index 10 */
   ATL_zam2cm_a1_2x12C,  /* index 11 */
   ATL_zam2cm_a1_2x12C,  /* index 12 */
   ATL_zam2cm_a1_2x12C,  /* index 13 */
   ATL_zam2cm_a1_2x12C,  /* index 14 */
   ATL_zam2cm_a1_2x12C   /* index 15 */
};

static const am2cm_t ATL_AMM_BLKH2A_a1[16] =
{
   ATL_zam2rm_a1_4C,  /* index 0 */
   ATL_zam2rm_a1_6C,  /* index 1 */
   ATL_zam2rm_a1_2x8C,  /* index 2 */
   ATL_zam2rm_a1_2x12C,  /* index 3 */
   ATL_zam2rm_a1_20C,  /* index 4 */
   ATL_zam2rm_a1_22C,  /* index 5 */
   ATL_zam2rm_a1_2x12C,  /* index 6 */
   ATL_zam2rm_a1_28C,  /* index 7 */
   ATL_zam2rm_a1_2x8C,  /* index 8 */
   ATL_zam2rm_a1_2x12C,  /* index 9 */
   ATL_zam2rm_a1_2x12C,  /* index 10 */
   ATL_zam2rm_a1_2x12C,  /* index 11 */
   ATL_zam2rm_a1_2x12C,  /* index 12 */
   ATL_zam2rm_a1_2x12C,  /* index 13 */
   ATL_zam2rm_a1_2x12C,  /* index 14 */
   ATL_zam2rm_a1_2x12C   /* index 15 */
};

static const am2cm_t ATL_AMM_BLKC2B_a1[16] =
{
   ATL_zam2cm_a1_1C,  /* index 0 */
   ATL_zam2cm_a1_1C,  /* index 1 */
   ATL_zam2cm_a1_2x1C,  /* index 2 */
   ATL_zam2cm_a1_2x1C,  /* index 3 */
   ATL_zam2cm_a1_1C,  /* index 4 */
   ATL_zam2cm_a1_1C,  /* index 5 */
   ATL_zam2cm_a1_2x1C,  /* index 6 */
   ATL_zam2cm_a1_1C,  /* index 7 */
   ATL_zam2cm_a1_2x1C,  /* index 8 */
   ATL_zam2cm_a1_2x1C,  /* index 9 */
   ATL_zam2cm_a1_2x1C,  /* index 10 */
   ATL_zam2cm_a1_2x1C,  /* index 11 */
   ATL_zam2cm_a1_2x1C,  /* index 12 */
   ATL_zam2cm_a1_2x1C,  /* index 13 */
   ATL_zam2cm_a1_2x1C,  /* index 14 */
   ATL_zam2cm_a1_2x1C   /* index 15 */
};

static const am2cm_t ATL_AMM_BLKH2B_a1[16] =
{
   ATL_zam2rm_a1_1C,  /* index 0 */
   ATL_zam2rm_a1_1C,  /* index 1 */
   ATL_zam2rm_a1_2x1C,  /* index 2 */
   ATL_zam2rm_a1_2x1C,  /* index 3 */
   ATL_zam2rm_a1_1C,  /* index 4 */
   ATL_zam2rm_a1_1C,  /* index 5 */
   ATL_zam2rm_a1_2x1C,  /* index 6 */
   ATL_zam2rm_a1_1C,  /* index 7 */
   ATL_zam2rm_a1_2x1C,  /* index 8 */
   ATL_zam2rm_a1_2x1C,  /* index 9 */
   ATL_zam2rm_a1_2x1C,  /* index 10 */
   ATL_zam2rm_a1_2x1C,  /* index 11 */
   ATL_zam2rm_a1_2x1C,  /* index 12 */
   ATL_zam2rm_a1_2x1C,  /* index 13 */
   ATL_zam2rm_a1_2x1C,  /* index 14 */
   ATL_zam2rm_a1_2x1C   /* index 15 */
};


#endif  /* end include file guard */
