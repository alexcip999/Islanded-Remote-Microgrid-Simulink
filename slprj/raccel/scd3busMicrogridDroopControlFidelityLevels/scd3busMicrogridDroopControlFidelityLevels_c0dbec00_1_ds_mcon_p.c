#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 154 ] = { 0 , 3 , 6 , 9 , 12 , 15 , 18 ,
21 , 24 , 27 , 28 , 31 , 34 , 37 , 40 , 43 , 46 , 49 , 52 , 55 , 58 , 61 , 64
, 65 , 68 , 71 , 74 , 77 , 80 , 83 , 86 , 89 , 92 , 95 , 98 , 101 , 102 , 105
, 108 , 111 , 114 , 117 , 120 , 123 , 126 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129
, 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 , 129 } ;
static int32_T _cg_const_2 [ 129 ] = { 39 , 40 , 41 , 39 , 40 , 41 , 39 , 40
, 41 , 33 , 34 , 35 , 33 , 34 , 35 , 33 , 34 , 35 , 36 , 37 , 38 , 36 , 37 ,
38 , 36 , 37 , 38 , 0 , 10 , 11 , 12 , 10 , 11 , 12 , 10 , 11 , 12 , 7 , 8 ,
9 , 7 , 8 , 9 , 7 , 8 , 9 , 1 , 2 , 3 , 1 , 2 , 3 , 1 , 2 , 3 , 4 , 5 , 6 , 4
, 5 , 6 , 4 , 5 , 6 , 13 , 23 , 24 , 25 , 23 , 24 , 25 , 23 , 24 , 25 , 17 ,
18 , 19 , 17 , 18 , 19 , 17 , 18 , 19 , 14 , 15 , 16 , 14 , 15 , 16 , 14 , 15
, 16 , 20 , 21 , 22 , 20 , 21 , 22 , 20 , 21 , 22 , 26 , 30 , 31 , 32 , 30 ,
31 , 32 , 30 , 31 , 32 , 27 , 28 , 29 , 27 , 28 , 29 , 27 , 28 , 29 , 42 , 43
, 44 , 42 , 43 , 44 , 42 , 43 , 44 } ; int32_T i ; ( void ) t1 ; ( void ) LC
; out -> mMCON_P . mNumCol = 153ULL ; out -> mMCON_P . mNumRow = 153ULL ; for
( i = 0 ; i < 154 ; i ++ ) { out -> mMCON_P . mJc [ i ] = _cg_const_1 [ i ] ;
} for ( i = 0 ; i < 129 ; i ++ ) { out -> mMCON_P . mIr [ i ] = _cg_const_2 [
i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
