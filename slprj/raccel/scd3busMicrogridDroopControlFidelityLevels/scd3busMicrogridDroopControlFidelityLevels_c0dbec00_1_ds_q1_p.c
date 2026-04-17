#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_q1_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_q1_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 156 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7
, 8 , 10 , 11 , 12 , 13 , 14 , 15 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 ,
25 , 26 , 27 , 28 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41
, 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 ,
58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 , 72 , 73
, 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 88 , 89 , 90 ,
93 , 94 , 95 , 98 , 99 , 100 , 101 , 102 , 103 , 104 , 105 , 106 , 107 , 110
, 111 , 112 , 115 , 116 , 117 , 120 , 121 , 125 , 126 , 127 , 132 , 133 , 134
, 135 , 136 , 137 , 138 , 139 , 140 , 141 , 144 , 145 , 146 , 149 , 150 , 151
, 154 , 155 , 159 , 160 , 161 , 166 , 167 , 168 , 169 , 170 , 171 , 172 , 173
, 174 , 175 , 178 , 179 , 180 , 183 , 184 , 185 , 188 , 189 , 193 , 194 , 195
, 200 , 201 , 205 , 206 , 207 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC ;
out -> mQ1_P . mNumCol = 1ULL ; out -> mQ1_P . mNumRow = 212ULL ; out ->
mQ1_P . mJc [ 0 ] = 0 ; out -> mQ1_P . mJc [ 1 ] = 156 ; for ( i1 = 0 ; i1 <
156 ; i1 ++ ) { out -> mQ1_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void )
LC ; ( void ) out ; return 0 ; }
