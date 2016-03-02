#ifndef ATLAS_DgeAMM_PERF_H
   #define ATLAS_DgeAMM_PERF_H

#include "atlas_amm.h"
#define ATL_dgeAMM_NCASES 34
#define ATL_geAMM_DENOM 7.512095e+03 /* (7512.10)*/ 
#define ATL_geAMM_MAXMFLOPIDX 33

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
#define ATL_AMM_66KB 28
#define ATL_AMM_66NB 28
#define ATL_AMM_66MB 36
#define ATL_AMM_66IDX 1
#define ATL_AMM_75LCMU 12
#define ATL_AMM_75LCMMN 12
#define ATL_AMM_75KB 32
#define ATL_AMM_75NB 32
#define ATL_AMM_75MB 36
#define ATL_AMM_75IDX 2
#define ATL_AMM_80LCMU 12
#define ATL_AMM_80LCMMN 12
#define ATL_AMM_80KB 32
#define ATL_AMM_80NB 32
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 2
#define ATL_AMM_85LCMU 12
#define ATL_AMM_85LCMMN 12
#define ATL_AMM_85KB 36
#define ATL_AMM_85NB 36
#define ATL_AMM_85MB 36
#define ATL_AMM_85IDX 3
#define ATL_AMM_90LCMU 12
#define ATL_AMM_90LCMMN 12
#define ATL_AMM_90KB 52
#define ATL_AMM_90NB 52
#define ATL_AMM_90MB 60
#define ATL_AMM_90IDX 7
#define ATL_AMM_95LCMU 12
#define ATL_AMM_95LCMMN 12
#define ATL_AMM_95KB 76
#define ATL_AMM_95NB 76
#define ATL_AMM_95MB 84
#define ATL_AMM_95IDX 13
#define ATL_AMM_98LCMU 12
#define ATL_AMM_98LCMMN 12
#define ATL_AMM_98KB 112
#define ATL_AMM_98NB 112
#define ATL_AMM_98MB 120
#define ATL_AMM_98IDX 18
#define ATL_AMM_99LCMU 12
#define ATL_AMM_99LCMMN 12
#define ATL_AMM_99KB 164
#define ATL_AMM_99NB 164
#define ATL_AMM_99MB 168
#define ATL_AMM_99IDX 22

static const float ATL_geAMM_PERF[34] =   /* % of performance of best kernel */
{
   0.640721,  /* IDX=0, KB=24 */
   0.733356,  /* IDX=1, KB=28 */
   0.837210,  /* IDX=2, KB=32 */
   0.853333,  /* IDX=3, KB=36 */
   0.868082,  /* IDX=4, KB=40 */
   0.871589,  /* IDX=5, KB=44 */
   0.893415,  /* IDX=6, KB=48 */
   0.904457,  /* IDX=7, KB=52 */
   0.916631,  /* IDX=8, KB=56 */
   0.919538,  /* IDX=9, KB=60 */
   0.923042,  /* IDX=10, KB=64 */
   0.936855,  /* IDX=11, KB=68 */
   0.943265,  /* IDX=12, KB=72 */
   0.950962,  /* IDX=13, KB=76 */
   0.965786,  /* IDX=14, KB=92 */
   0.973942,  /* IDX=15, KB=100 */
   0.975982,  /* IDX=16, KB=104 */
   0.977734,  /* IDX=17, KB=108 */
   0.982111,  /* IDX=18, KB=112 */
   0.982975,  /* IDX=19, KB=116 */
   0.988473,  /* IDX=20, KB=124 */
   0.988844,  /* IDX=21, KB=160 */
   0.991098,  /* IDX=22, KB=164 */
   0.991713,  /* IDX=23, KB=168 */
   0.992868,  /* IDX=24, KB=172 */
   0.994465,  /* IDX=25, KB=176 */
   0.995366,  /* IDX=26, KB=180 */
   0.995436,  /* IDX=27, KB=184 */
   0.996072,  /* IDX=28, KB=188 */
   0.997487,  /* IDX=29, KB=196 */
   0.997730,  /* IDX=30, KB=200 */
   0.998629,  /* IDX=31, KB=204 */
   0.999261,  /* IDX=32, KB=208 */
   1.000000   /* IDX=33, KB=212 */
};

static const float ATL_geAMM_TIME[34] =   /* % of performance of best kernel */
{
   5.744255e-06,  /* IDX=0, KB=24 */
   1.024643e-05,  /* IDX=1, KB=28 */
   1.172295e-05,  /* IDX=2, KB=32 */
   1.455654e-05,  /* IDX=3, KB=36 */
   2.355427e-05,  /* IDX=4, KB=40 */
   2.838596e-05,  /* IDX=5, KB=44 */
   3.295636e-05,  /* IDX=6, KB=48 */
   4.775719e-05,  /* IDX=7, KB=52 */
   5.465147e-05,  /* IDX=8, KB=56 */
   6.253930e-05,  /* IDX=9, KB=60 */
   8.506288e-05,  /* IDX=10, KB=64 */
   9.461215e-05,  /* IDX=11, KB=68 */
   1.053495e-04,  /* IDX=12, KB=72 */
   1.358352e-04,  /* IDX=13, KB=76 */
   2.239932e-04,  /* IDX=14, KB=92 */
   2.952293e-04,  /* IDX=15, KB=100 */
   3.186526e-04,  /* IDX=16, KB=104 */
   3.430201e-04,  /* IDX=17, KB=108 */
   4.080615e-04,  /* IDX=18, KB=112 */
   4.373445e-04,  /* IDX=19, KB=116 */
   5.466653e-04,  /* IDX=20, KB=124 */
   1.157952e-03,  /* IDX=21, KB=160 */
   1.213807e-03,  /* IDX=22, KB=164 */
   1.272948e-03,  /* IDX=23, KB=168 */
   1.427929e-03,  /* IDX=24, KB=172 */
   1.492716e-03,  /* IDX=25, KB=176 */
   1.559925e-03,  /* IDX=26, KB=180 */
   1.738571e-03,  /* IDX=27, KB=184 */
   1.813824e-03,  /* IDX=28, KB=188 */
   2.091722e-03,  /* IDX=29, KB=196 */
   2.177439e-03,  /* IDX=30, KB=200 */
   2.263369e-03,  /* IDX=31, KB=204 */
   2.489834e-03,  /* IDX=32, KB=208 */
   2.584606e-03   /* IDX=33, KB=212 */
};

#endif  /* end include file guard */
