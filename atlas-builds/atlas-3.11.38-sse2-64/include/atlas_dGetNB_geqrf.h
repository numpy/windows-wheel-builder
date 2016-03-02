#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,271,332,394,456,518,765,888,950,1012,2000
 * N : 25,271,332,394,456,518,765,888,950,1012,2000
 * NB : 24,24,24,36,36,44,48,48,56,92,124
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 363) (nb_) = 24; \
   else if ((n_) < 487) (nb_) = 36; \
   else if ((n_) < 641) (nb_) = 44; \
   else if ((n_) < 919) (nb_) = 48; \
   else if ((n_) < 981) (nb_) = 56; \
   else if ((n_) < 1506) (nb_) = 92; \
   else (nb_) = 124; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
