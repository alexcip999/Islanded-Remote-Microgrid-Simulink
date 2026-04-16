#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mode.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_mode ( const
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
] ) + t13 -> mX . mX [ 58ULL ] ) + 1000.0 ; if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t0 = ( t13 -> mU . mX [ 6ULL ] > 0.5 ) ; } else { t0 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t1 = ( t13 -> mU . mX [ 1ULL ] > 0.5 ) ; } else { t1 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t2 = ( t13 -> mU . mX [ 2ULL ] > 0.5 ) ; } else { t2 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t3 = ( t13 -> mU . mX [ 3ULL ] > 0.5 ) ; } else { t3 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t4 = ( t13 -> mU . mX [ 4ULL ] > 0.5 ) ; } else { t4 = false ; } if ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t5 = ( t13 -> mU . mX [ 5ULL ] > 0.5 ) ; } else { t5 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v > 0.8 ) { t6 = ( t13 -> mU . mX [ 12ULL ] > 0.5 ) ; } else { t6 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v > 0.8 ) { t7 = ( t13 -> mU . mX [ 7ULL ] > 0.5 ) ; } else { t7 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v > 0.8 ) { t8 = ( t13 -> mU . mX [ 8ULL ] > 0.5 ) ; } else { t8 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v > 0.8 ) { t9 = ( t13 -> mU . mX [ 9ULL ] > 0.5 ) ; } else { t9 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v > 0.8 ) { t10 = ( t13 -> mU . mX [ 10ULL ] > 0.5 ) ; } else { t10 = false ; } if ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v > 0.8 ) { t11 = ( t13 -> mU . mX [ 11ULL ] > 0.5 ) ; } else { t11 = false ; } out -> mMODE . mX [ 0ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 6ULL ] - 0.5 ) ; out -> mMODE . mX [ 1ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 1ULL ] - 0.5 ) ; out -> mMODE . mX [ 2ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 10ULL ] - 0.5 ) ; out -> mMODE . mX [ 3ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 11ULL ] - 0.5 ) ; out -> mMODE . mX [ 4ULL ] = ( int32_T ) ( t13 -> mU . mX [ 0ULL ] > 0.5 ) ; out -> mMODE . mX [ 5ULL ] = ( int32_T ) ( t13 -> mX . mX [ 48ULL ] < 0.0 ) ; out -> mMODE . mX [ 6ULL ] = ( int32_T ) t0 ; out -> mMODE . mX [ 7ULL ] = ( int32_T ) ( t13 -> mX . mX [ 49ULL ] < 0.0 ) ; out -> mMODE . mX [ 8ULL ] = ( int32_T ) t1 ; out -> mMODE . mX [ 9ULL ] = ( int32_T ) ( t13 -> mX . mX [ 51ULL ] < 0.0 ) ; out -> mMODE . mX [ 10ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 2ULL ] - 0.5 ) ; out -> mMODE . mX [ 11ULL ] = ( int32_T ) t2 ; out -> mMODE . mX [ 12ULL ] = ( int32_T ) ( t13 -> mX . mX [ 52ULL ] < 0.0 ) ; out -> mMODE . mX [ 13ULL ] = ( int32_T ) t3 ; out -> mMODE . mX [ 14ULL ] = ( int32_T ) ( t13 -> mX . mX [ 54ULL ] < 0.0 ) ; out -> mMODE . mX [ 15ULL ] = ( int32_T ) t4 ; out -> mMODE . mX [ 16ULL ] = ( int32_T ) ( t13 -> mX . mX [ 55ULL ] < 0.0 ) ; out -> mMODE . mX [ 17ULL ] = ( int32_T ) t5 ; out -> mMODE . mX [ 18ULL ] = ( int32_T ) ( t13 -> mX . mX [ 60ULL ] < 0.0 ) ; out -> mMODE . mX [ 19ULL ] = ( int32_T ) t6 ; out -> mMODE . mX [ 20ULL ] = ( int32_T ) ( t13 -> mX . mX [ 61ULL ] < 0.0 ) ; out -> mMODE . mX [ 21ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 3ULL ] - 0.5 ) ; out -> mMODE . mX [ 22ULL ] = ( int32_T ) t7 ; out -> mMODE . mX [ 23ULL ] = ( int32_T ) ( t13 -> mX . mX [ 63ULL ] < 0.0 ) ; out -> mMODE . mX [ 24ULL ] = ( int32_T ) t8 ; out -> mMODE . mX [ 25ULL ] = ( int32_T ) ( t13 -> mX . mX [ 64ULL ] < 0.0 ) ; out -> mMODE . mX [ 26ULL ] = ( int32_T ) t9 ; out -> mMODE . mX [ 27ULL ] = ( int32_T ) ( t13 -> mX . mX [ 66ULL ] < 0.0 ) ; out -> mMODE . mX [ 28ULL ] = ( int32_T ) t10 ; out -> mMODE . mX [ 29ULL ] = ( int32_T ) ( t13 -> mX . mX [ 67ULL ] < 0.0 ) ; out -> mMODE . mX [ 30ULL ] = ( int32_T ) t11 ; out -> mMODE . mX [ 31ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q5_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 4ULL ] - 0.5 ) ; out -> mMODE . mX [ 32ULL ] = ( int32_T ) ( Inverter_1_IGBT_Inverter_IGBT_Inverter_Q6_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 5ULL ] - 0.5 ) ; out -> mMODE . mX [ 33ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q1_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 12ULL ] - 0.5 ) ; out -> mMODE . mX [ 34ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q2_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 7ULL ] - 0.5 ) ; out -> mMODE . mX [ 35ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q3_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 8ULL ] - 0.5 ) ; out -> mMODE . mX [ 36ULL ] = ( int32_T ) ( Inverter_2_IGBT_Inverter_IGBT_Inverter_Q4_ideal_switch_v - 0.8 <= t13 -> mU . mX [ 9ULL ] - 0.5 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
