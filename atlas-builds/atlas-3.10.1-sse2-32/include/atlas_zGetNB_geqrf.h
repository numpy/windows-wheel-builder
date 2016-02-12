#ifndef ATL_zGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,176,396,792,1584
 * N : 25,176,396,792,1584
 * NB : 12,4,44,44,44
 */
#define ATL_zGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 100) (nb_) = 12; \
   else if ((n_) < 286) (nb_) = 4; \
   else (nb_) = 44; \
}


#endif    /* end ifndef ATL_zGetNB_geqrf */
