#ifndef ATLAS_SAMM_am2cm_aX_H
   #define ATLAS_SAMM_am2cm_aX_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
#endif
/*
 * mat2blk prototypes
 */
void ATL_sam2cm_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2cm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_sam2rm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);

static const am2cm_t ATL_AMM_BLK2A_aX[48] =
{
   ATL_sam2cm_aX_4x4,  /* index 0 */
   ATL_sam2cm_aX_4x4,  /* index 1 */
   ATL_sam2cm_aX_12,  /* index 2 */
   ATL_sam2cm_aX_4x4,  /* index 3 */
   ATL_sam2cm_aX_8,  /* index 4 */
   ATL_sam2cm_aX_4x4,  /* index 5 */
   ATL_sam2cm_aX_32,  /* index 6 */
   ATL_sam2cm_aX_4x4,  /* index 7 */
   ATL_sam2cm_aX_4x4,  /* index 8 */
   ATL_sam2cm_aX_4x4,  /* index 9 */
   ATL_sam2cm_aX_4x4,  /* index 10 */
   ATL_sam2cm_aX_4x4,  /* index 11 */
   ATL_sam2cm_aX_4x4,  /* index 12 */
   ATL_sam2cm_aX_4x4,  /* index 13 */
   ATL_sam2cm_aX_4x4,  /* index 14 */
   ATL_sam2cm_aX_4x4,  /* index 15 */
   ATL_sam2cm_aX_4x4,  /* index 16 */
   ATL_sam2cm_aX_4x4,  /* index 17 */
   ATL_sam2cm_aX_4x4,  /* index 18 */
   ATL_sam2cm_aX_4x4,  /* index 19 */
   ATL_sam2cm_aX_4x4,  /* index 20 */
   ATL_sam2cm_aX_4x4,  /* index 21 */
   ATL_sam2cm_aX_4x4,  /* index 22 */
   ATL_sam2cm_aX_4x4,  /* index 23 */
   ATL_sam2cm_aX_4x4,  /* index 24 */
   ATL_sam2cm_aX_4x4,  /* index 25 */
   ATL_sam2cm_aX_4x4,  /* index 26 */
   ATL_sam2cm_aX_4x4,  /* index 27 */
   ATL_sam2cm_aX_4x4,  /* index 28 */
   ATL_sam2cm_aX_4x4,  /* index 29 */
   ATL_sam2cm_aX_4x4,  /* index 30 */
   ATL_sam2cm_aX_4x4,  /* index 31 */
   ATL_sam2cm_aX_4x4,  /* index 32 */
   ATL_sam2cm_aX_4x4,  /* index 33 */
   ATL_sam2cm_aX_4x4,  /* index 34 */
   ATL_sam2cm_aX_4x4,  /* index 35 */
   ATL_sam2cm_aX_4x4,  /* index 36 */
   ATL_sam2cm_aX_4x4,  /* index 37 */
   ATL_sam2cm_aX_4x4,  /* index 38 */
   ATL_sam2cm_aX_4x4,  /* index 39 */
   ATL_sam2cm_aX_4x4,  /* index 40 */
   ATL_sam2cm_aX_4x4,  /* index 41 */
   ATL_sam2cm_aX_4x4,  /* index 42 */
   ATL_sam2cm_aX_4x4,  /* index 43 */
   ATL_sam2cm_aX_4x4,  /* index 44 */
   ATL_sam2cm_aX_4x4,  /* index 45 */
   ATL_sam2cm_aX_4x4,  /* index 46 */
   ATL_sam2cm_aX_4x4   /* index 47 */
};

