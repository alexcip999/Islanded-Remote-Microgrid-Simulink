#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t97 , NeDsMethodOutput *
out ) { real_T Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 ;
real_T intermediate_der1009 ; real_T intermediate_der1015 ; real_T
intermediate_der1016 ; real_T intermediate_der935 ; real_T
intermediate_der936 ; real_T intermediate_der937 ; real_T t24 ; real_T t26 ;
real_T t32 ; real_T t40 ; real_T t41 ; real_T t43 ; real_T t46 ; real_T t6 ;
real_T t7 ; real_T t85 ; real_T t96 ; real_T zc_int27 ; real_T zc_int29 ;
real_T zc_int31 ; real_T zc_int33 ; ( void ) LC ;
Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 = ( ( ( ( ( ( t97
-> mX . mX [ 93ULL ] * 1.0E-12 - t97 -> mX . mX [ 99ULL ] ) - t97 -> mX . mX
[ 104ULL ] ) - t97 -> mX . mX [ 109ULL ] ) - t97 -> mX . mX [ 113ULL ] ) +
t97 -> mX . mX [ 98ULL ] ) + t97 -> mX . mX [ 103ULL ] ) + t97 -> mX . mX [
108ULL ] ; t24 = ( ( ( ( ( ( t97 -> mX . mX [ 124ULL ] * 1.0E-12 - t97 -> mX
. mX [ 130ULL ] ) - t97 -> mX . mX [ 135ULL ] ) - t97 -> mX . mX [ 140ULL ] )
- t97 -> mX . mX [ 144ULL ] ) + t97 -> mX . mX [ 129ULL ] ) + t97 -> mX . mX
[ 134ULL ] ) + t97 -> mX . mX [ 139ULL ] ; t26 = ( ( ( ( ( ( t97 -> mX . mX [
155ULL ] * 1.0E-12 - t97 -> mX . mX [ 161ULL ] ) - t97 -> mX . mX [ 166ULL ]
) - t97 -> mX . mX [ 171ULL ] ) - t97 -> mX . mX [ 175ULL ] ) + t97 -> mX .
mX [ 160ULL ] ) + t97 -> mX . mX [ 165ULL ] ) + t97 -> mX . mX [ 170ULL ] ;
t32 = ( ( ( ( ( ( t97 -> mX . mX [ 74ULL ] * 1.0E-12 - t97 -> mX . mX [ 80ULL
] ) - t97 -> mX . mX [ 85ULL ] ) - t97 -> mX . mX [ 90ULL ] ) - t97 -> mX .
mX [ 187ULL ] ) + t97 -> mX . mX [ 79ULL ] ) + t97 -> mX . mX [ 84ULL ] ) +
t97 -> mX . mX [ 89ULL ] ; if ( t97 -> mM . mX [ 23ULL ] != 0 ) { t85 = t97
-> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [
30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ; t7 = t97 -> mU . mX [ 31ULL ] *
22.5 / ( t85 == 0.0 ? 1.0E-16 : t85 ) * 0.001 ; } else { t7 = 0.0 ; } if ( t97
-> mM . mX [ 23ULL ] != 0 ) { zc_int29 = t97 -> mU . mX [ 31ULL ] * t97 -> mU
. mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ]
* 1.0E-6 ; t96 = t97 -> mU . mX [ 30ULL ] * 22.5 / ( zc_int29 == 0.0 ?
1.0E-16 : zc_int29 ) * 0.001 ; } else { t96 = 0.0 ; } if ( t97 -> mM . mX [
23ULL ] != 0 ) { t85 = t7 * t7 + t96 * t96 ; } else { t85 = 1.0 ; } if ( t97
-> mM . mX [ 31ULL ] != 0 ) { zc_int27 = 0.99 ; } else { zc_int27 = t97 -> mM
. mX [ 32ULL ] != 0 ? 0.0 : t97 -> mU . mX [ 12ULL ] ; } if ( t97 -> mM . mX
[ 34ULL ] != 0 ) { zc_int29 = 0.99 ; } else { zc_int29 = t97 -> mM . mX [
35ULL ] != 0 ? 0.0 : t97 -> mU . mX [ 20ULL ] ; } if ( t97 -> mM . mX [ 24ULL
] != 0 ) { zc_int31 = 0.99 ; } else { zc_int31 = t97 -> mM . mX [ 25ULL ] !=
0 ? 0.0 : t97 -> mU . mX [ 28ULL ] ; } if ( t97 -> mM . mX [ 27ULL ] != 0 ) {
zc_int33 = 0.99 ; } else { zc_int33 = t97 -> mM . mX [ 28ULL ] != 0 ? 0.0 :
t97 -> mU . mX [ 32ULL ] ; } if ( t97 -> mM . mX [ 23ULL ] != 0 ) {
intermediate_der937 = ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] *
1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) * ( t97
-> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [
30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) ; t6 = t97 -> mU . mX [ 31ULL ]
* t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU .
mX [ 30ULL ] * 1.0E-6 ; intermediate_der935 = ( - ( t97 -> mU . mX [ 31ULL ]
* 22.5 ) / ( intermediate_der937 == 0.0 ? 1.0E-16 : intermediate_der937 ) *
t97 -> mU . mX [ 31ULL ] * 2.0E-6 + 22.5 / ( t6 == 0.0 ? 1.0E-16 : t6 ) ) *
0.001 ; } else { intermediate_der935 = 0.0 ; } if ( t97 -> mM . mX [ 23ULL ]
!= 0 ) { t41 = ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6
+ t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) * ( t97 ->
mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [
30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) ; intermediate_der936 = - ( t97
-> mU . mX [ 31ULL ] * 22.5 ) / ( t41 == 0.0 ? 1.0E-16 : t41 ) * t97 -> mU .
mX [ 30ULL ] * 2.0E-9 ; } else { intermediate_der936 = 0.0 ; } if ( t97 -> mM
. mX [ 23ULL ] != 0 ) { t43 = ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [
31ULL ] * 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] *
1.0E-6 ) * ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 +
t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) ;
intermediate_der937 = - ( t97 -> mU . mX [ 30ULL ] * 22.5 ) / ( t43 == 0.0 ?
1.0E-16 : t43 ) * t97 -> mU . mX [ 31ULL ] * 2.0E-9 ; } else {
intermediate_der937 = 0.0 ; } if ( t97 -> mM . mX [ 23ULL ] != 0 ) {
intermediate_der1016 = ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ]
* 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) * ( t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ) ; t46 = t97 -> mU . mX [ 31ULL ] * t97 -> mU . mX [ 31ULL ] * 1.0E-6 + t97 -> mU . mX [ 30ULL ] * t97 -> mU . mX [ 30ULL ] * 1.0E-6 ; t6 = ( - ( t97 -> mU . mX [ 30ULL ] * 22.5 ) / ( intermediate_der1016 == 0.0 ? 1.0E-16 : intermediate_der1016 ) * t97 -> mU . mX [ 30ULL ] * 2.0E-6 + 22.5 / ( t46 == 0.0 ? 1.0E-16 : t46 ) ) * 0.001 ; } else { t6 = 0.0 ; } if ( t97 -> mM . mX [ 23ULL ] != 0 ) { t40 = intermediate_der935 * t7 * 2.0 + intermediate_der937 * t96 * 2.0 ; } else { t40 = 0.0 ; } if ( t97 -> mM . mX [ 23ULL ] != 0 ) { t41 = intermediate_der936 * t7 * 2.0 + t6 * t96 * 2.0 ; } else { t41 = 0.0 ; } if ( t97 -> mM . mX [ 31ULL ] != 0 ) { intermediate_der1009 = 0.0 ; } else { intermediate_der1009 = ( real_T ) ( t97 -> mM . mX [ 32ULL ] == 0 ) ; } if ( t97 -> mM . mX [ 34ULL ] != 0 ) { t43 = 0.0 ; } else { t43 = ( real_T ) ( t97 -> mM . mX [ 35ULL ] == 0 ) ; } if ( t97 -> mM . mX [ 24ULL ] != 0 ) { intermediate_der1015 = 0.0 ; } else { intermediate_der1015 = ( real_T ) ( t97 -> mM . mX [ 25ULL ] == 0 ) ; } if ( t97 -> mM . mX [ 27ULL ] != 0 ) { intermediate_der1016 = 0.0 ; } else { intermediate_der1016 = ( real_T ) ( t97 -> mM . mX [ 28ULL ] == 0 ) ; } if ( t97 -> mM . mX [ 65ULL ] != 0 ) { out -> mDUF . mX [ 2ULL ] = - ( ( ( t97 -> mX . mX [ 115ULL ] - 298.15 ) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out -> mDUF . mX [ 2ULL ] = 0.0 ; } if ( t97 -> mM . mX [ 81ULL ] != 0 ) { out -> mDUF . mX [ 5ULL ] = - ( ( ( t97 -> mX . mX [ 146ULL ] - 298.15 ) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out -> mDUF . mX [ 5ULL ] = 0.0 ; } if ( t97 -> mM . mX [ 98ULL ] != 0 ) { out -> mDUF . mX [ 8ULL ] = - ( ( ( t97 -> mX . mX [ 177ULL ] - 298.15 ) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out -> mDUF . mX [ 8ULL ] = 0.0 ; } if ( t97 -> mM . mX [ 37ULL ] != 0 ) { t46 = t97 -> mX . mX [ 27ULL ] * t97 -> mX . mX [ 27ULL ] + t97 -> mX . mX [ 28ULL ] * t97 -> mX . mX [ 28ULL ] ; out -> mDUF . mX [ 9ULL ] = - ( t97 -> mX . mX [ 28ULL ] * 0.00066666666666666664 / ( t46 == 0.0 ? 1.0E-16 : t46 ) * 1000.0 ) ; } else { t46 = t85 * t85 ; out -> mDUF . mX [ 9ULL ] = - ( - ( t97 -> mX . mX [ 27ULL ] * t7 + t97 -> mX . mX [ 28ULL ] * t96 ) / ( t46 == 0.0 ? 1.0E-16 : t46 ) * t41 + ( t97 -> mX . mX [ 27ULL ] * intermediate_der936 + t97 -> mX . mX [ 28ULL ] * t6 ) / ( t85 == 0.0 ? 1.0E-16 : t85 ) ) ; } if ( t97 -> mM . mX [ 37ULL ] != 0 ) { t46 = t97 -> mX . mX [ 27ULL ] * t97 -> mX . mX [ 27ULL ] + t97 -> mX . mX [ 28ULL ] * t97 -> mX . mX [ 28ULL ] ; out -> mDUF . mX [ 10ULL ] = - ( - ( t97 -> mX . mX [ 27ULL ] * 0.001 ) * 0.66666666666666663 / ( t46 == 0.0 ? 1.0E-16 : t46 ) * 1000.0 ) ; } else { t46 = t85 * t85 ; out -> mDUF . mX [ 10ULL ] = - ( - ( t97 -> mX . mX [ 28ULL ] * t7 - t97 -> mX . mX [ 27ULL ] * t96 ) / ( t46 == 0.0 ? 1.0E-16 : t46 ) * t41 + ( t97 -> mX . mX [ 28ULL ] * intermediate_der936 - t97 -> mX . mX [ 27ULL ] * t6 ) / ( t85 == 0.0 ? 1.0E-16 : t85 ) ) ; } if ( t97 -> mM . mX [ 37ULL ] != 0 ) { t46 = t97 -> mX . mX [ 27ULL ] * t97 -> mX . mX [ 27ULL ] + t97 -> mX . mX [ 28ULL ] * t97 -> mX . mX [ 28ULL ] ; out -> mDUF . mX [ 11ULL ] = - ( t97 -> mX . mX [ 27ULL ] * 0.00066666666666666664 / ( t46 == 0.0 ? 1.0E-16 : t46 ) * 1000.0 ) ; } else { t46 = t85 * t85 ; out -> mDUF . mX [ 11ULL ] = - ( - ( t97 -> mX . mX [ 27ULL ] * t7 + t97 -> mX . mX [ 28ULL ] * t96 ) / ( t46 == 0.0 ? 1.0E-16 : t46 ) * t40 + ( t97 -> mX . mX [ 27ULL ] * intermediate_der935 + t97 -> mX . mX [ 28ULL ] * intermediate_der937 ) / ( t85 == 0.0 ? 1.0E-16 : t85 ) ) ; } if ( t97 -> mM . mX [ 37ULL ] != 0 ) { t46 = t97 -> mX . mX [ 27ULL ] * t97 -> mX . mX [ 27ULL ] + t97 -> mX . mX [ 28ULL ] * t97 -> mX . mX [ 28ULL ] ; out -> mDUF . mX [ 12ULL ] = - ( t97 -> mX . mX [ 28ULL ] * 0.00066666666666666664 / ( t46 == 0.0 ? 1.0E-16 : t46 ) * 1000.0 ) ; } else { t46 = t85 * t85 ; out -> mDUF . mX [ 12ULL ] = - ( - ( t97 -> mX . mX [ 28ULL ] * t7 - t97 -> mX . mX [ 27ULL ] * t96 ) / ( t46 == 0.0 ? 1.0E-16 : t46 ) * t40 + ( t97 -> mX . mX [ 28ULL ] * intermediate_der935 - t97 -> mX . mX [ 27ULL ] * intermediate_der937 ) / ( t85 == 0.0 ? 1.0E-16 : t85 ) ) ; } if ( t97 -> mM . mX [ 101ULL ] != 0 ) { out -> mDUF . mX [ 15ULL ] = - ( ( ( t97 -> mX . mX [ 189ULL ] - 298.15 ) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 / 1000.0 ) ; } else { out -> mDUF . mX [ 15ULL ] = 0.0 ; } t96 = ( 1.0 - zc_int27 ) * ( 1.0 - zc_int27 ) ; out -> mDUF . mX [ 0ULL ] = - ( - intermediate_der1009 * ( - ( t97 -> mX . mX [ 114ULL ] * zc_int27 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t97 -> mX . mX [ 114ULL ] * intermediate_der1009 / ( 1.0 - zc_int27 == 0.0 ? 1.0E-16 : 1.0 - zc_int27 ) ) ; out -> mDUF . mX [ 1ULL ] = - ( - intermediate_der1009 * ( - ( Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 * zc_int27 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + Inverter_2_Solar_Power_4_Average_Value_DC_DC_Converter_i2 * intermediate_der1009 / ( 1.0 - zc_int27 == 0.0 ? 1.0E-16 : 1.0 - zc_int27 ) ) ; t96 = ( 1.0 - zc_int29 ) * ( 1.0 - zc_int29 ) ; out -> mDUF . mX [ 3ULL ] = - ( - t43 * ( - ( t97 -> mX . mX [ 145ULL ] * zc_int29 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t97 -> mX . mX [ 145ULL ] * t43 / ( 1.0 - zc_int29 == 0.0 ? 1.0E-16 : 1.0 - zc_int29 ) ) ; out -> mDUF . mX [ 4ULL ] = - ( - t43 * ( - ( t24 * zc_int29 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t24 * t43 / ( 1.0 - zc_int29 == 0.0 ? 1.0E-16 : 1.0 - zc_int29 ) ) ; t96 = ( 1.0 - zc_int31 ) * ( 1.0 - zc_int31 ) ; out -> mDUF . mX [ 6ULL ] = - ( - intermediate_der1015 * ( - ( t97 -> mX . mX [ 176ULL ] * zc_int31 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t97 -> mX . mX [ 176ULL ] * intermediate_der1015 / ( 1.0 - zc_int31 == 0.0 ? 1.0E-16 : 1.0 - zc_int31 ) ) ; out -> mDUF . mX [ 7ULL ] = - ( - intermediate_der1015 * ( - ( t26 * zc_int31 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t26 * intermediate_der1015 / ( 1.0 - zc_int31 == 0.0 ? 1.0E-16 : 1.0 - zc_int31 ) ) ; t96 = ( 1.0 - zc_int33 ) * ( 1.0 - zc_int33 ) ; out -> mDUF . mX [ 13ULL ] = - ( - intermediate_der1016 * ( - ( t97 -> mX . mX [ 188ULL ] * zc_int33 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t97 -> mX . mX [ 188ULL ] * intermediate_der1016 / ( 1.0 - zc_int33 == 0.0 ? 1.0E-16 : 1.0 - zc_int33 ) ) ; out -> mDUF . mX [ 14ULL ] = - ( - intermediate_der1016 * ( - ( t32 * zc_int33 ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ) + t32 * intermediate_der1016 / ( 1.0 - zc_int33 == 0.0 ? 1.0E-16 : 1.0 - zc_int33 ) ) ; ( void ) LC ; ( void ) out ; return 0 ; }
