#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_y.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_ds_y ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t39 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mY . mX [ 0ULL ] = ( t39 -> mX . mX [ 10ULL ] *
0.003102687007525359 + t39 -> mX . mX [ 46ULL ] * 3.1026870075253588E-9 ) +
t39 -> mX . mX [ 49ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 1ULL ] =
( t39 -> mX . mX [ 11ULL ] * 0.003102687007525359 + t39 -> mX . mX [ 47ULL ]
* 3.1026870075253588E-9 ) + t39 -> mX . mX [ 50ULL ] * - 0.003102687007525359
; out -> mY . mX [ 2ULL ] = ( t39 -> mX . mX [ 12ULL ] * 0.003102687007525359
+ t39 -> mX . mX [ 48ULL ] * 3.1026870075253588E-9 ) + t39 -> mX . mX [ 51ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 3ULL ] = t39 -> mX . mX [ 7ULL
] * 0.00322301281945155 + t39 -> mX . mX [ 49ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 4ULL ] = t39 -> mX . mX [ 8ULL ] * 0.00322301281945155 + t39
-> mX . mX [ 50ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 5ULL ] = t39
-> mX . mX [ 9ULL ] * 0.00322301281945155 + t39 -> mX . mX [ 51ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 6ULL ] = - t39 -> mX . mX [ 67ULL ]
; out -> mY . mX [ 7ULL ] = t39 -> mX . mX [ 68ULL ] ; out -> mY . mX [ 8ULL
] = ( t39 -> mX . mX [ 23ULL ] * 0.003102687007525359 + t39 -> mX . mX [
80ULL ] * 3.1026870075253588E-9 ) + t39 -> mX . mX [ 83ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 9ULL ] = ( t39 -> mX . mX [ 24ULL ] *
0.003102687007525359 + t39 -> mX . mX [ 81ULL ] * 3.1026870075253588E-9 ) +
t39 -> mX . mX [ 84ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 10ULL ]
= ( t39 -> mX . mX [ 25ULL ] * 0.003102687007525359 + t39 -> mX . mX [ 82ULL
] * 3.1026870075253588E-9 ) + t39 -> mX . mX [ 85ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 11ULL ] = t39 -> mX . mX [ 20ULL ] *
0.00322301281945155 + t39 -> mX . mX [ 83ULL ] * 3.2230128194515496E-9 ; out
-> mY . mX [ 12ULL ] = t39 -> mX . mX [ 21ULL ] * 0.00322301281945155 + t39
-> mX . mX [ 84ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 13ULL ] = t39
-> mX . mX [ 22ULL ] * 0.00322301281945155 + t39 -> mX . mX [ 85ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 14ULL ] = - t39 -> mX . mX [ 101ULL
] ; out -> mY . mX [ 15ULL ] = t39 -> mX . mX [ 102ULL ] ; ( void ) LC ; ( void
) out ; return 0 ; }
