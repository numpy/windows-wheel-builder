#ifndef ATL_zGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,308,616,1276
 * N : 25,308,616,1276
 * NB : 12,8,20,24
 */
#define ATL_zGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 166) (nb_) = 12; \
   else if ((n_) < 462) (nb_) = 8; \
   else if ((n_) < 946) (nb_) = 20; \
   else (nb_) = 24; \
}


#endif    /* end ifndef ATL_zGetNB_geqrf */
