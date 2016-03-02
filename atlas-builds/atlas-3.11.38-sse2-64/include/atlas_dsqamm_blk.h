#ifndef ATLAS_DAMM_BLK_H
   #define ATLAS_DAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 22
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 22
#endif
#define ATL_AMM_MAXMB 204
#define ATL_AMM_MAXNB 204
#define ATL_AMM_MAXKB 204
#define ATL_AMM_MAXKMAJ 2

static const unsigned char ATL_AMM_MBs[22] =
{
     112,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
     112,  /* index 3 */
      12,  /* index 4 */
     112,  /* index 5 */
     112,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120,  /* index 15 */
     132,  /* index 16 */
     144,  /* index 17 */
     156,  /* index 18 */
     168,  /* index 19 */
     180,  /* index 20 */
     204   /* index 21 */
};

static const unsigned char ATL_AMM_NBs[22] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
     120,  /* index 3 */
      12,  /* index 4 */
     120,  /* index 5 */
     120,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120,  /* index 15 */
     132,  /* index 16 */
     144,  /* index 17 */
     156,  /* index 18 */
     168,  /* index 19 */
     180,  /* index 20 */
     204   /* index 21 */
};

static const unsigned char ATL_AMM_KBs[22] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
     120,  /* index 3 */
      12,  /* index 4 */
     120,  /* index 5 */
     120,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120,  /* index 15 */
     132,  /* index 16 */
     144,  /* index 17 */
     156,  /* index 18 */
     168,  /* index 19 */
     180,  /* index 20 */
     204   /* index 21 */
};

static const unsigned char ATL_AMM_MUs[22] =
{
       4,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
      10,  /* index 3 */
      12,  /* index 4 */
      20,  /* index 5 */
      22,  /* index 6 */
      28,  /* index 7 */
       8,  /* index 8 */
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
      12   /* index 21 */
};

static const unsigned char ATL_AMM_NUs[22] =
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
       1   /* index 21 */
};

static const unsigned char ATL_AMM_KUs[22] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       2,  /* index 2 */
     120,  /* index 3 */
       2,  /* index 4 */
     120,  /* index 5 */
     120,  /* index 6 */
      28,  /* index 7 */
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
       2   /* index 21 */
};

static const unsigned char ATL_AMM_KBMINs[22] =
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
       0   /* index 21 */
};


#endif  /* end include file guard */
