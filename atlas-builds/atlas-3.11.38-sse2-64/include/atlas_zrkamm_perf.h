#ifndef ATLAS_ZrkAMM_PERF_H
   #define ATLAS_ZrkAMM_PERF_H

#include "atlas_amm.h"
#define ATL_zrkAMM_NCASES 122
#define ATL_rkAMM_DENOM 7.437781e+03 /* (7437.78)*/ 
#define ATL_rkAMM_MAXMFLOPIDX 111

#define ATL_AMM_25LCMU 28
#define ATL_AMM_25LCMMN 28
#define ATL_AMM_25KB 3
#define ATL_AMM_25NB 3
#define ATL_AMM_25MB 28
#define ATL_AMM_25IDX 0
#define ATL_AMM_33LCMU 28
#define ATL_AMM_33LCMMN 28
#define ATL_AMM_33KB 3
#define ATL_AMM_33NB 3
#define ATL_AMM_33MB 28
#define ATL_AMM_33IDX 0
#define ATL_AMM_50LCMU 28
#define ATL_AMM_50LCMMN 28
#define ATL_AMM_50KB 4
#define ATL_AMM_50NB 4
#define ATL_AMM_50MB 28
#define ATL_AMM_50IDX 1
#define ATL_AMM_66LCMU 28
#define ATL_AMM_66LCMMN 28
#define ATL_AMM_66KB 8
#define ATL_AMM_66NB 8
#define ATL_AMM_66MB 28
#define ATL_AMM_66IDX 5
#define ATL_AMM_75LCMU 28
#define ATL_AMM_75LCMMN 28
#define ATL_AMM_75KB 12
#define ATL_AMM_75NB 12
#define ATL_AMM_75MB 28
#define ATL_AMM_75IDX 9
#define ATL_AMM_80LCMU 12
#define ATL_AMM_80LCMMN 12
#define ATL_AMM_80KB 14
#define ATL_AMM_80NB 14
#define ATL_AMM_80MB 24
#define ATL_AMM_80IDX 11
#define ATL_AMM_85LCMU 12
#define ATL_AMM_85LCMMN 12
#define ATL_AMM_85KB 22
#define ATL_AMM_85NB 22
#define ATL_AMM_85MB 24
#define ATL_AMM_85IDX 19
#define ATL_AMM_90LCMU 12
#define ATL_AMM_90LCMMN 12
#define ATL_AMM_90KB 32
#define ATL_AMM_90NB 32
#define ATL_AMM_90MB 36
#define ATL_AMM_90IDX 29
#define ATL_AMM_95LCMU 12
#define ATL_AMM_95LCMMN 12
#define ATL_AMM_95KB 46
#define ATL_AMM_95NB 46
#define ATL_AMM_95MB 48
#define ATL_AMM_95IDX 43
#define ATL_AMM_98LCMU 12
#define ATL_AMM_98LCMMN 12
#define ATL_AMM_98KB 74
#define ATL_AMM_98NB 74
#define ATL_AMM_98MB 84
#define ATL_AMM_98IDX 71
#define ATL_AMM_99LCMU 12
#define ATL_AMM_99LCMMN 12
#define ATL_AMM_99KB 90
#define ATL_AMM_99NB 90
#define ATL_AMM_99MB 96
#define ATL_AMM_99IDX 87

