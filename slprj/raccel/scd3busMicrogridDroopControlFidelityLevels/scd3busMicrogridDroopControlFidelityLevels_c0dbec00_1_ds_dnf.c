#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dnf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dnf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t14 , NeDsMethodOutput *
out ) { real_T intrm_sf_mf_101 ; real_T intrm_sf_mf_71 ; real_T t2 ; real_T
t7 ; ( void ) LC ; t7 = t14 -> mX . mX [ 196ULL ] * 2.0565503369455433E-23 ;
intrm_sf_mf_101 = pmf_pow ( t14 -> mX . mX [ 196ULL ] / 298.15 ,
2.8035159388107189 ) * pmf_exp ( ( 1.0 - t14 -> mX . mX [ 196ULL ] / 298.15 )
* ( - 1.7944376352000002E-19 / ( t7 == 0.0 ? 1.0E-16 : t7 ) ) ) *
8.15014223052595E-6 ; t2 = ( t14 -> mX . mX [ 190ULL ] * -
0.99861111111111112 + t14 -> mX . mX [ 192ULL ] ) * 1.602176487E-19 / ( t7 ==
0.0 ? 1.0E-16 : t7 ) ; t7 = t14 -> mX . mX [ 162ULL ] *
2.0565503369455433E-23 ; intrm_sf_mf_71 = pmf_pow ( t14 -> mX . mX [ 162ULL ]
/ 298.15 , 2.8035159388107189 ) * pmf_exp ( ( 1.0 - t14 -> mX . mX [ 162ULL ]
/ 298.15 ) * ( - 1.7944376352000002E-19 / ( t7 == 0.0 ? 1.0E-16 : t7 ) ) ) *
8.15014223052595E-6 ; t7 = ( t14 -> mX . mX [ 156ULL ] * -
0.99861111111111112 + t14 -> mX . mX [ 158ULL ] ) * 1.602176487E-19 / ( t7 ==
0.0 ? 1.0E-16 : t7 ) ; if ( t2 > 80.0 ) { out -> mDNF . mX [ 0ULL ] = - ( ( t2
- 79.0 ) * 5.54062238439351E+34 - 1.0 ) ; } else if ( t14 -> mM . mX [ 3ULL ]
!= 0 ) { out -> mDNF . mX [ 0ULL ] = - ( ( t2 + 80.0 ) *
4.9060947306492808E-35 - 1.0 ) ; } else { out -> mDNF . mX [ 0ULL ] = - ( pmf_exp ( t2 ) - 1.0 ) ; } if ( t2 > 80.0 ) { out -> mDNF . mX [ 1ULL ] = - ( intrm_sf_mf_101 * 5.54062238439351E+34 ) ; } else if ( t14 -> mM . mX [ 3ULL ] != 0 ) { out -> mDNF . mX [ 1ULL ] = - ( intrm_sf_mf_101 * 4.9060947306492808E-35 ) ; } else { out -> mDNF . mX [ 1ULL ] = - ( pmf_exp ( t2 ) * intrm_sf_mf_101 ) ; } if ( t7 > 80.0 ) { out -> mDNF . mX [ 2ULL ] = - ( ( t7 - 79.0 ) * 5.54062238439351E+34 - 1.0 ) ; } else if ( t14 -> mM . mX [ 91ULL ] != 0 ) { out -> mDNF . mX [ 2ULL ] = - ( ( t7 + 80.0 ) * 4.9060947306492808E-35 - 1.0 ) ; } else { out -> mDNF . mX [ 2ULL ] = - ( pmf_exp ( t7 ) - 1.0 ) ; } if ( t7 > 80.0 ) { out -> mDNF . mX [ 3ULL ] = - ( intrm_sf_mf_71 * 5.54062238439351E+34 ) ; } else if ( t14 -> mM . mX [ 91ULL ] != 0 ) { out -> mDNF . mX [ 3ULL ] = - ( intrm_sf_mf_71 * 4.9060947306492808E-35 ) ; } else { out -> mDNF . mX [ 3ULL ] = - ( pmf_exp ( t7 ) * intrm_sf_mf_71 ) ; } ( void ) LC ; ( void ) out ; return 0 ; }
