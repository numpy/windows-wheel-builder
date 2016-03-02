#ifndef ATLAS_ZtsAMM_PERF_H
   #define ATLAS_ZtsAMM_PERF_H

#include "atlas_amm.h"
#define ATL_ztsAMM_NCASES 22
#define ATL_tsAMM_DENOM 7.581347e+03 /* (7581.35)*/ 
#define ATL_tsAMM_MAXMFLOPIDX -1

static const float ATL_tsAMM_PERF[22] =   /* % of performance of best kernel */
{
   0.556464,  /* IDX=0, KB=120 */
   0.093040,  /* IDX=1, KB=6 */
   0.148937,  /* IDX=2, KB=8 */
   0.556464,  /* IDX=3, KB=120 */
   0.232147,  /* IDX=4, KB=12 */
   0.556464,  /* IDX=5, KB=120 */
   0.556464,  /* IDX=6, KB=120 */
   0.339037,  /* IDX=7, KB=28 */
   0.377122,  /* IDX=8, KB=32 */
   0.411341,  /* IDX=9, KB=36 */
   0.463261,  /* IDX=10, KB=48 */
   0.481453,  /* IDX=11, KB=60 */
   0.458842,  /* IDX=12, KB=72 */
   0.535825,  /* IDX=13, KB=96 */
   0.528790,  /* IDX=14, KB=108 */
   0.564426,  /* IDX=15, KB=120 */
   0.571164,  /* IDX=16, KB=132 */
   0.587000,  /* IDX=17, KB=144 */
   0.584065,  /* IDX=18, KB=156 */
   0.581105,  /* IDX=19, KB=168 */
   0.609868,  /* IDX=20, KB=180 */
   0.609091   /* IDX=21, KB=204 */
};

static const float ATL_tsAMM_TIME[22] =   /* % of performance of best kernel */
{
   7.645876e-04,  /* IDX=0, KB=120 */
   6.124429e-07,  /* IDX=1, KB=6 */
   9.068801e-07,  /* IDX=2, KB=8 */
   7.645876e-04,  /* IDX=3, KB=120 */
   1.963653e-06,  /* IDX=4, KB=12 */
   7.645876e-04,  /* IDX=5, KB=120 */
   7.645876e-04,  /* IDX=6, KB=120 */
   1.708090e-05,  /* IDX=7, KB=28 */
   2.292193e-05,  /* IDX=8, KB=32 */
   2.992188e-05,  /* IDX=9, KB=36 */
   6.297701e-05,  /* IDX=10, KB=48 */
   1.183541e-04,  /* IDX=11, KB=60 */
   2.145941e-04,  /* IDX=12, KB=72 */
   4.355862e-04,  /* IDX=13, KB=96 */
   6.284514e-04,  /* IDX=14, KB=108 */
   8.076446e-04,  /* IDX=15, KB=120 */
   1.062293e-03,  /* IDX=16, KB=132 */
   1.341939e-03,  /* IDX=17, KB=144 */
   1.714732e-03,  /* IDX=18, KB=156 */
   2.152569e-03,  /* IDX=19, KB=168 */
   2.522697e-03,  /* IDX=20, KB=180 */
   3.676985e-03   /* IDX=21, KB=204 */
};

#endif  /* end include file guard */
