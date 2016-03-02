#ifndef ATLAS_CAMM_BLK_H
   #define ATLAS_CAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 18
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 18
#endif
#define ATL_AMM_MAXMB 80
#define ATL_AMM_MAXNB 80
#define ATL_AMM_MAXKB 80
#define ATL_AMM_MAXKMAJ 4

static const unsigned char ATL_AMM_MBs[18] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
      32,  /* index 6 */
      36,  /* index 7 */
      40,  /* index 8 */
      44,  /* index 9 */
      48,  /* index 10 */
      52,  /* index 11 */
      56,  /* index 12 */
      60,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80   /* index 17 */
};

static const unsigned char ATL_AMM_NBs[18] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
      32,  /* index 6 */
      36,  /* index 7 */
      40,  /* index 8 */
      44,  /* index 9 */
      48,  /* index 10 */
      52,  /* index 11 */
      56,  /* index 12 */
      60,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80   /* index 17 */
};

static const unsigned char ATL_AMM_KBs[18] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
      32,  /* index 6 */
      36,  /* index 7 */
      40,  /* index 8 */
      44,  /* index 9 */
      48,  /* index 10 */
      52,  /* index 11 */
      56,  /* index 12 */
      60,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80   /* index 17 */
};

static const unsigned char ATL_AMM_MUs[18] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
       4,  /* index 4 */
       4,  /* index 5 */
      32,  /* index 6 */
       4,  /* index 7 */
       4,  /* index 8 */
       4,  /* index 9 */
       4,  /* index 10 */
       4,  /* index 11 */
       4,  /* index 12 */
       4,  /* index 13 */
       4,  /* index 14 */
       4,  /* index 15 */
       4,  /* index 16 */
       4   /* index 17 */
};

static const unsigned char ATL_AMM_NUs[18] =
{
       2,  /* index 0 */
       2,  /* index 1 */
       3,  /* index 2 */
       2,  /* index 3 */
       2,  /* index 4 */
       2,  /* index 5 */
       1,  /* index 6 */
       2,  /* index 7 */
       2,  /* index 8 */
       2,  /* index 9 */
       2,  /* index 10 */
       2,  /* index 11 */
       2,  /* index 12 */
       2,  /* index 13 */
       2,  /* index 14 */
       2,  /* index 15 */
       2,  /* index 16 */
       2   /* index 17 */
};

static const unsigned char ATL_AMM_KUs[18] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
       4,  /* index 4 */
       4,  /* index 5 */
      32,  /* index 6 */
       4,  /* index 7 */
       4,  /* index 8 */
       4,  /* index 9 */
       4,  /* index 10 */
       4,  /* index 11 */
       4,  /* index 12 */
       4,  /* index 13 */
       4,  /* index 14 */
       4,  /* index 15 */
       4,  /* index 16 */
       4   /* index 17 */
};

static const unsigned char ATL_AMM_KBMINs[18] =
{
       0,  /* index 0 */
       0,  /* index 1 */
       0,  /* index 2 */
       0,  /* index 3 */
       0,  /* index 4 */
       0,  /* index 5 */
       0,  /* index 6 */
       0,  /* index 7 */
       0,  /* index 8 */
       0,  /* index 9 */
       0,  /* index 10 */
       0,  /* index 11 */
       0,  /* index 12 */
       0,  /* index 13 */
       0,  /* index 14 */
       0,  /* index 15 */
       0,  /* index 16 */
       0   /* index 17 */
};


#endif  /* end include file guard */
