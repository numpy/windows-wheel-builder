#ifndef ATLAS_TRSMNB_H
   #define ATLAS_TRSMNB_H

   #ifdef SREAL
      #define TRSM_NB 224
   #elif defined(DREAL)
      #define TRSM_NB 240
   #elif defined(SCPLX)
      #define TRSM_NB 16
   #elif defined(DCPLX)
      #define TRSM_NB 8
   #endif

#endif
