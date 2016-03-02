#ifndef ATLAS_CAMM_FLAG_H
   #define ATLAS_CAMM_FLAG_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 18
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 18
#endif
static const unsigned char ATL_AMM_KFLAG[18] =
{
     2,  /* index 0 */
     2,  /* index 1 */
     0,  /* index 2 */
     2,  /* index 3 */
     2,  /* index 4 */
     2,  /* index 5 */
     0,  /* index 6 */
     2,  /* index 7 */
     2,  /* index 8 */
     2,  /* index 9 */
     2,  /* index 10 */
     2,  /* index 11 */
     2,  /* index 12 */
     2,  /* index 13 */
     2,  /* index 14 */
     2,  /* index 15 */
     2,  /* index 16 */
     2   /* index 17 */
};

#define ATL_AMM_KRUNTIME(idx_) (ATL_AMM_KFLAG[idx_] & 1)
#define ATL_AMM_KMAJOR(idx_) (ATL_AMM_KFLAG[idx_] & 2)

#endif  /* end include file guard */
