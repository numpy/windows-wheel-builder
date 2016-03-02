#ifndef ATLAS_ZAMM_FLAG_H
   #define ATLAS_ZAMM_FLAG_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 16
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 16
#endif
static const unsigned char ATL_AMM_KFLAG[16] =
{
     0,  /* index 0 */
     0,  /* index 1 */
     2,  /* index 2 */
     2,  /* index 3 */
     0,  /* index 4 */
     0,  /* index 5 */
     2,  /* index 6 */
     0,  /* index 7 */
     2,  /* index 8 */
     2,  /* index 9 */
     2,  /* index 10 */
     2,  /* index 11 */
     2,  /* index 12 */
     2,  /* index 13 */
     2,  /* index 14 */
     2   /* index 15 */
};

#define ATL_AMM_KRUNTIME(idx_) (ATL_AMM_KFLAG[idx_] & 1)
#define ATL_AMM_KMAJOR(idx_) (ATL_AMM_KFLAG[idx_] & 2)

#endif  /* end include file guard */