static const float ATL_rkAMM_PERF[122] =   /* % of performance of best kernel */
{
   0.396885,  /* IDX=0, KB=3 */
   0.501938,  /* IDX=1, KB=4 */
   0.568735,  /* IDX=2, KB=5 */
   0.612675,  /* IDX=3, KB=6 */
   0.648929,  /* IDX=4, KB=7 */
   0.677891,  /* IDX=5, KB=8 */
   0.698913,  /* IDX=6, KB=9 */
   0.739166,  /* IDX=7, KB=10 */
   0.736543,  /* IDX=8, KB=11 */
   0.751204,  /* IDX=9, KB=12 */
   0.762899,  /* IDX=10, KB=13 */
   0.802547,  /* IDX=11, KB=14 */
   0.782632,  /* IDX=12, KB=15 */
   0.786576,  /* IDX=13, KB=16 */
   0.797514,  /* IDX=14, KB=17 */
   0.839421,  /* IDX=15, KB=18 */
   0.808215,  /* IDX=16, KB=19 */
   0.844364,  /* IDX=17, KB=20 */
   0.820402,  /* IDX=18, KB=21 */
   0.865985,  /* IDX=19, KB=22 */
   0.829475,  /* IDX=20, KB=23 */
   0.805818,  /* IDX=21, KB=24 */
   0.831442,  /* IDX=22, KB=25 */
   0.869787,  /* IDX=23, KB=26 */
   0.839447,  /* IDX=24, KB=27 */
   0.855345,  /* IDX=25, KB=28 */
   0.843228,  /* IDX=26, KB=29 */
   0.861645,  /* IDX=27, KB=30 */
   0.848034,  /* IDX=28, KB=31 */
   0.920758,  /* IDX=29, KB=32 */
   0.852597,  /* IDX=30, KB=33 */
   0.896191,  /* IDX=31, KB=34 */
   0.858856,  /* IDX=32, KB=35 */
   0.932945,  /* IDX=33, KB=36 */
   0.865219,  /* IDX=34, KB=37 */
   0.939029,  /* IDX=35, KB=38 */
   0.869630,  /* IDX=36, KB=39 */
   0.930262,  /* IDX=37, KB=40 */
   0.874478,  /* IDX=38, KB=41 */
   0.934711,  /* IDX=39, KB=42 */
   0.878059,  /* IDX=40, KB=43 */
   0.934279,  /* IDX=41, KB=44 */
   0.878939,  /* IDX=42, KB=45 */
   0.951330,  /* IDX=43, KB=46 */
   0.883088,  /* IDX=44, KB=47 */
   0.956873,  /* IDX=45, KB=48 */
   0.885015,  /* IDX=46, KB=49 */
   0.961679,  /* IDX=47, KB=50 */
   0.887359,  /* IDX=48, KB=51 */
   0.962405,  /* IDX=49, KB=52 */
   0.884528,  /* IDX=50, KB=53 */
   0.962965,  /* IDX=51, KB=54 */
   0.889143,  /* IDX=52, KB=55 */
   0.964601,  /* IDX=53, KB=56 */
   0.889056,  /* IDX=54, KB=57 */
   0.966394,  /* IDX=55, KB=58 */
   0.892155,  /* IDX=56, KB=59 */
   0.966072,  /* IDX=57, KB=60 */
   0.894414,  /* IDX=58, KB=61 */
   0.969855,  /* IDX=59, KB=62 */
   0.894458,  /* IDX=60, KB=63 */
   0.971818,  /* IDX=61, KB=64 */
   0.897511,  /* IDX=62, KB=65 */
   0.976868,  /* IDX=63, KB=66 */
   0.883190,  /* IDX=64, KB=67 */
   0.979208,  /* IDX=65, KB=68 */
   0.883095,  /* IDX=66, KB=69 */
   0.979332,  /* IDX=67, KB=70 */
   0.884512,  /* IDX=68, KB=71 */
   0.979426,  /* IDX=69, KB=72 */
   0.887358,  /* IDX=70, KB=73 */
   0.985574,  /* IDX=71, KB=74 */
   0.888510,  /* IDX=72, KB=75 */
   0.984996,  /* IDX=73, KB=76 */
   0.888264,  /* IDX=74, KB=77 */
   0.987377,  /* IDX=75, KB=78 */
   0.891601,  /* IDX=76, KB=79 */
   0.971760,  /* IDX=77, KB=80 */
   0.890511,  /* IDX=78, KB=81 */
   0.988277,  /* IDX=79, KB=82 */
   0.893656,  /* IDX=80, KB=83 */
   0.979024,  /* IDX=81, KB=84 */
   0.894925,  /* IDX=82, KB=85 */
   0.981892,  /* IDX=83, KB=86 */
   0.896869,  /* IDX=84, KB=87 */
   0.980197,  /* IDX=85, KB=88 */
   0.895107,  /* IDX=86, KB=89 */
   0.996217,  /* IDX=87, KB=90 */
   0.898257,  /* IDX=88, KB=91 */
   0.988862,  /* IDX=89, KB=92 */
   0.898804,  /* IDX=90, KB=93 */
   0.994308,  /* IDX=91, KB=94 */
   0.898895,  /* IDX=92, KB=95 */
   0.985527,  /* IDX=93, KB=96 */
   0.896613,  /* IDX=94, KB=97 */
   0.992337,  /* IDX=95, KB=98 */
   0.900754,  /* IDX=96, KB=99 */
   0.993192,  /* IDX=97, KB=100 */
   0.899288,  /* IDX=98, KB=101 */
   0.996078,  /* IDX=99, KB=102 */
   0.900431,  /* IDX=100, KB=103 */
   0.988463,  /* IDX=101, KB=104 */
   0.901307,  /* IDX=102, KB=105 */
   0.996160,  /* IDX=103, KB=106 */
   0.900811,  /* IDX=104, KB=107 */
   0.994433,  /* IDX=105, KB=108 */
   0.901868,  /* IDX=106, KB=109 */
   0.996022,  /* IDX=107, KB=110 */
   0.901508,  /* IDX=108, KB=111 */
   0.994660,  /* IDX=109, KB=112 */
   0.901709,  /* IDX=110, KB=113 */
   1.000000,  /* IDX=111, KB=114 */
   0.900879,  /* IDX=112, KB=115 */
   0.993838,  /* IDX=113, KB=116 */
   0.899618,  /* IDX=114, KB=117 */
   0.994948,  /* IDX=115, KB=118 */
   0.899664,  /* IDX=116, KB=119 */
   0.996016,  /* IDX=117, KB=120 */
   0.901289,  /* IDX=118, KB=121 */
   0.992751,  /* IDX=119, KB=122 */
   0.902001,  /* IDX=120, KB=123 */
   0.998543   /* IDX=121, KB=124 */
};

