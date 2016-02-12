#ifndef ATL_sGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,360,420,480,540,720,1500,3000
 * N : 25,360,420,480,540,720,1500,3000
 * NB : 12,12,12,60,60,60,60,120
 */
#define ATL_sGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 450) (nb_) = 12; \
   else if ((n_) < 2250) (nb_) = 60; \
   else (nb_) = 120; \
}


#endif    /* end ifndef ATL_sGetNB_geqrf */
