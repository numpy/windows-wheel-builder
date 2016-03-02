#ifndef ATLAS_CAMM_cm2am_aX_H
   #define ATLAS_CAMM_cm2am_aX_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 78
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 78
#endif
/*
 * mat2blk prototypes
 */
void ATL_ccm2am_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_aX_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);

static const cm2am_t ATL_AMM_A2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_AT2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_B2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_BT2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_AC2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_AH2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_BC2BLK_aX[78] =
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

static const cm2am_t ATL_AMM_BH2BLK_aX[78] =
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


#endif  /* end include file guard */