static const float ATL_rkAMM_TIME[122] =   /* % of performance of best kernel */
{
   1.707349e-07,  /* IDX=0, KB=3 */
   2.400018e-07,  /* IDX=1, KB=4 */
   3.309592e-07,  /* IDX=2, KB=5 */
   4.424017e-07,  /* IDX=3, KB=6 */
   5.685171e-07,  /* IDX=4, KB=7 */
   7.108279e-07,  /* IDX=5, KB=8 */
   8.725824e-07,  /* IDX=6, KB=9 */
   5.820554e-07,  /* IDX=7, KB=10 */
   1.236892e-06,  /* IDX=8, KB=11 */
   1.443276e-06,  /* IDX=9, KB=12 */
   1.667877e-06,  /* IDX=10, KB=13 */
   1.576098e-06,  /* IDX=11, KB=14 */
   2.164560e-06,  /* IDX=12, KB=15 */
   2.450439e-06,  /* IDX=13, KB=16 */
   2.728375e-06,  /* IDX=14, KB=17 */
   2.490938e-06,  /* IDX=15, KB=18 */
   3.362986e-06,  /* IDX=16, KB=19 */
   3.057229e-06,  /* IDX=17, KB=20 */
   4.047218e-06,  /* IDX=18, KB=21 */
   3.606889e-06,  /* IDX=19, KB=22 */
   4.801724e-06,  /* IDX=20, KB=23 */
   5.381834e-06,  /* IDX=21, KB=24 */
   5.659692e-06,  /* IDX=22, KB=25 */
   7.523553e-06,  /* IDX=23, KB=26 */
   6.538510e-06,  /* IDX=24, KB=27 */
   8.872866e-06,  /* IDX=25, KB=28 */
   1.501847e-05,  /* IDX=26, KB=29 */
   1.011121e-05,  /* IDX=27, KB=30 */
   1.706415e-05,  /* IDX=28, KB=31 */
   1.076574e-05,  /* IDX=29, KB=32 */
   1.923352e-05,  /* IDX=30, KB=33 */
   1.248666e-05,  /* IDX=31, KB=34 */
   2.147782e-05,  /* IDX=32, KB=35 */
   1.344740e-05,  /* IDX=33, KB=36 */
   2.382605e-05,  /* IDX=34, KB=37 */
   1.984797e-05,  /* IDX=35, KB=38 */
   2.633719e-05,  /* IDX=36, KB=39 */
   2.219948e-05,  /* IDX=37, KB=40 */
   2.894631e-05,  /* IDX=38, KB=41 */
   2.435841e-05,  /* IDX=39, KB=42 */
   3.170940e-05,  /* IDX=40, KB=43 */
   2.674585e-05,  /* IDX=41, KB=44 */
   3.469294e-05,  /* IDX=42, KB=45 */
   2.870862e-05,  /* IDX=43, KB=46 */
   3.766746e-05,  /* IDX=44, KB=47 */
   3.107820e-05,  /* IDX=45, KB=48 */
   4.085228e-05,  /* IDX=46, KB=49 */
   4.194188e-05,  /* IDX=47, KB=50 */
   4.413831e-05,  /* IDX=48, KB=51 */
   4.533010e-05,  /* IDX=49, KB=52 */
   4.782055e-05,  /* IDX=50, KB=53 */
   4.885568e-05,  /* IDX=51, KB=54 */
   5.123048e-05,  /* IDX=52, KB=55 */
   5.245251e-05,  /* IDX=53, KB=56 */
   8.254422e-05,  /* IDX=54, KB=57 */
   5.616163e-05,  /* IDX=55, KB=58 */
   8.813118e-05,  /* IDX=56, KB=59 */
   6.012167e-05,  /* IDX=57, KB=60 */
   9.396952e-05,  /* IDX=58, KB=61 */
   7.673540e-05,  /* IDX=59, KB=62 */
   1.002275e-04,  /* IDX=60, KB=63 */
   8.160078e-05,  /* IDX=61, KB=64 */
   1.063292e-04,  /* IDX=62, KB=65 */
   8.633187e-05,  /* IDX=63, KB=66 */
   1.148052e-04,  /* IDX=64, KB=67 */
   9.142433e-05,  /* IDX=65, KB=68 */
   1.217746e-04,  /* IDX=66, KB=69 */
   9.686909e-05,  /* IDX=67, KB=70 */
   1.287297e-04,  /* IDX=68, KB=71 */
   1.024738e-04,  /* IDX=69, KB=72 */
   1.356478e-04,  /* IDX=70, KB=73 */
   1.254989e-04,  /* IDX=71, KB=74 */
   1.429967e-04,  /* IDX=72, KB=75 */
   1.324520e-04,  /* IDX=73, KB=76 */
   1.507666e-04,  /* IDX=74, KB=77 */
   1.391785e-04,  /* IDX=75, KB=78 */
   1.581065e-04,  /* IDX=76, KB=79 */
   1.487603e-04,  /* IDX=77, KB=80 */
   1.664166e-04,  /* IDX=78, KB=81 */
   1.536792e-04,  /* IDX=79, KB=82 */
   1.741212e-04,  /* IDX=80, KB=83 */
   1.627913e-04,  /* IDX=81, KB=84 */
   2.431397e-04,  /* IDX=82, KB=85 */
   1.944423e-04,  /* IDX=83, KB=86 */
   2.541640e-04,  /* IDX=84, KB=87 */
   2.039435e-04,  /* IDX=85, KB=88 */
   2.665077e-04,  /* IDX=86, KB=89 */
   2.098886e-04,  /* IDX=87, KB=90 */
   2.776430e-04,  /* IDX=88, KB=91 */
   2.209518e-04,  /* IDX=89, KB=92 */
   2.898047e-04,  /* IDX=90, KB=93 */
   2.293995e-04,  /* IDX=91, KB=94 */
   3.023730e-04,  /* IDX=92, KB=95 */
   2.413970e-04,  /* IDX=93, KB=96 */
   3.160407e-04,  /* IDX=94, KB=97 */
   2.810629e-04,  /* IDX=95, KB=98 */
   3.276941e-04,  /* IDX=96, KB=99 */
   2.923998e-04,  /* IDX=97, KB=100 */
   3.416242e-04,  /* IDX=98, KB=101 */
   3.033314e-04,  /* IDX=99, KB=102 */
   3.548367e-04,  /* IDX=100, KB=103 */
   3.177728e-04,  /* IDX=101, KB=104 */
   3.683923e-04,  /* IDX=102, KB=105 */
   3.275615e-04,  /* IDX=103, KB=106 */
   3.827704e-04,  /* IDX=104, KB=107 */
   3.406295e-04,  /* IDX=105, KB=108 */
   3.967481e-04,  /* IDX=106, KB=109 */
   3.919985e-04,  /* IDX=107, KB=110 */
   4.116055e-04,  /* IDX=108, KB=111 */
   4.069390e-04,  /* IDX=109, KB=112 */
   5.330956e-04,  /* IDX=110, KB=113 */
   4.193509e-04,  /* IDX=111, KB=114 */
   5.526420e-04,  /* IDX=112, KB=115 */
   4.368860e-04,  /* IDX=113, KB=116 */
   5.728333e-04,  /* IDX=114, KB=117 */
   4.515766e-04,  /* IDX=115, KB=118 */
   5.925546e-04,  /* IDX=116, KB=119 */
   4.665134e-04,  /* IDX=117, KB=120 */
   6.115350e-04,  /* IDX=118, KB=121 */
   5.321569e-04,  /* IDX=119, KB=122 */
   6.314195e-04,  /* IDX=120, KB=123 */
   5.465589e-04   /* IDX=121, KB=124 */
};

#endif  /* end include file guard */
