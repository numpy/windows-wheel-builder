#ifndef ATLAS_DAMM_cm2am_a1_H
   #define ATLAS_DAMM_cm2am_a1_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 22
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 22
#endif
/*
 * mat2blk prototypes
 */
void ATL_dcm2am_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_10
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_10
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_dcm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_drm2am_a1_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);

static const cm2am_t ATL_AMM_A2BLK_a1[22] =
{
   ATL_dcm2am_a1_4,  /* index 0 */
   ATL_dcm2am_a1_6,  /* index 1 */
   ATL_dcm2am_a1_2x8,  /* index 2 */
   ATL_dcm2am_a1_10,  /* index 3 */
   ATL_dcm2am_a1_2x12,  /* index 4 */
   ATL_dcm2am_a1_20,  /* index 5 */
   ATL_dcm2am_a1_22,  /* index 6 */
   ATL_dcm2am_a1_28,  /* index 7 */
   ATL_dcm2am_a1_2x8,  /* index 8 */
   ATL_dcm2am_a1_2x12,  /* index 9 */
   ATL_dcm2am_a1_2x12,  /* index 10 */
   ATL_dcm2am_a1_2x12,  /* index 11 */
   ATL_dcm2am_a1_2x12,  /* index 12 */
   ATL_dcm2am_a1_2x12,  /* index 13 */
   ATL_dcm2am_a1_2x12,  /* index 14 */
   ATL_dcm2am_a1_2x12,  /* index 15 */
   ATL_dcm2am_a1_2x12,  /* index 16 */
   ATL_dcm2am_a1_2x12,  /* index 17 */
   ATL_dcm2am_a1_2x12,  /* index 18 */
   ATL_dcm2am_a1_2x12,  /* index 19 */
   ATL_dcm2am_a1_2x12,  /* index 20 */
   ATL_dcm2am_a1_2x12   /* index 21 */
};

static const cm2am_t ATL_AMM_AT2BLK_a1[22] =
{
   ATL_drm2am_a1_4,  /* index 0 */
   ATL_drm2am_a1_6,  /* index 1 */
   ATL_drm2am_a1_2x8,  /* index 2 */
   ATL_drm2am_a1_10,  /* index 3 */
   ATL_drm2am_a1_2x12,  /* index 4 */
   ATL_drm2am_a1_20,  /* index 5 */
   ATL_drm2am_a1_22,  /* index 6 */
   ATL_drm2am_a1_28,  /* index 7 */
   ATL_drm2am_a1_2x8,  /* index 8 */
   ATL_drm2am_a1_2x12,  /* index 9 */
   ATL_drm2am_a1_2x12,  /* index 10 */
   ATL_drm2am_a1_2x12,  /* index 11 */
   ATL_drm2am_a1_2x12,  /* index 12 */
   ATL_drm2am_a1_2x12,  /* index 13 */
   ATL_drm2am_a1_2x12,  /* index 14 */
   ATL_drm2am_a1_2x12,  /* index 15 */
   ATL_drm2am_a1_2x12,  /* index 16 */
   ATL_drm2am_a1_2x12,  /* index 17 */
   ATL_drm2am_a1_2x12,  /* index 18 */
   ATL_drm2am_a1_2x12,  /* index 19 */
   ATL_drm2am_a1_2x12,  /* index 20 */
   ATL_drm2am_a1_2x12   /* index 21 */
};

static const cm2am_t ATL_AMM_B2BLK_a1[22] =
{
   ATL_dcm2am_a1_1,  /* index 0 */
   ATL_dcm2am_a1_1,  /* index 1 */
   ATL_dcm2am_a1_2x1,  /* index 2 */
   ATL_dcm2am_a1_1,  /* index 3 */
   ATL_dcm2am_a1_2x1,  /* index 4 */
   ATL_dcm2am_a1_1,  /* index 5 */
   ATL_dcm2am_a1_1,  /* index 6 */
   ATL_dcm2am_a1_1,  /* index 7 */
   ATL_dcm2am_a1_2x1,  /* index 8 */
   ATL_dcm2am_a1_2x1,  /* index 9 */
   ATL_dcm2am_a1_2x1,  /* index 10 */
   ATL_dcm2am_a1_2x1,  /* index 11 */
   ATL_dcm2am_a1_2x1,  /* index 12 */
   ATL_dcm2am_a1_2x1,  /* index 13 */
   ATL_dcm2am_a1_2x1,  /* index 14 */
   ATL_dcm2am_a1_2x1,  /* index 15 */
   ATL_dcm2am_a1_2x1,  /* index 16 */
   ATL_dcm2am_a1_2x1,  /* index 17 */
   ATL_dcm2am_a1_2x1,  /* index 18 */
   ATL_dcm2am_a1_2x1,  /* index 19 */
   ATL_dcm2am_a1_2x1,  /* index 20 */
   ATL_dcm2am_a1_2x1   /* index 21 */
};

static const cm2am_t ATL_AMM_BT2BLK_a1[22] =
{
   ATL_drm2am_a1_1,  /* index 0 */
   ATL_drm2am_a1_1,  /* index 1 */
   ATL_drm2am_a1_2x1,  /* index 2 */
   ATL_drm2am_a1_1,  /* index 3 */
   ATL_drm2am_a1_2x1,  /* index 4 */
   ATL_drm2am_a1_1,  /* index 5 */
   ATL_drm2am_a1_1,  /* index 6 */
   ATL_drm2am_a1_1,  /* index 7 */
   ATL_drm2am_a1_2x1,  /* index 8 */
   ATL_drm2am_a1_2x1,  /* index 9 */
   ATL_drm2am_a1_2x1,  /* index 10 */
   ATL_drm2am_a1_2x1,  /* index 11 */
   ATL_drm2am_a1_2x1,  /* index 12 */
   ATL_drm2am_a1_2x1,  /* index 13 */
   ATL_drm2am_a1_2x1,  /* index 14 */
   ATL_drm2am_a1_2x1,  /* index 15 */
   ATL_drm2am_a1_2x1,  /* index 16 */
   ATL_drm2am_a1_2x1,  /* index 17 */
   ATL_drm2am_a1_2x1,  /* index 18 */
   ATL_drm2am_a1_2x1,  /* index 19 */
   ATL_drm2am_a1_2x1,  /* index 20 */
   ATL_drm2am_a1_2x1   /* index 21 */
};


#endif  /* end include file guard */
