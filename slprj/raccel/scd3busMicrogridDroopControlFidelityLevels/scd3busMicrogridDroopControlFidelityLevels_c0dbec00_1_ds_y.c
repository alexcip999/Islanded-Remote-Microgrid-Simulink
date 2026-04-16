#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t29 , NeDsMethodOutput *
out ) { real_T Measurement_inverter_Voltage_Sensor_V ; real_T t23 ; real_T
t24 ; real_T t25 ; ( void ) LC ; out -> mY . mX [ 0ULL ] = ( t29 -> mX . mX [
6ULL ] * 0.003102687007525359 + t29 -> mX . mX [ 44ULL ] *
3.1026870075253588E-9 ) + t29 -> mX . mX [ 27ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 1ULL ] = ( t29 -> mX . mX [ 7ULL ] * 0.003102687007525359 +
t29 -> mX . mX [ 45ULL ] * 3.1026870075253588E-9 ) + t29 -> mX . mX [ 28ULL ]
* - 0.003102687007525359 ; out -> mY . mX [ 2ULL ] = ( t29 -> mX . mX [ 8ULL
] * 0.003102687007525359 + t29 -> mX . mX [ 46ULL ] * 3.1026870075253588E-9 )
+ t29 -> mX . mX [ 29ULL ] * - 0.003102687007525359 ; t23 = t29 -> mX . mX [
3ULL ] * 0.00322301281945155 + t29 -> mX . mX [ 27ULL ] *
3.2230128194515496E-9 ; t24 = t29 -> mX . mX [ 4ULL ] * 0.00322301281945155 +
t29 -> mX . mX [ 28ULL ] * 3.2230128194515496E-9 ; t25 = t29 -> mX . mX [
5ULL ] * 0.00322301281945155 + t29 -> mX . mX [ 29ULL ] *
3.2230128194515496E-9 ; Measurement_inverter_Voltage_Sensor_V = ( t29 -> mX .
mX [ 27ULL ] * 1.0E-6 + t29 -> mX . mX [ 3ULL ] ) - ( t29 -> mX . mX [ 28ULL
] * 1.0E-6 + t29 -> mX . mX [ 4ULL ] ) ; out -> mY . mX [ 7ULL ] = ( t29 ->
mX . mX [ 9ULL ] * 0.003102687007525359 + t29 -> mX . mX [ 56ULL ] *
3.1026870075253588E-9 ) + t29 -> mX . mX [ 71ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 8ULL ] = ( t29 -> mX . mX [ 10ULL ] * 0.003102687007525359 +
t29 -> mX . mX [ 57ULL ] * 3.1026870075253588E-9 ) + t29 -> mX . mX [ 72ULL ]
* - 0.003102687007525359 ; out -> mY . mX [ 9ULL ] = ( t29 -> mX . mX [ 11ULL
] * 0.003102687007525359 + t29 -> mX . mX [ 58ULL ] * 3.1026870075253588E-9 )
+ t29 -> mX . mX [ 73ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 3ULL ]
= t23 ; out -> mY . mX [ 4ULL ] = t24 ; out -> mY . mX [ 5ULL ] = t25 ; out
-> mY . mX [ 6ULL ] = Measurement_inverter_Voltage_Sensor_V ; out -> mY . mX
[ 10ULL ] = t23 ; out -> mY . mX [ 11ULL ] = t24 ; out -> mY . mX [ 12ULL ] =
t25 ; out -> mY . mX [ 13ULL ] = Measurement_inverter_Voltage_Sensor_V ; ( void
) LC ; ( void ) out ; return 0 ; }
