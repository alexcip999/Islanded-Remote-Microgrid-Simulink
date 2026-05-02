#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t201 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [
1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] =
0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out
-> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR .
mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [
10ULL ] = 0.0 ; out -> mICR . mX [ 11ULL ] = 0.0 ; out -> mICR . mX [ 12ULL ]
= 0.0 ; out -> mICR . mX [ 13ULL ] = 0.0 ; out -> mICR . mX [ 14ULL ] = 0.0 ;
out -> mICR . mX [ 15ULL ] = 0.0 ; out -> mICR . mX [ 16ULL ] = t201 -> mX .
mX [ 34ULL ] - t201 -> mP_R . mX [ 23ULL ] ; out -> mICR . mX [ 17ULL ] =
t201 -> mX . mX [ 35ULL ] - t201 -> mP_R . mX [ 24ULL ] ; out -> mICR . mX [
18ULL ] = t201 -> mX . mX [ 36ULL ] - t201 -> mP_R . mX [ 25ULL ] ; out ->
mICR . mX [ 19ULL ] = 0.0 ; out -> mICR . mX [ 20ULL ] = 0.0 ; out -> mICR .
mX [ 21ULL ] = 0.0 ; out -> mICR . mX [ 22ULL ] = 0.0 ; out -> mICR . mX [
23ULL ] = 0.0 ; out -> mICR . mX [ 24ULL ] = 0.0 ; out -> mICR . mX [ 25ULL ]
= 0.0 ; out -> mICR . mX [ 26ULL ] = 0.0 ; out -> mICR . mX [ 27ULL ] = 0.0 ;
out -> mICR . mX [ 28ULL ] = 0.0 ; out -> mICR . mX [ 29ULL ] = 0.0 ; out ->
mICR . mX [ 30ULL ] = 0.0 ; out -> mICR . mX [ 31ULL ] = t201 -> mX . mX [
0ULL ] ; out -> mICR . mX [ 32ULL ] = t201 -> mX . mX [ 1ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 33ULL ] = t201 -> mX . mX [ 2ULL ] -
268.70057685088807 ; out -> mICR . mX [ 34ULL ] = 0.0 ; out -> mICR . mX [
35ULL ] = 0.0 ; out -> mICR . mX [ 36ULL ] = 0.0 ; out -> mICR . mX [ 37ULL ]
= 0.0 ; out -> mICR . mX [ 38ULL ] = 0.0 ; out -> mICR . mX [ 39ULL ] = 0.0 ;
out -> mICR . mX [ 40ULL ] = t201 -> mX . mX [ 37ULL ] - - 35.311769484714581
; out -> mICR . mX [ 41ULL ] = t201 -> mX . mX [ 38ULL ] - 17.655884742357305
; out -> mICR . mX [ 42ULL ] = t201 -> mX . mX [ 39ULL ] - 17.655884742357284
; out -> mICR . mX [ 43ULL ] = 0.0 ; out -> mICR . mX [ 44ULL ] = 0.0 ; out
-> mICR . mX [ 45ULL ] = 0.0 ; out -> mICR . mX [ 46ULL ] = t201 -> mX . mX [
3ULL ] - t201 -> mP_R . mX [ 7ULL ] ; out -> mICR . mX [ 47ULL ] = t201 -> mX
. mX [ 4ULL ] - t201 -> mP_R . mX [ 8ULL ] ; out -> mICR . mX [ 48ULL ] =
t201 -> mX . mX [ 5ULL ] - t201 -> mP_R . mX [ 9ULL ] ; out -> mICR . mX [
49ULL ] = 0.0 ; out -> mICR . mX [ 50ULL ] = 0.0 ; out -> mICR . mX [ 51ULL ]
= 0.0 ; out -> mICR . mX [ 52ULL ] = 0.0 ; out -> mICR . mX [ 53ULL ] = 0.0 ;
out -> mICR . mX [ 54ULL ] = 0.0 ; out -> mICR . mX [ 55ULL ] = 0.0 ; out ->
mICR . mX [ 56ULL ] = 0.0 ; out -> mICR . mX [ 57ULL ] = 0.0 ; out -> mICR .
mX [ 58ULL ] = 0.0 ; out -> mICR . mX [ 59ULL ] = 0.0 ; out -> mICR . mX [
60ULL ] = 0.0 ; out -> mICR . mX [ 61ULL ] = 0.0 ; out -> mICR . mX [ 62ULL ]
= t201 -> mX . mX [ 41ULL ] - t201 -> mP_R . mX [ 26ULL ] ; out -> mICR . mX
[ 63ULL ] = t201 -> mX . mX [ 42ULL ] - t201 -> mP_R . mX [ 27ULL ] ; out ->
mICR . mX [ 64ULL ] = t201 -> mX . mX [ 43ULL ] - t201 -> mP_R . mX [ 28ULL ]
; out -> mICR . mX [ 65ULL ] = 0.0 ; out -> mICR . mX [ 66ULL ] = 0.0 ; out
-> mICR . mX [ 67ULL ] = 0.0 ; out -> mICR . mX [ 68ULL ] = 0.0 ; out -> mICR
. mX [ 69ULL ] = 0.0 ; out -> mICR . mX [ 70ULL ] = 0.0 ; out -> mICR . mX [
71ULL ] = 0.0 ; out -> mICR . mX [ 72ULL ] = 0.0 ; out -> mICR . mX [ 73ULL ]
= 0.0 ; out -> mICR . mX [ 74ULL ] = 0.0 ; out -> mICR . mX [ 75ULL ] = 0.0 ;
out -> mICR . mX [ 76ULL ] = 0.0 ; out -> mICR . mX [ 77ULL ] = t201 -> mX .
mX [ 6ULL ] ; out -> mICR . mX [ 78ULL ] = t201 -> mX . mX [ 7ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 79ULL ] = t201 -> mX . mX [ 8ULL ] -
268.70057685088807 ; out -> mICR . mX [ 80ULL ] = t201 -> mX . mX [ 9ULL ] -
t201 -> mP_R . mX [ 17ULL ] ; out -> mICR . mX [ 81ULL ] = t201 -> mX . mX [
10ULL ] - t201 -> mP_R . mX [ 18ULL ] ; out -> mICR . mX [ 82ULL ] = t201 ->
mX . mX [ 11ULL ] - t201 -> mP_R . mX [ 19ULL ] ; out -> mICR . mX [ 83ULL ]
= 0.0 ; out -> mICR . mX [ 84ULL ] = 0.0 ; out -> mICR . mX [ 85ULL ] = 0.0 ;
out -> mICR . mX [ 86ULL ] = 0.0 ; out -> mICR . mX [ 87ULL ] = 0.0 ; out ->
mICR . mX [ 88ULL ] = 0.0 ; out -> mICR . mX [ 89ULL ] = 0.0 ; out -> mICR .
mX [ 90ULL ] = 0.0 ; out -> mICR . mX [ 91ULL ] = 0.0 ; out -> mICR . mX [
92ULL ] = t201 -> mX . mX [ 44ULL ] - - 35.311769484714581 ; out -> mICR . mX
[ 93ULL ] = t201 -> mX . mX [ 45ULL ] - 17.655884742357305 ; out -> mICR . mX
[ 94ULL ] = t201 -> mX . mX [ 46ULL ] - 17.655884742357284 ; out -> mICR . mX
[ 95ULL ] = 0.0 ; out -> mICR . mX [ 96ULL ] = 0.0 ; out -> mICR . mX [ 97ULL
] = 0.0 ; out -> mICR . mX [ 98ULL ] = 0.0 ; out -> mICR . mX [ 99ULL ] = 0.0
; out -> mICR . mX [ 100ULL ] = 0.0 ; out -> mICR . mX [ 101ULL ] = 0.0 ; out
-> mICR . mX [ 102ULL ] = 0.0 ; out -> mICR . mX [ 103ULL ] = 0.0 ; out ->
mICR . mX [ 104ULL ] = 0.0 ; out -> mICR . mX [ 105ULL ] = 0.0 ; out -> mICR
. mX [ 106ULL ] = 0.0 ; out -> mICR . mX [ 107ULL ] = 0.0 ; out -> mICR . mX
[ 108ULL ] = t201 -> mX . mX [ 48ULL ] - t201 -> mP_R . mX [ 10ULL ] ; out ->
mICR . mX [ 109ULL ] = t201 -> mX . mX [ 49ULL ] - t201 -> mP_R . mX [ 11ULL
] ; out -> mICR . mX [ 110ULL ] = t201 -> mX . mX [ 50ULL ] - t201 -> mP_R .
mX [ 12ULL ] ; out -> mICR . mX [ 111ULL ] = 0.0 ; out -> mICR . mX [ 112ULL
] = 0.0 ; out -> mICR . mX [ 113ULL ] = 0.0 ; out -> mICR . mX [ 114ULL ] =
0.0 ; out -> mICR . mX [ 115ULL ] = 0.0 ; out -> mICR . mX [ 116ULL ] = 0.0 ;
out -> mICR . mX [ 117ULL ] = 0.0 ; out -> mICR . mX [ 118ULL ] = 0.0 ; out
-> mICR . mX [ 119ULL ] = 0.0 ; out -> mICR . mX [ 120ULL ] = 0.0 ; out ->
mICR . mX [ 121ULL ] = 0.0 ; out -> mICR . mX [ 122ULL ] = 0.0 ; out -> mICR
. mX [ 123ULL ] = t201 -> mX . mX [ 12ULL ] ; out -> mICR . mX [ 124ULL ] =
t201 -> mX . mX [ 13ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 125ULL
] = t201 -> mX . mX [ 14ULL ] - 268.70057685088807 ; out -> mICR . mX [
126ULL ] = 0.0 ; out -> mICR . mX [ 127ULL ] = 0.0 ; out -> mICR . mX [
128ULL ] = 0.0 ; out -> mICR . mX [ 129ULL ] = 0.0 ; out -> mICR . mX [
130ULL ] = 0.0 ; out -> mICR . mX [ 131ULL ] = 0.0 ; out -> mICR . mX [
132ULL ] = t201 -> mX . mX [ 51ULL ] - - 35.311769484714581 ; out -> mICR .
mX [ 133ULL ] = t201 -> mX . mX [ 52ULL ] - 17.655884742357305 ; out -> mICR
. mX [ 134ULL ] = t201 -> mX . mX [ 53ULL ] - 17.655884742357284 ; out ->
mICR . mX [ 135ULL ] = 0.0 ; out -> mICR . mX [ 136ULL ] = 0.0 ; out -> mICR
. mX [ 137ULL ] = 0.0 ; out -> mICR . mX [ 138ULL ] = t201 -> mX . mX [ 15ULL
] - t201 -> mP_R . mX [ 13ULL ] ; out -> mICR . mX [ 139ULL ] = t201 -> mX .
mX [ 16ULL ] - t201 -> mP_R . mX [ 14ULL ] ; out -> mICR . mX [ 140ULL ] =
t201 -> mX . mX [ 17ULL ] - t201 -> mP_R . mX [ 15ULL ] ; out -> mICR . mX [
141ULL ] = 0.0 ; out -> mICR . mX [ 142ULL ] = 0.0 ; out -> mICR . mX [
143ULL ] = 0.0 ; out -> mICR . mX [ 144ULL ] = 0.0 ; out -> mICR . mX [
145ULL ] = 0.0 ; out -> mICR . mX [ 146ULL ] = 0.0 ; out -> mICR . mX [
147ULL ] = 0.0 ; out -> mICR . mX [ 148ULL ] = t201 -> mX . mX [ 30ULL ] -
t201 -> mP_R . mX [ 20ULL ] ; out -> mICR . mX [ 149ULL ] = t201 -> mX . mX [
31ULL ] - t201 -> mP_R . mX [ 21ULL ] ; out -> mICR . mX [ 150ULL ] = t201 ->
mX . mX [ 32ULL ] - t201 -> mP_R . mX [ 22ULL ] ; out -> mICR . mX [ 151ULL ]
= 0.0 ; out -> mICR . mX [ 152ULL ] = 0.0 ; out -> mICR . mX [ 153ULL ] = 0.0
; out -> mICR . mX [ 154ULL ] = t201 -> mX . mX [ 18ULL ] - t201 -> mP_R . mX
[ 29ULL ] ; out -> mICR . mX [ 155ULL ] = t201 -> mX . mX [ 19ULL ] - t201 ->
mP_R . mX [ 30ULL ] ; out -> mICR . mX [ 156ULL ] = t201 -> mX . mX [ 20ULL ]
- t201 -> mP_R . mX [ 31ULL ] ; out -> mICR . mX [ 157ULL ] = 0.0 ; out ->
mICR . mX [ 158ULL ] = 0.0 ; out -> mICR . mX [ 159ULL ] = 0.0 ; out -> mICR
. mX [ 160ULL ] = 0.0 ; out -> mICR . mX [ 161ULL ] = 0.0 ; out -> mICR . mX
[ 162ULL ] = 0.0 ; out -> mICR . mX [ 163ULL ] = 0.0 ; out -> mICR . mX [
164ULL ] = 0.0 ; out -> mICR . mX [ 165ULL ] = 0.0 ; out -> mICR . mX [
166ULL ] = 0.0 ; out -> mICR . mX [ 167ULL ] = 0.0 ; out -> mICR . mX [
168ULL ] = 0.0 ; out -> mICR . mX [ 169ULL ] = t201 -> mX . mX [ 21ULL ] ;
out -> mICR . mX [ 170ULL ] = t201 -> mX . mX [ 22ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 171ULL ] = t201 -> mX . mX [ 23ULL ]
- 268.70057685088807 ; out -> mICR . mX [ 172ULL ] = 0.0 ; out -> mICR . mX [
173ULL ] = 0.0 ; out -> mICR . mX [ 174ULL ] = 0.0 ; out -> mICR . mX [
175ULL ] = 0.0 ; out -> mICR . mX [ 176ULL ] = 0.0 ; out -> mICR . mX [
177ULL ] = 0.0 ; out -> mICR . mX [ 178ULL ] = t201 -> mX . mX [ 54ULL ] - -
35.311769484714581 ; out -> mICR . mX [ 179ULL ] = t201 -> mX . mX [ 55ULL ]
- 17.655884742357305 ; out -> mICR . mX [ 180ULL ] = t201 -> mX . mX [ 56ULL
] - 17.655884742357284 ; out -> mICR . mX [ 181ULL ] = 0.0 ; out -> mICR . mX
[ 182ULL ] = 0.0 ; out -> mICR . mX [ 183ULL ] = 0.0 ; out -> mICR . mX [
184ULL ] = 0.0 ; out -> mICR . mX [ 185ULL ] = 0.0 ; out -> mICR . mX [
186ULL ] = 0.0 ; out -> mICR . mX [ 187ULL ] = 0.0 ; out -> mICR . mX [
188ULL ] = 0.0 ; out -> mICR . mX [ 189ULL ] = 0.0 ; out -> mICR . mX [
190ULL ] = t201 -> mX . mX [ 24ULL ] - - 52.967654227071876 ; out -> mICR .
mX [ 191ULL ] = t201 -> mX . mX [ 25ULL ] - 26.483827113535959 ; out -> mICR
. mX [ 192ULL ] = t201 -> mX . mX [ 26ULL ] - 26.483827113535927 ; out ->
mICR . mX [ 193ULL ] = 0.0 ; out -> mICR . mX [ 194ULL ] = 0.0 ; out -> mICR
. mX [ 195ULL ] = 0.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
