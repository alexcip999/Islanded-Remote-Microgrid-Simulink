#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t67 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 9 ] = { 3.1026870075253588E-9 , 0.0 , 0.0
, 0.0 , 3.1026870075253588E-9 , 0.0 , 0.0 , 0.0 , 3.1026870075253588E-9 } ;
static real_T _cg_const_2 [ 9 ] = { 0.003102687007525359 , 0.0 , 0.0 , 0.0 ,
0.003102687007525359 , 0.0 , 0.0 , 0.0 , 0.003102687007525359 } ; static
real_T _cg_const_3 [ 9 ] = { - 0.003102687007525359 , - 0.0 , - 0.0 , - 0.0 ,
- 0.003102687007525359 , - 0.0 , - 0.0 , - 0.0 , - 0.003102687007525359 } ;
real_T t0 [ 102 ] ; real_T t2 [ 33 ] ; real_T t1 [ 24 ] ; real_T
intermediate_der295 [ 9 ] ; real_T intermediate_der296 [ 9 ] ; real_T
intermediate_der297 [ 9 ] ; size_t t18 ; int32_T i3 ; ( void ) t67 ; ( void )
LC ; intermediate_der295 [ 0 ] = _cg_const_1 [ 0 ] ; intermediate_der295 [ 1
] = _cg_const_1 [ 1 ] ; intermediate_der295 [ 2 ] = _cg_const_1 [ 2 ] ;
intermediate_der295 [ 3 ] = _cg_const_1 [ 3 ] ; intermediate_der295 [ 4 ] =
_cg_const_1 [ 4 ] ; intermediate_der295 [ 5 ] = _cg_const_1 [ 5 ] ;
intermediate_der295 [ 6 ] = _cg_const_1 [ 6 ] ; intermediate_der295 [ 7 ] =
_cg_const_1 [ 7 ] ; intermediate_der295 [ 8 ] = _cg_const_1 [ 8 ] ;
intermediate_der296 [ 0 ] = _cg_const_2 [ 0 ] ; intermediate_der296 [ 1 ] =
_cg_const_2 [ 1 ] ; intermediate_der296 [ 2 ] = _cg_const_2 [ 2 ] ;
intermediate_der296 [ 3 ] = _cg_const_2 [ 3 ] ; intermediate_der296 [ 4 ] =
_cg_const_2 [ 4 ] ; intermediate_der296 [ 5 ] = _cg_const_2 [ 5 ] ;
intermediate_der296 [ 6 ] = _cg_const_2 [ 6 ] ; intermediate_der296 [ 7 ] =
_cg_const_2 [ 7 ] ; intermediate_der296 [ 8 ] = _cg_const_2 [ 8 ] ;
intermediate_der297 [ 0 ] = _cg_const_3 [ 0 ] ; intermediate_der297 [ 1 ] =
_cg_const_3 [ 1 ] ; intermediate_der297 [ 2 ] = _cg_const_3 [ 2 ] ;
intermediate_der297 [ 3 ] = _cg_const_3 [ 3 ] ; intermediate_der297 [ 4 ] =
_cg_const_3 [ 4 ] ; intermediate_der297 [ 5 ] = _cg_const_3 [ 5 ] ;
intermediate_der297 [ 6 ] = _cg_const_3 [ 6 ] ; intermediate_der297 [ 7 ] =
_cg_const_3 [ 7 ] ; intermediate_der297 [ 8 ] = _cg_const_3 [ 8 ] ; t1 [ 0ULL
] = 0.00322301281945155 ; t1 [ 8ULL ] = 0.0 ; t1 [ 16ULL ] = 0.0 ; t1 [ 1ULL
] = 0.0 ; t1 [ 9ULL ] = 0.00322301281945155 ; t1 [ 17ULL ] = 0.0 ; t1 [ 2ULL
] = 0.0 ; t1 [ 10ULL ] = 0.0 ; t1 [ 18ULL ] = 0.00322301281945155 ; t1 [ 3ULL
] = 1.0 ; t1 [ 11ULL ] = - 1.0 ; t1 [ 19ULL ] = 0.0 ; t1 [ 4ULL ] =
0.00322301281945155 ; t1 [ 12ULL ] = 0.0 ; t1 [ 20ULL ] = 0.0 ; t1 [ 5ULL ] =
0.0 ; t1 [ 13ULL ] = 0.00322301281945155 ; t1 [ 21ULL ] = 0.0 ; t1 [ 6ULL ] =
0.0 ; t1 [ 14ULL ] = 0.0 ; t1 [ 22ULL ] = 0.00322301281945155 ; t1 [ 7ULL ] =
1.0 ; t1 [ 15ULL ] = - 1.0 ; t1 [ 23ULL ] = 0.0 ; t2 [ 0ULL ] = _cg_const_3 [
0 ] ; t2 [ 11ULL ] = _cg_const_3 [ 3 ] ; t2 [ 22ULL ] = _cg_const_3 [ 6 ] ;
t2 [ 1ULL ] = _cg_const_3 [ 1 ] ; t2 [ 12ULL ] = _cg_const_3 [ 4 ] ; t2 [
23ULL ] = _cg_const_3 [ 7 ] ; t2 [ 2ULL ] = _cg_const_3 [ 2 ] ; t2 [ 13ULL ]
= _cg_const_3 [ 5 ] ; t2 [ 24ULL ] = _cg_const_3 [ 8 ] ; t2 [ 3ULL ] =
3.2230128194515496E-9 ; t2 [ 14ULL ] = 0.0 ; t2 [ 25ULL ] = 0.0 ; t2 [ 4ULL ]
= 0.0 ; t2 [ 15ULL ] = 3.2230128194515496E-9 ; t2 [ 26ULL ] = 0.0 ; t2 [ 5ULL
] = 0.0 ; t2 [ 16ULL ] = 0.0 ; t2 [ 27ULL ] = 3.2230128194515496E-9 ; t2 [
6ULL ] = 1.0E-6 ; t2 [ 17ULL ] = - 1.0E-6 ; t2 [ 28ULL ] = 0.0 ; t2 [ 7ULL ]
= 3.2230128194515496E-9 ; t2 [ 18ULL ] = 0.0 ; t2 [ 29ULL ] = 0.0 ; t2 [ 8ULL
] = 0.0 ; t2 [ 19ULL ] = 3.2230128194515496E-9 ; t2 [ 30ULL ] = 0.0 ; t2 [
9ULL ] = 0.0 ; t2 [ 20ULL ] = 0.0 ; t2 [ 31ULL ] = 3.2230128194515496E-9 ; t2
[ 10ULL ] = 1.0E-6 ; t2 [ 21ULL ] = - 1.0E-6 ; t2 [ 32ULL ] = 0.0 ; for ( t18
= 0ULL ; t18 < 24ULL ; t18 ++ ) { t0 [ t18 ] = t1 [ t18 ] ; } for ( t18 =
0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 24ULL ] = intermediate_der296 [ t18
] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 33ULL ] =
intermediate_der296 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 33ULL ; t18 ++ ) {
t0 [ t18 + 42ULL ] = t2 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 9ULL ; t18 ++ )
{ t0 [ t18 + 75ULL ] = intermediate_der295 [ t18 ] ; } for ( t18 = 0ULL ; t18
< 9ULL ; t18 ++ ) { t0 [ t18 + 84ULL ] = intermediate_der295 [ t18 ] ; } for
( t18 = 0ULL ; t18 < 9ULL ; t18 ++ ) { t0 [ t18 + 93ULL ] =
intermediate_der297 [ t18 ] ; } for ( i3 = 0 ; i3 < 102 ; i3 ++ ) { out ->
mDXY . mX [ i3 ] = t0 [ i3 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
