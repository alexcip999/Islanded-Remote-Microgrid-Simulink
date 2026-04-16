#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_duf.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_duf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t19 , NeDsMethodOutput *
out ) { real_T intermediate_der552 ; real_T intermediate_der553 ; real_T t18
; real_T zc_int14 ; ( void ) LC ; if ( t19 -> mM . mX [ 4ULL ] != 0 ) { t18 =
0.99 ; } else { t18 = t19 -> mM . mX [ 5ULL ] != 0 ? 0.0 : t19 -> mU . mX [
8ULL ] ; } if ( t19 -> mM . mX [ 7ULL ] != 0 ) { zc_int14 = 0.99 ; } else {
zc_int14 = t19 -> mM . mX [ 8ULL ] != 0 ? 0.0 : t19 -> mU . mX [ 16ULL ] ; }
if ( t19 -> mM . mX [ 4ULL ] != 0 ) { intermediate_der552 = 0.0 ; } else {
intermediate_der552 = ( real_T ) ( t19 -> mM . mX [ 5ULL ] == 0 ) ; } if ( t19
-> mM . mX [ 7ULL ] != 0 ) { intermediate_der553 = 0.0 ; } else {
intermediate_der553 = ( real_T ) ( t19 -> mM . mX [ 8ULL ] == 0 ) ; } if ( t19
-> mM . mX [ 26ULL ] != 0 ) { out -> mDUF . mX [ 2ULL ] = - ( ( ( t19 -> mX .
mX [ 69ULL ] - 298.15 ) * 0.000499942933005141 + 1.0 ) * 81.120044060064 /
1000.0 ) ; } else { out -> mDUF . mX [ 2ULL ] = 0.0 ; } if ( t19 -> mM . mX [
43ULL ] != 0 ) { out -> mDUF . mX [ 5ULL ] = - ( ( ( t19 -> mX . mX [ 103ULL
] - 298.15 ) * 0.000499942933005141 + 1.0 ) * 70.98003855255601 / 1000.0 ) ;
} else { out -> mDUF . mX [ 5ULL ] = 0.0 ; } t18 = ( 1.0 - t18 ) * ( 1.0 -
t18 ) ; out -> mDUF . mX [ 0ULL ] = - ( - intermediate_der552 * ( - t19 -> mX
. mX [ 68ULL ] / ( t18 == 0.0 ? 1.0E-16 : t18 ) ) ) ; out -> mDUF . mX [ 1ULL
] = - ( - intermediate_der552 * ( - ( ( ( ( ( ( ( t19 -> mX . mX [ 44ULL ] *
1.0E-12 - t19 -> mX . mX [ 54ULL ] ) - t19 -> mX . mX [ 59ULL ] ) - t19 -> mX
. mX [ 64ULL ] ) - t19 -> mX . mX [ 45ULL ] ) + t19 -> mX . mX [ 53ULL ] ) +
t19 -> mX . mX [ 58ULL ] ) + t19 -> mX . mX [ 63ULL ] ) / ( t18 == 0.0 ?
1.0E-16 : t18 ) ) ) ; t18 = ( 1.0 - zc_int14 ) * ( 1.0 - zc_int14 ) ; out ->
mDUF . mX [ 3ULL ] = - ( - intermediate_der553 * ( - t19 -> mX . mX [ 102ULL
] / ( t18 == 0.0 ? 1.0E-16 : t18 ) ) ) ; out -> mDUF . mX [ 4ULL ] = - ( -
intermediate_der553 * ( - ( ( ( ( ( ( ( t19 -> mX . mX [ 78ULL ] * 1.0E-12 -
t19 -> mX . mX [ 88ULL ] ) - t19 -> mX . mX [ 93ULL ] ) - t19 -> mX . mX [
98ULL ] ) - t19 -> mX . mX [ 79ULL ] ) + t19 -> mX . mX [ 87ULL ] ) + t19 ->
mX . mX [ 92ULL ] ) + t19 -> mX . mX [ 97ULL ] ) / ( t18 == 0.0 ? 1.0E-16 :
t18 ) ) ) ; ( void ) LC ; ( void ) out ; return 0 ; }
