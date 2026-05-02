#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 199 ] = { 0 , 3 , 6 , 9 , 12 , 15 , 18 ,
21 , 24 , 27 , 30 , 33 , 36 , 39 , 42 , 45 , 48 , 51 , 54 , 57 , 60 , 63 , 66
, 69 , 72 , 75 , 78 , 81 , 82 , 83 , 84 , 87 , 90 , 93 , 94 , 97 , 100 , 103
, 106 , 109 , 112 , 113 , 116 , 119 , 122 , 125 , 128 , 131 , 132 , 135 , 138
, 141 , 144 , 147 , 150 , 153 , 156 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159 , 159
, 159 , 159 , 159 , 159 , 159 } ; static int32_T _cg_const_2 [ 159 ] = { 6 ,
7 , 8 , 6 , 7 , 8 , 6 , 7 , 8 , 12 , 13 , 14 , 12 , 13 , 14 , 12 , 13 , 14 ,
19 , 20 , 21 , 19 , 20 , 21 , 19 , 20 , 21 , 22 , 23 , 24 , 22 , 23 , 24 , 22
, 23 , 24 , 32 , 33 , 34 , 32 , 33 , 34 , 32 , 33 , 34 , 38 , 39 , 40 , 38 ,
39 , 40 , 38 , 39 , 40 , 45 , 46 , 47 , 45 , 46 , 47 , 45 , 46 , 47 , 48 , 49
, 50 , 48 , 49 , 50 , 48 , 49 , 50 , 54 , 55 , 56 , 54 , 55 , 56 , 54 , 55 ,
56 , 0 , 1 , 41 , 42 , 43 , 44 , 42 , 43 , 44 , 42 , 43 , 44 , 2 , 3 , 4 , 5
, 3 , 4 , 5 , 3 , 4 , 5 , 9 , 10 , 11 , 9 , 10 , 11 , 9 , 10 , 11 , 15 , 16 ,
17 , 18 , 16 , 17 , 18 , 16 , 17 , 18 , 25 , 26 , 27 , 25 , 26 , 27 , 25 , 26
, 27 , 28 , 29 , 30 , 31 , 29 , 30 , 31 , 29 , 30 , 31 , 35 , 36 , 37 , 35 ,
36 , 37 , 35 , 36 , 37 , 51 , 52 , 53 , 51 , 52 , 53 , 51 , 52 , 53 } ;
int32_T i ; ( void ) t1 ; ( void ) LC ; out -> mMCON_P . mNumCol = 198ULL ;
out -> mMCON_P . mNumRow = 198ULL ; for ( i = 0 ; i < 199 ; i ++ ) { out ->
mMCON_P . mJc [ i ] = _cg_const_1 [ i ] ; } for ( i = 0 ; i < 159 ; i ++ ) {
out -> mMCON_P . mIr [ i ] = _cg_const_2 [ i ] ; } ( void ) LC ; ( void ) out
; return 0 ; }
