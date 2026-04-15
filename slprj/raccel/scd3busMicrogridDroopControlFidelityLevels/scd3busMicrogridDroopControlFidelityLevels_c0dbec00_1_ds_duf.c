#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_duf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t19 , NeDsMethodOutput *
out ) { real_T intermediate_der554 ; real_T intermediate_der555 ; real_T t18
; real_T zc_int14 ; ( void ) LC ; if ( t19 -> mM . mX [ 4ULL ] != 0 ) { t18 =
0.99 ; } else { t18 = t19 -> mM . mX [ 5ULL ] != 0 ? 0.0 : t19 -> mU . mX [
14ULL ] ; } if ( t19 -> mM . mX [ 7ULL ] != 0 ) { zc_int14 = 0.99 ; } else {
zc_int14 = t19 -> mM . mX [ 8ULL ] != 0 ? 0.0 : t19 -> mU . mX [ 16ULL ] ; }
if ( t19 -> mM . mX [ 4ULL ] != 0 ) { intermediate_der554 = 0.0 ; } else {
intermediate_der554 = ( real_T ) ( t19 -> mM . mX [ 5ULL ] == 0 ) ; } if ( t19
-> mM . mX [ 7ULL ] != 0 ) { intermediate_der555 = 0.0 ; } else {
intermediate_der555 = ( real_T ) ( t19 -> mM . mX [ 8ULL ] == 0 ) ; } if ( t19
-> mM . mX [ 39ULL ] != 0 ) { out -> mDUF . mX [ 2ULL ] = - ( ( ( t19 -> mX .
mX [ 92ULL ] - 298.15 ) * 0.000499942933005141 + 1.0 ) * 70.98003855255601 /
1000.0 ) ; } else { out -> mDUF . mX [ 2ULL ] = 0.0 ; } if ( t19 -> mM . mX [
43ULL ] != 0 ) { out -> mDUF . mX [ 5ULL ] = - ( ( ( t19 -> mX . mX [ 103ULL
] - 298.15 ) * 0.000499942933005141 + 1.0 ) * 70.98003855255601 / 1000.0 ) ;
} else { out -> mDUF . mX [ 5ULL ] = 0.0 ; } t18 = ( 1.0 - t18 ) * ( 1.0 -
t18 ) ; out -> mDUF . mX [ 0ULL ] = - ( - intermediate_der554 * ( - t19 -> mX
. mX [ 91ULL ] / ( t18 == 0.0 ? 1.0E-16 : t18 ) ) ) ; out -> mDUF . mX [ 1ULL
] = - ( - intermediate_der554 * ( - ( ( ( ( ( ( ( t19 -> mX . mX [ 67ULL ] *
1.0E-12 - t19 -> mX . mX [ 77ULL ] ) - t19 -> mX . mX [ 82ULL ] ) - t19 -> mX
. mX [ 87ULL ] ) - t19 -> mX . mX [ 68ULL ] ) + t19 -> mX . mX [ 76ULL ] ) +
t19 -> mX . mX [ 81ULL ] ) + t19 -> mX . mX [ 86ULL ] ) / ( t18 == 0.0 ?
1.0E-16 : t18 ) ) ) ; t18 = ( 1.0 - zc_int14 ) * ( 1.0 - zc_int14 ) ; out ->
mDUF . mX [ 3ULL ] = - ( - intermediate_der555 * ( - t19 -> mX . mX [ 102ULL
] / ( t18 == 0.0 ? 1.0E-16 : t18 ) ) ) ; out -> mDUF . mX [ 4ULL ] = - ( -
intermediate_der555 * ( - ( ( ( ( ( ( ( t19 -> mX . mX [ 44ULL ] * 1.0E-12 -
t19 -> mX . mX [ 54ULL ] ) - t19 -> mX . mX [ 59ULL ] ) - t19 -> mX . mX [
64ULL ] ) - t19 -> mX . mX [ 45ULL ] ) + t19 -> mX . mX [ 53ULL ] ) + t19 ->
mX . mX [ 58ULL ] ) + t19 -> mX . mX [ 63ULL ] ) / ( t18 == 0.0 ? 1.0E-16 :
t18 ) ) ) ; ( void ) LC ; ( void ) out ; return 0 ; }
