#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t56 , NeDsMethodOutput *
out ) { real_T Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 ;
real_T Solar_Power_1_Average_Value_DC_DC_Converter_i2 ; real_T
intermediate_der1005 ; real_T intermediate_der1006 ; real_T
intermediate_der1007 ; real_T intermediate_der1012 ; real_T intermediate_der2
; real_T t16 ; real_T t18 ; real_T t55 ; real_T zc_int24 ; real_T zc_int28 ;
real_T zc_int30 ; ( void ) LC ;
Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 = ( ( ( ( ( ( t56
-> mX . mX [ 98ULL ] * 1.0E-12 - t56 -> mX . mX [ 107ULL ] ) - t56 -> mX . mX
[ 112ULL ] ) - t56 -> mX . mX [ 117ULL ] ) - t56 -> mX . mX [ 121ULL ] ) +
t56 -> mX . mX [ 106ULL ] ) + t56 -> mX . mX [ 111ULL ] ) + t56 -> mX . mX [
116ULL ] ; t16 = ( ( ( ( ( ( t56 -> mX . mX [ 132ULL ] * 1.0E-12 - t56 -> mX
. mX [ 141ULL ] ) - t56 -> mX . mX [ 146ULL ] ) - t56 -> mX . mX [ 151ULL ] )
- t56 -> mX . mX [ 155ULL ] ) + t56 -> mX . mX [ 140ULL ] ) + t56 -> mX . mX
[ 145ULL ] ) + t56 -> mX . mX [ 150ULL ] ; t18 = ( ( ( ( ( ( t56 -> mX . mX [
166ULL ] * 1.0E-12 - t56 -> mX . mX [ 175ULL ] ) - t56 -> mX . mX [ 180ULL ]
) - t56 -> mX . mX [ 185ULL ] ) - t56 -> mX . mX [ 189ULL ] ) + t56 -> mX .
mX [ 174ULL ] ) + t56 -> mX . mX [ 179ULL ] ) + t56 -> mX . mX [ 184ULL ] ;
Solar_Power_1_Average_Value_DC_DC_Converter_i2 = ( ( ( ( ( ( t56 -> mX . mX [
76ULL ] * 1.0E-12 - t56 -> mX . mX [ 85ULL ] ) - t56 -> mX . mX [ 90ULL ] ) -
t56 -> mX . mX [ 95ULL ] ) - t56 -> mX . mX [ 201ULL ] ) + t56 -> mX . mX [
84ULL ] ) + t56 -> mX . mX [ 89ULL ] ) + t56 -> mX . mX [ 94ULL ] ; if ( t56
-> mM . mX [ 33ULL ] != 0 ) { zc_int24 = 0.99 ; } else { zc_int24 = t56 -> mM
. mX [ 34ULL ] != 0 ? 0.0 : t56 -> mU . mX [ 15ULL ] ; } if ( t56 -> mM . mX
[ 37ULL ] != 0 ) { t55 = 0.99 ; } else { t55 = t56 -> mM . mX [ 38ULL ] != 0
? 0.0 : t56 -> mU . mX [ 23ULL ] ; } if ( t56 -> mM . mX [ 40ULL ] != 0 ) {
zc_int28 = 0.99 ; } else { zc_int28 = t56 -> mM . mX [ 41ULL ] != 0 ? 0.0 :
t56 -> mU . mX [ 31ULL ] ; } if ( t56 -> mM . mX [ 30ULL ] != 0 ) { zc_int30
= 0.99 ; } else { zc_int30 = t56 -> mM . mX [ 31ULL ] != 0 ? 0.0 : t56 -> mU
. mX [ 33ULL ] ; } if ( t56 -> mM . mX [ 33ULL ] != 0 ) {
intermediate_der1005 = 0.0 ; } else { intermediate_der1005 = ( real_T ) ( t56
-> mM . mX [ 34ULL ] == 0 ) ; } if ( t56 -> mM . mX [ 37ULL ] != 0 ) {
intermediate_der1006 = 0.0 ; } else { intermediate_der1006 = ( real_T ) ( t56
-> mM . mX [ 38ULL ] == 0 ) ; } if ( t56 -> mM . mX [ 40ULL ] != 0 ) {
intermediate_der1007 = 0.0 ; } else { intermediate_der1007 = ( real_T ) ( t56
-> mM . mX [ 41ULL ] == 0 ) ; } if ( t56 -> mM . mX [ 30ULL ] != 0 ) {
intermediate_der1012 = 0.0 ; } else { intermediate_der1012 = ( real_T ) ( t56
-> mM . mX [ 31ULL ] == 0 ) ; } if ( t56 -> mM . mX [ 73ULL ] != 0 ) { out ->
mDUF . mX [ 2ULL ] = - ( ( ( t56 -> mX . mX [ 123ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out
-> mDUF . mX [ 2ULL ] = 0.0 ; } if ( t56 -> mM . mX [ 90ULL ] != 0 ) { out ->
mDUF . mX [ 5ULL ] = - ( ( ( t56 -> mX . mX [ 157ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 221.72015259276816 / 1000.0 ) ; } else { out
-> mDUF . mX [ 5ULL ] = 0.0 ; } if ( t56 -> mM . mX [ 106ULL ] != 0 ) { out
-> mDUF . mX [ 8ULL ] = - ( ( ( t56 -> mX . mX [ 191ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out
-> mDUF . mX [ 8ULL ] = 0.0 ; } if ( t56 -> mM . mX [ 5ULL ] != 0 ) { out ->
mDUF . mX [ 11ULL ] = - ( ( ( t56 -> mX . mX [ 203ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out
-> mDUF . mX [ 11ULL ] = 0.0 ; } intermediate_der2 = ( 1.0 - zc_int24 ) * ( 1.0
- zc_int24 ) ; out -> mDUF . mX [ 0ULL ] = - ( - intermediate_der1005 * ( - ( t56 -> mX . mX [ 122ULL ] * zc_int24 ) / ( intermediate_der2 == 0.0 ? 1.0E-16 : intermediate_der2 ) ) + t56 -> mX . mX [ 122ULL ] * intermediate_der1005 / ( 1.0 - zc_int24 == 0.0 ? 1.0E-16 : 1.0 - zc_int24 ) ) ; out -> mDUF . mX [ 1ULL ] = - ( - intermediate_der1005 * ( - ( Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 * zc_int24 ) / ( intermediate_der2 == 0.0 ? 1.0E-16 : intermediate_der2 ) ) + Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 * intermediate_der1005 / ( 1.0 - zc_int24 == 0.0 ? 1.0E-16 : 1.0 - zc_int24 ) ) ; zc_int24 = ( 1.0 - t55 ) * ( 1.0 - t55 ) ; out -> mDUF . mX [ 3ULL ] = - ( - intermediate_der1006 * ( - ( t56 -> mX . mX [ 156ULL ] * t55 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + t56 -> mX . mX [ 156ULL ] * intermediate_der1006 / ( 1.0 - t55 == 0.0 ? 1.0E-16 : 1.0 - t55 ) ) ; out -> mDUF . mX [ 4ULL ] = - ( - intermediate_der1006 * ( - ( t16 * t55 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + t16 * intermediate_der1006 / ( 1.0 - t55 == 0.0 ? 1.0E-16 : 1.0 - t55 ) ) ; zc_int24 = ( 1.0 - zc_int28 ) * ( 1.0 - zc_int28 ) ; out -> mDUF . mX [ 6ULL ] = - ( - intermediate_der1007 * ( - ( t56 -> mX . mX [ 190ULL ] * zc_int28 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + t56 -> mX . mX [ 190ULL ] * intermediate_der1007 / ( 1.0 - zc_int28 == 0.0 ? 1.0E-16 : 1.0 - zc_int28 ) ) ; out -> mDUF . mX [ 7ULL ] = - ( - intermediate_der1007 * ( - ( t18 * zc_int28 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + t18 * intermediate_der1007 / ( 1.0 - zc_int28 == 0.0 ? 1.0E-16 : 1.0 - zc_int28 ) ) ; zc_int24 = ( 1.0 - zc_int30 ) * ( 1.0 - zc_int30 ) ; out -> mDUF . mX [ 9ULL ] = - ( - intermediate_der1012 * ( - ( t56 -> mX . mX [ 202ULL ] * zc_int30 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + t56 -> mX . mX [ 202ULL ] * intermediate_der1012 / ( 1.0 - zc_int30 == 0.0 ? 1.0E-16 : 1.0 - zc_int30 ) ) ; out -> mDUF . mX [ 10ULL ] = - ( - intermediate_der1012 * ( - ( Solar_Power_1_Average_Value_DC_DC_Converter_i2 * zc_int30 ) / ( zc_int24 == 0.0 ? 1.0E-16 : zc_int24 ) ) + Solar_Power_1_Average_Value_DC_DC_Converter_i2 * intermediate_der1012 / ( 1.0 - zc_int30 == 0.0 ? 1.0E-16 : 1.0 - zc_int30 ) ) ; ( void ) LC ; ( void ) out ; return 0 ; }
