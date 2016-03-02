#ifndef ATLAS_SAMM_BLK_H
   #define ATLAS_SAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
#endif
#define ATL_AMM_MAXMB 512
#define ATL_AMM_MAXNB 512
#define ATL_AMM_MAXKB 512
#define ATL_AMM_MAXKMAJ 4

static const unsigned short ATL_AMM_MBs[48] =
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
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      64,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80,  /* index 17 */
     120,  /* index 18 */
     128,  /* index 19 */
     136,  /* index 20 */
     144,  /* index 21 */
     152,  /* index 22 */
     160,  /* index 23 */
     168,  /* index 24 */
     176,  /* index 25 */
     184,  /* index 26 */
     192,  /* index 27 */
     200,  /* index 28 */
     208,  /* index 29 */
     220,  /* index 30 */
     224,  /* index 31 */
     240,  /* index 32 */
     248,  /* index 33 */
     252,  /* index 34 */
     256,  /* index 35 */
     328,  /* index 36 */
     352,  /* index 37 */
     360,  /* index 38 */
     368,  /* index 39 */
     384,  /* index 40 */
     400,  /* index 41 */
     416,  /* index 42 */
     432,  /* index 43 */
     480,  /* index 44 */
     488,  /* index 45 */
     496,  /* index 46 */
     512   /* index 47 */
};

static const unsigned short ATL_AMM_NBs[48] =
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
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      64,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80,  /* index 17 */
     120,  /* index 18 */
     128,  /* index 19 */
     136,  /* index 20 */
     144,  /* index 21 */
     152,  /* index 22 */
     160,  /* index 23 */
     168,  /* index 24 */
     176,  /* index 25 */
     184,  /* index 26 */
     192,  /* index 27 */
     200,  /* index 28 */
     208,  /* index 29 */
     220,  /* index 30 */
     224,  /* index 31 */
     240,  /* index 32 */
     248,  /* index 33 */
     252,  /* index 34 */
     256,  /* index 35 */
     328,  /* index 36 */
     352,  /* index 37 */
     360,  /* index 38 */
     368,  /* index 39 */
     384,  /* index 40 */
     400,  /* index 41 */
     416,  /* index 42 */
     432,  /* index 43 */
     480,  /* index 44 */
     488,  /* index 45 */
     496,  /* index 46 */
     512   /* index 47 */
};

static const unsigned short ATL_AMM_KBs[48] =
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
      48,  /* index 9 */
      52,  /* index 10 */
      56,  /* index 11 */
      60,  /* index 12 */
      64,  /* index 13 */
      68,  /* index 14 */
      72,  /* index 15 */
      76,  /* index 16 */
      80,  /* index 17 */
     120,  /* index 18 */
     128,  /* index 19 */
     136,  /* index 20 */
     144,  /* index 21 */
     152,  /* index 22 */
     160,  /* index 23 */
     168,  /* index 24 */
     176,  /* index 25 */
     184,  /* index 26 */
     192,  /* index 27 */
     200,  /* index 28 */
     208,  /* index 29 */
     220,  /* index 30 */
     224,  /* index 31 */
     240,  /* index 32 */
     248,  /* index 33 */
     252,  /* index 34 */
     256,  /* index 35 */
     328,  /* index 36 */
     352,  /* index 37 */
     360,  /* index 38 */
     368,  /* index 39 */
     384,  /* index 40 */
     400,  /* index 41 */
     416,  /* index 42 */
     432,  /* index 43 */
     480,  /* index 44 */
     488,  /* index 45 */
     496,  /* index 46 */
     512   /* index 47 */
};

static const unsigned short ATL_AMM_MUs[48] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
       8,  /* index 4 */
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
       4,  /* index 17 */
       4,  /* index 18 */
       4,  /* index 19 */
       4,  /* index 20 */
       4,  /* index 21 */
       4,  /* index 22 */
       4,  /* index 23 */
       4,  /* index 24 */
       4,  /* index 25 */
       4,  /* index 26 */
       4,  /* index 27 */
       4,  /* index 28 */
       4,  /* index 29 */
       4,  /* index 30 */
       4,  /* index 31 */
       4,  /* index 32 */
       4,  /* index 33 */
       4,  /* index 34 */
       4,  /* index 35 */
       4,  /* index 36 */
       4,  /* index 37 */
       4,  /* index 38 */
       4,  /* index 39 */
       4,  /* index 40 */
       4,  /* index 41 */
       4,  /* index 42 */
       4,  /* index 43 */
       4,  /* index 44 */
       4,  /* index 45 */
       4,  /* index 46 */
       4   /* index 47 */
};

static const unsigned short ATL_AMM_NUs[48] =
{
       2,  /* index 0 */
       2,  /* index 1 */
       3,  /* index 2 */
       2,  /* index 3 */
       4,  /* index 4 */
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
       2,  /* index 33 */
       2,  /* index 34 */
       2,  /* index 35 */
       2,  /* index 36 */
       2,  /* index 37 */
       2,  /* index 38 */
       2,  /* index 39 */
       2,  /* index 40 */
       2,  /* index 41 */
       2,  /* index 42 */
       2,  /* index 43 */
       2,  /* index 44 */
       2,  /* index 45 */
       2,  /* index 46 */
       2   /* index 47 */
};

static const unsigned short ATL_AMM_KUs[48] =
{
       4,  /* index 0 */
       4,  /* index 1 */
      12,  /* index 2 */
       4,  /* index 3 */
      24,  /* index 4 */
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
       4,  /* index 17 */
       4,  /* index 18 */
       4,  /* index 19 */
       4,  /* index 20 */
       4,  /* index 21 */
       4,  /* index 22 */
       4,  /* index 23 */
       4,  /* index 24 */
       4,  /* index 25 */
       4,  /* index 26 */
       4,  /* index 27 */
       4,  /* index 28 */
       4,  /* index 29 */
       4,  /* index 30 */
       4,  /* index 31 */
       4,  /* index 32 */
       4,  /* index 33 */
       4,  /* index 34 */
       4,  /* index 35 */
       4,  /* index 36 */
       4,  /* index 37 */
       4,  /* index 38 */
       4,  /* index 39 */
       4,  /* index 40 */
       4,  /* index 41 */
       4,  /* index 42 */
       4,  /* index 43 */
       4,  /* index 44 */
       4,  /* index 45 */
       4,  /* index 46 */
       4   /* index 47 */
};

static const unsigned short ATL_AMM_KBMINs[48] =
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
       0,  /* index 33 */
       0,  /* index 34 */
       0,  /* index 35 */
       0,  /* index 36 */
       0,  /* index 37 */
       0,  /* index 38 */
       0,  /* index 39 */
       0,  /* index 40 */
       0,  /* index 41 */
       0,  /* index 42 */
       0,  /* index 43 */
       0,  /* index 44 */
       0,  /* index 45 */
       0,  /* index 46 */
       0   /* index 47 */
};


#endif  /* end include file guard */
