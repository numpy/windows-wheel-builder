#ifndef ATLAS_CrkAMM_PERF_H
   #define ATLAS_CrkAMM_PERF_H

#include "atlas_amm.h"
#define ATL_crkAMM_NCASES 78
#define ATL_rkAMM_DENOM 1.439473e+04 /* (14394.73)*/ 
#define ATL_rkAMM_MAXMFLOPIDX 77

#define ATL_AMM_25LCMU 12
#define ATL_AMM_25LCMMN 12
#define ATL_AMM_25KB 3
#define ATL_AMM_25NB 3
#define ATL_AMM_25MB 12
#define ATL_AMM_25IDX 0
#define ATL_AMM_33LCMU 12
#define ATL_AMM_33LCMMN 12
#define ATL_AMM_33KB 3
#define ATL_AMM_33NB 3
#define ATL_AMM_33MB 12
#define ATL_AMM_33IDX 0
#define ATL_AMM_50LCMU 32
#define ATL_AMM_50LCMMN 32
#define ATL_AMM_50KB 5
#define ATL_AMM_50NB 5
#define ATL_AMM_50MB 32
#define ATL_AMM_50IDX 2
#define ATL_AMM_66LCMU 32
#define ATL_AMM_66LCMMN 32
#define ATL_AMM_66KB 11
#define ATL_AMM_66NB 11
#define ATL_AMM_66MB 32
#define ATL_AMM_66IDX 8
#define ATL_AMM_75LCMU 32
#define ATL_AMM_75LCMMN 32
#define ATL_AMM_75KB 25
#define ATL_AMM_75NB 25
#define ATL_AMM_75MB 32
#define ATL_AMM_75IDX 22
#define ATL_AMM_80LCMU 4
#define ATL_AMM_80LCMMN 4
#define ATL_AMM_80KB 36
#define ATL_AMM_80NB 36
#define ATL_AMM_80MB 36
#define ATL_AMM_80IDX 33
#define ATL_AMM_85LCMU 4
#define ATL_AMM_85LCMMN 4
#define ATL_AMM_85KB 40
#define ATL_AMM_85NB 40
#define ATL_AMM_85MB 40
#define ATL_AMM_85IDX 37
#define ATL_AMM_90LCMU 4
#define ATL_AMM_90LCMMN 4
#define ATL_AMM_90KB 52
#define ATL_AMM_90NB 52
#define ATL_AMM_90MB 52
#define ATL_AMM_90IDX 49
#define ATL_AMM_95LCMU 4
#define ATL_AMM_95LCMMN 4
#define ATL_AMM_95KB 72
#define ATL_AMM_95NB 72
#define ATL_AMM_95MB 72
#define ATL_AMM_95IDX 69
#define ATL_AMM_98LCMU 4
#define ATL_AMM_98LCMMN 4
#define ATL_AMM_98KB 76
#define ATL_AMM_98NB 76
#define ATL_AMM_98MB 76
#define ATL_AMM_98IDX 73
#define ATL_AMM_99LCMU 4
#define ATL_AMM_99LCMMN 4
#define ATL_AMM_99KB 80
#define ATL_AMM_99NB 80
#define ATL_AMM_99MB 80
#define ATL_AMM_99IDX 77

