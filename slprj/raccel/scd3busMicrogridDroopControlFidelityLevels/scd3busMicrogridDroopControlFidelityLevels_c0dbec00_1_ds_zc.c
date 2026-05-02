#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t48 , NeDsMethodOutput *
out ) { real_T Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ;
real_T Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_2_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_3_Solar_Power_3_Solar_Cell_diode1_private_Diode_v_diode ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_4_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode ; real_T
intrm_sf_mf_111 ; real_T intrm_sf_mf_118 ; real_T intrm_sf_mf_81 ; real_T t0
; real_T t27 ; real_T t32 ; real_T t35 ; real_T t43 ; boolean_T t1 ;
boolean_T t10 ; boolean_T t11 ; boolean_T t12 ; boolean_T t13 ; boolean_T t14
; boolean_T t15 ; boolean_T t16 ; boolean_T t17 ; boolean_T t18 ; boolean_T
t19 ; boolean_T t2 ; boolean_T t20 ; boolean_T t21 ; boolean_T t22 ;
boolean_T t23 ; boolean_T t24 ; boolean_T t3 ; boolean_T t4 ; boolean_T t5 ;
boolean_T t6 ; boolean_T t7 ; boolean_T t8 ; boolean_T t9 ; ( void ) LC ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( - t48 -> mX
. mX [ 21ULL ] - t48 -> mX . mX [ 75ULL ] ) + t48 -> mX . mX [ 69ULL ] * -
1.0E-6 ) + t48 -> mX . mX [ 74ULL ] ) + t48 -> mX . mX [ 29ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( - t48 -> mX .
mX [ 74ULL ] + t48 -> mX . mX [ 69ULL ] * 1.0E-6 ) + t48 -> mX . mX [ 21ULL ]
) + t48 -> mX . mX [ 75ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( - t48 -> mX
. mX [ 22ULL ] - t48 -> mX . mX [ 76ULL ] ) + t48 -> mX . mX [ 70ULL ] * -
1.0E-6 ) + t48 -> mX . mX [ 74ULL ] ) + t48 -> mX . mX [ 29ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( - t48 -> mX .
mX [ 74ULL ] + t48 -> mX . mX [ 70ULL ] * 1.0E-6 ) + t48 -> mX . mX [ 22ULL ]
) + t48 -> mX . mX [ 76ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( - t48 -> mX
. mX [ 23ULL ] - t48 -> mX . mX [ 77ULL ] ) + t48 -> mX . mX [ 71ULL ] * -
1.0E-6 ) + t48 -> mX . mX [ 74ULL ] ) + t48 -> mX . mX [ 29ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( - t48 -> mX .
mX [ 74ULL ] + t48 -> mX . mX [ 71ULL ] * 1.0E-6 ) + t48 -> mX . mX [ 23ULL ]
) + t48 -> mX . mX [ 77ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 0ULL ] - t48 -> mX . mX [ 94ULL ] ) + t48 -> mX . mX [ 60ULL
] * - 1.0E-6 ) + t48 -> mX . mX [ 93ULL ] ) + t48 -> mX . mX [ 33ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t48 -> mX . mX [ 93ULL ] + t48 -> mX . mX [ 60ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 0ULL ] ) + t48 -> mX . mX [ 94ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 1ULL ] - t48 -> mX . mX [ 95ULL ] ) + t48 -> mX . mX [ 61ULL
] * - 1.0E-6 ) + t48 -> mX . mX [ 93ULL ] ) + t48 -> mX . mX [ 33ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t48 -> mX . mX [ 93ULL ] + t48 -> mX . mX [ 61ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 1ULL ] ) + t48 -> mX . mX [ 95ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 2ULL ] - t48 -> mX . mX [ 96ULL ] ) + t48 -> mX . mX [ 62ULL
] * - 1.0E-6 ) + t48 -> mX . mX [ 93ULL ] ) + t48 -> mX . mX [ 33ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t48 -> mX . mX [ 93ULL ] + t48 -> mX . mX [ 62ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 2ULL ] ) + t48 -> mX . mX [ 96ULL ] ; out -> mZC . mX [ 26ULL ] = t48 ->
mX . mX [ 114ULL ] ; out -> mZC . mX [ 99ULL ] = t48 -> mU . mX [ 13ULL ] ;
out -> mZC . mX [ 98ULL ] = ( ( t48 -> mX . mX [ 115ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 6ULL ] - t48 -> mX . mX [ 125ULL ] ) + t48 -> mX . mX [
63ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 124ULL ] ) + t48 -> mX . mX [ 40ULL ]
; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t48 -> mX . mX [ 124ULL ] + t48 -> mX . mX [ 63ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 6ULL ] ) + t48 -> mX . mX [ 125ULL ] ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 7ULL ] - t48 -> mX . mX [ 126ULL ] ) + t48 -> mX . mX [
64ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 124ULL ] ) + t48 -> mX . mX [ 40ULL ]
; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t48 -> mX . mX [ 124ULL ] + t48 -> mX . mX [ 64ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 7ULL ] ) + t48 -> mX . mX [ 126ULL ] ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 8ULL ] - t48 -> mX . mX [ 127ULL ] ) + t48 -> mX . mX [
65ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 124ULL ] ) + t48 -> mX . mX [ 40ULL ]
; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t48 -> mX . mX [ 124ULL ] + t48 -> mX . mX [ 65ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 8ULL ] ) + t48 -> mX . mX [ 127ULL ] ; out -> mZC . mX [ 30ULL ] = t48
-> mX . mX [ 145ULL ] ; out -> mZC . mX [ 101ULL ] = t48 -> mU . mX [ 21ULL ]
; out -> mZC . mX [ 100ULL ] = ( ( t48 -> mX . mX [ 146ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 ;
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 12ULL ] - t48 -> mX . mX [ 156ULL ] ) + t48 -> mX . mX [
66ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 155ULL ] ) + t48 -> mX . mX [ 47ULL ]
; Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t48 -> mX . mX [ 155ULL ] + t48 -> mX . mX [ 66ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 12ULL ] ) + t48 -> mX . mX [ 156ULL ] ;
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 13ULL ] - t48 -> mX . mX [ 157ULL ] ) + t48 -> mX . mX [
67ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 155ULL ] ) + t48 -> mX . mX [ 47ULL ]
; Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t48 -> mX . mX [ 155ULL ] + t48 -> mX . mX [ 67ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 13ULL ] ) + t48 -> mX . mX [ 157ULL ] ;
Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t48 -> mX . mX [ 14ULL ] - t48 -> mX . mX [ 158ULL ] ) + t48 -> mX . mX [
68ULL ] * - 1.0E-6 ) + t48 -> mX . mX [ 155ULL ] ) + t48 -> mX . mX [ 47ULL ]
; Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t48 -> mX . mX [ 155ULL ] + t48 -> mX . mX [ 68ULL ] * 1.0E-6 ) + t48 -> mX .
mX [ 14ULL ] ) + t48 -> mX . mX [ 158ULL ] ; out -> mZC . mX [ 34ULL ] = t48
-> mX . mX [ 176ULL ] ; out -> mZC . mX [ 103ULL ] = t48 -> mU . mX [ 29ULL ]
; out -> mZC . mX [ 102ULL ] = ( ( t48 -> mX . mX [ 177ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 ; out -> mZC . mX [ 38ULL ]
= t48 -> mX . mX [ 188ULL ] ; out -> mZC . mX [ 105ULL ] = t48 -> mU . mX [
33ULL ] ; out -> mZC . mX [ 104ULL ] = ( ( t48 -> mX . mX [ 189ULL ] - 298.15
) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 ; t32 = ( t48 -> mX .
mX [ 176ULL ] * - 0.999537037037037 + t48 -> mX . mX [ 178ULL ] ) *
1.602176487E-19 ; intrm_sf_mf_111 = t48 -> mX . mX [ 182ULL ] *
2.0565503369455433E-23 ;
Inverter_4_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode = t32 / ( intrm_sf_mf_111 == 0.0 ? 1.0E-16 : intrm_sf_mf_111 ) ; t35 = t48 -> mX . mX [ 183ULL ] * 2.81013842117661E-23 ; intrm_sf_mf_111 = t32 / ( t35 == 0.0 ? 1.0E-16 : t35 ) ; intrm_sf_mf_81 = ( t48 -> mX . mX [ 188ULL ] * - 0.999537037037037 + t48 -> mX . mX [ 190ULL ] ) * 1.602176487E-19 ; t0 = t48 -> mX . mX [ 194ULL ] * 2.0565503369455433E-23 ; intrm_sf_mf_118 = intrm_sf_mf_81 / ( t0 == 0.0 ? 1.0E-16 : t0 ) ; t0 = t48 -> mX . mX [ 195ULL ] * 2.81013842117661E-23 ; t32 = intrm_sf_mf_81 / ( t0 == 0.0 ? 1.0E-16 : t0 ) ; t27 = ( t48 -> mX . mX [ 114ULL ] * - 0.999537037037037 + t48 -> mX . mX [ 116ULL ] ) * 1.602176487E-19 ; t0 = t48 -> mX . mX [ 120ULL ] * 2.0565503369455433E-23 ; Inverter_2_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode = t27 / ( t0 == 0.0 ? 1.0E-16 : t0 ) ; t43 = t48 -> mX . mX [ 121ULL ] * 2.81013842117661E-23 ; t35 = t27 / ( t43 == 0.0 ? 1.0E-16 : t43 ) ; t43 = ( t48 -> mX . mX [ 145ULL ] * - 0.999537037037037 + t48 -> mX . mX [ 147ULL ] ) * 1.602176487E-19 ; t0 = t48 -> mX . mX [ 151ULL ] * 2.0565503369455433E-23 ; Inverter_3_Solar_Power_3_Solar_Cell_diode1_private_Diode_v_diode = t43 / ( t0 == 0.0 ? 1.0E-16 : t0 ) ; t0 = t48 -> mX . mX [ 152ULL ] * 2.81013842117661E-23 ; intrm_sf_mf_81 = t43 / ( t0 == 0.0 ? 1.0E-16 : t0 ) ; if ( t48 -> mM . mX [ 37ULL ] == 0 ) { t0 = - ( t48 -> mU . mX [ 31ULL ] * 0.001 ) ; t27 = - ( t48 -> mU . mX [ 30ULL ] * 0.001 ) ; t0 = t0 > t27 ? t27 : t0 ; t43 = t48 -> mU . mX [ 31ULL ] * 0.001 ; t43 = t0 > t43 ? t43 : t0 ; t0 = t48 -> mU . mX [ 30ULL ] * 0.001 ; out -> mZC . mX [ 1ULL ] = - ( t43 > t0 ? t0 : t43 ) ; } else { out -> mZC . mX [ 1ULL ] = 0.0 ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t1 = ( t48 -> mU . mX [ 5ULL ] > 0.5 ) ; } else { t1 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t2 = ( t48 -> mU . mX [ 0ULL ] > 0.5 ) ; } else { t2 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t3 = ( t48 -> mU . mX [ 1ULL ] > 0.5 ) ; } else { t3 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t4 = ( t48 -> mU . mX [ 2ULL ] > 0.5 ) ; } else { t4 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t5 = ( t48 -> mU . mX [ 3ULL ] > 0.5 ) ; } else { t5 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t6 = ( t48 -> mU . mX [ 4ULL ] > 0.5 ) ; } else { t6 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t7 = ( t48 -> mU . mX [ 11ULL ] > 0.5 ) ; } else { t7 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t8 = ( t48 -> mU . mX [ 6ULL ] > 0.5 ) ; } else { t8 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t9 = ( t48 -> mU . mX [ 7ULL ] > 0.5 ) ; } else { t9 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t10 = ( t48 -> mU . mX [ 8ULL ] > 0.5 ) ; } else { t10 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t11 = ( t48 -> mU . mX [ 9ULL ] > 0.5 ) ; } else { t11 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t12 = ( t48 -> mU . mX [ 10ULL ] > 0.5 ) ; } else { t12 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t13 = ( t48 -> mU . mX [ 19ULL ] > 0.5 ) ; } else { t13 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t14 = ( t48 -> mU . mX [ 14ULL ] > 0.5 ) ; } else { t14 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t15 = ( t48 -> mU . mX [ 15ULL ] > 0.5 ) ; } else { t15 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t16 = ( t48 -> mU . mX [ 16ULL ] > 0.5 ) ; } else { t16 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t17 = ( t48 -> mU . mX [ 17ULL ] > 0.5 ) ; } else { t17 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t18 = ( t48 -> mU . mX [ 18ULL ] > 0.5 ) ; } else { t18 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t19 = ( t48 -> mU . mX [ 27ULL ] > 0.5 ) ; } else { t19 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t20 = ( t48 -> mU . mX [ 22ULL ] > 0.5 ) ; } else { t20 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t21 = ( t48 -> mU . mX [ 23ULL ] > 0.5 ) ; } else { t21 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t22 = ( t48 -> mU . mX [ 24ULL ] > 0.5 ) ; } else { t22 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t23 = ( t48 -> mU . mX [ 25ULL ] > 0.5 ) ; } else { t23 = false ; } if ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t24 = ( t48 -> mU . mX [ 26ULL ] > 0.5 ) ; } else { t24 = false ; } out -> mZC . mX [ 0ULL ] = ( real_T ) ( t48 -> mX . mX [ 27ULL ] * t48 -> mX . mX [ 27ULL ] + t48 -> mX . mX [ 28ULL ] * t48 -> mX . mX [ 28ULL ] > 15000.0 ) ; out -> mZC . mX [ 2ULL ] = ( real_T ) ( t48 -> mX . mX [ 81ULL ] < 0.0 ) ; out -> mZC . mX [ 3ULL ] = ( real_T ) ( t48 -> mX . mX [ 82ULL ] < 0.0 ) ; out -> mZC . mX [ 4ULL ] = ( real_T ) ( t48 -> mX . mX [ 86ULL ] < 0.0 ) ; out -> mZC . mX [ 5ULL ] = ( real_T ) ( t48 -> mX . mX [ 87ULL ] < 0.0 ) ; out -> mZC . mX [ 6ULL ] = ( real_T ) ( t48 -> mX . mX [ 91ULL ] < 0.0 ) ; out -> mZC . mX [ 7ULL ] = ( real_T ) ( t48 -> mX . mX [ 92ULL ] < 0.0 ) ; out -> mZC . mX [ 8ULL ] = ( real_T ) ( t48 -> mX . mX [ 100ULL ] < 0.0 ) ; out -> mZC . mX [ 9ULL ] = ( real_T ) ( t48 -> mX . mX [ 101ULL ] < 0.0 ) ; out -> mZC . mX [ 10ULL ] = ( real_T ) ( t48 -> mX . mX [ 105ULL ] < 0.0 ) ; out -> mZC . mX [ 11ULL ] = ( real_T ) ( t48 -> mX . mX [ 106ULL ] < 0.0 ) ; out -> mZC . mX [ 12ULL ] = ( real_T ) ( t48 -> mX . mX [ 110ULL ] < 0.0 ) ; out -> mZC . mX [ 13ULL ] = ( real_T ) ( t48 -> mX . mX [ 111ULL ] < 0.0 ) ; out -> mZC . mX [ 14ULL ] = ( real_T ) ( t48 -> mX . mX [ 131ULL ] < 0.0 ) ; out -> mZC . mX [ 15ULL ] = ( real_T ) ( t48 -> mX . mX [ 132ULL ] < 0.0 ) ; out -> mZC . mX [ 16ULL ] = ( real_T ) ( t48 -> mX . mX [ 136ULL ] < 0.0 ) ; out -> mZC . mX [ 17ULL ] = ( real_T ) ( t48 -> mX . mX [ 137ULL ] < 0.0 ) ; out -> mZC . mX [ 18ULL ] = ( real_T ) ( t48 -> mX . mX [ 141ULL ] < 0.0 ) ; out -> mZC . mX [ 19ULL ] = ( real_T ) ( t48 -> mX . mX [ 142ULL ] < 0.0 ) ; out -> mZC . mX [ 20ULL ] = ( real_T ) ( t48 -> mX . mX [ 162ULL ] < 0.0 ) ; out -> mZC . mX [ 21ULL ] = ( real_T ) ( t48 -> mX . mX [ 163ULL ] < 0.0 ) ; out -> mZC . mX [ 22ULL ] = ( real_T ) ( t48 -> mX . mX [ 167ULL ] < 0.0 ) ; out -> mZC . mX [ 23ULL ] = ( real_T ) ( t48 -> mX . mX [ 168ULL ] < 0.0 ) ; out -> mZC . mX [ 24ULL ] = ( real_T ) ( t48 -> mX . mX [ 172ULL ] < 0.0 ) ; out -> mZC . mX [ 25ULL ] = ( real_T ) ( t48 -> mX . mX [ 173ULL ] < 0.0 ) ; out -> mZC . mX [ 27ULL ] = t48 -> mU . mX [ 12ULL ] - 0.99 ; out -> mZC . mX [ 28ULL ] = t48 -> mM . mX [ 31ULL ] == 0 ? - t48 -> mU . mX [ 12ULL ] : 0.0 ; out -> mZC . mX [ 29ULL ] = - ( ( ( ( ( ( ( t48 -> mX . mX [ 93ULL ] * 1.0E-12 - t48 -> mX . mX [ 99ULL ] ) - t48 -> mX . mX [ 104ULL ] ) - t48 -> mX . mX [ 109ULL ] ) - t48 -> mX . mX [ 113ULL ] ) + t48 -> mX . mX [ 98ULL ] ) + t48 -> mX . mX [ 103ULL ] ) + t48 -> mX . mX [ 108ULL ] ) ; out -> mZC . mX [ 31ULL ] = t48 -> mU . mX [ 20ULL ] - 0.99 ; out -> mZC . mX [ 32ULL ] = t48 -> mM . mX [ 34ULL ] == 0 ? - t48 -> mU . mX [ 20ULL ] : 0.0 ; out -> mZC . mX [ 33ULL ] = - ( ( ( ( ( ( ( t48 -> mX . mX [ 124ULL ] * 1.0E-12 - t48 -> mX . mX [ 130ULL ] ) - t48 -> mX . mX [ 135ULL ] ) - t48 -> mX . mX [ 140ULL ] ) - t48 -> mX . mX [ 144ULL ] ) + t48 -> mX . mX [ 129ULL ] ) + t48 -> mX . mX [ 134ULL ] ) + t48 -> mX . mX [ 139ULL ] ) ; out -> mZC . mX [ 35ULL ] = t48 -> mU . mX [ 28ULL ] - 0.99 ; out -> mZC . mX [ 36ULL ] = t48 -> mM . mX [ 24ULL ] == 0 ? - t48 -> mU . mX [ 28ULL ] : 0.0 ; out -> mZC . mX [ 37ULL ] = - ( ( ( ( ( ( ( t48 -> mX . mX [ 155ULL ] * 1.0E-12 - t48 -> mX . mX [ 161ULL ] ) - t48 -> mX . mX [ 166ULL ] ) - t48 -> mX . mX [ 171ULL ] ) - t48 -> mX . mX [ 175ULL ] ) + t48 -> mX . mX [ 160ULL ] ) + t48 -> mX . mX [ 165ULL ] ) + t48 -> mX . mX [ 170ULL ] ) ; out -> mZC . mX [ 39ULL ] = t48 -> mU . mX [ 32ULL ] - 0.99 ; out -> mZC . mX [ 40ULL ] = t48 -> mM . mX [ 27ULL ] == 0 ? - t48 -> mU . mX [ 32ULL ] : 0.0 ; out -> mZC . mX [ 41ULL ] = - ( ( ( ( ( ( ( t48 -> mX . mX [ 74ULL ] * 1.0E-12 - t48 -> mX . mX [ 80ULL ] ) - t48 -> mX . mX [ 85ULL ] ) - t48 -> mX . mX [ 90ULL ] ) - t48 -> mX . mX [ 187ULL ] ) + t48 -> mX . mX [ 79ULL ] ) + t48 -> mX . mX [ 84ULL ] ) + t48 -> mX . mX [ 89ULL ] ) ; out -> mZC . mX [ 42ULL ] = - 79.0 - Inverter_2_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode ; out -> mZC . mX [ 43ULL ] = - 79.0 - t35 ; out -> mZC . mX [ 44ULL ] = - 79.0 - Inverter_3_Solar_Power_3_Solar_Cell_diode1_private_Diode_v_diode ; out -> mZC . mX [ 45ULL ] = - 79.0 - intrm_sf_mf_81 ; out -> mZC . mX [ 46ULL ] = - 79.0 - Inverter_4_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode ; out -> mZC . mX [ 47ULL ] = - 79.0 - intrm_sf_mf_111 ; out -> mZC . mX [ 48ULL ] = - 79.0 - intrm_sf_mf_118 ; out -> mZC . mX [ 49ULL ] = - 79.0 - t32 ; out -> mZC . mX [ 50ULL ] = ( real_T ) t1 ; out -> mZC . mX [ 51ULL ] = ( t48 -> mU . mX [ 5ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 52ULL ] = ( real_T ) t2 ; out -> mZC . mX [ 53ULL ] = ( t48 -> mU . mX [ 0ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 54ULL ] = ( real_T ) t3 ; out -> mZC . mX [ 55ULL ] = ( t48 -> mU . mX [ 1ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 56ULL ] = ( real_T ) t4 ; out -> mZC . mX [ 57ULL ] = ( t48 -> mU . mX [ 2ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 58ULL ] = ( real_T ) t5 ; out -> mZC . mX [ 59ULL ] = ( t48 -> mU . mX [ 3ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 60ULL ] = ( real_T ) t6 ; out -> mZC . mX [ 61ULL ] = ( t48 -> mU . mX [ 4ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 62ULL ] = ( real_T ) t7 ; out -> mZC . mX [ 63ULL ] = ( t48 -> mU . mX [ 11ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 64ULL ] = ( real_T ) t8 ; out -> mZC . mX [ 65ULL ] = ( t48 -> mU . mX [ 6ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 66ULL ] = ( real_T ) t9 ; out -> mZC . mX [ 67ULL ] = ( t48 -> mU . mX [ 7ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 68ULL ] = ( real_T ) t10 ; out -> mZC . mX [ 69ULL ] = ( t48 -> mU . mX [ 8ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 70ULL ] = ( real_T ) t11 ; out -> mZC . mX [ 71ULL ] = ( t48 -> mU . mX [ 9ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 72ULL ] = ( real_T ) t12 ; out -> mZC . mX [ 73ULL ] = ( t48 -> mU . mX [ 10ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 74ULL ] = ( real_T ) t13 ; out -> mZC . mX [ 75ULL ] = ( t48 -> mU . mX [ 19ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 76ULL ] = ( real_T ) t14 ; out -> mZC . mX [ 77ULL ] = ( t48 -> mU . mX [ 14ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 78ULL ] = ( real_T ) t15 ; out -> mZC . mX [ 79ULL ] = ( t48 -> mU . mX [ 15ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 80ULL ] = ( real_T ) t16 ; out -> mZC . mX [ 81ULL ] = ( t48 -> mU . mX [ 16ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 82ULL ] = ( real_T ) t17 ; out -> mZC . mX [ 83ULL ] = ( t48 -> mU . mX [ 17ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 84ULL ] = ( real_T ) t18 ; out -> mZC . mX [ 85ULL ] = ( t48 -> mU . mX [ 18ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 86ULL ] = ( real_T ) t19 ; out -> mZC . mX [ 87ULL ] = ( t48 -> mU . mX [ 27ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 88ULL ] = ( real_T ) t20 ; out -> mZC . mX [ 89ULL ] = ( t48 -> mU . mX [ 22ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 90ULL ] = ( real_T ) t21 ; out -> mZC . mX [ 91ULL ] = ( t48 -> mU . mX [ 23ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 92ULL ] = ( real_T ) t22 ; out -> mZC . mX [ 93ULL ] = ( t48 -> mU . mX [ 24ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 94ULL ] = ( real_T ) t23 ; out -> mZC . mX [ 95ULL ] = ( t48 -> mU . mX [ 25ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 96ULL ] = ( real_T ) t24 ; out -> mZC . mX [ 97ULL ] = ( t48 -> mU . mX [ 26ULL ] - 0.5 ) - ( Inverter_4_Inverter_4_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
