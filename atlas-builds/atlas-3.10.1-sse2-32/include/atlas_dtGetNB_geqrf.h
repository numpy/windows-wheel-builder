#ifndef ATL_dtGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,96,144,192,384,816,1632,3264
 * N : 25,96,144,192,384,816,1632,3264
 * NB : 12,12,48,48,48,48,96,96
 */
#define ATL_dtGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 120) (nb_) = 12; \
   else if ((n_) < 1224) (nb_) = 48; \
   else (nb_) = 96; \
}


#endif    /* end ifndef ATL_dtGetNB_geqrf */
