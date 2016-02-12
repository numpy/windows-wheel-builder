#ifndef ATL_ztGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,88,220,484,1012,2024
 * N : 25,88,220,484,1012,2024
 * NB : 12,44,44,44,44,44
 */
#define ATL_ztGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 56) (nb_) = 12; \
   else (nb_) = 44; \
}


#endif    /* end ifndef ATL_ztGetNB_geqrf */
