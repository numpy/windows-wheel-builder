#ifndef ATLAS_CAMM_am2cm_aX_H
   #define ATLAS_CAMM_am2cm_aX_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 18
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 18
#endif
/*
 * mat2blk prototypes
 */
void ATL_cam2cm_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2cm_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);
void ATL_cam2rm_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*,const TYPE*);

static const am2cm_t ATL_AMM_BLK2A_aX[18] =
{
   ATL_cam2cm_aX_4x4,  /* index 0 */
   ATL_cam2cm_aX_4x4,  /* index 1 */
   ATL_cam2cm_aX_12,  /* index 2 */
   ATL_cam2cm_aX_4x4,  /* index 3 */
   ATL_cam2cm_aX_4x4,  /* index 4 */
   ATL_cam2cm_aX_4x4,  /* index 5 */
   ATL_cam2cm_aX_32,  /* index 6 */
   ATL_cam2cm_aX_4x4,  /* index 7 */
   ATL_cam2cm_aX_4x4,  /* index 8 */
   ATL_cam2cm_aX_4x4,  /* index 9 */
   ATL_cam2cm_aX_4x4,  /* index 10 */
   ATL_cam2cm_aX_4x4,  /* index 11 */
   ATL_cam2cm_aX_4x4,  /* index 12 */
   ATL_cam2cm_aX_4x4,  /* index 13 */
   ATL_cam2cm_aX_4x4,  /* index 14 */
   ATL_cam2cm_aX_4x4,  /* index 15 */
   ATL_cam2cm_aX_4x4,  /* index 16 */
   ATL_cam2cm_aX_4x4   /* index 17 */
};

static const am2cm_t ATL_AMM_BLK2AT_aX[18] =
{
   ATL_cam2rm_aX_4x4,  /* index 0 */
   ATL_cam2rm_aX_4x4,  /* index 1 */
   ATL_cam2rm_aX_12,  /* index 2 */
   ATL_cam2rm_aX_4x4,  /* index 3 */
   ATL_cam2rm_aX_4x4,  /* index 4 */
   ATL_cam2rm_aX_4x4,  /* index 5 */
   ATL_cam2rm_aX_32,  /* index 6 */
   ATL_cam2rm_aX_4x4,  /* index 7 */
   ATL_cam2rm_aX_4x4,  /* index 8 */
   ATL_cam2rm_aX_4x4,  /* index 9 */
   ATL_cam2rm_aX_4x4,  /* index 10 */
   ATL_cam2rm_aX_4x4,  /* index 11 */
   ATL_cam2rm_aX_4x4,  /* index 12 */
   ATL_cam2rm_aX_4x4,  /* index 13 */
   ATL_cam2rm_aX_4x4,  /* index 14 */
   ATL_cam2rm_aX_4x4,  /* index 15 */
   ATL_cam2rm_aX_4x4,  /* index 16 */
   ATL_cam2rm_aX_4x4   /* index 17 */
};

static const am2cm_t ATL_AMM_BLK2B_aX[18] =
{
   ATL_cam2cm_aX_4x2,  /* index 0 */
   ATL_cam2cm_aX_4x2,  /* index 1 */
   ATL_cam2cm_aX_3,  /* index 2 */
   ATL_cam2cm_aX_4x2,  /* index 3 */
   ATL_cam2cm_aX_4x2,  /* index 4 */
   ATL_cam2cm_aX_4x2,  /* index 5 */
   ATL_cam2cm_aX_1,  /* index 6 */
   ATL_cam2cm_aX_4x2,  /* index 7 */
   ATL_cam2cm_aX_4x2,  /* index 8 */
   ATL_cam2cm_aX_4x2,  /* index 9 */
   ATL_cam2cm_aX_4x2,  /* index 10 */
   ATL_cam2cm_aX_4x2,  /* index 11 */
   ATL_cam2cm_aX_4x2,  /* index 12 */
   ATL_cam2cm_aX_4x2,  /* index 13 */
   ATL_cam2cm_aX_4x2,  /* index 14 */
   ATL_cam2cm_aX_4x2,  /* index 15 */
   ATL_cam2cm_aX_4x2,  /* index 16 */
   ATL_cam2cm_aX_4x2   /* index 17 */
};

static const am2cm_t ATL_AMM_BLK2BT_aX[18] =
{
   ATL_cam2rm_aX_4x2,  /* index 0 */
   ATL_cam2rm_aX_4x2,  /* index 1 */
   ATL_cam2rm_aX_3,  /* index 2 */
   ATL_cam2rm_aX_4x2,  /* index 3 */
   ATL_cam2rm_aX_4x2,  /* index 4 */
   ATL_cam2rm_aX_4x2,  /* index 5 */
   ATL_cam2rm_aX_1,  /* index 6 */
   ATL_cam2rm_aX_4x2,  /* index 7 */
   ATL_cam2rm_aX_4x2,  /* index 8 */
   ATL_cam2rm_aX_4x2,  /* index 9 */
   ATL_cam2rm_aX_4x2,  /* index 10 */
   ATL_cam2rm_aX_4x2,  /* index 11 */
   ATL_cam2rm_aX_4x2,  /* index 12 */
   ATL_cam2rm_aX_4x2,  /* index 13 */
   ATL_cam2rm_aX_4x2,  /* index 14 */
   ATL_cam2rm_aX_4x2,  /* index 15 */
   ATL_cam2rm_aX_4x2,  /* index 16 */
   ATL_cam2rm_aX_4x2   /* index 17 */
};

