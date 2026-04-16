#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxy_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 102 ] = { 3 , 4 , 5 , 6 , 10 , 11 , 12 ,
13 , 3 , 4 , 5 , 6 , 10 , 11 , 12 , 13 , 3 , 4 , 5 , 6 , 10 , 11 , 12 , 13 ,
0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 7 , 8 , 9 , 7 , 8 , 9 , 7 , 8 , 9 , 0 , 1
, 2 , 3 , 4 , 5 , 6 , 10 , 11 , 12 , 13 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 10 , 11
, 12 , 13 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 10 , 11 , 12 , 13 , 0 , 1 , 2 , 0 , 1
, 2 , 0 , 1 , 2 , 7 , 8 , 9 , 7 , 8 , 9 , 7 , 8 , 9 , 7 , 8 , 9 , 7 , 8 , 9 ,
7 , 8 , 9 } ; static int32_T _cg_const_1 [ 75 ] = { 0 , 0 , 0 , 0 , 8 , 16 ,
24 , 27 , 30 , 33 , 36 , 39 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42
, 42 , 42 , 42 , 42 , 42 , 42 , 53 , 64 , 75 , 75 , 75 , 75 , 75 , 75 , 75 ,
75 , 75 , 75 , 75 , 75 , 75 , 75 , 75 , 78 , 81 , 84 , 84 , 84 , 84 , 84 , 84
, 84 , 84 , 84 , 84 , 87 , 90 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 ,
93 , 93 , 93 , 93 , 96 , 99 , 102 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC
; out -> mTDXY_P . mNumCol = 74ULL ; out -> mTDXY_P . mNumRow = 14ULL ; out
-> mTDXY_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDXY_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mTDXY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mTDXY_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mTDXY_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mTDXY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mTDXY_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mTDXY_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mTDXY_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mTDXY_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mTDXY_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mTDXY_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mTDXY_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mTDXY_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mTDXY_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out
-> mTDXY_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mTDXY_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mTDXY_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mTDXY_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mTDXY_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mTDXY_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out
-> mTDXY_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mTDXY_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mTDXY_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out
-> mTDXY_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mTDXY_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mTDXY_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out
-> mTDXY_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mTDXY_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mTDXY_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out
-> mTDXY_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mTDXY_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mTDXY_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out
-> mTDXY_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mTDXY_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mTDXY_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out
-> mTDXY_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mTDXY_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mTDXY_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out
-> mTDXY_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mTDXY_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mTDXY_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mTDXY_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mTDXY_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mTDXY_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out
-> mTDXY_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mTDXY_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mTDXY_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out
-> mTDXY_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mTDXY_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mTDXY_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out
-> mTDXY_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mTDXY_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mTDXY_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out
-> mTDXY_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mTDXY_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mTDXY_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out
-> mTDXY_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mTDXY_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mTDXY_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out
-> mTDXY_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mTDXY_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mTDXY_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out
-> mTDXY_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out -> mTDXY_P . mJc [ 64 ] =
_cg_const_1 [ 64 ] ; out -> mTDXY_P . mJc [ 65 ] = _cg_const_1 [ 65 ] ; out
-> mTDXY_P . mJc [ 66 ] = _cg_const_1 [ 66 ] ; out -> mTDXY_P . mJc [ 67 ] =
_cg_const_1 [ 67 ] ; out -> mTDXY_P . mJc [ 68 ] = _cg_const_1 [ 68 ] ; out
-> mTDXY_P . mJc [ 69 ] = _cg_const_1 [ 69 ] ; out -> mTDXY_P . mJc [ 70 ] =
_cg_const_1 [ 70 ] ; out -> mTDXY_P . mJc [ 71 ] = _cg_const_1 [ 71 ] ; out
-> mTDXY_P . mJc [ 72 ] = _cg_const_1 [ 72 ] ; out -> mTDXY_P . mJc [ 73 ] =
_cg_const_1 [ 73 ] ; out -> mTDXY_P . mJc [ 74 ] = _cg_const_1 [ 74 ] ; for ( i1
= 0 ; i1 < 102 ; i1 ++ ) { out -> mTDXY_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ;
} ( void ) LC ; ( void ) out ; return 0 ; }
