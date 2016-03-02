#ifndef ATL_zGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,86,148,271,394,456,518,1012,2000
 * N : 25,86,148,271,394,456,518,1012,2000
 * NB : 24,28,28,28,36,36,40,56,92
 */
#define ATL_zGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 55) (nb_) = 24; \
   else if ((n_) < 332) (nb_) = 28; \
   else if ((n_) < 487) (nb_) = 36; \
   else if ((n_) < 765) (nb_) = 40; \
   else if ((n_) < 1506) (nb_) = 56; \
   else (nb_) = 92; \
}


#endif    /* end ifndef ATL_zGetNB_geqrf */
