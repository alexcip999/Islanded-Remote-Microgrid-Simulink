#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t19 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 9 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 1.0 } ; real_T t0 [ 180 ] ; real_T intermediate_der316 [ 9 ] ;
size_t t18 ; int32_T i1 ; ( void ) t19 ; ( void ) LC ; intermediate_der316 [
0 ] = _cg_const_1 [ 0 ] ; intermediate_der316 [ 1 ] = _cg_const_1 [ 1 ] ;
intermediate_der316 [ 2 ] = _cg_const_1 [ 2 ] ; intermediate_der316 [ 3 ] =
_cg_const_1 [ 3 ] ; intermediate_der316 [ 4 ] = _cg_const_1 [ 4 ] ;
intermediate_der316 [ 5 ] = _cg_const_1 [ 5 ] ; intermediate_der316 [ 6 ] =
_cg_const_1 [ 6 ] ; intermediate_der316 [ 7 ] = _cg_const_1 [ 7 ] ;
intermediate_der316 [ 8 ] = _cg_const_1 [ 8 ] ; for ( t18 = 0ULL ; t18 < 9ULL
; t18 ++ ) { t0 [ t18 ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ;
t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 9ULL ] = intermediate_der316 [ t18 ] ; }
for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 18ULL ] =
intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0
[ t18 + 27ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 <
9ULL ; t18 ++ ) { t0 [ t18 + 36ULL ] = intermediate_der316 [ t18 ] ; } for ( t18
= 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 45ULL ] = intermediate_der316 [
t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 54ULL ] =
intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0
[ t18 + 63ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 <
9ULL ; t18 ++ ) { t0 [ t18 + 72ULL ] = intermediate_der316 [ t18 ] ; } for ( t18
= 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 81ULL ] = intermediate_der316 [
t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 90ULL ] =
intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0
[ t18 + 99ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 <
9ULL ; t18 ++ ) { t0 [ t18 + 108ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 117ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 126ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 135ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 144ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 153ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 162ULL ] = intermediate_der316 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 171ULL ] = intermediate_der316 [ t18 ] ; } for ( i1 = 0 ; i1 < 180 ; i1 ++ ) { out -> mDXICR . mX [ i1 ] = t0 [ i1 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
