#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t58 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mY . mX [ 0ULL ] = ( t58 -> mX . mX [ 13ULL ] *
0.003102687007525359 + t58 -> mX . mX [ 56ULL ] * 3.1026870075253588E-9 ) +
t58 -> mX . mX [ 59ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 1ULL ] =
( t58 -> mX . mX [ 14ULL ] * 0.003102687007525359 + t58 -> mX . mX [ 57ULL ]
* 3.1026870075253588E-9 ) + t58 -> mX . mX [ 60ULL ] * - 0.003102687007525359
; out -> mY . mX [ 2ULL ] = ( t58 -> mX . mX [ 15ULL ] * 0.003102687007525359
+ t58 -> mX . mX [ 58ULL ] * 3.1026870075253588E-9 ) + t58 -> mX . mX [ 61ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 3ULL ] = t58 -> mX . mX [ 10ULL
] * 0.00322301281945155 + t58 -> mX . mX [ 59ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 4ULL ] = t58 -> mX . mX [ 11ULL ] * 0.00322301281945155 +
t58 -> mX . mX [ 60ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 5ULL ] =
t58 -> mX . mX [ 12ULL ] * 0.00322301281945155 + t58 -> mX . mX [ 61ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 6ULL ] = - t58 -> mX . mX [ 77ULL ]
; out -> mY . mX [ 7ULL ] = t58 -> mX . mX [ 78ULL ] ; out -> mY . mX [ 8ULL
] = ( t58 -> mX . mX [ 26ULL ] * 0.003102687007525359 + t58 -> mX . mX [
90ULL ] * 3.1026870075253588E-9 ) + t58 -> mX . mX [ 93ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 9ULL ] = ( t58 -> mX . mX [ 27ULL ] *
0.003102687007525359 + t58 -> mX . mX [ 91ULL ] * 3.1026870075253588E-9 ) +
t58 -> mX . mX [ 94ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 10ULL ]
= ( t58 -> mX . mX [ 28ULL ] * 0.003102687007525359 + t58 -> mX . mX [ 92ULL
] * 3.1026870075253588E-9 ) + t58 -> mX . mX [ 95ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 11ULL ] = t58 -> mX . mX [ 23ULL ] *
0.00322301281945155 + t58 -> mX . mX [ 93ULL ] * 3.2230128194515496E-9 ; out
-> mY . mX [ 12ULL ] = t58 -> mX . mX [ 24ULL ] * 0.00322301281945155 + t58
-> mX . mX [ 94ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 13ULL ] = t58
-> mX . mX [ 25ULL ] * 0.00322301281945155 + t58 -> mX . mX [ 95ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 14ULL ] = - t58 -> mX . mX [ 111ULL
] ; out -> mY . mX [ 15ULL ] = t58 -> mX . mX [ 112ULL ] ; out -> mY . mX [
16ULL ] = ( t58 -> mX . mX [ 36ULL ] * 0.003102687007525359 + t58 -> mX . mX
[ 124ULL ] * 3.1026870075253588E-9 ) + t58 -> mX . mX [ 48ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 17ULL ] = ( t58 -> mX . mX [ 37ULL ]
* 0.003102687007525359 + t58 -> mX . mX [ 125ULL ] * 3.1026870075253588E-9 )
+ t58 -> mX . mX [ 49ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 18ULL
] = ( t58 -> mX . mX [ 38ULL ] * 0.003102687007525359 + t58 -> mX . mX [
126ULL ] * 3.1026870075253588E-9 ) + t58 -> mX . mX [ 50ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 19ULL ] = t58 -> mX . mX [ 3ULL ] *
0.00322301281945155 + t58 -> mX . mX [ 48ULL ] * 3.2230128194515496E-9 ; out
-> mY . mX [ 20ULL ] = t58 -> mX . mX [ 4ULL ] * 0.00322301281945155 + t58 ->
mX . mX [ 49ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 21ULL ] = t58 ->
mX . mX [ 5ULL ] * 0.00322301281945155 + t58 -> mX . mX [ 50ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 22ULL ] = - t58 -> mX . mX [ 142ULL
] ; out -> mY . mX [ 23ULL ] = t58 -> mX . mX [ 143ULL ] ; ( void ) LC ; ( void
) out ; return 0 ; }
