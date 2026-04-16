#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t108 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [
1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] =
0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out
-> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR .
mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [
10ULL ] = 0.0 ; out -> mICR . mX [ 11ULL ] = 0.0 ; out -> mICR . mX [ 12ULL ]
= 0.0 ; out -> mICR . mX [ 13ULL ] = 0.0 ; out -> mICR . mX [ 14ULL ] = 0.0 ;
out -> mICR . mX [ 15ULL ] = 0.0 ; out -> mICR . mX [ 16ULL ] = 0.0 ; out ->
mICR . mX [ 17ULL ] = 0.0 ; out -> mICR . mX [ 18ULL ] = t108 -> mX . mX [
0ULL ] - - 6.544606663240577 ; out -> mICR . mX [ 19ULL ] = t108 -> mX . mX [
1ULL ] - 3.2723033316202907 ; out -> mICR . mX [ 20ULL ] = t108 -> mX . mX [
2ULL ] - 3.2723033316202872 ; out -> mICR . mX [ 21ULL ] = 0.0 ; out -> mICR
. mX [ 22ULL ] = 0.0 ; out -> mICR . mX [ 23ULL ] = 0.0 ; out -> mICR . mX [
24ULL ] = t108 -> mX . mX [ 9ULL ] - t108 -> mP_R . mX [ 3ULL ] ; out -> mICR
. mX [ 25ULL ] = t108 -> mX . mX [ 10ULL ] - t108 -> mP_R . mX [ 4ULL ] ; out
-> mICR . mX [ 26ULL ] = t108 -> mX . mX [ 11ULL ] - t108 -> mP_R . mX [ 5ULL
] ; out -> mICR . mX [ 27ULL ] = 0.0 ; out -> mICR . mX [ 28ULL ] = 0.0 ; out
-> mICR . mX [ 29ULL ] = 0.0 ; out -> mICR . mX [ 30ULL ] = t108 -> mX . mX [
6ULL ] - t108 -> mP_R . mX [ 0ULL ] ; out -> mICR . mX [ 31ULL ] = t108 -> mX
. mX [ 7ULL ] - t108 -> mP_R . mX [ 1ULL ] ; out -> mICR . mX [ 32ULL ] =
t108 -> mX . mX [ 8ULL ] - t108 -> mP_R . mX [ 2ULL ] ; out -> mICR . mX [
33ULL ] = 0.0 ; out -> mICR . mX [ 34ULL ] = 0.0 ; out -> mICR . mX [ 35ULL ]
= 0.0 ; out -> mICR . mX [ 36ULL ] = 0.0 ; out -> mICR . mX [ 37ULL ] = 0.0 ;
out -> mICR . mX [ 38ULL ] = 0.0 ; out -> mICR . mX [ 39ULL ] = 0.0 ; out ->
mICR . mX [ 40ULL ] = 0.0 ; out -> mICR . mX [ 41ULL ] = 0.0 ; out -> mICR .
mX [ 42ULL ] = 0.0 ; out -> mICR . mX [ 43ULL ] = 0.0 ; out -> mICR . mX [
44ULL ] = 0.0 ; out -> mICR . mX [ 45ULL ] = t108 -> mX . mX [ 3ULL ] ; out
-> mICR . mX [ 46ULL ] = t108 -> mX . mX [ 4ULL ] - - 268.70057685088796 ;
out -> mICR . mX [ 47ULL ] = t108 -> mX . mX [ 5ULL ] - 268.70057685088807 ;
out -> mICR . mX [ 48ULL ] = 0.0 ; out -> mICR . mX [ 49ULL ] = 0.0 ; out ->
mICR . mX [ 50ULL ] = 0.0 ; out -> mICR . mX [ 51ULL ] = 0.0 ; out -> mICR .
mX [ 52ULL ] = 0.0 ; out -> mICR . mX [ 53ULL ] = 0.0 ; out -> mICR . mX [
54ULL ] = 0.0 ; out -> mICR . mX [ 55ULL ] = 0.0 ; out -> mICR . mX [ 56ULL ]
= 0.0 ; out -> mICR . mX [ 57ULL ] = t108 -> mX . mX [ 21ULL ] ; out -> mICR
. mX [ 58ULL ] = t108 -> mX . mX [ 22ULL ] - - 268.70057685088796 ; out ->
mICR . mX [ 59ULL ] = t108 -> mX . mX [ 23ULL ] - 268.70057685088807 ; out ->
mICR . mX [ 60ULL ] = 0.0 ; out -> mICR . mX [ 61ULL ] = 0.0 ; out -> mICR .
mX [ 62ULL ] = 0.0 ; out -> mICR . mX [ 63ULL ] = 0.0 ; out -> mICR . mX [
64ULL ] = 0.0 ; out -> mICR . mX [ 65ULL ] = 0.0 ; out -> mICR . mX [ 66ULL ]
= t108 -> mX . mX [ 12ULL ] - - 35.311769484714581 ; out -> mICR . mX [ 67ULL
] = t108 -> mX . mX [ 13ULL ] - 17.655884742357305 ; out -> mICR . mX [ 68ULL
] = t108 -> mX . mX [ 14ULL ] - 17.655884742357284 ; out -> mICR . mX [ 69ULL
] = 0.0 ; out -> mICR . mX [ 70ULL ] = 0.0 ; out -> mICR . mX [ 71ULL ] = 0.0
; out -> mICR . mX [ 72ULL ] = 0.0 ; out -> mICR . mX [ 73ULL ] = 0.0 ; out
-> mICR . mX [ 74ULL ] = 0.0 ; out -> mICR . mX [ 75ULL ] = 0.0 ; out -> mICR
. mX [ 76ULL ] = 0.0 ; out -> mICR . mX [ 77ULL ] = 0.0 ; out -> mICR . mX [
78ULL ] = t108 -> mX . mX [ 15ULL ] - - 35.311769484714581 ; out -> mICR . mX
[ 79ULL ] = t108 -> mX . mX [ 16ULL ] - 17.655884742357305 ; out -> mICR . mX
[ 80ULL ] = t108 -> mX . mX [ 17ULL ] - 17.655884742357284 ; out -> mICR . mX
[ 81ULL ] = 0.0 ; out -> mICR . mX [ 82ULL ] = 0.0 ; out -> mICR . mX [ 83ULL
] = 0.0 ; out -> mICR . mX [ 84ULL ] = 0.0 ; out -> mICR . mX [ 85ULL ] = 0.0
; out -> mICR . mX [ 86ULL ] = 0.0 ; out -> mICR . mX [ 87ULL ] = 0.0 ; out
-> mICR . mX [ 88ULL ] = 0.0 ; out -> mICR . mX [ 89ULL ] = 0.0 ; out -> mICR
. mX [ 90ULL ] = t108 -> mX . mX [ 18ULL ] - - 52.967654227071876 ; out ->
mICR . mX [ 91ULL ] = t108 -> mX . mX [ 19ULL ] - 26.483827113535959 ; out ->
mICR . mX [ 92ULL ] = t108 -> mX . mX [ 20ULL ] - 26.483827113535927 ; out ->
mICR . mX [ 93ULL ] = 0.0 ; out -> mICR . mX [ 94ULL ] = 0.0 ; out -> mICR .
mX [ 95ULL ] = 0.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