static const am2cm_t ATL_AMM_BLKC2A_aX[18] =
{
   ATL_cam2cm_aX_4x4C,  /* index 0 */
   ATL_cam2cm_aX_4x4C,  /* index 1 */
   ATL_cam2cm_aX_12C,  /* index 2 */
   ATL_cam2cm_aX_4x4C,  /* index 3 */
   ATL_cam2cm_aX_4x4C,  /* index 4 */
   ATL_cam2cm_aX_4x4C,  /* index 5 */
   ATL_cam2cm_aX_32C,  /* index 6 */
   ATL_cam2cm_aX_4x4C,  /* index 7 */
   ATL_cam2cm_aX_4x4C,  /* index 8 */
   ATL_cam2cm_aX_4x4C,  /* index 9 */
   ATL_cam2cm_aX_4x4C,  /* index 10 */
   ATL_cam2cm_aX_4x4C,  /* index 11 */
   ATL_cam2cm_aX_4x4C,  /* index 12 */
   ATL_cam2cm_aX_4x4C,  /* index 13 */
   ATL_cam2cm_aX_4x4C,  /* index 14 */
   ATL_cam2cm_aX_4x4C,  /* index 15 */
   ATL_cam2cm_aX_4x4C,  /* index 16 */
   ATL_cam2cm_aX_4x4C   /* index 17 */
};

static const am2cm_t ATL_AMM_BLKH2A_aX[18] =
{
   ATL_cam2rm_aX_4x4C,  /* index 0 */
   ATL_cam2rm_aX_4x4C,  /* index 1 */
   ATL_cam2rm_aX_12C,  /* index 2 */
   ATL_cam2rm_aX_4x4C,  /* index 3 */
   ATL_cam2rm_aX_4x4C,  /* index 4 */
   ATL_cam2rm_aX_4x4C,  /* index 5 */
   ATL_cam2rm_aX_32C,  /* index 6 */
   ATL_cam2rm_aX_4x4C,  /* index 7 */
   ATL_cam2rm_aX_4x4C,  /* index 8 */
   ATL_cam2rm_aX_4x4C,  /* index 9 */
   ATL_cam2rm_aX_4x4C,  /* index 10 */
   ATL_cam2rm_aX_4x4C,  /* index 11 */
   ATL_cam2rm_aX_4x4C,  /* index 12 */
   ATL_cam2rm_aX_4x4C,  /* index 13 */
   ATL_cam2rm_aX_4x4C,  /* index 14 */
   ATL_cam2rm_aX_4x4C,  /* index 15 */
   ATL_cam2rm_aX_4x4C,  /* index 16 */
   ATL_cam2rm_aX_4x4C   /* index 17 */
};

static const am2cm_t ATL_AMM_BLKC2B_aX[18] =
{
   ATL_cam2cm_aX_4x2C,  /* index 0 */
   ATL_cam2cm_aX_4x2C,  /* index 1 */
   ATL_cam2cm_aX_3C,  /* index 2 */
   ATL_cam2cm_aX_4x2C,  /* index 3 */
   ATL_cam2cm_aX_4x2C,  /* index 4 */
   ATL_cam2cm_aX_4x2C,  /* index 5 */
   ATL_cam2cm_aX_1C,  /* index 6 */
   ATL_cam2cm_aX_4x2C,  /* index 7 */
   ATL_cam2cm_aX_4x2C,  /* index 8 */
   ATL_cam2cm_aX_4x2C,  /* index 9 */
   ATL_cam2cm_aX_4x2C,  /* index 10 */
   ATL_cam2cm_aX_4x2C,  /* index 11 */
   ATL_cam2cm_aX_4x2C,  /* index 12 */
   ATL_cam2cm_aX_4x2C,  /* index 13 */
   ATL_cam2cm_aX_4x2C,  /* index 14 */
   ATL_cam2cm_aX_4x2C,  /* index 15 */
   ATL_cam2cm_aX_4x2C,  /* index 16 */
   ATL_cam2cm_aX_4x2C   /* index 17 */
};

static const am2cm_t ATL_AMM_BLKH2B_aX[18] =
{
   ATL_cam2rm_aX_4x2C,  /* index 0 */
   ATL_cam2rm_aX_4x2C,  /* index 1 */
   ATL_cam2rm_aX_3C,  /* index 2 */
   ATL_cam2rm_aX_4x2C,  /* index 3 */
   ATL_cam2rm_aX_4x2C,  /* index 4 */
   ATL_cam2rm_aX_4x2C,  /* index 5 */
   ATL_cam2rm_aX_1C,  /* index 6 */
   ATL_cam2rm_aX_4x2C,  /* index 7 */
   ATL_cam2rm_aX_4x2C,  /* index 8 */
   ATL_cam2rm_aX_4x2C,  /* index 9 */
   ATL_cam2rm_aX_4x2C,  /* index 10 */
   ATL_cam2rm_aX_4x2C,  /* index 11 */
   ATL_cam2rm_aX_4x2C,  /* index 12 */
   ATL_cam2rm_aX_4x2C,  /* index 13 */
   ATL_cam2rm_aX_4x2C,  /* index 14 */
   ATL_cam2rm_aX_4x2C,  /* index 15 */
   ATL_cam2rm_aX_4x2C,  /* index 16 */
   ATL_cam2rm_aX_4x2C   /* index 17 */
};


#endif  /* end include file guard */
