#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dnf_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dnf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDNF_P . mNumCol = 46ULL ; out ->
mDNF_P . mNumRow = 74ULL ; out -> mDNF_P . mJc [ 0 ] = 0 ; out -> mDNF_P .
mJc [ 1 ] = 0 ; out -> mDNF_P . mJc [ 2 ] = 0 ; out -> mDNF_P . mJc [ 3 ] = 0
; out -> mDNF_P . mJc [ 4 ] = 0 ; out -> mDNF_P . mJc [ 5 ] = 0 ; out ->
mDNF_P . mJc [ 6 ] = 0 ; out -> mDNF_P . mJc [ 7 ] = 0 ; out -> mDNF_P . mJc
[ 8 ] = 0 ; out -> mDNF_P . mJc [ 9 ] = 0 ; out -> mDNF_P . mJc [ 10 ] = 0 ;
out -> mDNF_P . mJc [ 11 ] = 0 ; out -> mDNF_P . mJc [ 12 ] = 0 ; out ->
mDNF_P . mJc [ 13 ] = 0 ; out -> mDNF_P . mJc [ 14 ] = 0 ; out -> mDNF_P .
mJc [ 15 ] = 0 ; out -> mDNF_P . mJc [ 16 ] = 0 ; out -> mDNF_P . mJc [ 17 ]
= 0 ; out -> mDNF_P . mJc [ 18 ] = 0 ; out -> mDNF_P . mJc [ 19 ] = 0 ; out
-> mDNF_P . mJc [ 20 ] = 0 ; out -> mDNF_P . mJc [ 21 ] = 0 ; out -> mDNF_P .
mJc [ 22 ] = 0 ; out -> mDNF_P . mJc [ 23 ] = 0 ; out -> mDNF_P . mJc [ 24 ]
= 0 ; out -> mDNF_P . mJc [ 25 ] = 0 ; out -> mDNF_P . mJc [ 26 ] = 0 ; out
-> mDNF_P . mJc [ 27 ] = 0 ; out -> mDNF_P . mJc [ 28 ] = 0 ; out -> mDNF_P .
mJc [ 29 ] = 0 ; out -> mDNF_P . mJc [ 30 ] = 0 ; out -> mDNF_P . mJc [ 31 ]
= 0 ; out -> mDNF_P . mJc [ 32 ] = 0 ; out -> mDNF_P . mJc [ 33 ] = 0 ; out
-> mDNF_P . mJc [ 34 ] = 0 ; out -> mDNF_P . mJc [ 35 ] = 0 ; out -> mDNF_P .
mJc [ 36 ] = 0 ; out -> mDNF_P . mJc [ 37 ] = 0 ; out -> mDNF_P . mJc [ 38 ]
= 0 ; out -> mDNF_P . mJc [ 39 ] = 0 ; out -> mDNF_P . mJc [ 40 ] = 0 ; out
-> mDNF_P . mJc [ 41 ] = 0 ; out -> mDNF_P . mJc [ 42 ] = 0 ; out -> mDNF_P .
mJc [ 43 ] = 0 ; out -> mDNF_P . mJc [ 44 ] = 0 ; out -> mDNF_P . mJc [ 45 ]
= 0 ; out -> mDNF_P . mJc [ 46 ] = 0 ; ( void ) LC ; ( void ) out ; return 0
; }
