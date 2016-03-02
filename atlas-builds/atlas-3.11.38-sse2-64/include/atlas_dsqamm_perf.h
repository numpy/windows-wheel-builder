#ifndef ATLAS_DsqAMM_PERF_H
   #define ATLAS_DsqAMM_PERF_H

#include "atlas_amm.h"
#define ATL_dsqAMM_NCASES 22
#define ATL_sqAMM_DENOM 7.501795e+03 /* (7501.80)*/ 
#define ATL_sqAMM_MAXMFLOPIDX 21

#define ATL_AMM_25LCMU 4
#define ATL_AMM_25LCMMN 4
#define ATL_AMM_25KB 120
#define ATL_AMM_25NB 120
#define ATL_AMM_25MB 112
#define ATL_AMM_25IDX 0
#define ATL_AMM_33LCMU 6
#define ATL_AMM_33LCMMN 6
#define ATL_AMM_33KB 6
#define ATL_AMM_33NB 6
#define ATL_AMM_33MB 6
#define ATL_AMM_33IDX 1
#define ATL_AMM_50LCMU 12
#define ATL_AMM_50LCMMN 12
#define ATL_AMM_50KB 12
#define ATL_AMM_50NB 12
#define ATL_AMM_50MB 12
#define ATL_AMM_50IDX 4
#define ATL_AMM_66LCMU 20
#define ATL_AMM_66LCMMN 20
#define ATL_AMM_66KB 120
#define ATL_AMM_66NB 120
#define ATL_AMM_66MB 112
#define ATL_AMM_66IDX 5
#define ATL_AMM_75LCMU 8
#define ATL_AMM_75LCMMN 8
#define ATL_AMM_75KB 32
#define ATL_AMM_75NB 32
#define ATL_AMM_75MB 32
#define ATL_AMM_75IDX 8
#define ATL_AMM_80LCMU 12
#define ATL_AMM_80LCMMN 12
#define ATL_AMM_80KB 36
#define ATL_AMM_80NB 36
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 9
#define ATL_AMM_85LCMU 12
#define ATL_AMM_85LCMMN 12
#define ATL_AMM_85KB 36
#define ATL_AMM_85NB 36
#define ATL_AMM_85MB 36
#define ATL_AMM_85IDX 9
#define ATL_AMM_90LCMU 12
#define ATL_AMM_90LCMMN 12
#define ATL_AMM_90KB 60
#define ATL_AMM_90NB 60
#define ATL_AMM_90MB 60
#define ATL_AMM_90IDX 11
#define ATL_AMM_95LCMU 12
#define ATL_AMM_95LCMMN 12
#define ATL_AMM_95KB 96
#define ATL_AMM_95NB 96
#define ATL_AMM_95MB 96
#define ATL_AMM_95IDX 13
#define ATL_AMM_98LCMU 12
#define ATL_AMM_98LCMMN 12
#define ATL_AMM_98KB 120
#define ATL_AMM_98NB 120
#define ATL_AMM_98MB 120
#define ATL_AMM_98IDX 15
#define ATL_AMM_99LCMU 12
#define ATL_AMM_99LCMMN 12
#define ATL_AMM_99KB 168
#define ATL_AMM_99NB 168
#define ATL_AMM_99MB 168
#define ATL_AMM_99IDX 19

static const float ATL_sqAMM_PERF[22] =   /* % of performance of best kernel */
{
   0.258852,  /* IDX=0, KB=120 */
   0.352949,  /* IDX=1, KB=6 */
   0.426531,  /* IDX=2, KB=8 */
   0.458913,  /* IDX=3, KB=120 */
   0.595677,  /* IDX=4, KB=12 */
   0.669439,  /* IDX=5, KB=120 */
   0.699810,  /* IDX=6, KB=120 */
   0.740613,  /* IDX=7, KB=28 */
   0.796298,  /* IDX=8, KB=32 */
   0.854504,  /* IDX=9, KB=36 */
   0.894642,  /* IDX=10, KB=48 */
   0.920800,  /* IDX=11, KB=60 */
   0.944560,  /* IDX=12, KB=72 */
   0.959526,  /* IDX=13, KB=96 */
   0.979076,  /* IDX=14, KB=108 */
   0.980771,  /* IDX=15, KB=120 */
   0.980843,  /* IDX=16, KB=132 */
   0.984258,  /* IDX=17, KB=144 */
   0.989305,  /* IDX=18, KB=156 */
   0.993075,  /* IDX=19, KB=168 */
   0.996732,  /* IDX=20, KB=180 */
   1.000000   /* IDX=21, KB=204 */
};

static const float ATL_sqAMM_TIME[22] =   /* % of performance of best kernel */
{
   1.661093e-03,  /* IDX=0, KB=120 */
   1.631572e-07,  /* IDX=1, KB=6 */
   3.200252e-07,  /* IDX=2, KB=8 */
   9.369477e-04,  /* IDX=3, KB=120 */
   7.733879e-07,  /* IDX=4, KB=12 */
   6.422951e-04,  /* IDX=5, KB=120 */
   6.144201e-04,  /* IDX=6, KB=120 */
   7.902187e-06,  /* IDX=7, KB=28 */
   1.097083e-05,  /* IDX=8, KB=32 */
   1.455654e-05,  /* IDX=9, KB=36 */
   3.295636e-05,  /* IDX=10, KB=48 */
   6.253930e-05,  /* IDX=11, KB=60 */
   1.053495e-04,  /* IDX=12, KB=72 */
   2.458227e-04,  /* IDX=13, KB=96 */
   3.430201e-04,  /* IDX=14, KB=108 */
   4.697218e-04,  /* IDX=15, KB=120 */
   6.251540e-04,  /* IDX=16, KB=132 */
   8.088040e-04,  /* IDX=17, KB=144 */
   1.023077e-03,  /* IDX=18, KB=156 */
   1.272948e-03,  /* IDX=19, KB=168 */
   1.559925e-03,  /* IDX=20, KB=180 */
   2.263369e-03   /* IDX=21, KB=204 */
};

#endif  /* end include file guard */
