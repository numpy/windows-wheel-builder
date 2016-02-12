#ifndef ATL_cGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,180,420,900,1860
 * N : 25,180,420,900,1860
 * NB : 12,60,60,60,60
 */
#define ATL_cGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 102) (nb_) = 12; \
   else (nb_) = 60; \
}


#endif    /* end ifndef ATL_cGetNB_geqrf */
