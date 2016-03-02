#ifndef ATLAS_ZAMM_BLK_H
   #define ATLAS_ZAMM_BLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 16
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 16
#endif
#define ATL_AMM_MAXMB 120
#define ATL_AMM_MAXNB 120
#define ATL_AMM_MAXKB 120
#define ATL_AMM_MAXKMAJ 2

static const unsigned char ATL_AMM_MBs[16] =
{
     112,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
      12,  /* index 3 */
     112,  /* index 4 */
     112,  /* index 5 */
      24,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120   /* index 15 */
};

static const unsigned char ATL_AMM_NBs[16] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
      12,  /* index 3 */
     120,  /* index 4 */
     120,  /* index 5 */
      24,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120   /* index 15 */
};

static const unsigned char ATL_AMM_KBs[16] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
      12,  /* index 3 */
     120,  /* index 4 */
     120,  /* index 5 */
      24,  /* index 6 */
      28,  /* index 7 */
      32,  /* index 8 */
      36,  /* index 9 */
      48,  /* index 10 */
      60,  /* index 11 */
      72,  /* index 12 */
      96,  /* index 13 */
     108,  /* index 14 */
     120   /* index 15 */
};

static const unsigned char ATL_AMM_MUs[16] =
{
       4,  /* index 0 */
       6,  /* index 1 */
       8,  /* index 2 */
      12,  /* index 3 */
      20,  /* index 4 */
      22,  /* index 5 */
      12,  /* index 6 */
      28,  /* index 7 */
       8,  /* index 8 */
      12,  /* index 9 */
      12,  /* index 10 */
      12,  /* index 11 */
      12,  /* index 12 */
      12,  /* index 13 */
      12,  /* index 14 */
      12   /* index 15 */
};

static const unsigned char ATL_AMM_NUs[16] =
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
       1   /* index 15 */
};

static const unsigned char ATL_AMM_KUs[16] =
{
     120,  /* index 0 */
       6,  /* index 1 */
       2,  /* index 2 */
       2,  /* index 3 */
     120,  /* index 4 */
     120,  /* index 5 */
       2,  /* index 6 */
      28,  /* index 7 */
       2,  /* index 8 */
       2,  /* index 9 */
       2,  /* index 10 */
       2,  /* index 11 */
       2,  /* index 12 */
       2,  /* index 13 */
       2,  /* index 14 */
       2   /* index 15 */
};

static const unsigned char ATL_AMM_KBMINs[16] =
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
       0   /* index 15 */
};


#endif  /* end include file guard */
