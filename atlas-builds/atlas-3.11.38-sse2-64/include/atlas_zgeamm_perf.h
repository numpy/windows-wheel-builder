#ifndef ATLAS_ZgeAMM_PERF_H
   #define ATLAS_ZgeAMM_PERF_H

#include "atlas_amm.h"
#define ATL_zgeAMM_NCASES 21
#define ATL_geAMM_DENOM 7.605550e+03 /* (7605.55)*/ 
#define ATL_geAMM_MAXMFLOPIDX 20

#define ATL_AMM_25LCMU 12
#define ATL_AMM_25LCMMN 12
#define ATL_AMM_25KB 24
#define ATL_AMM_25NB 24
#define ATL_AMM_25MB 24
#define ATL_AMM_25IDX 0
#define ATL_AMM_33LCMU 12
#define ATL_AMM_33LCMMN 12
#define ATL_AMM_33KB 24
#define ATL_AMM_33NB 24
#define ATL_AMM_33MB 24
#define ATL_AMM_33IDX 0
#define ATL_AMM_50LCMU 12
#define ATL_AMM_50LCMMN 12
#define ATL_AMM_50KB 24
#define ATL_AMM_50NB 24
#define ATL_AMM_50MB 24
#define ATL_AMM_50IDX 0
#define ATL_AMM_66LCMU 12
#define ATL_AMM_66LCMMN 12
#define ATL_AMM_66KB 24
#define ATL_AMM_66NB 24
#define ATL_AMM_66MB 24
#define ATL_AMM_66IDX 0
#define ATL_AMM_75LCMU 12
#define ATL_AMM_75LCMMN 12
#define ATL_AMM_75KB 24
#define ATL_AMM_75NB 24
#define ATL_AMM_75MB 24
#define ATL_AMM_75IDX 0
#define ATL_AMM_80LCMU 12
#define ATL_AMM_80LCMMN 12
#define ATL_AMM_80KB 28
#define ATL_AMM_80NB 28
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 1
#define ATL_AMM_85LCMU 12
#define ATL_AMM_85LCMMN 12
#define ATL_AMM_85KB 32
#define ATL_AMM_85NB 32
#define ATL_AMM_85MB 36
#define ATL_AMM_85IDX 2
#define ATL_AMM_90LCMU 12
#define ATL_AMM_90LCMMN 12
#define ATL_AMM_90KB 36
#define ATL_AMM_90NB 36
#define ATL_AMM_90MB 36
#define ATL_AMM_90IDX 3
#define ATL_AMM_95LCMU 12
#define ATL_AMM_95LCMMN 12
#define ATL_AMM_95KB 60
#define ATL_AMM_95NB 60
#define ATL_AMM_95MB 60
#define ATL_AMM_95IDX 9
#define ATL_AMM_98LCMU 12
#define ATL_AMM_98LCMMN 12
#define ATL_AMM_98KB 92
#define ATL_AMM_98NB 92
#define ATL_AMM_98MB 96
#define ATL_AMM_98IDX 13
#define ATL_AMM_99LCMU 12
#define ATL_AMM_99LCMMN 12
#define ATL_AMM_99KB 104
#define ATL_AMM_99NB 104
#define ATL_AMM_99MB 108
#define ATL_AMM_99IDX 15

static const float ATL_geAMM_PERF[21] =   /* % of performance of best kernel */
{
   0.777044,  /* IDX=0, KB=24 */
   0.833445,  /* IDX=1, KB=28 */
   0.895384,  /* IDX=2, KB=32 */
   0.908867,  /* IDX=3, KB=36 */
   0.910291,  /* IDX=4, KB=40 */
   0.914966,  /* IDX=5, KB=44 */
   0.935602,  /* IDX=6, KB=48 */
   0.941990,  /* IDX=7, KB=52 */
   0.949215,  /* IDX=8, KB=56 */
   0.952151,  /* IDX=9, KB=60 */
   0.962710,  /* IDX=10, KB=68 */
   0.967786,  /* IDX=11, KB=72 */
   0.972548,  /* IDX=12, KB=76 */
   0.983527,  /* IDX=13, KB=92 */
   0.987618,  /* IDX=14, KB=100 */
   0.991982,  /* IDX=15, KB=104 */
   0.992333,  /* IDX=16, KB=108 */
   0.994874,  /* IDX=17, KB=112 */
   0.996749,  /* IDX=18, KB=116 */
   0.996818,  /* IDX=19, KB=120 */
   1.000000   /* IDX=20, KB=124 */
};

static const float ATL_geAMM_TIME[21] =   /* % of performance of best kernel */
{
   4.678294e-06,  /* IDX=0, KB=24 */
   8.905147e-06,  /* IDX=1, KB=28 */
   1.082661e-05,  /* IDX=2, KB=32 */
   1.349915e-05,  /* IDX=3, KB=36 */
   2.218606e-05,  /* IDX=4, KB=40 */
   2.670798e-05,  /* IDX=5, KB=44 */
   3.108366e-05,  /* IDX=6, KB=48 */
   4.529092e-05,  /* IDX=7, KB=52 */
   5.212691e-05,  /* IDX=8, KB=56 */
   5.965504e-05,  /* IDX=9, KB=60 */
   9.093982e-05,  /* IDX=10, KB=68 */
   1.014186e-04,  /* IDX=11, KB=72 */
   1.311882e-04,  /* IDX=12, KB=76 */
   2.172501e-04,  /* IDX=13, KB=92 */
   2.875636e-04,  /* IDX=14, KB=100 */
   3.096606e-04,  /* IDX=15, KB=104 */
   3.338208e-04,  /* IDX=16, KB=108 */
   3.978769e-04,  /* IDX=17, KB=112 */
   4.260012e-04,  /* IDX=18, KB=116 */
   4.558557e-04,  /* IDX=19, KB=120 */
   5.337239e-04   /* IDX=20, KB=124 */
};

#endif  /* end include file guard */
