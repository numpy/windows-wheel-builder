#ifndef ATLAS_SAMM_SUM_H
   #define ATLAS_SAMM_SUM_H

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

#define ATL_AMM_LMU 4
#define ATL_AMM_LNU 2
#define ATL_AMM_LKU 4
#define ATL_AMM_LLCMMN 4

#define ATL_AMM_LLCMU 4

#define ATL_AMM_66IDX 7
#define ATL_AMM_66MB 36
#define ATL_AMM_66NB 36
#define ATL_AMM_66KB 36
#define ATL_AMM_66LCMMN 4

#define ATL_AMM_66LCMU 4

#define ATL_AMM_66RATIO 0.7163

#define ATL_AMM_98IDX 38
#define ATL_AMM_98MB 360
#define ATL_AMM_98NB 360
#define ATL_AMM_98KB 360
#define ATL_AMM_98LCMMN 4

#define ATL_AMM_98LCMU 4

#define ATL_AMM_98RATIO 0.9807

#define ATL_MAXM_RKK 516
#define ATL_MAXN_RKK 513
#define ATL_MAXK_RKK 512
#define ATL_MAXKMAJ_RKK 4

#define ATL_66IDX_RKK 21
#define ATL_66NB_RKK 32
#define ATL_66MB_RKK 24
#define ATL_66KB_RKK 24
#define ATL_66RATIO_RKK 0.6773

#define ATL_AMMFLG_KRUNTIME(flg_) ((flg_) & 1)
#define ATL_AMMFLG_KMAJOR(flg_) ((flg_) & 2)

#endif  /* end include file guard */
