#ifndef ATLAS_CsqAMM_PERF_H
   #define ATLAS_CsqAMM_PERF_H

#include "atlas_amm.h"
#define ATL_csqAMM_NCASES 18
#define ATL_sqAMM_DENOM 1.453560e+04 /* (14535.60)*/ 
#define ATL_sqAMM_MAXMFLOPIDX 17

#define ATL_AMM_25LCMU 4
#define ATL_AMM_25LCMMN 4
#define ATL_AMM_25KB 8
#define ATL_AMM_25NB 8
#define ATL_AMM_25MB 8
#define ATL_AMM_25IDX 1
#define ATL_AMM_33LCMU 4
#define ATL_AMM_33LCMMN 4
#define ATL_AMM_33KB 8
#define ATL_AMM_33NB 8
#define ATL_AMM_33MB 8
#define ATL_AMM_33IDX 1
#define ATL_AMM_50LCMU 12
#define ATL_AMM_50LCMMN 12
#define ATL_AMM_50KB 12
#define ATL_AMM_50NB 12
#define ATL_AMM_50MB 12
#define ATL_AMM_50IDX 2
#define ATL_AMM_66LCMU 4
#define ATL_AMM_66LCMMN 4
#define ATL_AMM_66KB 24
#define ATL_AMM_66NB 24
#define ATL_AMM_66MB 24
#define ATL_AMM_66IDX 4
#define ATL_AMM_75LCMU 4
#define ATL_AMM_75LCMMN 4
#define ATL_AMM_75KB 36
#define ATL_AMM_75NB 36
#define ATL_AMM_75MB 36
#define ATL_AMM_75IDX 7
#define ATL_AMM_80LCMU 4
#define ATL_AMM_80LCMMN 4
#define ATL_AMM_80KB 36
#define ATL_AMM_80NB 36
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 7
#define ATL_AMM_85LCMU 4
#define ATL_AMM_85LCMMN 4
#define ATL_AMM_85KB 40
#define ATL_AMM_85NB 40
#define ATL_AMM_85MB 40
#define ATL_AMM_85IDX 8
#define ATL_AMM_90LCMU 4
#define ATL_AMM_90LCMMN 4
#define ATL_AMM_90KB 48
#define ATL_AMM_90NB 48
#define ATL_AMM_90MB 48
#define ATL_AMM_90IDX 10
#define ATL_AMM_95LCMU 4
#define ATL_AMM_95LCMMN 4
#define ATL_AMM_95KB 68
#define ATL_AMM_95NB 68
#define ATL_AMM_95MB 68
#define ATL_AMM_95IDX 14
#define ATL_AMM_98LCMU 4
#define ATL_AMM_98LCMMN 4
#define ATL_AMM_98KB 76
#define ATL_AMM_98NB 76
#define ATL_AMM_98MB 76
#define ATL_AMM_98IDX 16
#define ATL_AMM_99LCMU 4
#define ATL_AMM_99LCMMN 4
#define ATL_AMM_99KB 80
#define ATL_AMM_99NB 80
#define ATL_AMM_99MB 80
#define ATL_AMM_99IDX 17

static const float ATL_sqAMM_PERF[18] =   /* % of performance of best kernel */
{
   0.215807,  /* IDX=0, KB=4 */
   0.427544,  /* IDX=1, KB=8 */
   0.625129,  /* IDX=2, KB=12 */
   0.643040,  /* IDX=3, KB=20 */
   0.684503,  /* IDX=4, KB=24 */
   0.725369,  /* IDX=5, KB=28 */
   0.742965,  /* IDX=6, KB=32 */
   0.818418,  /* IDX=7, KB=36 */
   0.865137,  /* IDX=8, KB=40 */
   0.874859,  /* IDX=9, KB=44 */
   0.903145,  /* IDX=10, KB=48 */
   0.912467,  /* IDX=11, KB=52 */
   0.929488,  /* IDX=12, KB=56 */
   0.941874,  /* IDX=13, KB=60 */
   0.961498,  /* IDX=14, KB=68 */
   0.973433,  /* IDX=15, KB=72 */
   0.984067,  /* IDX=16, KB=76 */
   1.000000   /* IDX=17, KB=80 */
};

static const float ATL_sqAMM_TIME[18] =   /* % of performance of best kernel */
{
   4.080485e-08,  /* IDX=0, KB=4 */
   1.647729e-07,  /* IDX=1, KB=8 */
   3.803392e-07,  /* IDX=2, KB=12 */
   1.711785e-06,  /* IDX=3, KB=20 */
   2.778789e-06,  /* IDX=4, KB=24 */
   4.164015e-06,  /* IDX=5, KB=28 */
   6.068463e-06,  /* IDX=6, KB=32 */
   7.843849e-06,  /* IDX=7, KB=36 */
   1.017869e-05,  /* IDX=8, KB=40 */
   1.339729e-05,  /* IDX=9, KB=44 */
   1.684858e-05,  /* IDX=10, KB=48 */
   2.120263e-05,  /* IDX=11, KB=52 */
   2.599666e-05,  /* IDX=12, KB=56 */
   3.155424e-05,  /* IDX=13, KB=60 */
   4.499615e-05,  /* IDX=14, KB=68 */
   5.275803e-05,  /* IDX=15, KB=72 */
   6.137808e-05,  /* IDX=16, KB=76 */
   7.044773e-05   /* IDX=17, KB=80 */
};

#endif  /* end include file guard */
