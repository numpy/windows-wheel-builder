#ifndef ATLAS_CgeAMM_PERF_H
   #define ATLAS_CgeAMM_PERF_H

#include "atlas_amm.h"
#define ATL_cgeAMM_NCASES 17
#define ATL_geAMM_DENOM 1.453560e+04 /* (14535.60)*/ 
#define ATL_geAMM_MAXMFLOPIDX 16

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
#define ATL_AMM_66LCMU 32
#define ATL_AMM_66LCMMN 32
#define ATL_AMM_66KB 24
#define ATL_AMM_66NB 24
#define ATL_AMM_66MB 32
#define ATL_AMM_66IDX 4
#define ATL_AMM_75LCMU 4
#define ATL_AMM_75LCMMN 4
#define ATL_AMM_75KB 36
#define ATL_AMM_75NB 36
#define ATL_AMM_75MB 36
#define ATL_AMM_75IDX 6
#define ATL_AMM_80LCMU 4
#define ATL_AMM_80LCMMN 4
#define ATL_AMM_80KB 36
#define ATL_AMM_80NB 36
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 6
#define ATL_AMM_85LCMU 4
#define ATL_AMM_85LCMMN 4
#define ATL_AMM_85KB 40
#define ATL_AMM_85NB 40
#define ATL_AMM_85MB 40
#define ATL_AMM_85IDX 7
#define ATL_AMM_90LCMU 4
#define ATL_AMM_90LCMMN 4
#define ATL_AMM_90KB 48
#define ATL_AMM_90NB 48
#define ATL_AMM_90MB 48
#define ATL_AMM_90IDX 9
#define ATL_AMM_95LCMU 4
#define ATL_AMM_95LCMMN 4
#define ATL_AMM_95KB 68
#define ATL_AMM_95NB 68
#define ATL_AMM_95MB 68
#define ATL_AMM_95IDX 13
#define ATL_AMM_98LCMU 4
#define ATL_AMM_98LCMMN 4
#define ATL_AMM_98KB 76
#define ATL_AMM_98NB 76
#define ATL_AMM_98MB 76
#define ATL_AMM_98IDX 15
#define ATL_AMM_99LCMU 4
#define ATL_AMM_99LCMMN 4
#define ATL_AMM_99KB 80
#define ATL_AMM_99NB 80
#define ATL_AMM_99MB 80
#define ATL_AMM_99IDX 16

static const float ATL_geAMM_PERF[17] =   /* % of performance of best kernel */
{
   0.215807,  /* IDX=0, KB=4 */
   0.427544,  /* IDX=1, KB=8 */
   0.625129,  /* IDX=2, KB=12 */
   0.643040,  /* IDX=3, KB=20 */
   0.726519,  /* IDX=4, KB=24 */
   0.743753,  /* IDX=5, KB=28 */
   0.818418,  /* IDX=6, KB=36 */
   0.865137,  /* IDX=7, KB=40 */
   0.874859,  /* IDX=8, KB=44 */
   0.903145,  /* IDX=9, KB=48 */
   0.912467,  /* IDX=10, KB=52 */
   0.929488,  /* IDX=11, KB=56 */
   0.941874,  /* IDX=12, KB=60 */
   0.961498,  /* IDX=13, KB=68 */
   0.973433,  /* IDX=14, KB=72 */
   0.984067,  /* IDX=15, KB=76 */
   1.000000   /* IDX=16, KB=80 */
};

static const float ATL_geAMM_TIME[17] =   /* % of performance of best kernel */
{
   4.080485e-08,  /* IDX=0, KB=4 */
   1.647729e-07,  /* IDX=1, KB=8 */
   3.803392e-07,  /* IDX=2, KB=12 */
   1.711785e-06,  /* IDX=3, KB=20 */
   3.490780e-06,  /* IDX=4, KB=24 */
   4.641246e-06,  /* IDX=5, KB=28 */
   7.843849e-06,  /* IDX=6, KB=36 */
   1.017869e-05,  /* IDX=7, KB=40 */
   1.339729e-05,  /* IDX=8, KB=44 */
   1.684858e-05,  /* IDX=9, KB=48 */
   2.120263e-05,  /* IDX=10, KB=52 */
   2.599666e-05,  /* IDX=11, KB=56 */
   3.155424e-05,  /* IDX=12, KB=60 */
   4.499615e-05,  /* IDX=13, KB=68 */
   5.275803e-05,  /* IDX=14, KB=72 */
   6.137808e-05,  /* IDX=15, KB=76 */
   7.044773e-05   /* IDX=16, KB=80 */
};

#endif  /* end include file guard */
