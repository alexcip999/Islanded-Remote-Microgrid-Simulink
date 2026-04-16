#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxf_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_tdxf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 669 ] = { 24 , 25 , 26 , 63 , 64 , 65 ,
24 , 25 , 26 , 63 , 64 , 65 , 24 , 25 , 26 , 63 , 64 , 65 , 15 , 16 , 17 , 18
, 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 ,
38 , 39 , 41 , 42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60
, 62 , 63 , 64 , 65 , 69 , 70 , 71 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44
, 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 63 , 64 , 65 ,
69 , 70 , 71 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27
, 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44 , 45 , 47 , 48 , 50 ,
51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 63 , 64 , 65 , 69 , 70 , 71 , 6 , 7 ,
8 , 28 , 34 , 40 , 63 , 64 , 65 , 73 , 6 , 7 , 8 , 28 , 34 , 40 , 63 , 64 ,
65 , 73 , 6 , 7 , 8 , 28 , 34 , 40 , 63 , 64 , 65 , 73 , 3 , 4 , 5 , 46 , 52
, 58 , 66 , 67 , 68 , 72 , 3 , 4 , 5 , 46 , 52 , 58 , 66 , 67 , 68 , 72 , 3 ,
4 , 5 , 46 , 52 , 58 , 66 , 67 , 68 , 72 , 63 , 64 , 65 , 63 , 64 , 65 , 63 ,
64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 , 64 , 65 , 63 , 64
, 65 , 63 , 64 , 65 , 69 , 70 , 71 , 69 , 70 , 71 , 69 , 70 , 71 , 0 , 1 , 2
, 24 , 25 , 26 , 63 , 64 , 65 , 0 , 1 , 2 , 24 , 25 , 26 , 63 , 64 , 65 , 0 ,
1 , 2 , 24 , 25 , 26 , 63 , 64 , 65 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 ,
20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39
, 41 , 42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 ,
63 , 64 , 65 , 69 , 70 , 71 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 , 21
, 22 , 23 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 ,
42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 63 , 64
, 65 , 69 , 70 , 71 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44
, 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 63 , 64 , 65 ,
69 , 70 , 71 , 46 , 49 , 72 , 46 , 50 , 72 , 52 , 55 , 72 , 52 , 56 , 72 , 58
, 61 , 72 , 58 , 62 , 72 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 ,
60 , 62 , 28 , 31 , 73 , 28 , 32 , 73 , 34 , 37 , 73 , 34 , 38 , 73 , 40 , 43
, 73 , 40 , 44 , 73 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 ,
44 , 6 , 7 , 8 , 27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 , 36 , 38 , 39 , 40 ,
41 , 42 , 44 , 63 , 64 , 65 , 73 , 6 , 7 , 8 , 27 , 28 , 29 , 30 , 32 , 33 ,
34 , 35 , 36 , 38 , 39 , 40 , 41 , 42 , 44 , 63 , 64 , 65 , 73 , 6 , 7 , 8 ,
27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 , 36 , 38 , 39 , 40 , 41 , 42 , 44 , 63
, 64 , 65 , 73 , 28 , 29 , 73 , 27 , 28 , 30 , 31 , 34 , 35 , 73 , 33 , 34 ,
36 , 37 , 40 , 41 , 73 , 39 , 40 , 42 , 43 , 3 , 4 , 5 , 45 , 46 , 47 , 48 ,
50 , 51 , 52 , 53 , 54 , 56 , 57 , 58 , 59 , 60 , 62 , 66 , 67 , 68 , 72 , 3
, 4 , 5 , 45 , 46 , 47 , 48 , 50 , 51 , 52 , 53 , 54 , 56 , 57 , 58 , 59 , 60
, 62 , 66 , 67 , 68 , 72 , 3 , 4 , 5 , 45 , 46 , 47 , 48 , 50 , 51 , 52 , 53
, 54 , 56 , 57 , 58 , 59 , 60 , 62 , 66 , 67 , 68 , 72 , 46 , 47 , 72 , 45 ,
46 , 48 , 49 , 52 , 53 , 72 , 51 , 52 , 54 , 55 , 58 , 59 , 72 , 57 , 58 , 60
, 61 , 63 , 66 , 64 , 67 , 65 , 68 , 12 , 13 , 14 , 66 , 67 , 68 , 69 , 70 ,
71 , 12 , 13 , 14 , 66 , 67 , 68 , 69 , 70 , 71 , 12 , 13 , 14 , 66 , 67 , 68
, 69 , 70 , 71 } ; static int32_T _cg_const_1 [ 75 ] = { 0 , 6 , 12 , 18 , 60
, 102 , 144 , 154 , 164 , 174 , 184 , 194 , 204 , 207 , 210 , 213 , 216 , 219
, 222 , 225 , 228 , 231 , 234 , 237 , 240 , 249 , 258 , 267 , 312 , 357 , 402
, 405 , 408 , 411 , 414 , 417 , 420 , 432 , 435 , 438 , 441 , 444 , 447 , 450
, 462 , 484 , 506 , 528 , 531 , 533 , 535 , 538 , 540 , 542 , 545 , 547 , 549
, 571 , 593 , 615 , 618 , 620 , 622 , 625 , 627 , 629 , 632 , 634 , 636 , 638
, 640 , 642 , 651 , 660 , 669 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC ;
out -> mTDXF_P . mNumCol = 74ULL ; out -> mTDXF_P . mNumRow = 74ULL ; out ->
mTDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDXF_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mTDXF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mTDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mTDXF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mTDXF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mTDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mTDXF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mTDXF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mTDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mTDXF_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mTDXF_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mTDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mTDXF_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mTDXF_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out
-> mTDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mTDXF_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mTDXF_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mTDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mTDXF_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mTDXF_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out
-> mTDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mTDXF_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mTDXF_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out
-> mTDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mTDXF_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mTDXF_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out
-> mTDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mTDXF_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mTDXF_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out
-> mTDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mTDXF_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mTDXF_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out
-> mTDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mTDXF_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mTDXF_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out
-> mTDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mTDXF_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mTDXF_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out
-> mTDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mTDXF_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mTDXF_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mTDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mTDXF_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mTDXF_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out
-> mTDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mTDXF_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mTDXF_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out
-> mTDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mTDXF_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mTDXF_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out
-> mTDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mTDXF_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mTDXF_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out
-> mTDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mTDXF_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mTDXF_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out
-> mTDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mTDXF_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mTDXF_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out
-> mTDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mTDXF_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mTDXF_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out
-> mTDXF_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out -> mTDXF_P . mJc [ 64 ] =
_cg_const_1 [ 64 ] ; out -> mTDXF_P . mJc [ 65 ] = _cg_const_1 [ 65 ] ; out
-> mTDXF_P . mJc [ 66 ] = _cg_const_1 [ 66 ] ; out -> mTDXF_P . mJc [ 67 ] =
_cg_const_1 [ 67 ] ; out -> mTDXF_P . mJc [ 68 ] = _cg_const_1 [ 68 ] ; out
-> mTDXF_P . mJc [ 69 ] = _cg_const_1 [ 69 ] ; out -> mTDXF_P . mJc [ 70 ] =
_cg_const_1 [ 70 ] ; out -> mTDXF_P . mJc [ 71 ] = _cg_const_1 [ 71 ] ; out
-> mTDXF_P . mJc [ 72 ] = _cg_const_1 [ 72 ] ; out -> mTDXF_P . mJc [ 73 ] =
_cg_const_1 [ 73 ] ; out -> mTDXF_P . mJc [ 74 ] = _cg_const_1 [ 74 ] ; for ( i1
= 0 ; i1 < 669 ; i1 ++ ) { out -> mTDXF_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ;
} ( void ) LC ; ( void ) out ; return 0 ; }
