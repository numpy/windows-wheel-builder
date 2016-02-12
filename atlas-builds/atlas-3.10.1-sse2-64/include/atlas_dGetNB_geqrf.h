#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,480,1020,2100
 * N : 25,480,1020,2100
 * NB : 12,12,16,40
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 750) (nb_) = 12; \
   else if ((n_) < 1560) (nb_) = 16; \
   else (nb_) = 40; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
