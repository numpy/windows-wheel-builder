#ifndef ATLAS_ZAMM_SUM_H
   #define ATLAS_ZAMM_SUM_H

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

#define ATL_AMM_LMU 12
#define ATL_AMM_LNU 1
#define ATL_AMM_LKU 2
#define ATL_AMM_LLCMMN 12

#define ATL_AMM_LLCMU 12

#define ATL_AMM_66IDX 0
#define ATL_AMM_66MB 24
#define ATL_AMM_66NB 24
#define ATL_AMM_66KB 24
#define ATL_AMM_66LCMMN 12

#define ATL_AMM_66LCMU 12

#define ATL_AMM_66RATIO 0.7770

#define ATL_AMM_98IDX 13
#define ATL_AMM_98MB 96
#define ATL_AMM_98NB 92
#define ATL_AMM_98KB 92
#define ATL_AMM_98LCMMN 12

#define ATL_AMM_98LCMU 12

#define ATL_AMM_98RATIO 0.9835

#define ATL_MAXM_RKK 140
#define ATL_MAXN_RKK 124
#define ATL_MAXK_RKK 124
#define ATL_MAXKMAJ_RKK 2

#define ATL_66IDX_RKK 5
#define ATL_66NB_RKK 28
#define ATL_66MB_RKK 8
#define ATL_66KB_RKK 8
#define ATL_66RATIO_RKK 0.6779

#define ATL_AMMFLG_KRUNTIME(flg_) ((flg_) & 1)
#define ATL_AMMFLG_KMAJOR(flg_) ((flg_) & 2)

#endif  /* end include file guard */
