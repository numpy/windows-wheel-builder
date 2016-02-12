#ifndef ATL_cGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,120,300,660,960,1140,1320
 * N : 25,120,300,660,960,1140,1320
 * NB : 12,60,30,18,24,60,60
 */
#define ATL_cGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 72) (nb_) = 12; \
   else if ((n_) < 210) (nb_) = 60; \
   else if ((n_) < 480) (nb_) = 30; \
   else if ((n_) < 810) (nb_) = 18; \
   else if ((n_) < 1050) (nb_) = 24; \
   else (nb_) = 60; \
}


#endif    /* end ifndef ATL_cGetNB_geqrf */
