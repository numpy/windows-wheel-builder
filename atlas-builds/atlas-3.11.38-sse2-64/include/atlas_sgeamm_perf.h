#ifndef ATLAS_SgeAMM_PERF_H
   #define ATLAS_SgeAMM_PERF_H

#include "atlas_amm.h"
#define ATL_sgeAMM_NCASES 48
#define ATL_geAMM_DENOM 1.513238e+04 /* (15132.38)*/ 
#define ATL_geAMM_MAXMFLOPIDX 47

#define ATL_AMM_25LCMU 4
#define ATL_AMM_25LCMMN 4
#define ATL_AMM_25KB 8
#define ATL_AMM_25NB 8
#define ATL_AMM_25MB 8
#define ATL_AMM_25IDX 1
#define ATL_AMM_33LCMU 12
#define ATL_AMM_33LCMMN 12
#define ATL_AMM_33KB 12
#define ATL_AMM_33NB 12
#define ATL_AMM_33MB 12
#define ATL_AMM_33IDX 2
#define ATL_AMM_50LCMU 12
#define ATL_AMM_50LCMMN 12
#define ATL_AMM_50KB 12
#define ATL_AMM_50NB 12
#define ATL_AMM_50MB 12
#define ATL_AMM_50IDX 2
#define ATL_AMM_66LCMU 32
#define ATL_AMM_66LCMMN 32
#define ATL_AMM_66KB 32
#define ATL_AMM_66NB 32
#define ATL_AMM_66MB 32
#define ATL_AMM_66IDX 6
#define ATL_AMM_75LCMU 4
#define ATL_AMM_75LCMMN 4
#define ATL_AMM_75KB 40
#define ATL_AMM_75NB 40
#define ATL_AMM_75MB 40
#define ATL_AMM_75IDX 8
#define ATL_AMM_80LCMU 4
#define ATL_AMM_80LCMMN 4
#define ATL_AMM_80KB 52
#define ATL_AMM_80NB 52
#define ATL_AMM_80MB 52
#define ATL_AMM_80IDX 10
#define ATL_AMM_85LCMU 4
#define ATL_AMM_85LCMMN 4
#define ATL_AMM_85KB 68
#define ATL_AMM_85NB 68
#define ATL_AMM_85MB 68
#define ATL_AMM_85IDX 14
#define ATL_AMM_90LCMU 4
#define ATL_AMM_90LCMMN 4
#define ATL_AMM_90KB 80
#define ATL_AMM_90NB 80
#define ATL_AMM_90MB 80
#define ATL_AMM_90IDX 17
#define ATL_AMM_95LCMU 4
#define ATL_AMM_95LCMMN 4
#define ATL_AMM_95KB 184
#define ATL_AMM_95NB 184
#define ATL_AMM_95MB 184
#define ATL_AMM_95IDX 26
#define ATL_AMM_98LCMU 4
#define ATL_AMM_98LCMMN 4
#define ATL_AMM_98KB 360
#define ATL_AMM_98NB 360
#define ATL_AMM_98MB 360
#define ATL_AMM_98IDX 38
#define ATL_AMM_99LCMU 4
#define ATL_AMM_99LCMMN 4
#define ATL_AMM_99KB 480
#define ATL_AMM_99NB 480
#define ATL_AMM_99MB 480
#define ATL_AMM_99IDX 44