static const am2cm_t ATL_AMM_BLK2AT_aX[48] =
{
   ATL_sam2rm_aX_4x4,  /* index 0 */
   ATL_sam2rm_aX_4x4,  /* index 1 */
   ATL_sam2rm_aX_12,  /* index 2 */
   ATL_sam2rm_aX_4x4,  /* index 3 */
   ATL_sam2rm_aX_8,  /* index 4 */
   ATL_sam2rm_aX_4x4,  /* index 5 */
   ATL_sam2rm_aX_32,  /* index 6 */
   ATL_sam2rm_aX_4x4,  /* index 7 */
   ATL_sam2rm_aX_4x4,  /* index 8 */
   ATL_sam2rm_aX_4x4,  /* index 9 */
   ATL_sam2rm_aX_4x4,  /* index 10 */
   ATL_sam2rm_aX_4x4,  /* index 11 */
   ATL_sam2rm_aX_4x4,  /* index 12 */
   ATL_sam2rm_aX_4x4,  /* index 13 */
   ATL_sam2rm_aX_4x4,  /* index 14 */
   ATL_sam2rm_aX_4x4,  /* index 15 */
   ATL_sam2rm_aX_4x4,  /* index 16 */
   ATL_sam2rm_aX_4x4,  /* index 17 */
   ATL_sam2rm_aX_4x4,  /* index 18 */
   ATL_sam2rm_aX_4x4,  /* index 19 */
   ATL_sam2rm_aX_4x4,  /* index 20 */
   ATL_sam2rm_aX_4x4,  /* index 21 */
   ATL_sam2rm_aX_4x4,  /* index 22 */
   ATL_sam2rm_aX_4x4,  /* index 23 */
   ATL_sam2rm_aX_4x4,  /* index 24 */
   ATL_sam2rm_aX_4x4,  /* index 25 */
   ATL_sam2rm_aX_4x4,  /* index 26 */
   ATL_sam2rm_aX_4x4,  /* index 27 */
   ATL_sam2rm_aX_4x4,  /* index 28 */
   ATL_sam2rm_aX_4x4,  /* index 29 */
   ATL_sam2rm_aX_4x4,  /* index 30 */
   ATL_sam2rm_aX_4x4,  /* index 31 */
   ATL_sam2rm_aX_4x4,  /* index 32 */
   ATL_sam2rm_aX_4x4,  /* index 33 */
   ATL_sam2rm_aX_4x4,  /* index 34 */
   ATL_sam2rm_aX_4x4,  /* index 35 */
   ATL_sam2rm_aX_4x4,  /* index 36 */
   ATL_sam2rm_aX_4x4,  /* index 37 */
   ATL_sam2rm_aX_4x4,  /* index 38 */
   ATL_sam2rm_aX_4x4,  /* index 39 */
   ATL_sam2rm_aX_4x4,  /* index 40 */
   ATL_sam2rm_aX_4x4,  /* index 41 */
   ATL_sam2rm_aX_4x4,  /* index 42 */
   ATL_sam2rm_aX_4x4,  /* index 43 */
   ATL_sam2rm_aX_4x4,  /* index 44 */
   ATL_sam2rm_aX_4x4,  /* index 45 */
   ATL_sam2rm_aX_4x4,  /* index 46 */
   ATL_sam2rm_aX_4x4   /* index 47 */
};

static const am2cm_t ATL_AMM_BLK2B_aX[48] =
{
   ATL_sam2cm_aX_4x2,  /* index 0 */
   ATL_sam2cm_aX_4x2,  /* index 1 */
   ATL_sam2cm_aX_3,  /* index 2 */
   ATL_sam2cm_aX_4x2,  /* index 3 */
   ATL_sam2cm_aX_4,  /* index 4 */
   ATL_sam2cm_aX_4x2,  /* index 5 */
   ATL_sam2cm_aX_1,  /* index 6 */
   ATL_sam2cm_aX_4x2,  /* index 7 */
   ATL_sam2cm_aX_4x2,  /* index 8 */
   ATL_sam2cm_aX_4x2,  /* index 9 */
   ATL_sam2cm_aX_4x2,  /* index 10 */
   ATL_sam2cm_aX_4x2,  /* index 11 */
   ATL_sam2cm_aX_4x2,  /* index 12 */
   ATL_sam2cm_aX_4x2,  /* index 13 */
   ATL_sam2cm_aX_4x2,  /* index 14 */
   ATL_sam2cm_aX_4x2,  /* index 15 */
   ATL_sam2cm_aX_4x2,  /* index 16 */
   ATL_sam2cm_aX_4x2,  /* index 17 */
   ATL_sam2cm_aX_4x2,  /* index 18 */
   ATL_sam2cm_aX_4x2,  /* index 19 */
   ATL_sam2cm_aX_4x2,  /* index 20 */
   ATL_sam2cm_aX_4x2,  /* index 21 */
   ATL_sam2cm_aX_4x2,  /* index 22 */
   ATL_sam2cm_aX_4x2,  /* index 23 */
   ATL_sam2cm_aX_4x2,  /* index 24 */
   ATL_sam2cm_aX_4x2,  /* index 25 */
   ATL_sam2cm_aX_4x2,  /* index 26 */
   ATL_sam2cm_aX_4x2,  /* index 27 */
   ATL_sam2cm_aX_4x2,  /* index 28 */
   ATL_sam2cm_aX_4x2,  /* index 29 */
   ATL_sam2cm_aX_4x2,  /* index 30 */
   ATL_sam2cm_aX_4x2,  /* index 31 */
   ATL_sam2cm_aX_4x2,  /* index 32 */
   ATL_sam2cm_aX_4x2,  /* index 33 */
   ATL_sam2cm_aX_4x2,  /* index 34 */
   ATL_sam2cm_aX_4x2,  /* index 35 */
   ATL_sam2cm_aX_4x2,  /* index 36 */
   ATL_sam2cm_aX_4x2,  /* index 37 */
   ATL_sam2cm_aX_4x2,  /* index 38 */
   ATL_sam2cm_aX_4x2,  /* index 39 */
   ATL_sam2cm_aX_4x2,  /* index 40 */
   ATL_sam2cm_aX_4x2,  /* index 41 */
   ATL_sam2cm_aX_4x2,  /* index 42 */
   ATL_sam2cm_aX_4x2,  /* index 43 */
   ATL_sam2cm_aX_4x2,  /* index 44 */
   ATL_sam2cm_aX_4x2,  /* index 45 */
   ATL_sam2cm_aX_4x2,  /* index 46 */
   ATL_sam2cm_aX_4x2   /* index 47 */
};

