#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_zc ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t13 , NeDsMethodOutput *
out ) { real_T Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ;
real_T Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v ; real_T
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v ; boolean_T t0 ;
boolean_T t1 ; boolean_T t10 ; boolean_T t11 ; boolean_T t2 ; boolean_T t3 ;
boolean_T t4 ; boolean_T t5 ; boolean_T t6 ; boolean_T t7 ; boolean_T t8 ;
boolean_T t9 ; ( void ) LC ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( - t13 -> mX .
mX [ 3ULL ] - t13 -> mX . mX [ 44ULL ] ) + t13 -> mX . mX [ 27ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 43ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 43ULL ] + t13 -> mX . mX [ 27ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 3ULL
] ) + t13 -> mX . mX [ 44ULL ] ) + 1000.0 ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( - t13 -> mX .
mX [ 4ULL ] - t13 -> mX . mX [ 45ULL ] ) + t13 -> mX . mX [ 28ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 43ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 43ULL ] + t13 -> mX . mX [ 28ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 4ULL
] ) + t13 -> mX . mX [ 45ULL ] ) + 1000.0 ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( - t13 -> mX .
mX [ 5ULL ] - t13 -> mX . mX [ 46ULL ] ) + t13 -> mX . mX [ 29ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 43ULL ] ;
Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 43ULL ] + t13 -> mX . mX [ 29ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 5ULL
] ) + t13 -> mX . mX [ 46ULL ] ) + 1000.0 ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v = ( ( - t13 -> mX .
mX [ 3ULL ] - t13 -> mX . mX [ 56ULL ] ) + t13 -> mX . mX [ 27ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 36ULL ] ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 36ULL ] + t13 -> mX . mX [ 27ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 3ULL
] ) + t13 -> mX . mX [ 56ULL ] ) + 1000.0 ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v = ( ( - t13 -> mX .
mX [ 4ULL ] - t13 -> mX . mX [ 57ULL ] ) + t13 -> mX . mX [ 28ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 36ULL ] ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 36ULL ] + t13 -> mX . mX [ 28ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 4ULL
] ) + t13 -> mX . mX [ 57ULL ] ) + 1000.0 ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v = ( ( - t13 -> mX .
mX [ 5ULL ] - t13 -> mX . mX [ 58ULL ] ) + t13 -> mX . mX [ 29ULL ] * -
1.0E-6 ) + t13 -> mX . mX [ 36ULL ] ;
Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v = ( ( ( - t13 -> mX
. mX [ 36ULL ] + t13 -> mX . mX [ 29ULL ] * 1.0E-6 ) + t13 -> mX . mX [ 5ULL
] ) + t13 -> mX . mX [ 58ULL ] ) + 1000.0 ; if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t0 = ( t13 -> mU . mX [ 6ULL ] > 0.5 ) ; } else { t0 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t1 = ( t13 -> mU . mX [ 1ULL ] > 0.5 ) ; } else { t1 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t2 = ( t13 -> mU . mX [ 2ULL ] > 0.5 ) ; } else { t2 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t3 = ( t13 -> mU . mX [ 3ULL ] > 0.5 ) ; } else { t3 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t4 = ( t13 -> mU . mX [ 4ULL ] > 0.5 ) ; } else { t4 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t5 = ( t13 -> mU . mX [ 5ULL ] > 0.5 ) ; } else { t5 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t6 = ( t13 -> mU . mX [ 12ULL ] > 0.5 ) ; } else { t6 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t7 = ( t13 -> mU . mX [ 7ULL ] > 0.5 ) ; } else { t7 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t8 = ( t13 -> mU . mX [ 8ULL ] > 0.5 ) ; } else { t8 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t9 = ( t13 -> mU . mX [ 9ULL ] > 0.5 ) ; } else { t9 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t10 = ( t13 -> mU . mX [ 10ULL ] > 0.5 ) ; } else { t10 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t11 = ( t13 -> mU . mX [ 11ULL ] > 0.5 ) ; } else { t11 = false ; } out -> mZC . mX [ 0ULL ] = t13 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 1ULL ] = t13 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 2ULL ] = t13 -> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 3ULL ] = ( real_T ) ( t13 -> mX . mX [ 48ULL ] < 0.0 ) ; out -> mZC . mX [ 4ULL ] = ( real_T ) ( t13 -> mX . mX [ 49ULL ] < 0.0 ) ; out -> mZC . mX [ 5ULL ] = ( real_T ) ( t13 -> mX . mX [ 51ULL ] < 0.0 ) ; out -> mZC . mX [ 6ULL ] = ( real_T ) ( t13 -> mX . mX [ 52ULL ] < 0.0 ) ; out -> mZC . mX [ 7ULL ] = ( real_T ) ( t13 -> mX . mX [ 54ULL ] < 0.0 ) ; out -> mZC . mX [ 8ULL ] = ( real_T ) ( t13 -> mX . mX [ 55ULL ] < 0.0 ) ; out -> mZC . mX [ 9ULL ] = ( real_T ) ( t13 -> mX . mX [ 60ULL ] < 0.0 ) ; out -> mZC . mX [ 10ULL ] = ( real_T ) ( t13 -> mX . mX [ 61ULL ] < 0.0 ) ; out -> mZC . mX [ 11ULL ] = ( real_T ) ( t13 -> mX . mX [ 63ULL ] < 0.0 ) ; out -> mZC . mX [ 12ULL ] = ( real_T ) ( t13 -> mX . mX [ 64ULL ] < 0.0 ) ; out -> mZC . mX [ 13ULL ] = ( real_T ) ( t13 -> mX . mX [ 66ULL ] < 0.0 ) ; out -> mZC . mX [ 14ULL ] = ( real_T ) ( t13 -> mX . mX [ 67ULL ] < 0.0 ) ; out -> mZC . mX [ 15ULL ] = ( real_T ) t0 ; out -> mZC . mX [ 16ULL ] = ( t13 -> mU . mX [ 6ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 17ULL ] = ( real_T ) t1 ; out -> mZC . mX [ 18ULL ] = ( t13 -> mU . mX [ 1ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 19ULL ] = ( real_T ) t2 ; out -> mZC . mX [ 20ULL ] = ( t13 -> mU . mX [ 2ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 21ULL ] = ( real_T ) t3 ; out -> mZC . mX [ 22ULL ] = ( t13 -> mU . mX [ 3ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 23ULL ] = ( real_T ) t4 ; out -> mZC . mX [ 24ULL ] = ( t13 -> mU . mX [ 4ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 25ULL ] = ( real_T ) t5 ; out -> mZC . mX [ 26ULL ] = ( t13 -> mU . mX [ 5ULL ] - 0.5 ) - ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 27ULL ] = ( real_T ) t6 ; out -> mZC . mX [ 28ULL ] = ( t13 -> mU . mX [ 12ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 29ULL ] = ( real_T ) t7 ; out -> mZC . mX [ 30ULL ] = ( t13 -> mU . mX [ 7ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 31ULL ] = ( real_T ) t8 ; out -> mZC . mX [ 32ULL ] = ( t13 -> mU . mX [ 8ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 33ULL ] = ( real_T ) t9 ; out -> mZC . mX [ 34ULL ] = ( t13 -> mU . mX [ 9ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 35ULL ] = ( real_T ) t10 ; out -> mZC . mX [ 36ULL ] = ( t13 -> mU . mX [ 10ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 37ULL ] = ( real_T ) t11 ; out -> mZC . mX [ 38ULL ] = ( t13 -> mU . mX [ 11ULL ] - 0.5 ) - ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
