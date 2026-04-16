#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_acon_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_acon_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 297 ] = { 63 , 64 , 65 , 63 , 64 , 65 ,
63 , 64 , 65 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 63 , 64 , 65 , 69
, 70 , 71 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 63 , 64 , 65 , 69 ,
70 , 71 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 63 , 64 , 65 , 69 , 70
, 71 , 6 , 7 , 8 , 63 , 64 , 65 , 73 , 6 , 7 , 8 , 63 , 64 , 65 , 73 , 6 , 7
, 8 , 63 , 64 , 65 , 73 , 3 , 4 , 5 , 66 , 67 , 68 , 72 , 3 , 4 , 5 , 66 , 67
, 68 , 72 , 3 , 4 , 5 , 66 , 67 , 68 , 72 , 63 , 64 , 65 , 63 , 64 , 65 , 63
, 64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 ,
64 , 65 , 63 , 64 , 65 , 69 , 70 , 71 , 69 , 70 , 71 , 69 , 70 , 71 , 0 , 1 ,
2 , 63 , 64 , 65 , 0 , 1 , 2 , 63 , 64 , 65 , 0 , 1 , 2 , 63 , 64 , 65 , 9 ,
10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 63 , 64 , 65 , 69 , 70
, 71 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 63 , 64 ,
65 , 69 , 70 , 71 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23
, 63 , 64 , 65 , 69 , 70 , 71 , 72 , 72 , 72 , 72 , 72 , 72 , 73 , 73 , 73 ,
73 , 73 , 73 , 6 , 7 , 8 , 63 , 64 , 65 , 73 , 6 , 7 , 8 , 63 , 64 , 65 , 73
, 6 , 7 , 8 , 63 , 64 , 65 , 73 , 73 , 73 , 73 , 3 , 4 , 5 , 66 , 67 , 68 ,
72 , 3 , 4 , 5 , 66 , 67 , 68 , 72 , 3 , 4 , 5 , 66 , 67 , 68 , 72 , 72 , 72
, 72 , 63 , 66 , 64 , 67 , 65 , 68 , 12 , 13 , 14 , 66 , 67 , 68 , 69 , 70 ,
71 , 12 , 13 , 14 , 66 , 67 , 68 , 69 , 70 , 71 , 12 , 13 , 14 , 66 , 67 , 68
, 69 , 70 , 71 } ; static int32_T _cg_const_1 [ 75 ] = { 0 , 3 , 6 , 9 , 24 ,
39 , 54 , 61 , 68 , 75 , 82 , 89 , 96 , 99 , 102 , 105 , 108 , 111 , 114 ,
117 , 120 , 123 , 126 , 129 , 132 , 138 , 144 , 150 , 168 , 186 , 204 , 205 ,
206 , 207 , 208 , 209 , 210 , 210 , 211 , 212 , 213 , 214 , 215 , 216 , 216 ,
223 , 230 , 237 , 238 , 238 , 238 , 239 , 239 , 239 , 240 , 240 , 240 , 247 ,
254 , 261 , 262 , 262 , 262 , 263 , 263 , 263 , 264 , 264 , 264 , 266 , 268 ,
270 , 279 , 288 , 297 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC ; out ->
mACON_P . mNumCol = 74ULL ; out -> mACON_P . mNumRow = 74ULL ; out -> mACON_P
. mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mACON_P . mJc [ 1 ] = _cg_const_1 [
1 ] ; out -> mACON_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mACON_P . mJc [
3 ] = _cg_const_1 [ 3 ] ; out -> mACON_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ;
out -> mACON_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mACON_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mACON_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mACON_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mACON_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mACON_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mACON_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mACON_P . mJc [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mACON_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out
-> mACON_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mACON_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mACON_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out
-> mACON_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mACON_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mACON_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out
-> mACON_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mACON_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mACON_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out
-> mACON_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mACON_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mACON_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out
-> mACON_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mACON_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mACON_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out
-> mACON_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mACON_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mACON_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out
-> mACON_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mACON_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mACON_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out
-> mACON_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mACON_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mACON_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out
-> mACON_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mACON_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mACON_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out
-> mACON_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mACON_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mACON_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out
-> mACON_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mACON_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mACON_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out
-> mACON_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mACON_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mACON_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out
-> mACON_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mACON_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mACON_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out
-> mACON_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mACON_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mACON_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out
-> mACON_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out -> mACON_P . mJc [ 57 ] =
_cg_const_1 [ 57 ] ; out -> mACON_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out
-> mACON_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out -> mACON_P . mJc [ 60 ] =
_cg_const_1 [ 60 ] ; out -> mACON_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out
-> mACON_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out -> mACON_P . mJc [ 63 ] =
_cg_const_1 [ 63 ] ; out -> mACON_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; out
-> mACON_P . mJc [ 65 ] = _cg_const_1 [ 65 ] ; out -> mACON_P . mJc [ 66 ] =
_cg_const_1 [ 66 ] ; out -> mACON_P . mJc [ 67 ] = _cg_const_1 [ 67 ] ; out
-> mACON_P . mJc [ 68 ] = _cg_const_1 [ 68 ] ; out -> mACON_P . mJc [ 69 ] =
_cg_const_1 [ 69 ] ; out -> mACON_P . mJc [ 70 ] = _cg_const_1 [ 70 ] ; out
-> mACON_P . mJc [ 71 ] = _cg_const_1 [ 71 ] ; out -> mACON_P . mJc [ 72 ] =
_cg_const_1 [ 72 ] ; out -> mACON_P . mJc [ 73 ] = _cg_const_1 [ 73 ] ; out
-> mACON_P . mJc [ 74 ] = _cg_const_1 [ 74 ] ; for ( i1 = 0 ; i1 < 297 ; i1
++ ) { out -> mACON_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void
) out ; return 0 ; }
