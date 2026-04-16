#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t38 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 9 ] = { 3.1026870075253588E-9 , 0.0 , 0.0
, 0.0 , 3.1026870075253588E-9 , 0.0 , 0.0 , 0.0 , 3.1026870075253588E-9 } ;
static real_T _cg_const_2 [ 9 ] = { 0.003102687007525359 , 0.0 , 0.0 , 0.0 ,
0.003102687007525359 , 0.0 , 0.0 , 0.0 , 0.003102687007525359 } ; static
real_T _cg_const_3 [ 9 ] = { 0.00322301281945155 , 0.0 , 0.0 , 0.0 ,
0.00322301281945155 , 0.0 , 0.0 , 0.0 , 0.00322301281945155 } ; real_T t1 [
18 ] ; real_T t2 [ 18 ] ; real_T t3 [ 18 ] ; real_T intermediate_der194 [ 9 ]
; real_T intermediate_der195 [ 9 ] ; real_T intermediate_der198 [ 9 ] ;
size_t t27 ; ( void ) t38 ; ( void ) LC ; intermediate_der194 [ 0 ] =
_cg_const_1 [ 0 ] ; intermediate_der194 [ 1 ] = _cg_const_1 [ 1 ] ;
intermediate_der194 [ 2 ] = _cg_const_1 [ 2 ] ; intermediate_der194 [ 3 ] =
_cg_const_1 [ 3 ] ; intermediate_der194 [ 4 ] = _cg_const_1 [ 4 ] ;
intermediate_der194 [ 5 ] = _cg_const_1 [ 5 ] ; intermediate_der194 [ 6 ] =
_cg_const_1 [ 6 ] ; intermediate_der194 [ 7 ] = _cg_const_1 [ 7 ] ;
intermediate_der194 [ 8 ] = _cg_const_1 [ 8 ] ; intermediate_der195 [ 0 ] =
_cg_const_2 [ 0 ] ; intermediate_der195 [ 1 ] = _cg_const_2 [ 1 ] ;
intermediate_der195 [ 2 ] = _cg_const_2 [ 2 ] ; intermediate_der195 [ 3 ] =
_cg_const_2 [ 3 ] ; intermediate_der195 [ 4 ] = _cg_const_2 [ 4 ] ;
intermediate_der195 [ 5 ] = _cg_const_2 [ 5 ] ; intermediate_der195 [ 6 ] =
_cg_const_2 [ 6 ] ; intermediate_der195 [ 7 ] = _cg_const_2 [ 7 ] ;
intermediate_der195 [ 8 ] = _cg_const_2 [ 8 ] ; intermediate_der198 [ 0 ] =
_cg_const_3 [ 0 ] ; intermediate_der198 [ 1 ] = _cg_const_3 [ 1 ] ;
intermediate_der198 [ 2 ] = _cg_const_3 [ 2 ] ; intermediate_der198 [ 3 ] =
_cg_const_3 [ 3 ] ; intermediate_der198 [ 4 ] = _cg_const_3 [ 4 ] ;
intermediate_der198 [ 5 ] = _cg_const_3 [ 5 ] ; intermediate_der198 [ 6 ] =
_cg_const_3 [ 6 ] ; intermediate_der198 [ 7 ] = _cg_const_3 [ 7 ] ;
intermediate_der198 [ 8 ] = _cg_const_3 [ 8 ] ; t1 [ 0ULL ] = -
0.003102687007525359 ; t1 [ 6ULL ] = - 0.0 ; t1 [ 12ULL ] = - 0.0 ; t1 [ 1ULL
] = - 0.0 ; t1 [ 7ULL ] = - 0.003102687007525359 ; t1 [ 13ULL ] = - 0.0 ; t1
[ 2ULL ] = - 0.0 ; t1 [ 8ULL ] = - 0.0 ; t1 [ 14ULL ] = -
0.003102687007525359 ; t1 [ 3ULL ] = 3.2230128194515496E-9 ; t1 [ 9ULL ] = -
0.0 ; t1 [ 15ULL ] = - 0.0 ; t1 [ 4ULL ] = - 0.0 ; t1 [ 10ULL ] =
3.2230128194515496E-9 ; t1 [ 16ULL ] = - 0.0 ; t1 [ 5ULL ] = - 0.0 ; t1 [
11ULL ] = - 0.0 ; t1 [ 17ULL ] = 3.2230128194515496E-9 ; t2 [ 0ULL ] = -
0.003102687007525359 ; t2 [ 6ULL ] = - 0.0 ; t2 [ 12ULL ] = - 0.0 ; t2 [ 1ULL
] = - 0.0 ; t2 [ 7ULL ] = - 0.003102687007525359 ; t2 [ 13ULL ] = - 0.0 ; t2
[ 2ULL ] = - 0.0 ; t2 [ 8ULL ] = - 0.0 ; t2 [ 14ULL ] = -
0.003102687007525359 ; t2 [ 3ULL ] = 3.2230128194515496E-9 ; t2 [ 9ULL ] = -
0.0 ; t2 [ 15ULL ] = - 0.0 ; t2 [ 4ULL ] = - 0.0 ; t2 [ 10ULL ] =
3.2230128194515496E-9 ; t2 [ 16ULL ] = - 0.0 ; t2 [ 5ULL ] = - 0.0 ; t2 [
11ULL ] = - 0.0 ; t2 [ 17ULL ] = 3.2230128194515496E-9 ; t3 [ 0ULL ] = -
0.003102687007525359 ; t3 [ 6ULL ] = - 0.0 ; t3 [ 12ULL ] = - 0.0 ; t3 [ 1ULL
] = - 0.0 ; t3 [ 7ULL ] = - 0.003102687007525359 ; t3 [ 13ULL ] = - 0.0 ; t3
[ 2ULL ] = - 0.0 ; t3 [ 8ULL ] = - 0.0 ; t3 [ 14ULL ] = -
0.003102687007525359 ; t3 [ 3ULL ] = 3.2230128194515496E-9 ; t3 [ 9ULL ] = -
0.0 ; t3 [ 15ULL ] = - 0.0 ; t3 [ 4ULL ] = - 0.0 ; t3 [ 10ULL ] =
3.2230128194515496E-9 ; t3 [ 16ULL ] = - 0.0 ; t3 [ 5ULL ] = - 0.0 ; t3 [
11ULL ] = - 0.0 ; t3 [ 17ULL ] = 3.2230128194515496E-9 ; for ( t27 = 0ULL ;
t27 < 9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 ] = intermediate_der198 [ t27
] ; } for ( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 +
9ULL ] = intermediate_der198 [ t27 ] ; } for ( t27 = 0ULL ; t27 < 9ULL ; t27
++ ) { out -> mDXY . mX [ t27 + 18ULL ] = intermediate_der195 [ t27 ] ; } for
( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 + 27ULL ] =
intermediate_der198 [ t27 ] ; } for ( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) {
out -> mDXY . mX [ t27 + 36ULL ] = intermediate_der195 [ t27 ] ; } for ( t27
= 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 + 45ULL ] =
intermediate_der195 [ t27 ] ; } for ( t27 = 0ULL ; t27 < 18ULL ; t27 ++ ) {
out -> mDXY . mX [ t27 + 54ULL ] = t1 [ t27 ] ; } for ( t27 = 0ULL ; t27 <
9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 + 72ULL ] = intermediate_der194 [
t27 ] ; } for ( t27 = 0ULL ; t27 < 18ULL ; t27 ++ ) { out -> mDXY . mX [ t27
+ 81ULL ] = t2 [ t27 ] ; } out -> mDXY . mX [ 99ULL ] = - 1.0 ; out -> mDXY .
mX [ 100ULL ] = 1.0 ; for ( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mDXY
. mX [ t27 + 101ULL ] = intermediate_der194 [ t27 ] ; } for ( t27 = 0ULL ;
t27 < 18ULL ; t27 ++ ) { out -> mDXY . mX [ t27 + 110ULL ] = t3 [ t27 ] ; }
out -> mDXY . mX [ 128ULL ] = - 1.0 ; out -> mDXY . mX [ 129ULL ] = 1.0 ; for
( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mDXY . mX [ t27 + 130ULL ] =
intermediate_der194 [ t27 ] ; } out -> mDXY . mX [ 139ULL ] = - 1.0 ; out ->
mDXY . mX [ 140ULL ] = 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
