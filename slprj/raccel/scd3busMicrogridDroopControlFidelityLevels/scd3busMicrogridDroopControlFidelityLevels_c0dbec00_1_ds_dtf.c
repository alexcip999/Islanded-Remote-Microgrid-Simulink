#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dtf.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_dtf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t45 , NeDsMethodOutput *
out ) { real_T t12 ; real_T t13 ; real_T t20 ; real_T t26 ; real_T t27 ;
real_T t40 ; real_T t41 ; real_T t43 ; ( void ) LC ; t41 = t45 -> mT . mX [
0ULL ] * 376.99111843077515 - 1.5707963267948966 ; t43 = ( t45 -> mT . mX [
0ULL ] * 376.99111843077515 - 2.0943951023931953 ) - 1.5707963267948966 ; t20
= ( t45 -> mT . mX [ 0ULL ] * 376.99111843077515 + 2.0943951023931953 ) -
1.5707963267948966 ; t27 = - sin ( t41 ) * 376.99111843077515 *
0.66666666666666663 ; t40 = - sin ( t43 ) * 376.99111843077515 *
0.66666666666666663 ; t26 = - sin ( t20 ) * 376.99111843077515 *
0.66666666666666663 ; t12 = ( t45 -> mX . mX [ 57ULL ] * t27 + t45 -> mX . mX
[ 58ULL ] * t40 ) + t45 -> mX . mX [ 59ULL ] * t26 ; t27 = - ( cos ( t41 ) *
376.99111843077515 ) * 0.66666666666666663 ; t40 = - ( cos ( t43 ) *
376.99111843077515 ) * 0.66666666666666663 ; t26 = - ( cos ( t20 ) *
376.99111843077515 ) * 0.66666666666666663 ; t13 = ( t45 -> mX . mX [ 57ULL ]
* t27 + t45 -> mX . mX [ 58ULL ] * t40 ) + t45 -> mX . mX [ 59ULL ] * t26 ;
t27 = - sin ( t41 ) * 376.99111843077515 ; t40 = - ( cos ( t41 ) *
376.99111843077515 ) ; t41 = - sin ( t43 ) * 376.99111843077515 ; t26 = - ( cos
( t43 ) * 376.99111843077515 ) ; t43 = - sin ( t20 ) * 376.99111843077515 ;
t20 = - ( cos ( t20 ) * 376.99111843077515 ) ; out -> mDTF . mX [ 0ULL ] =
t12 ; out -> mDTF . mX [ 1ULL ] = t13 ; out -> mDTF . mX [ 2ULL ] = - ( t27 *
t45 -> mX . mX [ 72ULL ] + t40 * t45 -> mX . mX [ 73ULL ] ) ; out -> mDTF .
mX [ 3ULL ] = - ( t41 * t45 -> mX . mX [ 72ULL ] + t26 * t45 -> mX . mX [
73ULL ] ) ; out -> mDTF . mX [ 4ULL ] = - ( t43 * t45 -> mX . mX [ 72ULL ] +
t20 * t45 -> mX . mX [ 73ULL ] ) ; ( void ) LC ; ( void ) out ; return 0 ; }
