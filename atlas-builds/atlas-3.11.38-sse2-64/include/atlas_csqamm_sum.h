#ifndef ATLAS_CAMM_SUM_H
   #define ATLAS_CAMM_SUM_H

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

#define ATL_AMM_LMU 4
#define ATL_AMM_LNU 2
#define ATL_AMM_LKU 4
#define ATL_AMM_LLCMMN 4

#define ATL_AMM_LLCMU 4

#define ATL_AMM_66IDX 4
#define ATL_AMM_66MB 24
#define ATL_AMM_66NB 24
#define ATL_AMM_66KB 24
#define ATL_AMM_66LCMMN 4

#define ATL_AMM_66LCMU 4

#define ATL_AMM_66RATIO 0.6845

#define ATL_AMM_98IDX 16
#define ATL_AMM_98MB 76
#define ATL_AMM_98NB 76
#define ATL_AMM_98KB 76
#define ATL_AMM_98LCMMN 4

#define ATL_AMM_98LCMU 4

#define ATL_AMM_98RATIO 0.9841

#define ATL_MAXM_RKK 96
#define ATL_MAXN_RKK 80
#define ATL_MAXK_RKK 80
#define ATL_MAXKMAJ_RKK 4

#define ATL_66IDX_RKK 9
#define ATL_66NB_RKK 32
#define ATL_66MB_RKK 12
#define ATL_66KB_RKK 12
#define ATL_66RATIO_RKK 0.6681

#define ATL_AMMFLG_KRUNTIME(flg_) ((flg_) & 1)
#define ATL_AMMFLG_KMAJOR(flg_) ((flg_) & 2)

#endif  /* end include file guard */
