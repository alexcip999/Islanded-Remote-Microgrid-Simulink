#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxicr_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 154 ] = { 0 , 3 , 6 , 9 , 12 , 15 , 18 ,
21 , 24 , 27 , 27 , 30 , 33 , 36 , 39 , 42 , 45 , 48 , 51 , 54 , 57 , 60 , 63
, 63 , 66 , 69 , 72 , 75 , 78 , 81 , 84 , 87 , 90 , 93 , 96 , 99 , 99 , 102 ,
105 , 108 , 111 , 114 , 117 , 120 , 123 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 ,
126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 , 126 } ;
static int32_T _cg_const_2 [ 126 ] = { 150 , 151 , 152 , 150 , 151 , 152 ,
150 , 151 , 152 , 129 , 130 , 131 , 129 , 130 , 131 , 129 , 130 , 131 , 138 ,
139 , 140 , 138 , 139 , 140 , 138 , 139 , 140 , 43 , 44 , 45 , 43 , 44 , 45 ,
43 , 44 , 45 , 28 , 29 , 30 , 28 , 29 , 30 , 28 , 29 , 30 , 10 , 11 , 12 , 10
, 11 , 12 , 10 , 11 , 12 , 22 , 23 , 24 , 22 , 23 , 24 , 22 , 23 , 24 , 89 ,
90 , 91 , 89 , 90 , 91 , 89 , 90 , 91 , 68 , 69 , 70 , 68 , 69 , 70 , 68 , 69
, 70 , 62 , 63 , 64 , 62 , 63 , 64 , 62 , 63 , 64 , 74 , 75 , 76 , 74 , 75 ,
76 , 74 , 75 , 76 , 114 , 115 , 116 , 114 , 115 , 116 , 114 , 115 , 116 , 108
, 109 , 110 , 108 , 109 , 110 , 108 , 109 , 110 , 162 , 163 , 164 , 162 , 163
, 164 , 162 , 163 , 164 } ; int32_T i ; ( void ) t1 ; ( void ) LC ; out ->
mDXICR_P . mNumCol = 153ULL ; out -> mDXICR_P . mNumRow = 168ULL ; for ( i =
0 ; i < 154 ; i ++ ) { out -> mDXICR_P . mJc [ i ] = _cg_const_1 [ i ] ; }
for ( i = 0 ; i < 126 ; i ++ ) { out -> mDXICR_P . mIr [ i ] = _cg_const_2 [
i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
