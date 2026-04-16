#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxy_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 154 ] = { 0 , 0 , 0 , 0 , 3 , 6 , 9 , 9
, 9 , 9 , 9 , 12 , 15 , 18 , 21 , 24 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27
, 30 , 33 , 36 , 39 , 42 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 48 , 51 ,
54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 54 , 60 , 66 , 72 , 72 , 72 , 72
, 72 , 72 , 75 , 78 , 81 , 87 , 93 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 ,
99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 100 , 101 , 101 , 101 , 101 , 101 ,
101 , 101 , 101 , 101 , 101 , 101 , 101 , 104 , 107 , 110 , 116 , 122 , 128 ,
128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 , 128 ,
128 , 128 , 129 , 130 , 130 , 130 , 130 , 130 , 130 , 130 , 130 , 130 , 130 ,
130 , 130 , 133 , 136 , 139 , 139 , 139 , 139 , 139 , 139 , 139 , 139 , 139 ,
139 , 139 , 139 , 139 , 139 , 139 , 139 , 140 , 141 , 141 , 141 , 141 , 141 ,
141 , 141 , 141 , 141 , 141 } ; static int32_T _cg_const_2 [ 141 ] = { 19 ,
20 , 21 , 19 , 20 , 21 , 19 , 20 , 21 , 3 , 4 , 5 , 3 , 4 , 5 , 3 , 4 , 5 , 0
, 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 11 , 12 , 13 , 11 , 12 , 13 , 11 , 12 , 13
, 8 , 9 , 10 , 8 , 9 , 10 , 8 , 9 , 10 , 16 , 17 , 18 , 16 , 17 , 18 , 16 ,
17 , 18 , 16 , 17 , 18 , 19 , 20 , 21 , 16 , 17 , 18 , 19 , 20 , 21 , 16 , 17
, 18 , 19 , 20 , 21 , 0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 3 , 4 ,
5 , 0 , 1 , 2 , 3 , 4 , 5 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 8 ,
9 , 10 , 8 , 9 , 10 , 8 , 9 , 10 , 11 , 12 , 13 , 8 , 9 , 10 , 11 , 12 , 13 ,
8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 16 , 17 , 18 , 16 , 17 ,
18 , 22 , 23 } ; int32_T i ; ( void ) t1 ; ( void ) LC ; out -> mTDXY_P .
mNumCol = 153ULL ; out -> mTDXY_P . mNumRow = 24ULL ; for ( i = 0 ; i < 154 ;
i ++ ) { out -> mTDXY_P . mJc [ i ] = _cg_const_1 [ i ] ; } for ( i = 0 ; i <
141 ; i ++ ) { out -> mTDXY_P . mIr [ i ] = _cg_const_2 [ i ] ; } ( void ) LC
; ( void ) out ; return 0 ; }
