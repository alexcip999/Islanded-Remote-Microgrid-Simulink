#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxf_p.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dxf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 372 ] = { 24 , 25 , 26 , 24 , 25 , 26 ,
24 , 25 , 26 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41
, 42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 24 ,
25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44 , 45 , 47
, 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 24 , 25 , 26 , 27 , 29 ,
30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44 , 45 , 47 , 48 , 50 , 51 , 53
, 54 , 56 , 57 , 59 , 60 , 62 , 28 , 34 , 40 , 28 , 34 , 40 , 28 , 34 , 40 ,
46 , 52 , 58 , 46 , 52 , 58 , 46 , 52 , 58 , 24 , 25 , 26 , 24 , 25 , 26 , 24
, 25 , 26 , 24 , 25 , 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 ,
42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 24 , 25
, 26 , 27 , 29 , 30 , 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44 , 45 , 47 ,
48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 24 , 25 , 26 , 27 , 29 , 30
, 32 , 33 , 35 , 36 , 38 , 39 , 41 , 42 , 44 , 45 , 47 , 48 , 50 , 51 , 53 ,
54 , 56 , 57 , 59 , 60 , 62 , 46 , 49 , 46 , 50 , 52 , 55 , 52 , 56 , 58 , 61
, 58 , 62 , 45 , 47 , 48 , 50 , 51 , 53 , 54 , 56 , 57 , 59 , 60 , 62 , 28 ,
31 , 28 , 32 , 34 , 37 , 34 , 38 , 40 , 43 , 40 , 44 , 27 , 29 , 30 , 32 , 33
, 35 , 36 , 38 , 39 , 41 , 42 , 44 , 27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 ,
36 , 38 , 39 , 40 , 41 , 42 , 44 , 27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 , 36
, 38 , 39 , 40 , 41 , 42 , 44 , 27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 , 36 ,
38 , 39 , 40 , 41 , 42 , 44 , 28 , 29 , 27 , 28 , 30 , 31 , 34 , 35 , 33 , 34
, 36 , 37 , 40 , 41 , 39 , 40 , 42 , 43 , 45 , 46 , 47 , 48 , 50 , 51 , 52 ,
53 , 54 , 56 , 57 , 58 , 59 , 60 , 62 , 45 , 46 , 47 , 48 , 50 , 51 , 52 , 53
, 54 , 56 , 57 , 58 , 59 , 60 , 62 , 45 , 46 , 47 , 48 , 50 , 51 , 52 , 53 ,
54 , 56 , 57 , 58 , 59 , 60 , 62 , 46 , 47 , 45 , 46 , 48 , 49 , 52 , 53 , 51
, 52 , 54 , 55 , 58 , 59 , 57 , 58 , 60 , 61 } ; static int32_T _cg_const_1 [
75 ] = { 0 , 3 , 6 , 9 , 36 , 63 , 90 , 93 , 96 , 99 , 102 , 105 , 108 , 108
, 108 , 108 , 108 , 108 , 108 , 108 , 108 , 108 , 108 , 108 , 108 , 111 , 114
, 117 , 144 , 171 , 198 , 200 , 202 , 204 , 206 , 208 , 210 , 222 , 224 , 226
, 228 , 230 , 232 , 234 , 246 , 261 , 276 , 291 , 293 , 295 , 297 , 299 , 301
, 303 , 305 , 307 , 309 , 324 , 339 , 354 , 356 , 358 , 360 , 362 , 364 , 366
, 368 , 370 , 372 , 372 , 372 , 372 , 372 , 372 , 372 } ; int32_T i1 ; ( void
) t1 ; ( void ) LC ; out -> mDXF_P . mNumCol = 74ULL ; out -> mDXF_P .
mNumRow = 74ULL ; out -> mDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mDXF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDXF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDXF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDXF_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDXF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDXF_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDXF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDXF_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mDXF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDXF_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mDXF_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mDXF_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mDXF_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mDXF_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mDXF_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mDXF_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mDXF_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mDXF_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mDXF_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mDXF_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mDXF_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mDXF_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mDXF_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mDXF_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mDXF_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mDXF_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mDXF_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mDXF_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mDXF_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mDXF_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mDXF_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mDXF_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mDXF_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mDXF_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mDXF_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mDXF_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out ->
mDXF_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out -> mDXF_P . mJc [ 56 ] =
_cg_const_1 [ 56 ] ; out -> mDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out ->
mDXF_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out -> mDXF_P . mJc [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mDXF_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out -> mDXF_P . mJc [ 62 ] =
_cg_const_1 [ 62 ] ; out -> mDXF_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out ->
mDXF_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; out -> mDXF_P . mJc [ 65 ] =
_cg_const_1 [ 65 ] ; out -> mDXF_P . mJc [ 66 ] = _cg_const_1 [ 66 ] ; out ->
mDXF_P . mJc [ 67 ] = _cg_const_1 [ 67 ] ; out -> mDXF_P . mJc [ 68 ] =
_cg_const_1 [ 68 ] ; out -> mDXF_P . mJc [ 69 ] = _cg_const_1 [ 69 ] ; out ->
mDXF_P . mJc [ 70 ] = _cg_const_1 [ 70 ] ; out -> mDXF_P . mJc [ 71 ] =
_cg_const_1 [ 71 ] ; out -> mDXF_P . mJc [ 72 ] = _cg_const_1 [ 72 ] ; out ->
mDXF_P . mJc [ 73 ] = _cg_const_1 [ 73 ] ; out -> mDXF_P . mJc [ 74 ] =
_cg_const_1 [ 74 ] ; for ( i1 = 0 ; i1 < 372 ; i1 ++ ) { out -> mDXF_P . mIr
[ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
