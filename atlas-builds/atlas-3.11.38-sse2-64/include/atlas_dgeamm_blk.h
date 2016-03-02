#ifndef ATLAS_DAMM_BLK_H
   #define ATLAS_DAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 34
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 34
#endif
#define ATL_AMM_MAXMB 216
#define ATL_AMM_MAXNB 212
#define ATL_AMM_MAXKB 212
#define ATL_AMM_MAXKMAJ 2

static const unsigned char ATL_AMM_MBs[34] =
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
      72,  /* index 12 */
      84,  /* index 13 */
      96,  /* index 14 */
     108,  /* index 15 */
     108,  /* index 16 */
     108,  /* index 17 */
     120,  /* index 18 */
     120,  /* index 19 */
     132,  /* index 20 */
     168,  /* index 21 */
     168,  /* index 22 */
     168,  /* index 23 */
     180,  /* index 24 */
     180,  /* index 25 */
     180,  /* index 26 */
     192,  /* index 27 */
     192,  /* index 28 */
     204,  /* index 29 */
     204,  /* index 30 */
     204,  /* index 31 */
     216,  /* index 32 */
     216   /* index 33 */
};

static const unsigned char ATL_AMM_NBs[34] =
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
      64,  /* index 10 */
      68,  /* index 11 */
      72,  /* index 12 */
      76,  /* index 13 */
      92,  /* index 14 */
     100,  /* index 15 */
     104,  /* index 16 */
     108,  /* index 17 */
     112,  /* index 18 */
     116,  /* index 19 */
     124,  /* index 20 */
     160,  /* index 21 */
     164,  /* index 22 */
     168,  /* index 23 */
     172,  /* index 24 */
     176,  /* index 25 */
     180,  /* index 26 */
     184,  /* index 27 */
     188,  /* index 28 */
     196,  /* index 29 */
     200,  /* index 30 */
     204,  /* index 31 */
     208,  /* index 32 */
     212   /* index 33 */
};

static const unsigned char ATL_AMM_KBs[34] =
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
      64,  /* index 10 */
      68,  /* index 11 */
      72,  /* index 12 */
      76,  /* index 13 */
      92,  /* index 14 */
     100,  /* index 15 */
     104,  /* index 16 */
     108,  /* index 17 */
     112,  /* index 18 */
     116,  /* index 19 */
     124,  /* index 20 */
     160,  /* index 21 */
     164,  /* index 22 */
     168,  /* index 23 */
     172,  /* index 24 */
     176,  /* index 25 */
     180,  /* index 26 */
     184,  /* index 27 */
     188,  /* index 28 */
     196,  /* index 29 */
     200,  /* index 30 */
     204,  /* index 31 */
     208,  /* index 32 */
     212   /* index 33 */
};

static const unsigned char ATL_AMM_MUs[34] =
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
      12,  /* index 20 */
      12,  /* index 21 */
      12,  /* index 22 */
      12,  /* index 23 */
      12,  /* index 24 */
      12,  /* index 25 */
      12,  /* index 26 */
      12,  /* index 27 */
      12,  /* index 28 */
      12,  /* index 29 */
      12,  /* index 30 */
      12,  /* index 31 */
      12,  /* index 32 */
      12   /* index 33 */
};

static const unsigned char ATL_AMM_NUs[34] =
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
       1,  /* index 20 */
       1,  /* index 21 */
       1,  /* index 22 */
       1,  /* index 23 */
       1,  /* index 24 */
       1,  /* index 25 */
       1,  /* index 26 */
       1,  /* index 27 */
       1,  /* index 28 */
       1,  /* index 29 */
       1,  /* index 30 */
       1,  /* index 31 */
       1,  /* index 32 */
       1   /* index 33 */
};

static const unsigned char ATL_AMM_KUs[34] =
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
       2,  /* index 20 */
       2,  /* index 21 */
       2,  /* index 22 */
       2,  /* index 23 */
       2,  /* index 24 */
       2,  /* index 25 */
       2,  /* index 26 */
       2,  /* index 27 */
       2,  /* index 28 */
       2,  /* index 29 */
       2,  /* index 30 */
       2,  /* index 31 */
       2,  /* index 32 */
       2   /* index 33 */
};

static const unsigned char ATL_AMM_KBMINs[34] =
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
       0,  /* index 20 */
       0,  /* index 21 */
       0,  /* index 22 */
       0,  /* index 23 */
       0,  /* index 24 */
       0,  /* index 25 */
       0,  /* index 26 */
       0,  /* index 27 */
       0,  /* index 28 */
       0,  /* index 29 */
       0,  /* index 30 */
       0,  /* index 31 */
       0,  /* index 32 */
       0   /* index 33 */
};


#endif  /* end include file guard */
