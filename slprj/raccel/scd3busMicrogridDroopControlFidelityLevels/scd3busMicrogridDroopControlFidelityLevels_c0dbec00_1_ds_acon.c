#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_acon.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_acon ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t439 , NeDsMethodOutput *
out ) { static real_T _cg_const_2 [ 9 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 1.0 } ; real_T t21 [ 54 ] ; real_T t5 [ 45 ] ; real_T t36 [ 27
] ; real_T t13 [ 21 ] ; real_T t25 [ 21 ] ; real_T t29 [ 21 ] ; real_T t9 [
21 ] ; real_T t17 [ 18 ] ; real_T intermediate_der300 [ 9 ] ; real_T t1 [ 9 ]
; real_T t14 [ 9 ] ; real_T t15 [ 9 ] ; real_T t16 [ 9 ] ; real_T t4 [ 9 ] ;
size_t t136 ; ( void ) t439 ; ( void ) LC ; t1 [ 0 ] = 1.0 ; t1 [ 1 ] = 1.0 ;
t1 [ 2 ] = 1.0 ; t1 [ 3 ] = 1.0 ; t1 [ 4 ] = 1.0 ; t1 [ 5 ] = 1.0 ; t1 [ 6 ]
= 1.0 ; t1 [ 7 ] = 1.0 ; t1 [ 8 ] = 1.0 ; intermediate_der300 [ 0 ] =
_cg_const_2 [ 0 ] ; intermediate_der300 [ 1 ] = _cg_const_2 [ 1 ] ;
intermediate_der300 [ 2 ] = _cg_const_2 [ 2 ] ; intermediate_der300 [ 3 ] =
_cg_const_2 [ 3 ] ; intermediate_der300 [ 4 ] = _cg_const_2 [ 4 ] ;
intermediate_der300 [ 5 ] = _cg_const_2 [ 5 ] ; intermediate_der300 [ 6 ] =
_cg_const_2 [ 6 ] ; intermediate_der300 [ 7 ] = _cg_const_2 [ 7 ] ;
intermediate_der300 [ 8 ] = _cg_const_2 [ 8 ] ; t4 [ 0ULL ] = -
0.003102687007525359 ; t4 [ 3ULL ] = - 0.0 ; t4 [ 6ULL ] = - 0.0 ; t4 [ 1ULL
] = - 0.0 ; t4 [ 4ULL ] = - 0.003102687007525359 ; t4 [ 7ULL ] = - 0.0 ; t4 [
2ULL ] = - 0.0 ; t4 [ 5ULL ] = - 0.0 ; t4 [ 8ULL ] = - 0.003102687007525359 ;
t5 [ 0ULL ] = - _cg_const_2 [ 0 ] ; t5 [ 15ULL ] = - _cg_const_2 [ 3 ] ; t5 [
30ULL ] = - _cg_const_2 [ 6 ] ; t5 [ 1ULL ] = - _cg_const_2 [ 1 ] ; t5 [
16ULL ] = - _cg_const_2 [ 4 ] ; t5 [ 31ULL ] = - _cg_const_2 [ 7 ] ; t5 [
2ULL ] = - _cg_const_2 [ 2 ] ; t5 [ 17ULL ] = - _cg_const_2 [ 5 ] ; t5 [
32ULL ] = - _cg_const_2 [ 8 ] ; t5 [ 3ULL ] = - _cg_const_2 [ 0 ] ; t5 [
18ULL ] = - _cg_const_2 [ 3 ] ; t5 [ 33ULL ] = - _cg_const_2 [ 6 ] ; t5 [
4ULL ] = - _cg_const_2 [ 1 ] ; t5 [ 19ULL ] = - _cg_const_2 [ 4 ] ; t5 [
34ULL ] = - _cg_const_2 [ 7 ] ; t5 [ 5ULL ] = - _cg_const_2 [ 2 ] ; t5 [
20ULL ] = - _cg_const_2 [ 5 ] ; t5 [ 35ULL ] = - _cg_const_2 [ 8 ] ; t5 [
6ULL ] = - _cg_const_2 [ 0 ] ; t5 [ 21ULL ] = - _cg_const_2 [ 3 ] ; t5 [
36ULL ] = - _cg_const_2 [ 6 ] ; t5 [ 7ULL ] = - _cg_const_2 [ 1 ] ; t5 [
22ULL ] = - _cg_const_2 [ 4 ] ; t5 [ 37ULL ] = - _cg_const_2 [ 7 ] ; t5 [
8ULL ] = - _cg_const_2 [ 2 ] ; t5 [ 23ULL ] = - _cg_const_2 [ 5 ] ; t5 [
38ULL ] = - _cg_const_2 [ 8 ] ; t5 [ 9ULL ] = - 0.0037601816226934758 ; t5 [
24ULL ] = - 0.0 ; t5 [ 39ULL ] = - 0.0 ; t5 [ 10ULL ] = - 0.0 ; t5 [ 25ULL ]
= - 0.0037601816226934758 ; t5 [ 40ULL ] = - 0.0 ; t5 [ 11ULL ] = - 0.0 ; t5
[ 26ULL ] = - 0.0 ; t5 [ 41ULL ] = - 0.0037601816226934758 ; t5 [ 12ULL ] = -
_cg_const_2 [ 0 ] ; t5 [ 27ULL ] = - _cg_const_2 [ 3 ] ; t5 [ 42ULL ] = -
_cg_const_2 [ 6 ] ; t5 [ 13ULL ] = - _cg_const_2 [ 1 ] ; t5 [ 28ULL ] = -
_cg_const_2 [ 4 ] ; t5 [ 43ULL ] = - _cg_const_2 [ 7 ] ; t5 [ 14ULL ] = -
_cg_const_2 [ 2 ] ; t5 [ 29ULL ] = - _cg_const_2 [ 5 ] ; t5 [ 44ULL ] = -
_cg_const_2 [ 8 ] ; t9 [ 0ULL ] = 0.02 ; t9 [ 7ULL ] = - 0.0 ; t9 [ 14ULL ] =
- 0.0 ; t9 [ 1ULL ] = - 0.0 ; t9 [ 8ULL ] = 0.02 ; t9 [ 15ULL ] = - 0.0 ; t9
[ 2ULL ] = - 0.0 ; t9 [ 9ULL ] = - 0.0 ; t9 [ 16ULL ] = 0.02 ; t9 [ 3ULL ] =
0.003102687007525359 ; t9 [ 10ULL ] = - 0.0 ; t9 [ 17ULL ] = - 0.0 ; t9 [
4ULL ] = - 0.0 ; t9 [ 11ULL ] = 0.003102687007525359 ; t9 [ 18ULL ] = - 0.0 ;
t9 [ 5ULL ] = - 0.0 ; t9 [ 12ULL ] = - 0.0 ; t9 [ 19ULL ] =
0.003102687007525359 ; t9 [ 6ULL ] = 1.0 ; t9 [ 13ULL ] = 1.0 ; t9 [ 20ULL ]
= 1.0 ; t13 [ 0ULL ] = 0.02 ; t13 [ 7ULL ] = - 0.0 ; t13 [ 14ULL ] = - 0.0 ;
t13 [ 1ULL ] = - 0.0 ; t13 [ 8ULL ] = 0.02 ; t13 [ 15ULL ] = - 0.0 ; t13 [
2ULL ] = - 0.0 ; t13 [ 9ULL ] = - 0.0 ; t13 [ 16ULL ] = 0.02 ; t13 [ 3ULL ] =
0.003102687007525359 ; t13 [ 10ULL ] = - 0.0 ; t13 [ 17ULL ] = - 0.0 ; t13 [
4ULL ] = - 0.0 ; t13 [ 11ULL ] = 0.003102687007525359 ; t13 [ 18ULL ] = - 0.0
; t13 [ 5ULL ] = - 0.0 ; t13 [ 12ULL ] = - 0.0 ; t13 [ 19ULL ] =
0.003102687007525359 ; t13 [ 6ULL ] = 1.0 ; t13 [ 13ULL ] = 1.0 ; t13 [ 20ULL
] = 1.0 ; t14 [ 0ULL ] = - 0.003102687007525359 ; t14 [ 3ULL ] = - 0.0 ; t14
[ 6ULL ] = - 0.0 ; t14 [ 1ULL ] = - 0.0 ; t14 [ 4ULL ] = -
0.003102687007525359 ; t14 [ 7ULL ] = - 0.0 ; t14 [ 2ULL ] = - 0.0 ; t14 [
5ULL ] = - 0.0 ; t14 [ 8ULL ] = - 0.003102687007525359 ; t15 [ 0ULL ] = -
0.003102687007525359 ; t15 [ 3ULL ] = - 0.0 ; t15 [ 6ULL ] = - 0.0 ; t15 [
1ULL ] = - 0.0 ; t15 [ 4ULL ] = - 0.003102687007525359 ; t15 [ 7ULL ] = - 0.0
; t15 [ 2ULL ] = - 0.0 ; t15 [ 5ULL ] = - 0.0 ; t15 [ 8ULL ] = -
0.003102687007525359 ; t16 [ 0ULL ] = - 0.003102687007525359 ; t16 [ 3ULL ] =
- 0.0 ; t16 [ 6ULL ] = - 0.0 ; t16 [ 1ULL ] = - 0.0 ; t16 [ 4ULL ] = -
0.003102687007525359 ; t16 [ 7ULL ] = - 0.0 ; t16 [ 2ULL ] = - 0.0 ; t16 [
5ULL ] = - 0.0 ; t16 [ 8ULL ] = - 0.003102687007525359 ; t17 [ 0ULL ] = - 1.0
; t17 [ 6ULL ] = - 0.0 ; t17 [ 12ULL ] = - 0.0 ; t17 [ 1ULL ] = - 0.0 ; t17 [
7ULL ] = - 1.0 ; t17 [ 13ULL ] = - 0.0 ; t17 [ 2ULL ] = - 0.0 ; t17 [ 8ULL ]
= - 0.0 ; t17 [ 14ULL ] = - 1.0 ; t17 [ 3ULL ] = - 0.00032230128194515504 ;
t17 [ 9ULL ] = - 0.0 ; t17 [ 15ULL ] = - 0.0 ; t17 [ 4ULL ] = - 0.0 ; t17 [
10ULL ] = - 0.00032230128194515504 ; t17 [ 16ULL ] = - 0.0 ; t17 [ 5ULL ] = -
0.0 ; t17 [ 11ULL ] = - 0.0 ; t17 [ 17ULL ] = - 0.00032230128194515504 ; t21
[ 0ULL ] = - 1.0 ; t21 [ 18ULL ] = - 0.0 ; t21 [ 36ULL ] = - 0.0 ; t21 [ 1ULL
] = - 0.0 ; t21 [ 19ULL ] = - 1.0 ; t21 [ 37ULL ] = - 0.0 ; t21 [ 2ULL ] = -
0.0 ; t21 [ 20ULL ] = - 0.0 ; t21 [ 38ULL ] = - 1.0 ; t21 [ 3ULL ] = - 1.0E-6
; t21 [ 21ULL ] = 0.0 ; t21 [ 39ULL ] = 0.0 ; t21 [ 4ULL ] = 0.0 ; t21 [
22ULL ] = - 1.0E-6 ; t21 [ 40ULL ] = 0.0 ; t21 [ 5ULL ] = 0.0 ; t21 [ 23ULL ]
= 0.0 ; t21 [ 41ULL ] = - 1.0E-6 ; t21 [ 6ULL ] = - 1.0E-6 ; t21 [ 24ULL ] =
0.0 ; t21 [ 42ULL ] = 0.0 ; t21 [ 7ULL ] = 0.0 ; t21 [ 25ULL ] = - 1.0E-6 ;
t21 [ 43ULL ] = 0.0 ; t21 [ 8ULL ] = 0.0 ; t21 [ 26ULL ] = 0.0 ; t21 [ 44ULL
] = - 1.0E-6 ; t21 [ 9ULL ] = - 1.0E-6 ; t21 [ 27ULL ] = 0.0 ; t21 [ 45ULL ]
= 0.0 ; t21 [ 10ULL ] = 0.0 ; t21 [ 28ULL ] = - 1.0E-6 ; t21 [ 46ULL ] = 0.0
; t21 [ 11ULL ] = 0.0 ; t21 [ 29ULL ] = 0.0 ; t21 [ 47ULL ] = - 1.0E-6 ; t21
[ 12ULL ] = - 0.0031026907677069817 ; t21 [ 30ULL ] = - 0.0 ; t21 [ 48ULL ] =
- 0.0 ; t21 [ 13ULL ] = - 0.0 ; t21 [ 31ULL ] = - 0.0031026907677069817 ; t21
[ 49ULL ] = - 0.0 ; t21 [ 14ULL ] = - 0.0 ; t21 [ 32ULL ] = - 0.0 ; t21 [
50ULL ] = - 0.0031026907677069817 ; t21 [ 15ULL ] = - 1.0E-6 ; t21 [ 33ULL ]
= 0.0 ; t21 [ 51ULL ] = 0.0 ; t21 [ 16ULL ] = 0.0 ; t21 [ 34ULL ] = - 1.0E-6
; t21 [ 52ULL ] = 0.0 ; t21 [ 17ULL ] = 0.0 ; t21 [ 35ULL ] = 0.0 ; t21 [
53ULL ] = - 1.0E-6 ; t25 [ 0ULL ] = - 1.0 ; t25 [ 7ULL ] = - 0.0 ; t25 [
14ULL ] = - 0.0 ; t25 [ 1ULL ] = - 0.0 ; t25 [ 8ULL ] = - 1.0 ; t25 [ 15ULL ]
= - 0.0 ; t25 [ 2ULL ] = - 0.0 ; t25 [ 9ULL ] = - 0.0 ; t25 [ 16ULL ] = - 1.0
; t25 [ 3ULL ] = 3.1026870075253592E-9 ; t25 [ 10ULL ] = - 0.0 ; t25 [ 17ULL
] = - 0.0 ; t25 [ 4ULL ] = - 0.0 ; t25 [ 11ULL ] = 3.1026870075253592E-9 ;
t25 [ 18ULL ] = - 0.0 ; t25 [ 5ULL ] = - 0.0 ; t25 [ 12ULL ] = - 0.0 ; t25 [
19ULL ] = 3.1026870075253592E-9 ; t25 [ 6ULL ] = 1.0E-6 ; t25 [ 13ULL ] =
1.0E-6 ; t25 [ 20ULL ] = 1.0E-6 ; t29 [ 0ULL ] = - 1.0 ; t29 [ 7ULL ] = - 0.0
; t29 [ 14ULL ] = - 0.0 ; t29 [ 1ULL ] = - 0.0 ; t29 [ 8ULL ] = - 1.0 ; t29 [
15ULL ] = - 0.0 ; t29 [ 2ULL ] = - 0.0 ; t29 [ 9ULL ] = - 0.0 ; t29 [ 16ULL ]
= - 1.0 ; t29 [ 3ULL ] = 3.1026870075253592E-9 ; t29 [ 10ULL ] = - 0.0 ; t29
[ 17ULL ] = - 0.0 ; t29 [ 4ULL ] = - 0.0 ; t29 [ 11ULL ] =
3.1026870075253592E-9 ; t29 [ 18ULL ] = - 0.0 ; t29 [ 5ULL ] = - 0.0 ; t29 [
12ULL ] = - 0.0 ; t29 [ 19ULL ] = 3.1026870075253592E-9 ; t29 [ 6ULL ] =
1.0E-6 ; t29 [ 13ULL ] = 1.0E-6 ; t29 [ 20ULL ] = 1.0E-6 ; t36 [ 0ULL ] = -
1.0 ; t36 [ 9ULL ] = - 0.0 ; t36 [ 18ULL ] = - 0.0 ; t36 [ 1ULL ] = - 0.0 ;
t36 [ 10ULL ] = - 1.0 ; t36 [ 19ULL ] = - 0.0 ; t36 [ 2ULL ] = - 0.0 ; t36 [
11ULL ] = - 0.0 ; t36 [ 20ULL ] = - 1.0 ; t36 [ 3ULL ] = -
0.003102687007525359 ; t36 [ 12ULL ] = - 0.0 ; t36 [ 21ULL ] = - 0.0 ; t36 [
4ULL ] = - 0.0 ; t36 [ 13ULL ] = - 0.003102687007525359 ; t36 [ 22ULL ] = -
0.0 ; t36 [ 5ULL ] = - 0.0 ; t36 [ 14ULL ] = - 0.0 ; t36 [ 23ULL ] = -
0.003102687007525359 ; t36 [ 6ULL ] = 1.0E-6 ; t36 [ 15ULL ] = - 0.0 ; t36 [
24ULL ] = - 0.0 ; t36 [ 7ULL ] = - 0.0 ; t36 [ 16ULL ] = 1.0E-6 ; t36 [ 25ULL
] = - 0.0 ; t36 [ 8ULL ] = - 0.0 ; t36 [ 17ULL ] = - 0.0 ; t36 [ 26ULL ] =
1.0E-6 ; for ( t136 = 0ULL ; t136 < 9ULL ; t136 ++ ) { out -> mACON . mX [
t136 ] = t4 [ t136 ] ; } for ( t136 = 0ULL ; t136 < 45ULL ; t136 ++ ) { out
-> mACON . mX [ t136 + 9ULL ] = t5 [ t136 ] ; } for ( t136 = 0ULL ; t136 <
21ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 54ULL ] = t9 [ t136 ] ; } for
( t136 = 0ULL ; t136 < 21ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 75ULL ]
= t13 [ t136 ] ; } for ( t136 = 0ULL ; t136 < 9ULL ; t136 ++ ) { out -> mACON
. mX [ t136 + 96ULL ] = t14 [ t136 ] ; } for ( t136 = 0ULL ; t136 < 9ULL ;
t136 ++ ) { out -> mACON . mX [ t136 + 105ULL ] = t15 [ t136 ] ; } for ( t136
= 0ULL ; t136 < 9ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 114ULL ] = t16
[ t136 ] ; } for ( t136 = 0ULL ; t136 < 9ULL ; t136 ++ ) { out -> mACON . mX
[ t136 + 123ULL ] = intermediate_der300 [ t136 ] / ( t1 [ t136 ] == 0.0 ?
1.0E-16 : t1 [ t136 ] ) ; } for ( t136 = 0ULL ; t136 < 18ULL ; t136 ++ ) {
out -> mACON . mX [ t136 + 132ULL ] = t17 [ t136 ] ; } for ( t136 = 0ULL ;
t136 < 54ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 150ULL ] = t21 [ t136 ]
; } out -> mACON . mX [ 204ULL ] = 0.0 ; out -> mACON . mX [ 205ULL ] = 0.0 ;
out -> mACON . mX [ 206ULL ] = 0.0 ; out -> mACON . mX [ 207ULL ] = 0.0 ; out
-> mACON . mX [ 208ULL ] = 0.0 ; out -> mACON . mX [ 209ULL ] = 0.0 ; out ->
mACON . mX [ 210ULL ] = 0.0 ; out -> mACON . mX [ 211ULL ] = 0.0 ; out ->
mACON . mX [ 212ULL ] = 0.0 ; out -> mACON . mX [ 213ULL ] = 0.0 ; out ->
mACON . mX [ 214ULL ] = 0.0 ; out -> mACON . mX [ 215ULL ] = 0.0 ; for ( t136
= 0ULL ; t136 < 21ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 216ULL ] = t25
[ t136 ] ; } out -> mACON . mX [ 237ULL ] = 0.0 ; out -> mACON . mX [ 238ULL
] = 0.0 ; out -> mACON . mX [ 239ULL ] = 0.0 ; for ( t136 = 0ULL ; t136 <
21ULL ; t136 ++ ) { out -> mACON . mX [ t136 + 240ULL ] = t29 [ t136 ] ; }
out -> mACON . mX [ 261ULL ] = 0.0 ; out -> mACON . mX [ 262ULL ] = 0.0 ; out
-> mACON . mX [ 263ULL ] = 0.0 ; out -> mACON . mX [ 264ULL ] = -
0.003102687007525359 ; out -> mACON . mX [ 265ULL ] = 0.003102687007525359 ;
out -> mACON . mX [ 266ULL ] = - 0.003102687007525359 ; out -> mACON . mX [
267ULL ] = 0.003102687007525359 ; out -> mACON . mX [ 268ULL ] = -
0.003102687007525359 ; out -> mACON . mX [ 269ULL ] = 0.003102687007525359 ;
for ( t136 = 0ULL ; t136 < 27ULL ; t136 ++ ) { out -> mACON . mX [ t136 +
270ULL ] = t36 [ t136 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
