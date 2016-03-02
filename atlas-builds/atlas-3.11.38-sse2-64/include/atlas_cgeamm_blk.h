#ifndef ATLAS_CAMM_BLK_H
   #define ATLAS_CAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 17
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 17
#endif
#define ATL_AMM_MAXMB 80
#define ATL_AMM_MAXNB 80
#define ATL_AMM_MAXKB 80
#define ATL_AMM_MAXKMAJ 4

static const unsigned char ATL_AMM_MBs[17] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      32,  /* index 4 */
      32,  /* index 5 */
      36,  /* index 6 */
      40,  /* index 7 */
      44,  /* index 8 */
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      68,  /* index 13 */
      72,  /* index 14 */
      76,  /* index 15 */
      80   /* index 16 */
};

static const unsigned char ATL_AMM_NBs[17] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
      36,  /* index 6 */
      40,  /* index 7 */
      44,  /* index 8 */
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      68,  /* index 13 */
      72,  /* index 14 */
      76,  /* index 15 */
      80   /* index 16 */
};

static const unsigned char ATL_AMM_KBs[17] =
{
       4,  /* index 0 */
       8,  /* index 1 */
      12,  /* index 2 */
      20,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
      36,  /* index 6 */
      40,  /* index 7 */
      44,  /* index 8 */
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      68,  /* index 13 */
      72,  /* index 14 */
      76,  /* index 15 */
      80   /* index 16 */
};

static const unsigned char ATL_AMM_MUs[17] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
      32,  /* index 4 */
      32,  /* index 5 */
       4,  /* index 6 */
       4,  /* index 7 */
       4,  /* index 8 */
       4,  /* index 9 */
       4,  /* index 10 */
       4,  /* index 11 */
       4,  /* index 12 */
       4,  /* index 13 */
       4,  /* index 14 */
       4,  /* index 15 */
       4   /* index 16 */
};

static const unsigned char ATL_AMM_NUs[17] =
{
       2,  /* index 0 */
       2,  /* index 1 */
       3,  /* index 2 */
       2,  /* index 3 */
       1,  /* index 4 */
       1,  /* index 5 */
       2,  /* index 6 */
       2,  /* index 7 */
       2,  /* index 8 */
       2,  /* index 9 */
       2,  /* index 10 */
       2,  /* index 11 */
       2,  /* index 12 */
       2,  /* index 13 */
       2,  /* index 14 */
       2,  /* index 15 */
       2   /* index 16 */
};

static const unsigned char ATL_AMM_KUs[17] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
      24,  /* index 4 */
      28,  /* index 5 */
       4,  /* index 6 */
       4,  /* index 7 */
       4,  /* index 8 */
       4,  /* index 9 */
       4,  /* index 10 */
       4,  /* index 11 */
       4,  /* index 12 */
       4,  /* index 13 */
       4,  /* index 14 */
       4,  /* index 15 */
       4   /* index 16 */
};

static const unsigned char ATL_AMM_KBMINs[17] =
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
       0   /* index 16 */
};


#endif  /* end include file guard */
