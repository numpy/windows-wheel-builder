#ifndef ATL_cGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,86,148,209,271,518,1012,2000
 * N : 25,86,148,209,271,518,1012,2000
 * NB : 4,12,12,36,36,40,60,72
 */
#define ATL_cGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 55) (nb_) = 4; \
   else if ((n_) < 178) (nb_) = 12; \
   else if ((n_) < 394) (nb_) = 36; \
   else if ((n_) < 765) (nb_) = 40; \
   else if ((n_) < 1506) (nb_) = 60; \
   else (nb_) = 72; \
}


#endif    /* end ifndef ATL_cGetNB_geqrf */
