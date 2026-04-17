#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t41 , NeDsMethodOutput *
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
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
intrm_sf_mf_102 ; real_T intrm_sf_mf_107 ; real_T intrm_sf_mf_114 ; real_T
intrm_sf_mf_119 ; real_T intrm_sf_mf_47 ; real_T intrm_sf_mf_72 ; real_T t32
; real_T t40 ; boolean_T t0 ; boolean_T t1 ; boolean_T t10 ; boolean_T t11 ;
boolean_T t12 ; boolean_T t13 ; boolean_T t14 ; boolean_T t15 ; boolean_T t16
; boolean_T t17 ; boolean_T t18 ; boolean_T t19 ; boolean_T t2 ; boolean_T
t20 ; boolean_T t21 ; boolean_T t22 ; boolean_T t23 ; boolean_T t3 ;
boolean_T t4 ; boolean_T t5 ; boolean_T t6 ; boolean_T t7 ; boolean_T t8 ;
boolean_T t9 ; ( void ) LC ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( - t41 -> mX
. mX [ 10ULL ] - t41 -> mX . mX [ 77ULL ] ) + t41 -> mX . mX [ 80ULL ] * -
1.0E-6 ) + t41 -> mX . mX [ 76ULL ] ) + t41 -> mX . mX [ 9ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( - t41 -> mX .
mX [ 76ULL ] + t41 -> mX . mX [ 80ULL ] * 1.0E-6 ) + t41 -> mX . mX [ 10ULL ]
) + t41 -> mX . mX [ 77ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( - t41 -> mX
. mX [ 11ULL ] - t41 -> mX . mX [ 78ULL ] ) + t41 -> mX . mX [ 81ULL ] * -
1.0E-6 ) + t41 -> mX . mX [ 76ULL ] ) + t41 -> mX . mX [ 9ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( - t41 -> mX .
mX [ 76ULL ] + t41 -> mX . mX [ 81ULL ] * 1.0E-6 ) + t41 -> mX . mX [ 11ULL ]
) + t41 -> mX . mX [ 78ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( - t41 -> mX
. mX [ 12ULL ] - t41 -> mX . mX [ 79ULL ] ) + t41 -> mX . mX [ 82ULL ] * -
1.0E-6 ) + t41 -> mX . mX [ 76ULL ] ) + t41 -> mX . mX [ 9ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( - t41 -> mX .
mX [ 76ULL ] + t41 -> mX . mX [ 82ULL ] * 1.0E-6 ) + t41 -> mX . mX [ 12ULL ]
) + t41 -> mX . mX [ 79ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 17ULL ] - t41 -> mX . mX [ 99ULL ] ) + t41 -> mX . mX [
102ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 98ULL ] ) + t41 -> mX . mX [ 16ULL ]
; Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t41 -> mX . mX [ 98ULL ] + t41 -> mX . mX [ 102ULL ] * 1.0E-6 ) + t41 -> mX .
mX [ 17ULL ] ) + t41 -> mX . mX [ 99ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 18ULL ] - t41 -> mX . mX [ 100ULL ] ) + t41 -> mX . mX [
103ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 98ULL ] ) + t41 -> mX . mX [ 16ULL ]
; Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t41 -> mX . mX [ 98ULL ] + t41 -> mX . mX [ 103ULL ] * 1.0E-6 ) + t41 -> mX .
mX [ 18ULL ] ) + t41 -> mX . mX [ 100ULL ] ;
Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 19ULL ] - t41 -> mX . mX [ 101ULL ] ) + t41 -> mX . mX [
104ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 98ULL ] ) + t41 -> mX . mX [ 16ULL ]
; Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t41 -> mX . mX [ 98ULL ] + t41 -> mX . mX [ 104ULL ] * 1.0E-6 ) + t41 -> mX .
mX [ 19ULL ] ) + t41 -> mX . mX [ 101ULL ] ; out -> mZC . mX [ 33ULL ] = t41
-> mX . mX [ 122ULL ] ; out -> mZC . mX [ 106ULL ] = t41 -> mU . mX [ 16ULL ]
; out -> mZC . mX [ 105ULL ] = ( ( t41 -> mX . mX [ 123ULL ] - 298.15 ) *
0.000519981408860291 + 1.0 ) * 241.00016586170452 ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 30ULL ] - t41 -> mX . mX [ 133ULL ] ) + t41 -> mX . mX [
136ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 132ULL ] ) + t41 -> mX . mX [ 29ULL
] ; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t41 -> mX . mX [ 132ULL ] + t41 -> mX . mX [ 136ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 30ULL ] ) + t41 -> mX . mX [ 133ULL ] ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 31ULL ] - t41 -> mX . mX [ 134ULL ] ) + t41 -> mX . mX [
137ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 132ULL ] ) + t41 -> mX . mX [ 29ULL
] ; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t41 -> mX . mX [ 132ULL ] + t41 -> mX . mX [ 137ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 31ULL ] ) + t41 -> mX . mX [ 134ULL ] ;
Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 32ULL ] - t41 -> mX . mX [ 135ULL ] ) + t41 -> mX . mX [
138ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 132ULL ] ) + t41 -> mX . mX [ 29ULL
] ; Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t41 -> mX . mX [ 132ULL ] + t41 -> mX . mX [ 138ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 32ULL ] ) + t41 -> mX . mX [ 135ULL ] ; out -> mZC . mX [ 37ULL ] =
t41 -> mX . mX [ 156ULL ] ; out -> mZC . mX [ 108ULL ] = t41 -> mU . mX [
24ULL ] ; out -> mZC . mX [ 107ULL ] = ( ( t41 -> mX . mX [ 157ULL ] - 298.15
) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 ;
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 43ULL ] - t41 -> mX . mX [ 167ULL ] ) + t41 -> mX . mX [
170ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 166ULL ] ) + t41 -> mX . mX [ 42ULL
] ; Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( -
t41 -> mX . mX [ 166ULL ] + t41 -> mX . mX [ 170ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 43ULL ] ) + t41 -> mX . mX [ 167ULL ] ;
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 44ULL ] - t41 -> mX . mX [ 168ULL ] ) + t41 -> mX . mX [
171ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 166ULL ] ) + t41 -> mX . mX [ 42ULL
] ; Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( -
t41 -> mX . mX [ 166ULL ] + t41 -> mX . mX [ 171ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 44ULL ] ) + t41 -> mX . mX [ 168ULL ] ;
Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( ( -
t41 -> mX . mX [ 45ULL ] - t41 -> mX . mX [ 169ULL ] ) + t41 -> mX . mX [
172ULL ] * - 1.0E-6 ) + t41 -> mX . mX [ 166ULL ] ) + t41 -> mX . mX [ 42ULL
] ; Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( -
t41 -> mX . mX [ 166ULL ] + t41 -> mX . mX [ 172ULL ] * 1.0E-6 ) + t41 -> mX
. mX [ 45ULL ] ) + t41 -> mX . mX [ 169ULL ] ; out -> mZC . mX [ 41ULL ] =
t41 -> mX . mX [ 190ULL ] ; out -> mZC . mX [ 110ULL ] = t41 -> mU . mX [
32ULL ] ; out -> mZC . mX [ 109ULL ] = ( ( t41 -> mX . mX [ 191ULL ] - 298.15
) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 ; out -> mZC . mX [
45ULL ] = t41 -> mX . mX [ 202ULL ] ; out -> mZC . mX [ 112ULL ] = t41 -> mU
. mX [ 34ULL ] ; out -> mZC . mX [ 111ULL ] = ( ( t41 -> mX . mX [ 203ULL ] -
298.15 ) * 0.000519981408860291 + 1.0 ) * 241.00016586170452 ;
intrm_sf_mf_119 = ( t41 -> mX . mX [ 190ULL ] * - 0.99861111111111112 + t41
-> mX . mX [ 192ULL ] ) * 1.602176487E-19 ; intrm_sf_mf_107 = t41 -> mX . mX
[ 196ULL ] * 2.0565503369455433E-23 ; intrm_sf_mf_102 = intrm_sf_mf_119 / ( intrm_sf_mf_107 == 0.0 ? 1.0E-16 : intrm_sf_mf_107 ) ; intrm_sf_mf_47 = t41 -> mX . mX [ 197ULL ] * 2.81013842117661E-23 ; intrm_sf_mf_107 = intrm_sf_mf_119 / ( intrm_sf_mf_47 == 0.0 ? 1.0E-16 : intrm_sf_mf_47 ) ; intrm_sf_mf_119 = ( t41 -> mX . mX [ 202ULL ] * - 0.99861111111111112 + t41 -> mX . mX [ 204ULL ] ) * 1.602176487E-19 ; t32 = t41 -> mX . mX [ 208ULL ] * 2.0565503369455433E-23 ; intrm_sf_mf_114 = intrm_sf_mf_119 / ( t32 == 0.0 ? 1.0E-16 : t32 ) ; t32 = t41 -> mX . mX [ 209ULL ] * 2.81013842117661E-23 ; intrm_sf_mf_119 /= t32 == 0.0 ? 1.0E-16 : t32 ; t32 = ( t41 -> mX . mX [ 122ULL ] * - 0.99861111111111112 + t41 -> mX . mX [ 124ULL ] ) * 1.602176487E-19 ; t40 = t41 -> mX . mX [ 128ULL ] * 2.0565503369455433E-23 ; Inverter_2_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode = t32 / ( t40 == 0.0 ? 1.0E-16 : t40 ) ; t40 = t41 -> mX . mX [ 129ULL ] * 2.81013842117661E-23 ; intrm_sf_mf_47 = t32 / ( t40 == 0.0 ? 1.0E-16 : t40 ) ; t32 = ( t41 -> mX . mX [ 156ULL ] * - 0.99861111111111112 + t41 -> mX . mX [ 158ULL ] ) * 1.602176487E-19 ; t40 = t41 -> mX . mX [ 162ULL ] * 2.0565503369455433E-23 ; intrm_sf_mf_72 = t32 / ( t40 == 0.0 ? 1.0E-16 : t40 ) ; t40 = t41 -> mX . mX [ 163ULL ] * 2.81013842117661E-23 ; if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t0 = ( t41 -> mU . mX [ 8ULL ] > 0.5 ) ; } else { t0 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t1 = ( t41 -> mU . mX [ 3ULL ] > 0.5 ) ; } else { t1 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t2 = ( t41 -> mU . mX [ 4ULL ] > 0.5 ) ; } else { t2 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t3 = ( t41 -> mU . mX [ 5ULL ] > 0.5 ) ; } else { t3 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t4 = ( t41 -> mU . mX [ 6ULL ] > 0.5 ) ; } else { t4 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t5 = ( t41 -> mU . mX [ 7ULL ] > 0.5 ) ; } else { t5 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t6 = ( t41 -> mU . mX [ 14ULL ] > 0.5 ) ; } else { t6 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t7 = ( t41 -> mU . mX [ 9ULL ] > 0.5 ) ; } else { t7 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t8 = ( t41 -> mU . mX [ 10ULL ] > 0.5 ) ; } else { t8 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t9 = ( t41 -> mU . mX [ 11ULL ] > 0.5 ) ; } else { t9 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t10 = ( t41 -> mU . mX [ 12ULL ] > 0.5 ) ; } else { t10 = false ; } if ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t11 = ( t41 -> mU . mX [ 13ULL ] > 0.5 ) ; } else { t11 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t12 = ( t41 -> mU . mX [ 22ULL ] > 0.5 ) ; } else { t12 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t13 = ( t41 -> mU . mX [ 17ULL ] > 0.5 ) ; } else { t13 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t14 = ( t41 -> mU . mX [ 18ULL ] > 0.5 ) ; } else { t14 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t15 = ( t41 -> mU . mX [ 19ULL ] > 0.5 ) ; } else { t15 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t16 = ( t41 -> mU . mX [ 20ULL ] > 0.5 ) ; } else { t16 = false ; } if ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t17 = ( t41 -> mU . mX [ 21ULL ] > 0.5 ) ; } else { t17 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t18 = ( t41 -> mU . mX [ 30ULL ] > 0.5 ) ; } else { t18 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t19 = ( t41 -> mU . mX [ 25ULL ] > 0.5 ) ; } else { t19 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t20 = ( t41 -> mU . mX [ 26ULL ] > 0.5 ) ; } else { t20 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t21 = ( t41 -> mU . mX [ 27ULL ] > 0.5 ) ; } else { t21 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t22 = ( t41 -> mU . mX [ 28ULL ] > 0.5 ) ; } else { t22 = false ; } if ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t23 = ( t41 -> mU . mX [ 29ULL ] > 0.5 ) ; } else { t23 = false ; } out -> mZC . mX [ 0ULL ] = t41 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 1ULL ] = t41 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 2ULL ] = t41 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 3ULL ] = t41 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 4ULL ] = t41 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 5ULL ] = t41 -> mU . mX [ 1ULL ] - 0.5 ; out -> mZC . mX [ 6ULL ] = t41 -> mU . mX [ 2ULL ] - 0.5 ; out -> mZC . mX [ 7ULL ] = t41 -> mU . mX [ 2ULL ] - 0.5 ; out -> mZC . mX [ 8ULL ] = t41 -> mU . mX [ 2ULL ] - 0.5 ; out -> mZC . mX [ 9ULL ] = ( real_T ) ( t41 -> mX . mX [ 86ULL ] < 0.0 ) ; out -> mZC . mX [ 10ULL ] = ( real_T ) ( t41 -> mX . mX [ 87ULL ] < 0.0 ) ; out -> mZC . mX [ 11ULL ] = ( real_T ) ( t41 -> mX . mX [ 91ULL ] < 0.0 ) ; out -> mZC . mX [ 12ULL ] = ( real_T ) ( t41 -> mX . mX [ 92ULL ] < 0.0 ) ; out -> mZC . mX [ 13ULL ] = ( real_T ) ( t41 -> mX . mX [ 96ULL ] < 0.0 ) ; out -> mZC . mX [ 14ULL ] = ( real_T ) ( t41 -> mX . mX [ 97ULL ] < 0.0 ) ; out -> mZC . mX [ 15ULL ] = ( real_T ) ( t41 -> mX . mX [ 108ULL ] < 0.0 ) ; out -> mZC . mX [ 16ULL ] = ( real_T ) ( t41 -> mX . mX [ 109ULL ] < 0.0 ) ; out -> mZC . mX [ 17ULL ] = ( real_T ) ( t41 -> mX . mX [ 113ULL ] < 0.0 ) ; out -> mZC . mX [ 18ULL ] = ( real_T ) ( t41 -> mX . mX [ 114ULL ] < 0.0 ) ; out -> mZC . mX [ 19ULL ] = ( real_T ) ( t41 -> mX . mX [ 118ULL ] < 0.0 ) ; out -> mZC . mX [ 20ULL ] = ( real_T ) ( t41 -> mX . mX [ 119ULL ] < 0.0 ) ; out -> mZC . mX [ 21ULL ] = ( real_T ) ( t41 -> mX . mX [ 142ULL ] < 0.0 ) ; out -> mZC . mX [ 22ULL ] = ( real_T ) ( t41 -> mX . mX [ 143ULL ] < 0.0 ) ; out -> mZC . mX [ 23ULL ] = ( real_T ) ( t41 -> mX . mX [ 147ULL ] < 0.0 ) ; out -> mZC . mX [ 24ULL ] = ( real_T ) ( t41 -> mX . mX [ 148ULL ] < 0.0 ) ; out -> mZC . mX [ 25ULL ] = ( real_T ) ( t41 -> mX . mX [ 152ULL ] < 0.0 ) ; out -> mZC . mX [ 26ULL ] = ( real_T ) ( t41 -> mX . mX [ 153ULL ] < 0.0 ) ; out -> mZC . mX [ 27ULL ] = ( real_T ) ( t41 -> mX . mX [ 176ULL ] < 0.0 ) ; out -> mZC . mX [ 28ULL ] = ( real_T ) ( t41 -> mX . mX [ 177ULL ] < 0.0 ) ; out -> mZC . mX [ 29ULL ] = ( real_T ) ( t41 -> mX . mX [ 181ULL ] < 0.0 ) ; out -> mZC . mX [ 30ULL ] = ( real_T ) ( t41 -> mX . mX [ 182ULL ] < 0.0 ) ; out -> mZC . mX [ 31ULL ] = ( real_T ) ( t41 -> mX . mX [ 186ULL ] < 0.0 ) ; out -> mZC . mX [ 32ULL ] = ( real_T ) ( t41 -> mX . mX [ 187ULL ] < 0.0 ) ; out -> mZC . mX [ 34ULL ] = t41 -> mU . mX [ 15ULL ] - 0.99 ; out -> mZC . mX [ 35ULL ] = t41 -> mM . mX [ 33ULL ] == 0 ? - t41 -> mU . mX [ 15ULL ] : 0.0 ; out -> mZC . mX [ 36ULL ] = - ( ( ( ( ( ( ( t41 -> mX . mX [ 98ULL ] * 1.0E-12 - t41 -> mX . mX [ 107ULL ] ) - t41 -> mX . mX [ 112ULL ] ) - t41 -> mX . mX [ 117ULL ] ) - t41 -> mX . mX [ 121ULL ] ) + t41 -> mX . mX [ 106ULL ] ) + t41 -> mX . mX [ 111ULL ] ) + t41 -> mX . mX [ 116ULL ] ) ; out -> mZC . mX [ 38ULL ] = t41 -> mU . mX [ 23ULL ] - 0.99 ; out -> mZC . mX [ 39ULL ] = t41 -> mM . mX [ 37ULL ] == 0 ? - t41 -> mU . mX [ 23ULL ] : 0.0 ; out -> mZC . mX [ 40ULL ] = - ( ( ( ( ( ( ( t41 -> mX . mX [ 132ULL ] * 1.0E-12 - t41 -> mX . mX [ 141ULL ] ) - t41 -> mX . mX [ 146ULL ] ) - t41 -> mX . mX [ 151ULL ] ) - t41 -> mX . mX [ 155ULL ] ) + t41 -> mX . mX [ 140ULL ] ) + t41 -> mX . mX [ 145ULL ] ) + t41 -> mX . mX [ 150ULL ] ) ; out -> mZC . mX [ 42ULL ] = t41 -> mU . mX [ 31ULL ] - 0.99 ; out -> mZC . mX [ 43ULL ] = t41 -> mM . mX [ 40ULL ] == 0 ? - t41 -> mU . mX [ 31ULL ] : 0.0 ; out -> mZC . mX [ 44ULL ] = - ( ( ( ( ( ( ( t41 -> mX . mX [ 166ULL ] * 1.0E-12 - t41 -> mX . mX [ 175ULL ] ) - t41 -> mX . mX [ 180ULL ] ) - t41 -> mX . mX [ 185ULL ] ) - t41 -> mX . mX [ 189ULL ] ) + t41 -> mX . mX [ 174ULL ] ) + t41 -> mX . mX [ 179ULL ] ) + t41 -> mX . mX [ 184ULL ] ) ; out -> mZC . mX [ 46ULL ] = t41 -> mU . mX [ 33ULL ] - 0.99 ; out -> mZC . mX [ 47ULL ] = t41 -> mM . mX [ 30ULL ] == 0 ? - t41 -> mU . mX [ 33ULL ] : 0.0 ; out -> mZC . mX [ 48ULL ] = - ( ( ( ( ( ( ( t41 -> mX . mX [ 76ULL ] * 1.0E-12 - t41 -> mX . mX [ 85ULL ] ) - t41 -> mX . mX [ 90ULL ] ) - t41 -> mX . mX [ 95ULL ] ) - t41 -> mX . mX [ 201ULL ] ) + t41 -> mX . mX [ 84ULL ] ) + t41 -> mX . mX [ 89ULL ] ) + t41 -> mX . mX [ 94ULL ] ) ; out -> mZC . mX [ 49ULL ] = - 79.0 - Inverter_2_Solar_Power_4_Solar_Cell_diode1_private_Diode_v_diode ; out -> mZC . mX [ 50ULL ] = - 79.0 - intrm_sf_mf_47 ; out -> mZC . mX [ 51ULL ] = - 79.0 - intrm_sf_mf_72 ; out -> mZC . mX [ 52ULL ] = - 79.0 - t32 / ( t40 == 0.0 ? 1.0E-16 : t40 ) ; out -> mZC . mX [ 53ULL ] = - 79.0 - intrm_sf_mf_102 ; out -> mZC . mX [ 54ULL ] = - 79.0 - intrm_sf_mf_107 ; out -> mZC . mX [ 55ULL ] = - 79.0 - intrm_sf_mf_114 ; out -> mZC . mX [ 56ULL ] = - 79.0 - intrm_sf_mf_119 ; out -> mZC . mX [ 57ULL ] = ( real_T ) t0 ; out -> mZC . mX [ 58ULL ] = ( t41 -> mU . mX [ 8ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 59ULL ] = ( real_T ) t1 ; out -> mZC . mX [ 60ULL ] = ( t41 -> mU . mX [ 3ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 61ULL ] = ( real_T ) t2 ; out -> mZC . mX [ 62ULL ] = ( t41 -> mU . mX [ 4ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 63ULL ] = ( real_T ) t3 ; out -> mZC . mX [ 64ULL ] = ( t41 -> mU . mX [ 5ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 65ULL ] = ( real_T ) t4 ; out -> mZC . mX [ 66ULL ] = ( t41 -> mU . mX [ 6ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 67ULL ] = ( real_T ) t5 ; out -> mZC . mX [ 68ULL ] = ( t41 -> mU . mX [ 7ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 69ULL ] = ( real_T ) t6 ; out -> mZC . mX [ 70ULL ] = ( t41 -> mU . mX [ 14ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 71ULL ] = ( real_T ) t7 ; out -> mZC . mX [ 72ULL ] = ( t41 -> mU . mX [ 9ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 73ULL ] = ( real_T ) t8 ; out -> mZC . mX [ 74ULL ] = ( t41 -> mU . mX [ 10ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 75ULL ] = ( real_T ) t9 ; out -> mZC . mX [ 76ULL ] = ( t41 -> mU . mX [ 11ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 77ULL ] = ( real_T ) t10 ; out -> mZC . mX [ 78ULL ] = ( t41 -> mU . mX [ 12ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 79ULL ] = ( real_T ) t11 ; out -> mZC . mX [ 80ULL ] = ( t41 -> mU . mX [ 13ULL ] - 0.5 ) - ( Inverter_2_Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 81ULL ] = ( real_T ) t12 ; out -> mZC . mX [ 82ULL ] = ( t41 -> mU . mX [ 22ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 83ULL ] = ( real_T ) t13 ; out -> mZC . mX [ 84ULL ] = ( t41 -> mU . mX [ 17ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 85ULL ] = ( real_T ) t14 ; out -> mZC . mX [ 86ULL ] = ( t41 -> mU . mX [ 18ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 87ULL ] = ( real_T ) t15 ; out -> mZC . mX [ 88ULL ] = ( t41 -> mU . mX [ 19ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 89ULL ] = ( real_T ) t16 ; out -> mZC . mX [ 90ULL ] = ( t41 -> mU . mX [ 20ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 91ULL ] = ( real_T ) t17 ; out -> mZC . mX [ 92ULL ] = ( t41 -> mU . mX [ 21ULL ] - 0.5 ) - ( Inverter_3_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 93ULL ] = ( real_T ) t18 ; out -> mZC . mX [ 94ULL ] = ( t41 -> mU . mX [ 30ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 95ULL ] = ( real_T ) t19 ; out -> mZC . mX [ 96ULL ] = ( t41 -> mU . mX [ 25ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 97ULL ] = ( real_T ) t20 ; out -> mZC . mX [ 98ULL ] = ( t41 -> mU . mX [ 26ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 99ULL ] = ( real_T ) t21 ; out -> mZC . mX [ 100ULL ] = ( t41 -> mU . mX [ 27ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 101ULL ] = ( real_T ) t22 ; out -> mZC . mX [ 102ULL ] = ( t41 -> mU . mX [ 28ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 103ULL ] = ( real_T ) t23 ; out -> mZC . mX [ 104ULL ] = ( t41 -> mU . mX [ 29ULL ] - 0.5 ) - ( Inverter_4_Inverter_3_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
