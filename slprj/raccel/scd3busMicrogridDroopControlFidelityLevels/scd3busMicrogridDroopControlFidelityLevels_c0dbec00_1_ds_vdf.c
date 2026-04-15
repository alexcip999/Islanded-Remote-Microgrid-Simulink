#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_vdf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_vdf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static boolean_T _cg_const_1 [ 112 ] = { false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , false , false , false , false , false , false , true , true ,
true , false , true , false , true , false , true , false , true , false ,
true , true , true , false , true , false , true , false , true , false ,
true , false , false , false , false , false , false } ; int32_T i ; ( void )
t1 ; ( void ) LC ; for ( i = 0 ; i < 112 ; i ++ ) { out -> mVDF . mX [ i ] =
_cg_const_1 [ i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
