#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_q1_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_q1_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 138 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7
, 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23
, 24 , 25 , 26 , 30 , 31 , 32 , 34 , 35 , 36 , 37 , 38 , 39 , 41 , 42 , 43 ,
44 , 45 , 46 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60
, 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 , 74 , 75 , 76 , 77 ,
78 , 79 , 80 , 83 , 84 , 85 , 88 , 89 , 90 , 93 , 94 , 95 , 96 , 97 , 98 , 99
, 102 , 103 , 104 , 107 , 108 , 109 , 112 , 113 , 117 , 118 , 119 , 124 , 125
, 126 , 127 , 128 , 129 , 130 , 133 , 134 , 135 , 138 , 139 , 140 , 143 , 144
, 148 , 149 , 150 , 155 , 156 , 157 , 158 , 159 , 160 , 161 , 164 , 165 , 166
, 169 , 170 , 171 , 174 , 175 , 179 , 180 , 181 , 186 , 187 , 191 , 192 , 193
} ; int32_T i1 ; ( void ) t1 ; ( void ) LC ; out -> mQ1_P . mNumCol = 1ULL ;
out -> mQ1_P . mNumRow = 198ULL ; out -> mQ1_P . mJc [ 0 ] = 0 ; out -> mQ1_P
. mJc [ 1 ] = 138 ; for ( i1 = 0 ; i1 < 138 ; i1 ++ ) { out -> mQ1_P . mIr [
i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