static const am2cm_t ATL_AMM_BLK2BT_aX[48] =
{
   ATL_sam2rm_aX_4x2,  /* index 0 */
   ATL_sam2rm_aX_4x2,  /* index 1 */
   ATL_sam2rm_aX_3,  /* index 2 */
   ATL_sam2rm_aX_4x2,  /* index 3 */
   ATL_sam2rm_aX_4,  /* index 4 */
   ATL_sam2rm_aX_4x2,  /* index 5 */
   ATL_sam2rm_aX_1,  /* index 6 */
   ATL_sam2rm_aX_4x2,  /* index 7 */
   ATL_sam2rm_aX_4x2,  /* index 8 */
   ATL_sam2rm_aX_4x2,  /* index 9 */
   ATL_sam2rm_aX_4x2,  /* index 10 */
   ATL_sam2rm_aX_4x2,  /* index 11 */
   ATL_sam2rm_aX_4x2,  /* index 12 */
   ATL_sam2rm_aX_4x2,  /* index 13 */
   ATL_sam2rm_aX_4x2,  /* index 14 */
   ATL_sam2rm_aX_4x2,  /* index 15 */
   ATL_sam2rm_aX_4x2,  /* index 16 */
   ATL_sam2rm_aX_4x2,  /* index 17 */
   ATL_sam2rm_aX_4x2,  /* index 18 */
   ATL_sam2rm_aX_4x2,  /* index 19 */
   ATL_sam2rm_aX_4x2,  /* index 20 */
   ATL_sam2rm_aX_4x2,  /* index 21 */
   ATL_sam2rm_aX_4x2,  /* index 22 */
   ATL_sam2rm_aX_4x2,  /* index 23 */
   ATL_sam2rm_aX_4x2,  /* index 24 */
   ATL_sam2rm_aX_4x2,  /* index 25 */
   ATL_sam2rm_aX_4x2,  /* index 26 */
   ATL_sam2rm_aX_4x2,  /* index 27 */
   ATL_sam2rm_aX_4x2,  /* index 28 */
   ATL_sam2rm_aX_4x2,  /* index 29 */
   ATL_sam2rm_aX_4x2,  /* index 30 */
   ATL_sam2rm_aX_4x2,  /* index 31 */
   ATL_sam2rm_aX_4x2,  /* index 32 */
   ATL_sam2rm_aX_4x2,  /* index 33 */
   ATL_sam2rm_aX_4x2,  /* index 34 */
   ATL_sam2rm_aX_4x2,  /* index 35 */
   ATL_sam2rm_aX_4x2,  /* index 36 */
   ATL_sam2rm_aX_4x2,  /* index 37 */
   ATL_sam2rm_aX_4x2,  /* index 38 */
   ATL_sam2rm_aX_4x2,  /* index 39 */
   ATL_sam2rm_aX_4x2,  /* index 40 */
   ATL_sam2rm_aX_4x2,  /* index 41 */
   ATL_sam2rm_aX_4x2,  /* index 42 */
   ATL_sam2rm_aX_4x2,  /* index 43 */
   ATL_sam2rm_aX_4x2,  /* index 44 */
   ATL_sam2rm_aX_4x2,  /* index 45 */
   ATL_sam2rm_aX_4x2,  /* index 46 */
   ATL_sam2rm_aX_4x2   /* index 47 */
};


#endif  /* end include file guard */
