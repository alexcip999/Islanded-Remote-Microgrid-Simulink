#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mcon ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 101 ] = { - 0.11095979248168747 , - 0.0 ,
- 0.0 , - 0.0 , - 0.11095979248168747 , - 0.0 , - 0.0 , - 0.0 , -
0.11095979248168747 , - 0.18863164721886871 , - 0.0 , - 0.0 , - 0.0 , -
0.18863164721886871 , - 0.0 , - 0.0 , - 0.0 , - 0.18863164721886871 , - 0.01
, - 5.5109052317138283E-5 , - 0.0 , - 0.0 , - 0.0 , - 5.5109052317138283E-5 ,
- 0.0 , - 0.0 , - 0.0 , - 5.5109052317138283E-5 , - 0.002 , - 0.0 , - 0.0 , -
0.0 , - 0.002 , - 0.0 , - 0.0 , - 0.0 , - 0.002 , - 0.01 , -
5.5109052317138283E-5 , - 0.0 , - 0.0 , - 0.0 , - 5.5109052317138283E-5 , -
0.0 , - 0.0 , - 0.0 , - 5.5109052317138283E-5 , - 0.002 , - 0.0 , - 0.0 , -
0.0 , - 0.002 , - 0.0 , - 0.0 , - 0.0 , - 0.002 , - 0.0002 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0002 , - 0.0 , - 0.0 , - 0.0 , - 0.0002 , - 0.061334350543063083
, - 0.0 , - 0.0 , - 0.0 , - 0.061334350543063083 , - 0.0 , - 0.0 , - 0.0 , -
0.061334350543063083 , - 0.061334350543063083 , - 0.0 , - 0.0 , - 0.0 , -
0.061334350543063083 , - 0.0 , - 0.0 , - 0.0 , - 0.061334350543063083 , -
0.001 , - 0.0 , - 0.0 , - 0.0 , - 0.001 , - 0.0 , - 0.0 , - 0.0 , - 0.001 , -
0.03641727063494371 , - 0.0 , - 0.0 , - 0.0 , - 0.03641727063494371 , - 0.0 ,
- 0.0 , - 0.0 , - 0.03641727063494371 } ; int32_T i ; ( void ) t1 ; ( void )
LC ; for ( i = 0 ; i < 101 ; i ++ ) { out -> mMCON . mX [ i ] = _cg_const_1 [
i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
