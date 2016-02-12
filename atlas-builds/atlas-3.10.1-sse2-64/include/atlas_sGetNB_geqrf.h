#ifndef ATL_sGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,1080,2160
 * N : 25,1080,2160
 * NB : 12,60,60
 */
#define ATL_sGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 552) (nb_) = 12; \
   else (nb_) = 60; \
}


#endif    /* end ifndef ATL_sGetNB_geqrf */
