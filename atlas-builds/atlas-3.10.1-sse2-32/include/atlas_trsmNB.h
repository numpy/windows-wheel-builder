#ifndef ATLAS_TRSMNB_H
   #define ATLAS_TRSMNB_H

   #ifdef SREAL
      #define TRSM_NB 240
   #elif defined(DREAL)
      #define TRSM_NB 160
   #elif defined(SCPLX)
      #define TRSM_NB 20
   #elif defined(DCPLX)
      #define TRSM_NB 44
   #endif

#endif
