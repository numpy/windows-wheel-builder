#ifndef ATLAS_CAMM_FLAG_H
   #define ATLAS_CAMM_FLAG_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 78
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 78
#endif
static const unsigned char ATL_AMM_KFLAG[78] =
{
     0,  /* index 0 */
     0,  /* index 1 */
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
     2,  /* index 33 */
     1,  /* index 34 */
     1,  /* index 35 */
     1,  /* index 36 */
     2,  /* index 37 */
     1,  /* index 38 */
     1,  /* index 39 */
     1,  /* index 40 */
     2,  /* index 41 */
     1,  /* index 42 */
     1,  /* index 43 */
     1,  /* index 44 */
     2,  /* index 45 */
     1,  /* index 46 */
     1,  /* index 47 */
     1,  /* index 48 */
     2,  /* index 49 */
     1,  /* index 50 */
     1,  /* index 51 */
     1,  /* index 52 */
     2,  /* index 53 */
     1,  /* index 54 */
     1,  /* index 55 */
     1,  /* index 56 */
     2,  /* index 57 */
     1,  /* index 58 */
     1,  /* index 59 */
     1,  /* index 60 */
     2,  /* index 61 */
     1,  /* index 62 */
     1,  /* index 63 */
     1,  /* index 64 */
     2,  /* index 65 */
     1,  /* index 66 */
     1,  /* index 67 */
     1,  /* index 68 */
     2,  /* index 69 */
     1,  /* index 70 */
     1,  /* index 71 */
     1,  /* index 72 */
     2,  /* index 73 */
     1,  /* index 74 */
     1,  /* index 75 */
     1,  /* index 76 */
     2   /* index 77 */
};

#define ATL_AMM_KRUNTIME(idx_) (ATL_AMM_KFLAG[idx_] & 1)
#define ATL_AMM_KMAJOR(idx_) (ATL_AMM_KFLAG[idx_] & 2)

#endif  /* end include file guard */