static const float ATL_geAMM_PERF[48] =   /* % of performance of best kernel */
{
   0.198264,  /* IDX=0, KB=4 */
   0.285163,  /* IDX=1, KB=8 */
   0.536382,  /* IDX=2, KB=12 */
   0.543872,  /* IDX=3, KB=20 */
   0.574599,  /* IDX=4, KB=24 */
   0.590093,  /* IDX=5, KB=28 */
   0.663896,  /* IDX=6, KB=32 */
   0.716268,  /* IDX=7, KB=36 */
   0.757764,  /* IDX=8, KB=40 */
   0.780635,  /* IDX=9, KB=48 */
   0.800143,  /* IDX=10, KB=52 */
   0.815196,  /* IDX=11, KB=56 */
   0.829347,  /* IDX=12, KB=60 */
   0.831492,  /* IDX=13, KB=64 */
   0.855392,  /* IDX=14, KB=68 */
   0.869662,  /* IDX=15, KB=72 */
   0.885458,  /* IDX=16, KB=76 */
   0.903005,  /* IDX=17, KB=80 */
   0.914254,  /* IDX=18, KB=120 */
   0.917592,  /* IDX=19, KB=128 */
   0.922515,  /* IDX=20, KB=136 */
   0.930737,  /* IDX=21, KB=144 */
   0.931238,  /* IDX=22, KB=152 */
   0.938495,  /* IDX=23, KB=160 */
   0.944709,  /* IDX=24, KB=168 */
   0.947044,  /* IDX=25, KB=176 */
   0.951159,  /* IDX=26, KB=184 */
   0.954981,  /* IDX=27, KB=192 */
   0.956378,  /* IDX=28, KB=200 */
   0.960331,  /* IDX=29, KB=208 */
   0.961547,  /* IDX=30, KB=220 */
   0.966291,  /* IDX=31, KB=224 */
   0.967386,  /* IDX=32, KB=240 */
   0.971381,  /* IDX=33, KB=248 */
   0.971771,  /* IDX=34, KB=252 */
   0.976510,  /* IDX=35, KB=256 */
   0.977748,  /* IDX=36, KB=328 */
   0.978626,  /* IDX=37, KB=352 */
   0.980698,  /* IDX=38, KB=360 */
   0.981235,  /* IDX=39, KB=368 */
   0.983103,  /* IDX=40, KB=384 */
   0.984618,  /* IDX=41, KB=400 */
   0.986584,  /* IDX=42, KB=416 */
   0.988653,  /* IDX=43, KB=432 */
   0.991862,  /* IDX=44, KB=480 */
   0.991896,  /* IDX=45, KB=488 */
   0.995113,  /* IDX=46, KB=496 */
   1.000000   /* IDX=47, KB=512 */
};

static const float ATL_geAMM_TIME[48] =   /* % of performance of best kernel */
{
   4.266364e-08,  /* IDX=0, KB=4 */
   2.373006e-07,  /* IDX=1, KB=8 */
   4.257870e-07,  /* IDX=2, KB=12 */
   1.944089e-06,  /* IDX=3, KB=20 */
   3.179742e-06,  /* IDX=4, KB=24 */
   4.916731e-06,  /* IDX=5, KB=28 */
   6.523384e-06,  /* IDX=6, KB=32 */
   8.609039e-06,  /* IDX=7, KB=36 */
   1.116269e-05,  /* IDX=8, KB=40 */
   1.872398e-05,  /* IDX=9, KB=48 */
   2.322550e-05,  /* IDX=10, KB=52 */
   2.847246e-05,  /* IDX=11, KB=56 */
   3.442231e-05,  /* IDX=12, KB=60 */
   4.166816e-05,  /* IDX=13, KB=64 */
   4.858302e-05,  /* IDX=14, KB=68 */
   5.672436e-05,  /* IDX=15, KB=72 */
   6.552330e-05,  /* IDX=16, KB=76 */
   7.493811e-05,  /* IDX=17, KB=80 */
   2.498041e-04,  /* IDX=18, KB=120 */
   3.020669e-04,  /* IDX=19, KB=128 */
   3.603844e-04,  /* IDX=20, KB=136 */
   4.240169e-04,  /* IDX=21, KB=144 */
   4.984169e-04,  /* IDX=22, KB=152 */
   5.768340e-04,  /* IDX=23, KB=160 */
   6.633653e-04,  /* IDX=24, KB=168 */
   7.608352e-04,  /* IDX=25, KB=176 */
   8.656116e-04,  /* IDX=26, KB=184 */
   9.795619e-04,  /* IDX=27, KB=192 */
   1.105563e-03,  /* IDX=28, KB=200 */
   1.238487e-03,  /* IDX=29, KB=208 */
   1.463592e-03,  /* IDX=30, KB=220 */
   1.537300e-03,  /* IDX=31, KB=224 */
   1.888672e-03,  /* IDX=32, KB=240 */
   2.075334e-03,  /* IDX=33, KB=248 */
   2.176509e-03,  /* IDX=34, KB=252 */
   2.270732e-03,  /* IDX=35, KB=256 */
   4.769990e-03,  /* IDX=36, KB=328 */
   5.890254e-03,  /* IDX=37, KB=352 */
   6.287748e-03,  /* IDX=38, KB=360 */
   6.712638e-03,  /* IDX=39, KB=368 */
   7.612326e-03,  /* IDX=40, KB=384 */
   8.590823e-03,  /* IDX=41, KB=400 */
   9.644251e-03,  /* IDX=42, KB=416 */
   1.077780e-02,  /* IDX=43, KB=432 */
   1.473653e-02,  /* IDX=44, KB=480 */
   1.548518e-02,  /* IDX=45, KB=488 */
   1.620673e-02,  /* IDX=46, KB=496 */
   1.773914e-02   /* IDX=47, KB=512 */
};

#endif  /* end include file guard */
