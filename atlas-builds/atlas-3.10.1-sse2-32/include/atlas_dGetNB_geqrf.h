#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,144,288,432,528,624,1296,1920,2256,2592
 * N : 25,144,288,432,528,624,1296,1920,2256,2592
 * NB : 12,48,20,48,48,56,48,48,48,96
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 84) (nb_) = 12; \
   else if ((n_) < 216) (nb_) = 48; \
   else if ((n_) < 360) (nb_) = 20; \
   else if ((n_) < 576) (nb_) = 48; \
   else if ((n_) < 960) (nb_) = 56; \
   else if ((n_) < 2424) (nb_) = 48; \
   else (nb_) = 96; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
