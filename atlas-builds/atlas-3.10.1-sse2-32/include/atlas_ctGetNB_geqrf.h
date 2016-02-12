#ifndef ATL_ctGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,120,300,600,1200,2400
 * N : 25,120,300,600,1200,2400
 * NB : 12,60,60,60,60,60
 */
#define ATL_ctGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 72) (nb_) = 12; \
   else (nb_) = 60; \
}


#endif    /* end ifndef ATL_ctGetNB_geqrf */
