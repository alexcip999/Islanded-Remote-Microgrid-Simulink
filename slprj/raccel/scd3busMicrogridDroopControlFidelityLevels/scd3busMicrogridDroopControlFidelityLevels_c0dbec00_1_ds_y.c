#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_y ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t84 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mY . mX [ 0ULL ] = ( t84 -> mX . mX [ 34ULL ] *
0.003102687007525359 + t84 -> mX . mX [ 94ULL ] * 3.1026870075253588E-9 ) +
t84 -> mX . mX [ 60ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 1ULL ] =
( t84 -> mX . mX [ 35ULL ] * 0.003102687007525359 + t84 -> mX . mX [ 95ULL ]
* 3.1026870075253588E-9 ) + t84 -> mX . mX [ 61ULL ] * - 0.003102687007525359
; out -> mY . mX [ 2ULL ] = ( t84 -> mX . mX [ 36ULL ] * 0.003102687007525359
+ t84 -> mX . mX [ 96ULL ] * 3.1026870075253588E-9 ) + t84 -> mX . mX [ 62ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 3ULL ] = t84 -> mX . mX [ 0ULL
] * 0.00322301281945155 + t84 -> mX . mX [ 60ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 4ULL ] = t84 -> mX . mX [ 1ULL ] * 0.00322301281945155 + t84
-> mX . mX [ 61ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 5ULL ] = t84
-> mX . mX [ 2ULL ] * 0.00322301281945155 + t84 -> mX . mX [ 62ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 6ULL ] = ( t84 -> mX . mX [ 60ULL ]
* 1.0E-6 + t84 -> mX . mX [ 0ULL ] ) - ( t84 -> mX . mX [ 61ULL ] * 1.0E-6 +
t84 -> mX . mX [ 1ULL ] ) ; out -> mY . mX [ 7ULL ] = - t84 -> mX . mX [
112ULL ] ; out -> mY . mX [ 8ULL ] = t84 -> mX . mX [ 114ULL ] ; out -> mY .
mX [ 9ULL ] = ( t84 -> mX . mX [ 33ULL ] + t84 -> mX . mX [ 93ULL ] ) - t84
-> mX . mX [ 93ULL ] ; out -> mY . mX [ 10ULL ] = ( t84 -> mX . mX [ 41ULL ]
* 0.003102687007525359 + t84 -> mX . mX [ 125ULL ] * 3.1026870075253588E-9 )
+ t84 -> mX . mX [ 63ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 11ULL
] = ( t84 -> mX . mX [ 42ULL ] * 0.003102687007525359 + t84 -> mX . mX [
126ULL ] * 3.1026870075253588E-9 ) + t84 -> mX . mX [ 64ULL ] * -
0.003102687007525359 ; out -> mY . mX [ 12ULL ] = ( t84 -> mX . mX [ 43ULL ]
* 0.003102687007525359 + t84 -> mX . mX [ 127ULL ] * 3.1026870075253588E-9 )
+ t84 -> mX . mX [ 65ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 13ULL
] = t84 -> mX . mX [ 6ULL ] * 0.00322301281945155 + t84 -> mX . mX [ 63ULL ]
* 3.2230128194515496E-9 ; out -> mY . mX [ 14ULL ] = t84 -> mX . mX [ 7ULL ]
* 0.00322301281945155 + t84 -> mX . mX [ 64ULL ] * 3.2230128194515496E-9 ;
out -> mY . mX [ 15ULL ] = t84 -> mX . mX [ 8ULL ] * 0.00322301281945155 +
t84 -> mX . mX [ 65ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 16ULL ] =
( t84 -> mX . mX [ 63ULL ] * 1.0E-6 + t84 -> mX . mX [ 6ULL ] ) - ( t84 -> mX
. mX [ 64ULL ] * 1.0E-6 + t84 -> mX . mX [ 7ULL ] ) ; out -> mY . mX [ 17ULL
] = - t84 -> mX . mX [ 143ULL ] ; out -> mY . mX [ 18ULL ] = t84 -> mX . mX [
145ULL ] ; out -> mY . mX [ 19ULL ] = ( t84 -> mX . mX [ 40ULL ] + t84 -> mX
. mX [ 124ULL ] ) - t84 -> mX . mX [ 124ULL ] ; out -> mY . mX [ 20ULL ] = ( t84
-> mX . mX [ 48ULL ] * 0.003102687007525359 + t84 -> mX . mX [ 156ULL ] *
3.1026870075253588E-9 ) + t84 -> mX . mX [ 66ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 21ULL ] = ( t84 -> mX . mX [ 49ULL ] * 0.003102687007525359
+ t84 -> mX . mX [ 157ULL ] * 3.1026870075253588E-9 ) + t84 -> mX . mX [
67ULL ] * - 0.003102687007525359 ; out -> mY . mX [ 22ULL ] = ( t84 -> mX .
mX [ 50ULL ] * 0.003102687007525359 + t84 -> mX . mX [ 158ULL ] *
3.1026870075253588E-9 ) + t84 -> mX . mX [ 68ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 23ULL ] = t84 -> mX . mX [ 12ULL ] * 0.00322301281945155 +
t84 -> mX . mX [ 66ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 24ULL ] =
t84 -> mX . mX [ 13ULL ] * 0.00322301281945155 + t84 -> mX . mX [ 67ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 25ULL ] = t84 -> mX . mX [ 14ULL ] *
0.00322301281945155 + t84 -> mX . mX [ 68ULL ] * 3.2230128194515496E-9 ; out
-> mY . mX [ 26ULL ] = ( t84 -> mX . mX [ 66ULL ] * 1.0E-6 + t84 -> mX . mX [
12ULL ] ) - ( t84 -> mX . mX [ 67ULL ] * 1.0E-6 + t84 -> mX . mX [ 13ULL ] )
; out -> mY . mX [ 27ULL ] = - t84 -> mX . mX [ 174ULL ] ; out -> mY . mX [
28ULL ] = t84 -> mX . mX [ 176ULL ] ; out -> mY . mX [ 29ULL ] = ( t84 -> mX
. mX [ 47ULL ] + t84 -> mX . mX [ 155ULL ] ) - t84 -> mX . mX [ 155ULL ] ;
out -> mY . mX [ 30ULL ] = ( t84 -> mX . mX [ 30ULL ] * 0.003102687007525359
+ t84 -> mX . mX [ 75ULL ] * 3.1026870075253588E-9 ) + t84 -> mX . mX [ 69ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 31ULL ] = ( t84 -> mX . mX [
31ULL ] * 0.003102687007525359 + t84 -> mX . mX [ 76ULL ] *
3.1026870075253588E-9 ) + t84 -> mX . mX [ 70ULL ] * - 0.003102687007525359 ;
out -> mY . mX [ 32ULL ] = ( t84 -> mX . mX [ 32ULL ] * 0.003102687007525359
+ t84 -> mX . mX [ 77ULL ] * 3.1026870075253588E-9 ) + t84 -> mX . mX [ 71ULL
] * - 0.003102687007525359 ; out -> mY . mX [ 33ULL ] = t84 -> mX . mX [
21ULL ] * 0.00322301281945155 + t84 -> mX . mX [ 69ULL ] *
3.2230128194515496E-9 ; out -> mY . mX [ 34ULL ] = t84 -> mX . mX [ 22ULL ] *
0.00322301281945155 + t84 -> mX . mX [ 70ULL ] * 3.2230128194515496E-9 ; out
-> mY . mX [ 35ULL ] = t84 -> mX . mX [ 23ULL ] * 0.00322301281945155 + t84
-> mX . mX [ 71ULL ] * 3.2230128194515496E-9 ; out -> mY . mX [ 36ULL ] = ( t84
-> mX . mX [ 69ULL ] * 1.0E-6 + t84 -> mX . mX [ 21ULL ] ) - ( t84 -> mX . mX
[ 70ULL ] * 1.0E-6 + t84 -> mX . mX [ 22ULL ] ) ; out -> mY . mX [ 37ULL ] =
- t84 -> mX . mX [ 186ULL ] ; out -> mY . mX [ 38ULL ] = t84 -> mX . mX [
188ULL ] ; out -> mY . mX [ 39ULL ] = ( t84 -> mX . mX [ 29ULL ] + t84 -> mX
. mX [ 74ULL ] ) - t84 -> mX . mX [ 74ULL ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
