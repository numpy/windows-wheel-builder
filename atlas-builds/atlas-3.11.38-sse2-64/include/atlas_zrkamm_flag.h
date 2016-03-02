#ifndef ATLAS_ZAMM_FLAG_H
   #define ATLAS_ZAMM_FLAG_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 122
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 122
#endif
static const unsigned char ATL_AMM_KFLAG[122] =
{
     1,  /* index 0 */
     1,  /* index 1 */
     1,  /* index 2 */
     1,  /* index 3 */
     1,  /* index 4 */
     1,  /* index 5 */
     1,  /* index 6 */
     2,  /* index 7 */
     1,  /* index 8 */
     1,  /* index 9 */
     1,  /* index 10 */
     2,  /* index 11 */
     1,  /* index 12 */
     1,  /* index 13 */
     1,  /* index 14 */
     2,  /* index 15 */
     1,  /* index 16 */
     2,  /* index 17 */
     1,  /* index 18 */
     2,  /* index 19 */
     1,  /* index 20 */
     1,  /* index 21 */
     1,  /* index 22 */
     2,  /* index 23 */
     1,  /* index 24 */
     2,  /* index 25 */
     1,  /* index 26 */
     2,  /* index 27 */
     1,  /* index 28 */
     2,  /* index 29 */
     1,  /* index 30 */
     2,  /* index 31 */
     1,  /* index 32 */
     2,  /* index 33 */
     1,  /* index 34 */
     2,  /* index 35 */
     1,  /* index 36 */
     2,  /* index 37 */
     1,  /* index 38 */
     2,  /* index 39 */
     1,  /* index 40 */
     2,  /* index 41 */
     1,  /* index 42 */
     2,  /* index 43 */
     1,  /* index 44 */
     2,  /* index 45 */
     1,  /* index 46 */
     2,  /* index 47 */
     1,  /* index 48 */
     2,  /* index 49 */
     1,  /* index 50 */
     2,  /* index 51 */
     1,  /* index 52 */
     2,  /* index 53 */
     1,  /* index 54 */
     2,  /* index 55 */
     1,  /* index 56 */
     2,  /* index 57 */
     1,  /* index 58 */
     2,  /* index 59 */
     1,  /* index 60 */
     2,  /* index 61 */
     1,  /* index 62 */
     2,  /* index 63 */
     1,  /* index 64 */
     2,  /* index 65 */
     1,  /* index 66 */
     2,  /* index 67 */
     1,  /* index 68 */
     2,  /* index 69 */
     1,  /* index 70 */
     2,  /* index 71 */
     1,  /* index 72 */
     2,  /* index 73 */
     1,  /* index 74 */
     2,  /* index 75 */
     1,  /* index 76 */
     2,  /* index 77 */
     1,  /* index 78 */
     2,  /* index 79 */
     1,  /* index 80 */
     2,  /* index 81 */
     1,  /* index 82 */
     2,  /* index 83 */
     1,  /* index 84 */
     2,  /* index 85 */
     1,  /* index 86 */
     2,  /* index 87 */
     1,  /* index 88 */
     2,  /* index 89 */
     1,  /* index 90 */
     2,  /* index 91 */
     1,  /* index 92 */
     2,  /* index 93 */
     1,  /* index 94 */
     2,  /* index 95 */
     1,  /* index 96 */
     2,  /* index 97 */
     1,  /* index 98 */
     2,  /* index 99 */
     1,  /* index 100 */
     2,  /* index 101 */
     1,  /* index 102 */
     2,  /* index 103 */
     1,  /* index 104 */
     2,  /* index 105 */
     1,  /* index 106 */
     2,  /* index 107 */
     1,  /* index 108 */
     2,  /* index 109 */
     1,  /* index 110 */
     2,  /* index 111 */
     1,  /* index 112 */
     2,  /* index 113 */
     1,  /* index 114 */
     2,  /* index 115 */
     1,  /* index 116 */
     2,  /* index 117 */
     1,  /* index 118 */
     2,  /* index 119 */
     1,  /* index 120 */
     2   /* index 121 */
};

#define ATL_AMM_KRUNTIME(idx_) (ATL_AMM_KFLAG[idx_] & 1)
#define ATL_AMM_KMAJOR(idx_) (ATL_AMM_KFLAG[idx_] & 2)

#endif  /* end include file guard */
