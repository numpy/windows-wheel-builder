#ifndef ATL_sGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,148,209,271,332,394,456,518,1012,1506,2000
 * N : 25,148,209,271,332,394,456,518,1012,1506,2000
 * NB : 12,12,12,24,36,36,36,120,120,120,184
 */
#define ATL_sGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 240) (nb_) = 12; \
   else if ((n_) < 301) (nb_) = 24; \
   else if ((n_) < 487) (nb_) = 36; \
   else if ((n_) < 1753) (nb_) = 120; \
   else (nb_) = 184; \
}


#endif    /* end ifndef ATL_sGetNB_geqrf */
