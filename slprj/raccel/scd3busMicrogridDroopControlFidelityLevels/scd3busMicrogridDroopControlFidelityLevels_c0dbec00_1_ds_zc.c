#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t28 , NeDsMethodOutput *
out ) { real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_2_Solar1_Solar_Cell_diode1_private_Diode_v_diode ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
intrm_sf_mf_24 ; real_T intrm_sf_mf_29 ; real_T intrm_sf_mf_59 ; real_T
intrm_sf_mf_84 ; real_T t26 ; real_T t27 ; boolean_T t0 ; boolean_T t1 ;
boolean_T t10 ; boolean_T t11 ; boolean_T t12 ; boolean_T t13 ; boolean_T t14
; boolean_T t15 ; boolean_T t16 ; boolean_T t17 ; boolean_T t2 ; boolean_T t3
; boolean_T t4 ; boolean_T t5 ; boolean_T t6 ; boolean_T t7 ; boolean_T t8 ;
boolean_T t9 ; ( void ) LC ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 10ULL ] + t28 -> mX . mX [ 55ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 56ULL ] ) + t28 -> mX . mX [ 59ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
54ULL ] ) + t28 -> mX . mX [ 9ULL ] ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t28 -> mX . mX [ 54ULL ] + t28 -> mX . mX [ 59ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 10ULL ] ) + t28 -> mX . mX [ 56ULL ] ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 11ULL ] + t28 -> mX . mX [ 55ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 57ULL ] ) + t28 -> mX . mX [ 60ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
54ULL ] ) + t28 -> mX . mX [ 9ULL ] ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t28 -> mX . mX [ 54ULL ] + t28 -> mX . mX [ 60ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 11ULL ] ) + t28 -> mX . mX [ 57ULL ] ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 12ULL ] + t28 -> mX . mX [ 55ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 58ULL ] ) + t28 -> mX . mX [ 61ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
54ULL ] ) + t28 -> mX . mX [ 9ULL ] ;
Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t28 -> mX . mX [ 54ULL ] + t28 -> mX . mX [ 61ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 12ULL ] ) + t28 -> mX . mX [ 58ULL ] ; out -> mZC . mX [ 24ULL ] = t28
-> mX . mX [ 78ULL ] ; out -> mZC . mX [ 79ULL ] = t28 -> mU . mX [ 9ULL ] ;
out -> mZC . mX [ 78ULL ] = ( ( t28 -> mX . mX [ 79ULL ] - 298.15 ) *
0.000499942933005141 + 1.0 ) * 70.98003855255601 ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 23ULL ] + t28 -> mX . mX [ 89ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 90ULL ] ) + t28 -> mX . mX [ 93ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
88ULL ] ) + t28 -> mX . mX [ 22ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t28 -> mX . mX [ 88ULL ] + t28 -> mX . mX [ 93ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 23ULL ] ) + t28 -> mX . mX [ 90ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 24ULL ] + t28 -> mX . mX [ 89ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 91ULL ] ) + t28 -> mX . mX [ 94ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
88ULL ] ) + t28 -> mX . mX [ 22ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t28 -> mX . mX [ 88ULL ] + t28 -> mX . mX [ 94ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 24ULL ] ) + t28 -> mX . mX [ 91ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 25ULL ] + t28 -> mX . mX [ 89ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 92ULL ] ) + t28 -> mX . mX [ 95ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
88ULL ] ) + t28 -> mX . mX [ 22ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t28 -> mX . mX [ 88ULL ] + t28 -> mX . mX [ 95ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 25ULL ] ) + t28 -> mX . mX [ 92ULL ] ; out -> mZC . mX [ 28ULL ] = t28
-> mX . mX [ 112ULL ] ; out -> mZC . mX [ 81ULL ] = t28 -> mU . mX [ 17ULL ]
; out -> mZC . mX [ 80ULL ] = ( ( t28 -> mX . mX [ 113ULL ] - 298.15 ) *
0.000499942933005141 + 1.0 ) * 70.98003855255601 ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 3ULL ] + t28 -> mX . mX [ 123ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 124ULL ] ) + t28 -> mX . mX [ 48ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
122ULL ] ) + t28 -> mX . mX [ 35ULL ] ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t28 -> mX . mX [ 122ULL ] + t28 -> mX . mX [ 48ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 3ULL ] ) + t28 -> mX . mX [ 124ULL ] ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 4ULL ] + t28 -> mX . mX [ 123ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 125ULL ] ) + t28 -> mX . mX [ 49ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
122ULL ] ) + t28 -> mX . mX [ 35ULL ] ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t28 -> mX . mX [ 122ULL ] + t28 -> mX . mX [ 49ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 4ULL ] ) + t28 -> mX . mX [ 125ULL ] ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( ( -
t28 -> mX . mX [ 5ULL ] + t28 -> mX . mX [ 123ULL ] * 1.0E-6 ) - t28 -> mX .
mX [ 126ULL ] ) + t28 -> mX . mX [ 50ULL ] * - 1.0E-6 ) + t28 -> mX . mX [
122ULL ] ) + t28 -> mX . mX [ 35ULL ] ;
Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t28 -> mX . mX [ 122ULL ] + t28 -> mX . mX [ 50ULL ] * 1.0E-6 ) + t28 -> mX .
mX [ 5ULL ] ) + t28 -> mX . mX [ 126ULL ] ; out -> mZC . mX [ 32ULL ] = t28
-> mX . mX [ 143ULL ] ; out -> mZC . mX [ 83ULL ] = t28 -> mU . mX [ 25ULL ]
; out -> mZC . mX [ 82ULL ] = ( ( t28 -> mX . mX [ 144ULL ] - 298.15 ) *
0.000499942933005141 + 1.0 ) * 70.98003855255601 ; intrm_sf_mf_59 = ( t28 ->
mX . mX [ 78ULL ] * - 0.99920634920634921 + t28 -> mX . mX [ 80ULL ] ) *
1.602176487E-19 ; intrm_sf_mf_29 = t28 -> mX . mX [ 84ULL ] *
2.0864177915013142E-23 ; intrm_sf_mf_24 = intrm_sf_mf_59 / ( intrm_sf_mf_29
== 0.0 ? 1.0E-16 : intrm_sf_mf_29 ) ; intrm_sf_mf_29 = t28 -> mX . mX [ 85ULL
] * 3.5932794656167223E-23 ; intrm_sf_mf_29 = intrm_sf_mf_59 / ( intrm_sf_mf_29
== 0.0 ? 1.0E-16 : intrm_sf_mf_29 ) ; t27 = ( t28 -> mX . mX [ 112ULL ] * -
0.99920634920634921 + t28 -> mX . mX [ 114ULL ] ) * 1.602176487E-19 ; t26 =
t28 -> mX . mX [ 118ULL ] * 2.0864177915013142E-23 ;
Inverter_2_Solar1_Solar_Cell_diode1_private_Diode_v_diode = t27 / ( t26 ==
0.0 ? 1.0E-16 : t26 ) ; t26 = t28 -> mX . mX [ 119ULL ] *
3.5932794656167223E-23 ; intrm_sf_mf_59 = t27 / ( t26 == 0.0 ? 1.0E-16 : t26
) ; t27 = ( t28 -> mX . mX [ 143ULL ] * - 0.99920634920634921 + t28 -> mX .
mX [ 145ULL ] ) * 1.602176487E-19 ; t26 = t28 -> mX . mX [ 149ULL ] *
2.0864177915013142E-23 ; intrm_sf_mf_84 = t27 / ( t26 == 0.0 ? 1.0E-16 : t26
) ; t26 = t28 -> mX . mX [ 150ULL ] * 3.5932794656167223E-23 ; if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t0 = ( t28 -> mU . mX [ 7ULL ] > 0.5 ) ; } else { t0 = false ; } if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t1 = ( t28 -> mU . mX [ 2ULL ] > 0.5 ) ; } else { t1 = false ; } if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t2 = ( t28 -> mU . mX [ 3ULL ] > 0.5 ) ; } else { t2 = false ; } if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t3 = ( t28 -> mU . mX [ 4ULL ] > 0.5 ) ; } else { t3 = false ; } if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t4 = ( t28 -> mU . mX [ 5ULL ] > 0.5 ) ; } else { t4 = false ; } if ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t5 = ( t28 -> mU . mX [ 6ULL ] > 0.5 ) ; } else { t5 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t6 = ( t28 -> mU . mX [ 15ULL ] > 0.5 ) ; } else { t6 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t7 = ( t28 -> mU . mX [ 10ULL ] > 0.5 ) ; } else { t7 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t8 = ( t28 -> mU . mX [ 11ULL ] > 0.5 ) ; } else { t8 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t9 = ( t28 -> mU . mX [ 12ULL ] > 0.5 ) ; } else { t9 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t10 = ( t28 -> mU . mX [ 13ULL ] > 0.5 ) ; } else { t10 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t11 = ( t28 -> mU . mX [ 14ULL ] > 0.5 ) ; } else { t11 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t12 = ( t28 -> mU . mX [ 23ULL ] > 0.5 ) ; } else { t12 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t13 = ( t28 -> mU . mX [ 18ULL ] > 0.5 ) ; } else { t13 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t14 = ( t28 -> mU . mX [ 19ULL ] > 0.5 ) ; } else { t14 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t15 = ( t28 -> mU . mX [ 20ULL ] > 0.5 ) ; } else { t15 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t16 = ( t28 -> mU . mX [ 21ULL ] > 0.5 ) ; } else { t16 = false ; } if ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t17 = ( t28 -> mU . mX [ 22ULL ] > 0.5 ) ; } else { t17 = false ; } out -> mZC . mX [ 0ULL ] = t28 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 1ULL ] = t28 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 2ULL ] = t28 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 3ULL ] = t28 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 4ULL ] = t28 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 5ULL ] = t28 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 6ULL ] = ( real_T ) ( t28 -> mX . mX [ 65ULL ] < 0.0 ) ; out -> mZC . mX [ 7ULL ] = ( real_T ) ( t28 -> mX . mX [ 66ULL ] < 0.0 ) ; out -> mZC . mX [ 8ULL ] = ( real_T ) ( t28 -> mX . mX [ 70ULL ] < 0.0 ) ; out -> mZC . mX [ 9ULL ] = ( real_T ) ( t28 -> mX . mX [ 71ULL ] < 0.0 ) ; out -> mZC . mX [ 10ULL ] = ( real_T ) ( t28 -> mX . mX [ 75ULL ] < 0.0 ) ; out -> mZC . mX [ 11ULL ] = ( real_T ) ( t28 -> mX . mX [ 76ULL ] < 0.0 ) ; out -> mZC . mX [ 12ULL ] = ( real_T ) ( t28 -> mX . mX [ 99ULL ] < 0.0 ) ; out -> mZC . mX [ 13ULL ] = ( real_T ) ( t28 -> mX . mX [ 100ULL ] < 0.0 ) ; out -> mZC . mX [ 14ULL ] = ( real_T ) ( t28 -> mX . mX [ 104ULL ] < 0.0 ) ; out -> mZC . mX [ 15ULL ] = ( real_T ) ( t28 -> mX . mX [ 105ULL ] < 0.0 ) ; out -> mZC . mX [ 16ULL ] = ( real_T ) ( t28 -> mX . mX [ 109ULL ] < 0.0 ) ; out -> mZC . mX [ 17ULL ] = ( real_T ) ( t28 -> mX . mX [ 110ULL ] < 0.0 ) ; out -> mZC . mX [ 18ULL ] = ( real_T ) ( t28 -> mX . mX [ 130ULL ] < 0.0 ) ; out -> mZC . mX [ 19ULL ] = ( real_T ) ( t28 -> mX . mX [ 131ULL ] < 0.0 ) ; out -> mZC . mX [ 20ULL ] = ( real_T ) ( t28 -> mX . mX [ 135ULL ] < 0.0 ) ; out -> mZC . mX [ 21ULL ] = ( real_T ) ( t28 -> mX . mX [ 136ULL ] < 0.0 ) ; out -> mZC . mX [ 22ULL ] = ( real_T ) ( t28 -> mX . mX [ 140ULL ] < 0.0 ) ; out -> mZC . mX [ 23ULL ] = ( real_T ) ( t28 -> mX . mX [ 141ULL ] < 0.0 ) ; out -> mZC . mX [ 25ULL ] = t28 -> mU . mX [ 8ULL ] - 0.99 ; out -> mZC . mX [ 26ULL ] = t28 -> mM . mX [ 10ULL ] == 0 ? - t28 -> mU . mX [ 8ULL ] : 0.0 ; out -> mZC . mX [ 27ULL ] = - ( ( ( ( ( ( ( t28 -> mX . mX [ 54ULL ] * 1.0E-12 - t28 -> mX . mX [ 64ULL ] ) - t28 -> mX . mX [ 69ULL ] ) - t28 -> mX . mX [ 74ULL ] ) - t28 -> mX . mX [ 55ULL ] ) + t28 -> mX . mX [ 63ULL ] ) + t28 -> mX . mX [ 68ULL ] ) + t28 -> mX . mX [ 73ULL ] ) ; out -> mZC . mX [ 29ULL ] = t28 -> mU . mX [ 16ULL ] - 0.99 ; out -> mZC . mX [ 30ULL ] = t28 -> mM . mX [ 14ULL ] == 0 ? - t28 -> mU . mX [ 16ULL ] : 0.0 ; out -> mZC . mX [ 31ULL ] = - ( ( ( ( ( ( ( t28 -> mX . mX [ 88ULL ] * 1.0E-12 - t28 -> mX . mX [ 98ULL ] ) - t28 -> mX . mX [ 103ULL ] ) - t28 -> mX . mX [ 108ULL ] ) - t28 -> mX . mX [ 89ULL ] ) + t28 -> mX . mX [ 97ULL ] ) + t28 -> mX . mX [ 102ULL ] ) + t28 -> mX . mX [ 107ULL ] ) ; out -> mZC . mX [ 33ULL ] = t28 -> mU . mX [ 24ULL ] - 0.99 ; out -> mZC . mX [ 34ULL ] = t28 -> mM . mX [ 17ULL ] == 0 ? - t28 -> mU . mX [ 24ULL ] : 0.0 ; out -> mZC . mX [ 35ULL ] = - ( ( ( ( ( ( ( t28 -> mX . mX [ 122ULL ] * 1.0E-12 - t28 -> mX . mX [ 129ULL ] ) - t28 -> mX . mX [ 134ULL ] ) - t28 -> mX . mX [ 139ULL ] ) - t28 -> mX . mX [ 123ULL ] ) + t28 -> mX . mX [ 128ULL ] ) + t28 -> mX . mX [ 133ULL ] ) + t28 -> mX . mX [ 138ULL ] ) ; out -> mZC . mX [ 36ULL ] = - 79.0 - intrm_sf_mf_24 ; out -> mZC . mX [ 37ULL ] = - 79.0 - intrm_sf_mf_29 ; out -> mZC . mX [ 38ULL ] = - 79.0 - Inverter_2_Solar1_Solar_Cell_diode1_private_Diode_v_diode ; out -> mZC . mX [ 39ULL ] = - 79.0 - intrm_sf_mf_59 ; out -> mZC . mX [ 40ULL ] = - 79.0 - intrm_sf_mf_84 ; out -> mZC . mX [ 41ULL ] = - 79.0 - t27 / ( t26 == 0.0 ? 1.0E-16 : t26 ) ; out -> mZC . mX [ 42ULL ] = ( real_T ) t0 ; out -> mZC . mX [ 43ULL ] = ( t28 -> mU . mX [ 7ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 44ULL ] = ( real_T ) t1 ; out -> mZC . mX [ 45ULL ] = ( t28 -> mU . mX [ 2ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 46ULL ] = ( real_T ) t2 ; out -> mZC . mX [ 47ULL ] = ( t28 -> mU . mX [ 3ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 48ULL ] = ( real_T ) t3 ; out -> mZC . mX [ 49ULL ] = ( t28 -> mU . mX [ 4ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 50ULL ] = ( real_T ) t4 ; out -> mZC . mX [ 51ULL ] = ( t28 -> mU . mX [ 5ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 52ULL ] = ( real_T ) t5 ; out -> mZC . mX [ 53ULL ] = ( t28 -> mU . mX [ 6ULL ] - 0.5 ) - ( Inverter_1_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 54ULL ] = ( real_T ) t6 ; out -> mZC . mX [ 55ULL ] = ( t28 -> mU . mX [ 15ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 56ULL ] = ( real_T ) t7 ; out -> mZC . mX [ 57ULL ] = ( t28 -> mU . mX [ 10ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 58ULL ] = ( real_T ) t8 ; out -> mZC . mX [ 59ULL ] = ( t28 -> mU . mX [ 11ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 60ULL ] = ( real_T ) t9 ; out -> mZC . mX [ 61ULL ] = ( t28 -> mU . mX [ 12ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 62ULL ] = ( real_T ) t10 ; out -> mZC . mX [ 63ULL ] = ( t28 -> mU . mX [ 13ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 64ULL ] = ( real_T ) t11 ; out -> mZC . mX [ 65ULL ] = ( t28 -> mU . mX [ 14ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 66ULL ] = ( real_T ) t12 ; out -> mZC . mX [ 67ULL ] = ( t28 -> mU . mX [ 23ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 68ULL ] = ( real_T ) t13 ; out -> mZC . mX [ 69ULL ] = ( t28 -> mU . mX [ 18ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 70ULL ] = ( real_T ) t14 ; out -> mZC . mX [ 71ULL ] = ( t28 -> mU . mX [ 19ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 72ULL ] = ( real_T ) t15 ; out -> mZC . mX [ 73ULL ] = ( t28 -> mU . mX [ 20ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 74ULL ] = ( real_T ) t16 ; out -> mZC . mX [ 75ULL ] = ( t28 -> mU . mX [ 21ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 76ULL ] = ( real_T ) t17 ; out -> mZC . mX [ 77ULL ] = ( t28 -> mU . mX [ 22ULL ] - 0.5 ) - ( Inverter_3_Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
