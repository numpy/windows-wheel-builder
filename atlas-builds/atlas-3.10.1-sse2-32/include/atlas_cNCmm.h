#ifndef CMM_H
   #define CMM_H

   #define ATL_mmNOMULADD
   #define ATL_mmLAT 4
   #define ATL_mmMU  4
   #define ATL_mmNU  1
   #define ATL_mmKU  60
   #define MB 44
   #define NB 44
   #define KB 44
   #define NBNB 1936
   #define MBNB 1936
   #define MBKB 1936
   #define NBKB 1936
   #define NB2 88
   #define NBNB2 3872

   #define ATL_MulByNB(N_) ((N_) * 44)
   #define ATL_DivByNB(N_) ((N_) / 44)
   #define ATL_MulByNBNB(N_) ((N_) * 1936)

#endif
