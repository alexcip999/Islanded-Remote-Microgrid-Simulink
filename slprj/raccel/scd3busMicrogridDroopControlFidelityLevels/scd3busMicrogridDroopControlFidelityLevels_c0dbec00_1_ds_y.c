#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t41 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mY . mX [ 0ULL ] = ( t41 -> mX . mX [ 10ULL ] *
0.003102687007525359 + t41 -> mX . mX [ 46ULL ] * 3.1026870075253588E-9 ) +
t41 -> mX . mX [ 49ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 1ULL ] =
( t41 -> mX . mX [ 11ULL ] * 0.003102687007525359 + t41 -> mX . mX [ 47ULL ]
* 3.1026870075253588E-9 ) + t41 -> mX . mX [ 50ULL ] * - 0.003102687007525359
; out -> mY . mX [ 2ULL ] = ( t41 -> mX . mX [ 12ULL ] * 0.003102687007525359
+ t41 -> mX . mX [ 48ULL ] * 3.1026870075253588E-9 ) + t41 -> mX . mX [ 51ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 3ULL ] = t41 -> mX . mX [ 7ULL
] * 0.00322301281945155 + t41 -> mX . mX [ 49ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 4ULL ] = t41 -> mX . mX [ 8ULL ] * 0.00322301281945155 + t41
-> mX . mX [ 50ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 5ULL ] = t41
-> mX . mX [ 9ULL ] * 0.00322301281945155 + t41 -> mX . mX [ 51ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 6ULL ] = ( t41 -> mX . mX [ 49ULL ]
* 1.0E-6 + t41 -> mX . mX [ 7ULL ] ) - ( t41 -> mX . mX [ 50ULL ] * 1.0E-6 +
t41 -> mX . mX [ 8ULL ] ) ; out -> mY . mX [ 7ULL ] = ( t41 -> mX . mX [
17ULL ] * 0.003102687007525359 + t41 -> mX . mX [ 69ULL ] *
3.1026870075253588E-9 ) + t41 -> mX . mX [ 72ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 8ULL ] = ( t41 -> mX . mX [ 18ULL ] * 0.003102687007525359 +
t41 -> mX . mX [ 70ULL ] * 3.1026870075253588E-9 ) + t41 -> mX . mX [ 73ULL ]
* - 0.003102687007525359 ; out -> mY . mX [ 9ULL ] = ( t41 -> mX . mX [ 19ULL
] * 0.003102687007525359 + t41 -> mX . mX [ 71ULL ] * 3.1026870075253588E-9 )
+ t41 -> mX . mX [ 74ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 10ULL
] = t41 -> mX . mX [ 14ULL ] * 0.00322301281945155 + t41 -> mX . mX [ 72ULL ]
* 3.2230128194515496E-9 ; out -> mY . mX [ 11ULL ] = t41 -> mX . mX [ 15ULL ]
* 0.00322301281945155 + t41 -> mX . mX [ 73ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 12ULL ] = t41 -> mX . mX [ 16ULL ] * 0.00322301281945155 +
t41 -> mX . mX [ 74ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 13ULL ] =
( t41 -> mX . mX [ 72ULL ] * 1.0E-6 + t41 -> mX . mX [ 14ULL ] ) - ( t41 ->
mX . mX [ 73ULL ] * 1.0E-6 + t41 -> mX . mX [ 15ULL ] ) ; out -> mY . mX [
14ULL ] = - t41 -> mX . mX [ 90ULL ] ; out -> mY . mX [ 15ULL ] = t41 -> mX .
mX [ 91ULL ] ; out -> mY . mX [ 16ULL ] = - t41 -> mX . mX [ 101ULL ] ; out
-> mY . mX [ 17ULL ] = t41 -> mX . mX [ 102ULL ] ; ( void ) LC ; ( void ) out
; return 0 ; }