static const float ATL_rkAMM_PERF[78] =   /* % of performance of best kernel */
{
   0.332538,  /* IDX=0, KB=3 */
   0.485638,  /* IDX=1, KB=4 */
   0.557828,  /* IDX=2, KB=5 */
   0.537918,  /* IDX=3, KB=6 */
   0.593205,  /* IDX=4, KB=7 */
   0.611411,  /* IDX=5, KB=8 */
   0.637017,  /* IDX=6, KB=9 */
   0.647341,  /* IDX=7, KB=10 */
   0.663143,  /* IDX=8, KB=11 */
   0.668085,  /* IDX=9, KB=12 */
   0.685223,  /* IDX=10, KB=13 */
   0.692851,  /* IDX=11, KB=14 */
   0.702488,  /* IDX=12, KB=15 */
   0.703613,  /* IDX=13, KB=16 */
   0.716343,  /* IDX=14, KB=17 */
   0.718464,  /* IDX=15, KB=18 */
   0.726750,  /* IDX=16, KB=19 */
   0.727447,  /* IDX=17, KB=20 */
   0.733781,  /* IDX=18, KB=21 */
   0.739516,  /* IDX=19, KB=22 */
   0.740465,  /* IDX=20, KB=23 */
   0.743188,  /* IDX=21, KB=24 */
   0.750300,  /* IDX=22, KB=25 */
   0.751938,  /* IDX=23, KB=26 */
   0.755483,  /* IDX=24, KB=27 */
   0.758326,  /* IDX=25, KB=28 */
   0.761579,  /* IDX=26, KB=29 */
   0.761794,  /* IDX=27, KB=30 */
   0.763645,  /* IDX=28, KB=31 */
   0.758132,  /* IDX=29, KB=32 */
   0.770176,  /* IDX=30, KB=33 */
   0.771748,  /* IDX=31, KB=34 */
   0.774795,  /* IDX=32, KB=35 */
   0.833804,  /* IDX=33, KB=36 */
   0.775246,  /* IDX=34, KB=37 */
   0.774048,  /* IDX=35, KB=38 */
   0.780801,  /* IDX=36, KB=39 */
   0.872780,  /* IDX=37, KB=40 */
   0.779819,  /* IDX=38, KB=41 */
   0.780900,  /* IDX=39, KB=42 */
   0.784392,  /* IDX=40, KB=43 */
   0.860452,  /* IDX=41, KB=44 */
   0.782296,  /* IDX=42, KB=45 */
   0.785064,  /* IDX=43, KB=46 */
   0.783866,  /* IDX=44, KB=47 */
   0.899989,  /* IDX=45, KB=48 */
   0.790850,  /* IDX=46, KB=49 */
   0.785197,  /* IDX=47, KB=50 */
   0.792244,  /* IDX=48, KB=51 */
   0.904550,  /* IDX=49, KB=52 */
   0.792687,  /* IDX=50, KB=53 */
   0.791341,  /* IDX=51, KB=54 */
   0.795941,  /* IDX=52, KB=55 */
   0.920922,  /* IDX=53, KB=56 */
   0.793927,  /* IDX=54, KB=57 */
   0.792143,  /* IDX=55, KB=58 */
   0.791649,  /* IDX=56, KB=59 */
   0.944453,  /* IDX=57, KB=60 */
   0.794471,  /* IDX=58, KB=61 */
   0.796491,  /* IDX=59, KB=62 */
   0.796690,  /* IDX=60, KB=63 */
   0.941225,  /* IDX=61, KB=64 */
   0.798437,  /* IDX=62, KB=65 */
   0.780052,  /* IDX=63, KB=66 */
   0.773150,  /* IDX=64, KB=67 */
   0.949180,  /* IDX=65, KB=68 */
   0.777184,  /* IDX=66, KB=69 */
   0.777678,  /* IDX=67, KB=70 */
   0.776248,  /* IDX=68, KB=71 */
   0.979798,  /* IDX=69, KB=72 */
   0.782202,  /* IDX=70, KB=73 */
   0.785732,  /* IDX=71, KB=74 */
   0.781053,  /* IDX=72, KB=75 */
   0.988623,  /* IDX=73, KB=76 */
   0.782712,  /* IDX=74, KB=77 */
   0.783520,  /* IDX=75, KB=78 */
   0.785393,  /* IDX=76, KB=79 */
   1.000000   /* IDX=77, KB=80 */
};

