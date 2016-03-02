#ifndef ATLAS_DAMM_SUM_H
   #define ATLAS_DAMM_SUM_H

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

#define ATL_AMM_LMU 12
#define ATL_AMM_LNU 1
#define ATL_AMM_LKU 2
#define ATL_AMM_LLCMMN 12

#define ATL_AMM_LLCMU 12

#define ATL_AMM_66IDX 5
#define ATL_AMM_66MB 112
#define ATL_AMM_66NB 120
#define ATL_AMM_66KB 120
#define ATL_AMM_66LCMMN 20

#define ATL_AMM_66LCMU 20

#define ATL_AMM_66RATIO 0.6694

#define ATL_AMM_98IDX 15
#define ATL_AMM_98MB 120
#define ATL_AMM_98NB 120
#define ATL_AMM_98KB 120
#define ATL_AMM_98LCMMN 12

#define ATL_AMM_98LCMU 12

#define ATL_AMM_98RATIO 0.9808

#define ATL_MAXM_RKK 216
#define ATL_MAXN_RKK 212
#define ATL_MAXK_RKK 212
#define ATL_MAXKMAJ_RKK 2

#define ATL_66IDX_RKK 11
#define ATL_66NB_RKK 28
#define ATL_66MB_RKK 14
#define ATL_66KB_RKK 14
#define ATL_66RATIO_RKK 0.6734

#define ATL_AMMFLG_KRUNTIME(flg_) ((flg_) & 1)
#define ATL_AMMFLG_KMAJOR(flg_) ((flg_) & 2)

#endif  /* end include file guard */
