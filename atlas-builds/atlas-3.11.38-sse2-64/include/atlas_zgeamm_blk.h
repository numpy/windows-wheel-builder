#ifndef ATLAS_ZAMM_BLK_H
   #define ATLAS_ZAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 21
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 21
#endif
#define ATL_AMM_MAXMB 132
#define ATL_AMM_MAXNB 124
#define ATL_AMM_MAXKB 124
#define ATL_AMM_MAXKMAJ 2

static const unsigned char ATL_AMM_MBs[21] =
{
      24,  /* index 0 */
      36,  /* index 1 */
      36,  /* index 2 */
      36,  /* index 3 */
      48,  /* index 4 */
      48,  /* index 5 */
      48,  /* index 6 */
      60,  /* index 7 */
      60,  /* index 8 */
      60,  /* index 9 */
      72,  /* index 10 */
      72,  /* index 11 */
      84,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     108,  /* index 15 */
     108,  /* index 16 */
     120,  /* index 17 */
     120,  /* index 18 */
     120,  /* index 19 */
     132   /* index 20 */
};

static const unsigned char ATL_AMM_NBs[21] =
{
      24,  /* index 0 */
      28,  /* index 1 */
      32,  /* index 2 */
      36,  /* index 3 */
      40,  /* index 4 */
      44,  /* index 5 */
      48,  /* index 6 */
      52,  /* index 7 */
      56,  /* index 8 */
      60,  /* index 9 */
      68,  /* index 10 */
      72,  /* index 11 */
      76,  /* index 12 */
      92,  /* index 13 */
     100,  /* index 14 */
     104,  /* index 15 */
     108,  /* index 16 */
     112,  /* index 17 */
     116,  /* index 18 */
     120,  /* index 19 */
     124   /* index 20 */
};

static const unsigned char ATL_AMM_KBs[21] =
{
      24,  /* index 0 */
      28,  /* index 1 */
      32,  /* index 2 */
      36,  /* index 3 */
      40,  /* index 4 */
      44,  /* index 5 */
      48,  /* index 6 */
      52,  /* index 7 */
      56,  /* index 8 */
      60,  /* index 9 */
      68,  /* index 10 */
      72,  /* index 11 */
      76,  /* index 12 */
      92,  /* index 13 */
     100,  /* index 14 */
     104,  /* index 15 */
     108,  /* index 16 */
     112,  /* index 17 */
     116,  /* index 18 */
     120,  /* index 19 */
     124   /* index 20 */
};

static const unsigned char ATL_AMM_MUs[21] =
{
      12,  /* index 0 */
      12,  /* index 1 */
      12,  /* index 2 */
      12,  /* index 3 */
      12,  /* index 4 */
      12,  /* index 5 */
      12,  /* index 6 */
      12,  /* index 7 */
      12,  /* index 8 */
      12,  /* index 9 */
      12,  /* index 10 */
      12,  /* index 11 */
      12,  /* index 12 */
      12,  /* index 13 */
      12,  /* index 14 */
      12,  /* index 15 */
      12,  /* index 16 */
      12,  /* index 17 */
      12,  /* index 18 */
      12,  /* index 19 */
      12   /* index 20 */
};

static const unsigned char ATL_AMM_NUs[21] =
{
       1,  /* index 0 */
       1,  /* index 1 */
       1,  /* index 2 */
       1,  /* index 3 */
       1,  /* index 4 */
       1,  /* index 5 */
       1,  /* index 6 */
       1,  /* index 7 */
       1,  /* index 8 */
       1,  /* index 9 */
       1,  /* index 10 */
       1,  /* index 11 */
       1,  /* index 12 */
       1,  /* index 13 */
       1,  /* index 14 */
       1,  /* index 15 */
       1,  /* index 16 */
       1,  /* index 17 */
       1,  /* index 18 */
       1,  /* index 19 */
       1   /* index 20 */
};

static const unsigned char ATL_AMM_KUs[21] =
{
       2,  /* index 0 */
       2,  /* index 1 */
       2,  /* index 2 */
       2,  /* index 3 */
       2,  /* index 4 */
       2,  /* index 5 */
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
       2,  /* index 16 */
       2,  /* index 17 */
       2,  /* index 18 */
       2,  /* index 19 */
       2   /* index 20 */
};

static const unsigned char ATL_AMM_KBMINs[21] =
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
       0,  /* index 17 */
       0,  /* index 18 */
       0,  /* index 19 */
       0   /* index 20 */
};


#endif  /* end include file guard */
