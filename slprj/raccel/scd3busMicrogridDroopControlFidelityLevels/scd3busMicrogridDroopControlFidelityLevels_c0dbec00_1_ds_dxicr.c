#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t4 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 9 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 1.0 } ; real_T t0 [ 126 ] ; real_T intermediate_der200 [ 9 ] ;
size_t t3 ; int32_T i1 ; ( void ) t4 ; ( void ) LC ; intermediate_der200 [ 0
] = _cg_const_1 [ 0 ] ; intermediate_der200 [ 1 ] = _cg_const_1 [ 1 ] ;
intermediate_der200 [ 2 ] = _cg_const_1 [ 2 ] ; intermediate_der200 [ 3 ] =
_cg_const_1 [ 3 ] ; intermediate_der200 [ 4 ] = _cg_const_1 [ 4 ] ;
intermediate_der200 [ 5 ] = _cg_const_1 [ 5 ] ; intermediate_der200 [ 6 ] =
_cg_const_1 [ 6 ] ; intermediate_der200 [ 7 ] = _cg_const_1 [ 7 ] ;
intermediate_der200 [ 8 ] = _cg_const_1 [ 8 ] ; for ( t3 = 0ULL ; t3 < 9ULL ;
t3 ++ ) { t0 [ t3 ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 <
9ULL ; t3 ++ ) { t0 [ t3 + 9ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 =
0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 18ULL ] = intermediate_der200 [ t3 ] ;
} for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 27ULL ] =
intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [
t3 + 36ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ;
t3 ++ ) { t0 [ t3 + 45ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL
; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 54ULL ] = intermediate_der200 [ t3 ] ; }
for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 63ULL ] =
intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [
t3 + 72ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ;
t3 ++ ) { t0 [ t3 + 81ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL
; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 90ULL ] = intermediate_der200 [ t3 ] ; }
for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [ t3 + 99ULL ] =
intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ; t3 ++ ) { t0 [
t3 + 108ULL ] = intermediate_der200 [ t3 ] ; } for ( t3 = 0ULL ; t3 < 9ULL ;
t3 ++ ) { t0 [ t3 + 117ULL ] = intermediate_der200 [ t3 ] ; } for ( i1 = 0 ;
i1 < 126 ; i1 ++ ) { out -> mDXICR . mX [ i1 ] = t0 [ i1 ] ; } ( void ) LC ;
( void ) out ; return 0 ; }
