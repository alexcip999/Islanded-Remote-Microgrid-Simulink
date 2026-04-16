#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds_dxicr_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_ds_dxicr_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 113 ] = { 0 , 3 , 6 ,
9 , 12 , 15 , 18 , 18 , 21 , 24 , 27 , 30 , 33 , 36 , 36 , 39 , 42 , 45 , 48
, 51 , 54 , 57 , 60 , 63 , 66 , 69 , 72 , 75 , 78 , 81 , 84 , 87 , 90 , 93 ,
96 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99
, 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 ,
99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99
, 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 ,
99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99 , 99
, 99 } ; static int32_T _cg_const_2 [ 99 ] = { 38 , 39 , 40 , 38 , 39 , 40 ,
38 , 39 , 40 , 26 , 27 , 28 , 26 , 27 , 28 , 26 , 27 , 28 , 113 , 114 , 115 ,
113 , 114 , 115 , 113 , 114 , 115 , 80 , 81 , 82 , 80 , 81 , 82 , 80 , 81 ,
82 , 125 , 126 , 127 , 125 , 126 , 127 , 125 , 126 , 127 , 74 , 75 , 76 , 74
, 75 , 76 , 74 , 75 , 76 , 44 , 45 , 46 , 44 , 45 , 46 , 44 , 45 , 46 , 56 ,
57 , 58 , 56 , 57 , 58 , 56 , 57 , 58 , 68 , 69 , 70 , 68 , 69 , 70 , 68 , 69
, 70 , 86 , 87 , 88 , 86 , 87 , 88 , 86 , 87 , 88 , 98 , 99 , 100 , 98 , 99 ,
100 , 98 , 99 , 100 } ; int32_T i ; ( void ) t1 ; ( void ) LC ; out ->
mDXICR_P . mNumCol = 112ULL ; out -> mDXICR_P . mNumRow = 128ULL ; for ( i =
0 ; i < 113 ; i ++ ) { out -> mDXICR_P . mJc [ i ] = _cg_const_1 [ i ] ; }
out -> mDXICR_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mDXICR_P . mIr [ 1 ]
= _cg_const_2 [ 1 ] ; out -> mDXICR_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out
-> mDXICR_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mDXICR_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; out -> mDXICR_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mDXICR_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mDXICR_P . mIr [ 7 ] =
_cg_const_2 [ 7 ] ; out -> mDXICR_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out ->
mDXICR_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out -> mDXICR_P . mIr [ 10 ] =
_cg_const_2 [ 10 ] ; out -> mDXICR_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out
-> mDXICR_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out -> mDXICR_P . mIr [ 13 ]
= _cg_const_2 [ 13 ] ; out -> mDXICR_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ;
out -> mDXICR_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out -> mDXICR_P . mIr [
16 ] = _cg_const_2 [ 16 ] ; out -> mDXICR_P . mIr [ 17 ] = _cg_const_2 [ 17 ]
; out -> mDXICR_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out -> mDXICR_P . mIr [
19 ] = _cg_const_2 [ 19 ] ; out -> mDXICR_P . mIr [ 20 ] = _cg_const_2 [ 20 ]
; out -> mDXICR_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out -> mDXICR_P . mIr [
22 ] = _cg_const_2 [ 22 ] ; out -> mDXICR_P . mIr [ 23 ] = _cg_const_2 [ 23 ]
; out -> mDXICR_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out -> mDXICR_P . mIr [
25 ] = _cg_const_2 [ 25 ] ; out -> mDXICR_P . mIr [ 26 ] = _cg_const_2 [ 26 ]
; out -> mDXICR_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out -> mDXICR_P . mIr [
28 ] = _cg_const_2 [ 28 ] ; out -> mDXICR_P . mIr [ 29 ] = _cg_const_2 [ 29 ]
; out -> mDXICR_P . mIr [ 30 ] = _cg_const_2 [ 30 ] ; out -> mDXICR_P . mIr [
31 ] = _cg_const_2 [ 31 ] ; out -> mDXICR_P . mIr [ 32 ] = _cg_const_2 [ 32 ]
; out -> mDXICR_P . mIr [ 33 ] = _cg_const_2 [ 33 ] ; out -> mDXICR_P . mIr [
34 ] = _cg_const_2 [ 34 ] ; out -> mDXICR_P . mIr [ 35 ] = _cg_const_2 [ 35 ]
; out -> mDXICR_P . mIr [ 36 ] = _cg_const_2 [ 36 ] ; out -> mDXICR_P . mIr [
37 ] = _cg_const_2 [ 37 ] ; out -> mDXICR_P . mIr [ 38 ] = _cg_const_2 [ 38 ]
; out -> mDXICR_P . mIr [ 39 ] = _cg_const_2 [ 39 ] ; out -> mDXICR_P . mIr [
40 ] = _cg_const_2 [ 40 ] ; out -> mDXICR_P . mIr [ 41 ] = _cg_const_2 [ 41 ]
; out -> mDXICR_P . mIr [ 42 ] = _cg_const_2 [ 42 ] ; out -> mDXICR_P . mIr [
43 ] = _cg_const_2 [ 43 ] ; out -> mDXICR_P . mIr [ 44 ] = _cg_const_2 [ 44 ]
; out -> mDXICR_P . mIr [ 45 ] = _cg_const_2 [ 45 ] ; out -> mDXICR_P . mIr [
46 ] = _cg_const_2 [ 46 ] ; out -> mDXICR_P . mIr [ 47 ] = _cg_const_2 [ 47 ]
; out -> mDXICR_P . mIr [ 48 ] = _cg_const_2 [ 48 ] ; out -> mDXICR_P . mIr [
49 ] = _cg_const_2 [ 49 ] ; out -> mDXICR_P . mIr [ 50 ] = _cg_const_2 [ 50 ]
; out -> mDXICR_P . mIr [ 51 ] = _cg_const_2 [ 51 ] ; out -> mDXICR_P . mIr [
52 ] = _cg_const_2 [ 52 ] ; out -> mDXICR_P . mIr [ 53 ] = _cg_const_2 [ 53 ]
; out -> mDXICR_P . mIr [ 54 ] = _cg_const_2 [ 54 ] ; out -> mDXICR_P . mIr [
55 ] = _cg_const_2 [ 55 ] ; out -> mDXICR_P . mIr [ 56 ] = _cg_const_2 [ 56 ]
; out -> mDXICR_P . mIr [ 57 ] = _cg_const_2 [ 57 ] ; out -> mDXICR_P . mIr [
58 ] = _cg_const_2 [ 58 ] ; out -> mDXICR_P . mIr [ 59 ] = _cg_const_2 [ 59 ]
; out -> mDXICR_P . mIr [ 60 ] = _cg_const_2 [ 60 ] ; out -> mDXICR_P . mIr [
61 ] = _cg_const_2 [ 61 ] ; out -> mDXICR_P . mIr [ 62 ] = _cg_const_2 [ 62 ]
; out -> mDXICR_P . mIr [ 63 ] = _cg_const_2 [ 63 ] ; out -> mDXICR_P . mIr [
64 ] = _cg_const_2 [ 64 ] ; out -> mDXICR_P . mIr [ 65 ] = _cg_const_2 [ 65 ]
; out -> mDXICR_P . mIr [ 66 ] = _cg_const_2 [ 66 ] ; out -> mDXICR_P . mIr [
67 ] = _cg_const_2 [ 67 ] ; out -> mDXICR_P . mIr [ 68 ] = _cg_const_2 [ 68 ]
; out -> mDXICR_P . mIr [ 69 ] = _cg_const_2 [ 69 ] ; out -> mDXICR_P . mIr [
70 ] = _cg_const_2 [ 70 ] ; out -> mDXICR_P . mIr [ 71 ] = _cg_const_2 [ 71 ]
; out -> mDXICR_P . mIr [ 72 ] = _cg_const_2 [ 72 ] ; out -> mDXICR_P . mIr [
73 ] = _cg_const_2 [ 73 ] ; out -> mDXICR_P . mIr [ 74 ] = _cg_const_2 [ 74 ]
; out -> mDXICR_P . mIr [ 75 ] = _cg_const_2 [ 75 ] ; out -> mDXICR_P . mIr [
76 ] = _cg_const_2 [ 76 ] ; out -> mDXICR_P . mIr [ 77 ] = _cg_const_2 [ 77 ]
; out -> mDXICR_P . mIr [ 78 ] = _cg_const_2 [ 78 ] ; out -> mDXICR_P . mIr [
79 ] = _cg_const_2 [ 79 ] ; out -> mDXICR_P . mIr [ 80 ] = _cg_const_2 [ 80 ]
; out -> mDXICR_P . mIr [ 81 ] = _cg_const_2 [ 81 ] ; out -> mDXICR_P . mIr [
82 ] = _cg_const_2 [ 82 ] ; out -> mDXICR_P . mIr [ 83 ] = _cg_const_2 [ 83 ]
; out -> mDXICR_P . mIr [ 84 ] = _cg_const_2 [ 84 ] ; out -> mDXICR_P . mIr [
85 ] = _cg_const_2 [ 85 ] ; out -> mDXICR_P . mIr [ 86 ] = _cg_const_2 [ 86 ]
; out -> mDXICR_P . mIr [ 87 ] = _cg_const_2 [ 87 ] ; out -> mDXICR_P . mIr [
88 ] = _cg_const_2 [ 88 ] ; out -> mDXICR_P . mIr [ 89 ] = _cg_const_2 [ 89 ]
; out -> mDXICR_P . mIr [ 90 ] = _cg_const_2 [ 90 ] ; out -> mDXICR_P . mIr [
91 ] = _cg_const_2 [ 91 ] ; out -> mDXICR_P . mIr [ 92 ] = _cg_const_2 [ 92 ]
; out -> mDXICR_P . mIr [ 93 ] = _cg_const_2 [ 93 ] ; out -> mDXICR_P . mIr [
94 ] = _cg_const_2 [ 94 ] ; out -> mDXICR_P . mIr [ 95 ] = _cg_const_2 [ 95 ]
; out -> mDXICR_P . mIr [ 96 ] = _cg_const_2 [ 96 ] ; out -> mDXICR_P . mIr [
97 ] = _cg_const_2 [ 97 ] ; out -> mDXICR_P . mIr [ 98 ] = _cg_const_2 [ 98 ]
; ( void ) LC ; ( void ) out ; return 0 ; }
