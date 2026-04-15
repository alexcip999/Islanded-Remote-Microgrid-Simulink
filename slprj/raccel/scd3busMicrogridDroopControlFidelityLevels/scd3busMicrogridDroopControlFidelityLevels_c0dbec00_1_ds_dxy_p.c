#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 113 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 4 , 8 , 12 , 15 , 18 , 21 , 21 , 25 , 29 , 33 , 36 , 39 , 42 , 42 , 42 , 42
, 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 ,
42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 45 , 48 , 51 , 58 , 65 , 72 , 72 , 72
, 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 , 72 ,
75 , 78 , 81 , 88 , 95 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102 , 102
, 102 , 102 , 102 , 102 , 102 , 102 , 102 , 103 , 104 , 104 , 104 , 104 , 104
, 104 , 104 , 104 , 104 , 104 , 105 , 106 , 106 , 106 , 106 , 106 , 106 , 106
, 106 , 106 , 106 } ; static int32_T _cg_const_2 [ 106 ] = { 3 , 4 , 5 , 6 ,
3 , 4 , 5 , 6 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 10 , 11 ,
12 , 13 , 10 , 11 , 12 , 13 , 10 , 11 , 12 , 13 , 7 , 8 , 9 , 7 , 8 , 9 , 7 ,
8 , 9 , 0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 1
, 2 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 7 , 8 , 9 , 7 ,
8 , 9 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 7 , 8
, 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 } ; int32_T i ; ( void ) t1 ; ( void
) LC ; out -> mDXY_P . mNumCol = 112ULL ; out -> mDXY_P . mNumRow = 18ULL ;
for ( i = 0 ; i < 113 ; i ++ ) { out -> mDXY_P . mJc [ i ] = _cg_const_1 [ i
] ; } for ( i = 0 ; i < 106 ; i ++ ) { out -> mDXY_P . mIr [ i ] =
_cg_const_2 [ i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
