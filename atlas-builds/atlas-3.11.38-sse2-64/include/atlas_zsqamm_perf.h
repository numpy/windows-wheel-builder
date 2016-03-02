#ifndef ATLAS_ZsqAMM_PERF_H
   #define ATLAS_ZsqAMM_PERF_H

#include "atlas_amm.h"
#define ATL_zsqAMM_NCASES 16
#define ATL_sqAMM_DENOM 7.581347e+03 /* (7581.35)*/ 
#define ATL_sqAMM_MAXMFLOPIDX 15

#define ATL_AMM_25LCMU 4
#define ATL_AMM_25LCMMN 4
#define ATL_AMM_25KB 120
#define ATL_AMM_25NB 120
#define ATL_AMM_25MB 112
#define ATL_AMM_25IDX 0
#define ATL_AMM_33LCMU 4
#define ATL_AMM_33LCMMN 4
#define ATL_AMM_33KB 120
#define ATL_AMM_33NB 120
#define ATL_AMM_33MB 112
#define ATL_AMM_33IDX 0
#define ATL_AMM_50LCMU 8
#define ATL_AMM_50LCMMN 8
#define ATL_AMM_50KB 8
#define ATL_AMM_50NB 8
#define ATL_AMM_50MB 8
#define ATL_AMM_50IDX 2
#define ATL_AMM_66LCMU 12
#define ATL_AMM_66LCMMN 12
#define ATL_AMM_66KB 12
#define ATL_AMM_66NB 12
#define ATL_AMM_66MB 12
#define ATL_AMM_66IDX 3
#define ATL_AMM_75LCMU 22
#define ATL_AMM_75LCMMN 22
#define ATL_AMM_75KB 120
#define ATL_AMM_75NB 120
#define ATL_AMM_75MB 112
#define ATL_AMM_75IDX 5
#define ATL_AMM_80LCMU 28
#define ATL_AMM_80LCMMN 28
#define ATL_AMM_80KB 28
#define ATL_AMM_80NB 28
#define ATL_AMM_80MB 28
#define ATL_AMM_80IDX 7
#define ATL_AMM_85LCMU 8
#define ATL_AMM_85LCMMN 8
#define ATL_AMM_85KB 32
#define ATL_AMM_85NB 32
#define ATL_AMM_85MB 32
#define ATL_AMM_85IDX 8
#define ATL_AMM_90LCMU 12
#define ATL_AMM_90LCMMN 12
#define ATL_AMM_90KB 36
#define ATL_AMM_90NB 36
#define ATL_AMM_90MB 36
#define ATL_AMM_90IDX 9
#define ATL_AMM_95LCMU 12
#define ATL_AMM_95LCMMN 12
#define ATL_AMM_95KB 60
#define ATL_AMM_95NB 60
#define ATL_AMM_95MB 60
#define ATL_AMM_95IDX 11
#define ATL_AMM_98LCMU 12
#define ATL_AMM_98LCMMN 12
#define ATL_AMM_98KB 108
#define ATL_AMM_98NB 108
#define ATL_AMM_98MB 108
#define ATL_AMM_98IDX 14
#define ATL_AMM_99LCMU 12
#define ATL_AMM_99LCMMN 12
#define ATL_AMM_99KB 108
#define ATL_AMM_99NB 108
#define ATL_AMM_99MB 108
#define ATL_AMM_99IDX 14

static const float ATL_sqAMM_PERF[16] =   /* % of performance of best kernel */
{
   0.347223,  /* IDX=0, KB=120 */
   0.464203,  /* IDX=1, KB=6 */
   0.558697,  /* IDX=2, KB=8 */
   0.711902,  /* IDX=3, KB=12 */
   0.732050,  /* IDX=4, KB=120 */
   0.761209,  /* IDX=5, KB=120 */
   0.779525,  /* IDX=6, KB=24 */
   0.809656,  /* IDX=7, KB=28 */
   0.869859,  /* IDX=8, KB=32 */
   0.911769,  /* IDX=9, KB=36 */
   0.938588,  /* IDX=10, KB=48 */
   0.955191,  /* IDX=11, KB=60 */
   0.970876,  /* IDX=12, KB=72 */
   0.977090,  /* IDX=13, KB=96 */
   0.995501,  /* IDX=14, KB=108 */
   1.000000   /* IDX=15, KB=120 */
};

static const float ATL_sqAMM_TIME[16] =   /* % of performance of best kernel */
{
   1.225337e-03,  /* IDX=0, KB=120 */
   1.227522e-07,  /* IDX=1, KB=6 */
   2.417560e-07,  /* IDX=2, KB=8 */
   6.403349e-07,  /* IDX=3, KB=12 */
   5.811973e-04,  /* IDX=4, KB=120 */
   5.589336e-04,  /* IDX=5, KB=120 */
   4.678294e-06,  /* IDX=6, KB=24 */
   7.152491e-06,  /* IDX=7, KB=28 */
   9.937673e-06,  /* IDX=8, KB=32 */
   1.349915e-05,  /* IDX=9, KB=36 */
   3.108366e-05,  /* IDX=10, KB=48 */
   5.965504e-05,  /* IDX=11, KB=60 */
   1.014186e-04,  /* IDX=12, KB=72 */
   2.388707e-04,  /* IDX=13, KB=96 */
   3.338208e-04,  /* IDX=14, KB=108 */
   4.558557e-04   /* IDX=15, KB=120 */
};

#endif  /* end include file guard */