static const float ATL_rkAMM_TIME[78] =   /* % of performance of best kernel */
{
   4.512412e-08,  /* IDX=0, KB=3 */
   8.239601e-08,  /* IDX=1, KB=4 */
   1.992582e-07,  /* IDX=2, KB=5 */
   2.975522e-07,  /* IDX=3, KB=6 */
   3.672551e-07,  /* IDX=4, KB=7 */
   4.653965e-07,  /* IDX=5, KB=8 */
   5.653406e-07,  /* IDX=6, KB=9 */
   6.868201e-07,  /* IDX=7, KB=10 */
   8.112499e-07,  /* IDX=8, KB=11 */
   9.583123e-07,  /* IDX=9, KB=12 */
   1.096558e-06,  /* IDX=10, KB=13 */
   1.257746e-06,  /* IDX=11, KB=14 */
   1.424034e-06,  /* IDX=12, KB=15 */
   1.617642e-06,  /* IDX=13, KB=16 */
   1.793715e-06,  /* IDX=14, KB=17 */
   2.005011e-06,  /* IDX=15, KB=18 */
   2.208506e-06,  /* IDX=16, KB=19 */
   2.444752e-06,  /* IDX=17, KB=20 */
   2.672074e-06,  /* IDX=18, KB=21 */
   2.909875e-06,  /* IDX=19, KB=22 */
   3.176346e-06,  /* IDX=20, KB=23 */
   3.445881e-06,  /* IDX=21, KB=24 */
   3.703580e-06,  /* IDX=22, KB=25 */
   3.997062e-06,  /* IDX=23, KB=26 */
   4.290219e-06,  /* IDX=24, KB=27 */
   4.596598e-06,  /* IDX=25, KB=28 */
   4.909726e-06,  /* IDX=26, KB=29 */
   5.252685e-06,  /* IDX=27, KB=30 */
   5.595103e-06,  /* IDX=28, KB=31 */
   6.005260e-06,  /* IDX=29, KB=32 */
   1.257315e-05,  /* IDX=30, KB=33 */
   1.331953e-05,  /* IDX=31, KB=34 */
   1.405905e-05,  /* IDX=32, KB=35 */
   7.774452e-06,  /* IDX=33, KB=36 */
   1.570257e-05,  /* IDX=34, KB=37 */
   1.658845e-05,  /* IDX=35, KB=38 */
   1.732189e-05,  /* IDX=36, KB=39 */
   1.018830e-05,  /* IDX=37, KB=40 */
   1.916815e-05,  /* IDX=38, KB=41 */
   2.008674e-05,  /* IDX=39, KB=42 */
   2.096092e-05,  /* IDX=40, KB=43 */
   1.375491e-05,  /* IDX=41, KB=44 */
   2.301762e-05,  /* IDX=42, KB=45 */
   2.396717e-05,  /* IDX=43, KB=46 */
   2.505880e-05,  /* IDX=44, KB=47 */
   1.707312e-05,  /* IDX=45, KB=48 */
   2.699632e-05,  /* IDX=46, KB=49 */
   2.831182e-05,  /* IDX=47, KB=50 */
   2.919361e-05,  /* IDX=48, KB=51 */
   2.159753e-05,  /* IDX=49, KB=52 */
   3.151060e-05,  /* IDX=50, KB=53 */
   3.276652e-05,  /* IDX=51, KB=54 */
   3.379490e-05,  /* IDX=52, KB=55 */
   2.649524e-05,  /* IDX=53, KB=56 */
   3.638947e-05,  /* IDX=54, KB=57 */
   3.776235e-05,  /* IDX=55, KB=58 */
   3.910007e-05,  /* IDX=56, KB=59 */
   3.177604e-05,  /* IDX=57, KB=60 */
   4.164740e-05,  /* IDX=58, KB=61 */
   4.291499e-05,  /* IDX=59, KB=62 */
   4.429942e-05,  /* IDX=60, KB=63 */
   3.869661e-05,  /* IDX=61, KB=64 */
   7.058031e-05,  /* IDX=62, KB=65 */
   7.448382e-05,  /* IDX=63, KB=66 */
   7.744322e-05,  /* IDX=64, KB=67 */
   4.602615e-05,  /* IDX=65, KB=68 */
   8.170943e-05,  /* IDX=66, KB=69 */
   8.404150e-05,  /* IDX=67, KB=70 */
   8.661915e-05,  /* IDX=68, KB=71 */
   5.292823e-05,  /* IDX=69, KB=72 */
   9.087089e-05,  /* IDX=70, KB=73 */
   9.295799e-05,  /* IDX=71, KB=74 */
   9.605934e-05,  /* IDX=72, KB=75 */
   6.169310e-05,  /* IDX=73, KB=76 */
   1.010362e-04,  /* IDX=74, KB=77 */
   1.035707e-04,  /* IDX=75, KB=78 */
   1.059900e-04,  /* IDX=76, KB=79 */
   7.113715e-05   /* IDX=77, KB=80 */
};

#endif  /* end include file guard */
