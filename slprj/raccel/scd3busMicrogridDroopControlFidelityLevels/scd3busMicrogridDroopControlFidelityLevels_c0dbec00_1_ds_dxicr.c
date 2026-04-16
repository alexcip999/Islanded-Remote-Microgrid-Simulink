#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t8 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 9 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 1.0 } ; real_T t0 [ 72 ] ; real_T intermediate_der300 [ 9 ] ;
size_t t7 ; ( void ) t8 ; ( void ) LC ; intermediate_der300 [ 0 ] =
_cg_const_1 [ 0 ] ; intermediate_der300 [ 1 ] = _cg_const_1 [ 1 ] ;
intermediate_der300 [ 2 ] = _cg_const_1 [ 2 ] ; intermediate_der300 [ 3 ] =
_cg_const_1 [ 3 ] ; intermediate_der300 [ 4 ] = _cg_const_1 [ 4 ] ;
intermediate_der300 [ 5 ] = _cg_const_1 [ 5 ] ; intermediate_der300 [ 6 ] =
_cg_const_1 [ 6 ] ; intermediate_der300 [ 7 ] = _cg_const_1 [ 7 ] ;
intermediate_der300 [ 8 ] = _cg_const_1 [ 8 ] ; for ( t7 = 0ULL ; t7 < 9ULL ;
t7 ++ ) { t0 [ t7 ] = intermediate_der300 [ t7 ] ; } for ( t7 = 0ULL ; t7 <
9ULL ; t7 ++ ) { t0 [ t7 + 9ULL ] = intermediate_der300 [ t7 ] ; } for ( t7 =
0ULL ; t7 < 9ULL ; t7 ++ ) { t0 [ t7 + 18ULL ] = intermediate_der300 [ t7 ] ;
} for ( t7 = 0ULL ; t7 < 9ULL ; t7 ++ ) { t0 [ t7 + 27ULL ] =
intermediate_der300 [ t7 ] ; } for ( t7 = 0ULL ; t7 < 9ULL ; t7 ++ ) { t0 [
t7 + 36ULL ] = intermediate_der300 [ t7 ] ; } for ( t7 = 0ULL ; t7 < 9ULL ;
t7 ++ ) { t0 [ t7 + 45ULL ] = intermediate_der300 [ t7 ] ; } for ( t7 = 0ULL
; t7 < 9ULL ; t7 ++ ) { t0 [ t7 + 54ULL ] = intermediate_der300 [ t7 ] ; }
for ( t7 = 0ULL ; t7 < 9ULL ; t7 ++ ) { t0 [ t7 + 63ULL ] =
intermediate_der300 [ t7 ] ; } out -> mDXICR . mX [ 0 ] = t0 [ 0 ] ; out ->
mDXICR . mX [ 1 ] = t0 [ 1 ] ; out -> mDXICR . mX [ 2 ] = t0 [ 2 ] ; out ->
mDXICR . mX [ 3 ] = t0 [ 3 ] ; out -> mDXICR . mX [ 4 ] = t0 [ 4 ] ; out ->
mDXICR . mX [ 5 ] = t0 [ 5 ] ; out -> mDXICR . mX [ 6 ] = t0 [ 6 ] ; out ->
mDXICR . mX [ 7 ] = t0 [ 7 ] ; out -> mDXICR . mX [ 8 ] = t0 [ 8 ] ; out ->
mDXICR . mX [ 9 ] = t0 [ 9 ] ; out -> mDXICR . mX [ 10 ] = t0 [ 10 ] ; out ->
mDXICR . mX [ 11 ] = t0 [ 11 ] ; out -> mDXICR . mX [ 12 ] = t0 [ 12 ] ; out
-> mDXICR . mX [ 13 ] = t0 [ 13 ] ; out -> mDXICR . mX [ 14 ] = t0 [ 14 ] ;
out -> mDXICR . mX [ 15 ] = t0 [ 15 ] ; out -> mDXICR . mX [ 16 ] = t0 [ 16 ]
; out -> mDXICR . mX [ 17 ] = t0 [ 17 ] ; out -> mDXICR . mX [ 18 ] = t0 [ 18
] ; out -> mDXICR . mX [ 19 ] = t0 [ 19 ] ; out -> mDXICR . mX [ 20 ] = t0 [
20 ] ; out -> mDXICR . mX [ 21 ] = t0 [ 21 ] ; out -> mDXICR . mX [ 22 ] = t0
[ 22 ] ; out -> mDXICR . mX [ 23 ] = t0 [ 23 ] ; out -> mDXICR . mX [ 24 ] =
t0 [ 24 ] ; out -> mDXICR . mX [ 25 ] = t0 [ 25 ] ; out -> mDXICR . mX [ 26 ]
= t0 [ 26 ] ; out -> mDXICR . mX [ 27 ] = t0 [ 27 ] ; out -> mDXICR . mX [ 28
] = t0 [ 28 ] ; out -> mDXICR . mX [ 29 ] = t0 [ 29 ] ; out -> mDXICR . mX [
30 ] = t0 [ 30 ] ; out -> mDXICR . mX [ 31 ] = t0 [ 31 ] ; out -> mDXICR . mX
[ 32 ] = t0 [ 32 ] ; out -> mDXICR . mX [ 33 ] = t0 [ 33 ] ; out -> mDXICR .
mX [ 34 ] = t0 [ 34 ] ; out -> mDXICR . mX [ 35 ] = t0 [ 35 ] ; out -> mDXICR
. mX [ 36 ] = t0 [ 36 ] ; out -> mDXICR . mX [ 37 ] = t0 [ 37 ] ; out ->
mDXICR . mX [ 38 ] = t0 [ 38 ] ; out -> mDXICR . mX [ 39 ] = t0 [ 39 ] ; out
-> mDXICR . mX [ 40 ] = t0 [ 40 ] ; out -> mDXICR . mX [ 41 ] = t0 [ 41 ] ;
out -> mDXICR . mX [ 42 ] = t0 [ 42 ] ; out -> mDXICR . mX [ 43 ] = t0 [ 43 ]
; out -> mDXICR . mX [ 44 ] = t0 [ 44 ] ; out -> mDXICR . mX [ 45 ] = t0 [ 45
] ; out -> mDXICR . mX [ 46 ] = t0 [ 46 ] ; out -> mDXICR . mX [ 47 ] = t0 [
47 ] ; out -> mDXICR . mX [ 48 ] = t0 [ 48 ] ; out -> mDXICR . mX [ 49 ] = t0
[ 49 ] ; out -> mDXICR . mX [ 50 ] = t0 [ 50 ] ; out -> mDXICR . mX [ 51 ] =
t0 [ 51 ] ; out -> mDXICR . mX [ 52 ] = t0 [ 52 ] ; out -> mDXICR . mX [ 53 ]
= t0 [ 53 ] ; out -> mDXICR . mX [ 54 ] = t0 [ 54 ] ; out -> mDXICR . mX [ 55
] = t0 [ 55 ] ; out -> mDXICR . mX [ 56 ] = t0 [ 56 ] ; out -> mDXICR . mX [
57 ] = t0 [ 57 ] ; out -> mDXICR . mX [ 58 ] = t0 [ 58 ] ; out -> mDXICR . mX
[ 59 ] = t0 [ 59 ] ; out -> mDXICR . mX [ 60 ] = t0 [ 60 ] ; out -> mDXICR .
mX [ 61 ] = t0 [ 61 ] ; out -> mDXICR . mX [ 62 ] = t0 [ 62 ] ; out -> mDXICR
. mX [ 63 ] = t0 [ 63 ] ; out -> mDXICR . mX [ 64 ] = t0 [ 64 ] ; out ->
mDXICR . mX [ 65 ] = t0 [ 65 ] ; out -> mDXICR . mX [ 66 ] = t0 [ 66 ] ; out
-> mDXICR . mX [ 67 ] = t0 [ 67 ] ; out -> mDXICR . mX [ 68 ] = t0 [ 68 ] ;
out -> mDXICR . mX [ 69 ] = t0 [ 69 ] ; out -> mDXICR . mX [ 70 ] = t0 [ 70 ]
; out -> mDXICR . mX [ 71 ] = t0 [ 71 ] ; ( void ) LC ; ( void ) out ; return
0 ; }
