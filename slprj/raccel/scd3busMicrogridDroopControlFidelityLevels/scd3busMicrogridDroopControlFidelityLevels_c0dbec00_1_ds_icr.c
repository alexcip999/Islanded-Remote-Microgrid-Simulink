#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t240 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [
1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] =
0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out
-> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR .
mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [
10ULL ] = 0.0 ; out -> mICR . mX [ 11ULL ] = 0.0 ; out -> mICR . mX [ 12ULL ]
= 0.0 ; out -> mICR . mX [ 13ULL ] = 0.0 ; out -> mICR . mX [ 14ULL ] = 0.0 ;
out -> mICR . mX [ 15ULL ] = 0.0 ; out -> mICR . mX [ 16ULL ] = t240 -> mX .
mX [ 20ULL ] - t240 -> mP_R . mX [ 23ULL ] ; out -> mICR . mX [ 17ULL ] =
t240 -> mX . mX [ 21ULL ] - t240 -> mP_R . mX [ 24ULL ] ; out -> mICR . mX [
18ULL ] = t240 -> mX . mX [ 22ULL ] - t240 -> mP_R . mX [ 25ULL ] ; out ->
mICR . mX [ 19ULL ] = 0.0 ; out -> mICR . mX [ 20ULL ] = 0.0 ; out -> mICR .
mX [ 21ULL ] = 0.0 ; out -> mICR . mX [ 22ULL ] = 0.0 ; out -> mICR . mX [
23ULL ] = 0.0 ; out -> mICR . mX [ 24ULL ] = 0.0 ; out -> mICR . mX [ 25ULL ]
= 0.0 ; out -> mICR . mX [ 26ULL ] = 0.0 ; out -> mICR . mX [ 27ULL ] = 0.0 ;
out -> mICR . mX [ 28ULL ] = 0.0 ; out -> mICR . mX [ 29ULL ] = 0.0 ; out ->
mICR . mX [ 30ULL ] = 0.0 ; out -> mICR . mX [ 31ULL ] = t240 -> mX . mX [
17ULL ] ; out -> mICR . mX [ 32ULL ] = t240 -> mX . mX [ 18ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 33ULL ] = t240 -> mX . mX [ 19ULL ] -
268.70057685088807 ; out -> mICR . mX [ 34ULL ] = 0.0 ; out -> mICR . mX [
35ULL ] = 0.0 ; out -> mICR . mX [ 36ULL ] = 0.0 ; out -> mICR . mX [ 37ULL ]
= 0.0 ; out -> mICR . mX [ 38ULL ] = 0.0 ; out -> mICR . mX [ 39ULL ] = 0.0 ;
out -> mICR . mX [ 40ULL ] = t240 -> mX . mX [ 23ULL ] - - 35.311769484714581
; out -> mICR . mX [ 41ULL ] = t240 -> mX . mX [ 24ULL ] - 17.655884742357305
; out -> mICR . mX [ 42ULL ] = t240 -> mX . mX [ 25ULL ] - 17.655884742357284
; out -> mICR . mX [ 43ULL ] = 0.0 ; out -> mICR . mX [ 44ULL ] = 0.0 ; out
-> mICR . mX [ 45ULL ] = 0.0 ; out -> mICR . mX [ 46ULL ] = t240 -> mX . mX [
26ULL ] - t240 -> mP_R . mX [ 7ULL ] ; out -> mICR . mX [ 47ULL ] = t240 ->
mX . mX [ 27ULL ] - t240 -> mP_R . mX [ 8ULL ] ; out -> mICR . mX [ 48ULL ] =
t240 -> mX . mX [ 28ULL ] - t240 -> mP_R . mX [ 9ULL ] ; out -> mICR . mX [
49ULL ] = 0.0 ; out -> mICR . mX [ 50ULL ] = 0.0 ; out -> mICR . mX [ 51ULL ]
= 0.0 ; out -> mICR . mX [ 52ULL ] = 0.0 ; out -> mICR . mX [ 53ULL ] = 0.0 ;
out -> mICR . mX [ 54ULL ] = 0.0 ; out -> mICR . mX [ 55ULL ] = 0.0 ; out ->
mICR . mX [ 56ULL ] = 0.0 ; out -> mICR . mX [ 57ULL ] = 0.0 ; out -> mICR .
mX [ 58ULL ] = 0.0 ; out -> mICR . mX [ 59ULL ] = 0.0 ; out -> mICR . mX [
60ULL ] = 0.0 ; out -> mICR . mX [ 61ULL ] = 0.0 ; out -> mICR . mX [ 62ULL ]
= t240 -> mX . mX [ 33ULL ] - t240 -> mP_R . mX [ 26ULL ] ; out -> mICR . mX
[ 63ULL ] = t240 -> mX . mX [ 34ULL ] - t240 -> mP_R . mX [ 27ULL ] ; out ->
mICR . mX [ 64ULL ] = t240 -> mX . mX [ 35ULL ] - t240 -> mP_R . mX [ 28ULL ]
; out -> mICR . mX [ 65ULL ] = 0.0 ; out -> mICR . mX [ 66ULL ] = 0.0 ; out
-> mICR . mX [ 67ULL ] = 0.0 ; out -> mICR . mX [ 68ULL ] = 0.0 ; out -> mICR
. mX [ 69ULL ] = 0.0 ; out -> mICR . mX [ 70ULL ] = 0.0 ; out -> mICR . mX [
71ULL ] = 0.0 ; out -> mICR . mX [ 72ULL ] = 0.0 ; out -> mICR . mX [ 73ULL ]
= 0.0 ; out -> mICR . mX [ 74ULL ] = 0.0 ; out -> mICR . mX [ 75ULL ] = 0.0 ;
out -> mICR . mX [ 76ULL ] = 0.0 ; out -> mICR . mX [ 77ULL ] = t240 -> mX .
mX [ 30ULL ] ; out -> mICR . mX [ 78ULL ] = t240 -> mX . mX [ 31ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 79ULL ] = t240 -> mX . mX [ 32ULL ] -
268.70057685088807 ; out -> mICR . mX [ 80ULL ] = 0.0 ; out -> mICR . mX [
81ULL ] = 0.0 ; out -> mICR . mX [ 82ULL ] = 0.0 ; out -> mICR . mX [ 83ULL ]
= 0.0 ; out -> mICR . mX [ 84ULL ] = 0.0 ; out -> mICR . mX [ 85ULL ] = 0.0 ;
out -> mICR . mX [ 86ULL ] = t240 -> mX . mX [ 36ULL ] - - 35.311769484714581
; out -> mICR . mX [ 87ULL ] = t240 -> mX . mX [ 37ULL ] - 17.655884742357305
; out -> mICR . mX [ 88ULL ] = t240 -> mX . mX [ 38ULL ] - 17.655884742357284
; out -> mICR . mX [ 89ULL ] = 0.0 ; out -> mICR . mX [ 90ULL ] = 0.0 ; out
-> mICR . mX [ 91ULL ] = 0.0 ; out -> mICR . mX [ 92ULL ] = t240 -> mX . mX [
39ULL ] - t240 -> mP_R . mX [ 17ULL ] ; out -> mICR . mX [ 93ULL ] = t240 ->
mX . mX [ 40ULL ] - t240 -> mP_R . mX [ 18ULL ] ; out -> mICR . mX [ 94ULL ]
= t240 -> mX . mX [ 41ULL ] - t240 -> mP_R . mX [ 19ULL ] ; out -> mICR . mX
[ 95ULL ] = 0.0 ; out -> mICR . mX [ 96ULL ] = 0.0 ; out -> mICR . mX [ 97ULL
] = 0.0 ; out -> mICR . mX [ 98ULL ] = 0.0 ; out -> mICR . mX [ 99ULL ] = 0.0
; out -> mICR . mX [ 100ULL ] = 0.0 ; out -> mICR . mX [ 101ULL ] = 0.0 ; out
-> mICR . mX [ 102ULL ] = 0.0 ; out -> mICR . mX [ 103ULL ] = 0.0 ; out ->
mICR . mX [ 104ULL ] = 0.0 ; out -> mICR . mX [ 105ULL ] = 0.0 ; out -> mICR
. mX [ 106ULL ] = 0.0 ; out -> mICR . mX [ 107ULL ] = 0.0 ; out -> mICR . mX
[ 108ULL ] = t240 -> mX . mX [ 46ULL ] - t240 -> mP_R . mX [ 10ULL ] ; out ->
mICR . mX [ 109ULL ] = t240 -> mX . mX [ 47ULL ] - t240 -> mP_R . mX [ 11ULL
] ; out -> mICR . mX [ 110ULL ] = t240 -> mX . mX [ 48ULL ] - t240 -> mP_R .
mX [ 12ULL ] ; out -> mICR . mX [ 111ULL ] = 0.0 ; out -> mICR . mX [ 112ULL
] = 0.0 ; out -> mICR . mX [ 113ULL ] = 0.0 ; out -> mICR . mX [ 114ULL ] =
0.0 ; out -> mICR . mX [ 115ULL ] = 0.0 ; out -> mICR . mX [ 116ULL ] = 0.0 ;
out -> mICR . mX [ 117ULL ] = 0.0 ; out -> mICR . mX [ 118ULL ] = 0.0 ; out
-> mICR . mX [ 119ULL ] = 0.0 ; out -> mICR . mX [ 120ULL ] = 0.0 ; out ->
mICR . mX [ 121ULL ] = 0.0 ; out -> mICR . mX [ 122ULL ] = 0.0 ; out -> mICR
. mX [ 123ULL ] = t240 -> mX . mX [ 43ULL ] ; out -> mICR . mX [ 124ULL ] =
t240 -> mX . mX [ 44ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 125ULL
] = t240 -> mX . mX [ 45ULL ] - 268.70057685088807 ; out -> mICR . mX [
126ULL ] = 0.0 ; out -> mICR . mX [ 127ULL ] = 0.0 ; out -> mICR . mX [
128ULL ] = 0.0 ; out -> mICR . mX [ 129ULL ] = 0.0 ; out -> mICR . mX [
130ULL ] = 0.0 ; out -> mICR . mX [ 131ULL ] = 0.0 ; out -> mICR . mX [
132ULL ] = t240 -> mX . mX [ 49ULL ] - - 35.311769484714581 ; out -> mICR .
mX [ 133ULL ] = t240 -> mX . mX [ 50ULL ] - 17.655884742357305 ; out -> mICR
. mX [ 134ULL ] = t240 -> mX . mX [ 51ULL ] - 17.655884742357284 ; out ->
mICR . mX [ 135ULL ] = 0.0 ; out -> mICR . mX [ 136ULL ] = 0.0 ; out -> mICR
. mX [ 137ULL ] = 0.0 ; out -> mICR . mX [ 138ULL ] = t240 -> mX . mX [ 52ULL
] - t240 -> mP_R . mX [ 13ULL ] ; out -> mICR . mX [ 139ULL ] = t240 -> mX .
mX [ 53ULL ] - t240 -> mP_R . mX [ 14ULL ] ; out -> mICR . mX [ 140ULL ] =
t240 -> mX . mX [ 54ULL ] - t240 -> mP_R . mX [ 15ULL ] ; out -> mICR . mX [
141ULL ] = 0.0 ; out -> mICR . mX [ 142ULL ] = 0.0 ; out -> mICR . mX [
143ULL ] = 0.0 ; out -> mICR . mX [ 144ULL ] = 0.0 ; out -> mICR . mX [
145ULL ] = 0.0 ; out -> mICR . mX [ 146ULL ] = 0.0 ; out -> mICR . mX [
147ULL ] = 0.0 ; out -> mICR . mX [ 148ULL ] = 0.0 ; out -> mICR . mX [
149ULL ] = 0.0 ; out -> mICR . mX [ 150ULL ] = 0.0 ; out -> mICR . mX [
151ULL ] = 0.0 ; out -> mICR . mX [ 152ULL ] = 0.0 ; out -> mICR . mX [
153ULL ] = 0.0 ; out -> mICR . mX [ 154ULL ] = t240 -> mX . mX [ 0ULL ] - -
6.544606663240577 ; out -> mICR . mX [ 155ULL ] = t240 -> mX . mX [ 1ULL ] -
3.2723033316202907 ; out -> mICR . mX [ 156ULL ] = t240 -> mX . mX [ 2ULL ] -
3.2723033316202872 ; out -> mICR . mX [ 157ULL ] = 0.0 ; out -> mICR . mX [
158ULL ] = 0.0 ; out -> mICR . mX [ 159ULL ] = 0.0 ; out -> mICR . mX [
160ULL ] = 0.0 ; out -> mICR . mX [ 161ULL ] = 0.0 ; out -> mICR . mX [
162ULL ] = 0.0 ; out -> mICR . mX [ 163ULL ] = 0.0 ; out -> mICR . mX [
164ULL ] = 0.0 ; out -> mICR . mX [ 165ULL ] = 0.0 ; out -> mICR . mX [
166ULL ] = t240 -> mX . mX [ 3ULL ] - - 6.544606663240577 ; out -> mICR . mX
[ 167ULL ] = t240 -> mX . mX [ 4ULL ] - 3.2723033316202907 ; out -> mICR . mX
[ 168ULL ] = t240 -> mX . mX [ 5ULL ] - 3.2723033316202872 ; out -> mICR . mX
[ 169ULL ] = 0.0 ; out -> mICR . mX [ 170ULL ] = 0.0 ; out -> mICR . mX [
171ULL ] = 0.0 ; out -> mICR . mX [ 172ULL ] = 0.0 ; out -> mICR . mX [
173ULL ] = 0.0 ; out -> mICR . mX [ 174ULL ] = 0.0 ; out -> mICR . mX [
175ULL ] = 0.0 ; out -> mICR . mX [ 176ULL ] = 0.0 ; out -> mICR . mX [
177ULL ] = 0.0 ; out -> mICR . mX [ 178ULL ] = t240 -> mX . mX [ 6ULL ] - -
6.544606663240577 ; out -> mICR . mX [ 179ULL ] = t240 -> mX . mX [ 7ULL ] -
3.2723033316202907 ; out -> mICR . mX [ 180ULL ] = t240 -> mX . mX [ 8ULL ] -
3.2723033316202872 ; out -> mICR . mX [ 181ULL ] = 0.0 ; out -> mICR . mX [
182ULL ] = 0.0 ; out -> mICR . mX [ 183ULL ] = 0.0 ; out -> mICR . mX [
184ULL ] = t240 -> mX . mX [ 13ULL ] - t240 -> mP_R . mX [ 20ULL ] ; out ->
mICR . mX [ 185ULL ] = t240 -> mX . mX [ 14ULL ] - t240 -> mP_R . mX [ 21ULL
] ; out -> mICR . mX [ 186ULL ] = t240 -> mX . mX [ 15ULL ] - t240 -> mP_R .
mX [ 22ULL ] ; out -> mICR . mX [ 187ULL ] = 0.0 ; out -> mICR . mX [ 188ULL
] = 0.0 ; out -> mICR . mX [ 189ULL ] = 0.0 ; out -> mICR . mX [ 190ULL ] =
t240 -> mX . mX [ 55ULL ] - t240 -> mP_R . mX [ 29ULL ] ; out -> mICR . mX [
191ULL ] = t240 -> mX . mX [ 56ULL ] - t240 -> mP_R . mX [ 30ULL ] ; out ->
mICR . mX [ 192ULL ] = t240 -> mX . mX [ 57ULL ] - t240 -> mP_R . mX [ 31ULL
] ; out -> mICR . mX [ 193ULL ] = 0.0 ; out -> mICR . mX [ 194ULL ] = 0.0 ;
out -> mICR . mX [ 195ULL ] = 0.0 ; out -> mICR . mX [ 196ULL ] = 0.0 ; out
-> mICR . mX [ 197ULL ] = 0.0 ; out -> mICR . mX [ 198ULL ] = 0.0 ; out ->
mICR . mX [ 199ULL ] = 0.0 ; out -> mICR . mX [ 200ULL ] = 0.0 ; out -> mICR
. mX [ 201ULL ] = 0.0 ; out -> mICR . mX [ 202ULL ] = 0.0 ; out -> mICR . mX
[ 203ULL ] = 0.0 ; out -> mICR . mX [ 204ULL ] = 0.0 ; out -> mICR . mX [
205ULL ] = t240 -> mX . mX [ 10ULL ] ; out -> mICR . mX [ 206ULL ] = t240 ->
mX . mX [ 11ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 207ULL ] = t240
-> mX . mX [ 12ULL ] - 268.70057685088807 ; out -> mICR . mX [ 208ULL ] = 0.0
; out -> mICR . mX [ 209ULL ] = 0.0 ; out -> mICR . mX [ 210ULL ] = 0.0 ; out
-> mICR . mX [ 211ULL ] = 0.0 ; out -> mICR . mX [ 212ULL ] = 0.0 ; out ->
mICR . mX [ 213ULL ] = 0.0 ; out -> mICR . mX [ 214ULL ] = t240 -> mX . mX [
58ULL ] - - 35.311769484714581 ; out -> mICR . mX [ 215ULL ] = t240 -> mX .
mX [ 59ULL ] - 17.655884742357305 ; out -> mICR . mX [ 216ULL ] = t240 -> mX
. mX [ 60ULL ] - 17.655884742357284 ; out -> mICR . mX [ 217ULL ] = 0.0 ; out
-> mICR . mX [ 218ULL ] = 0.0 ; out -> mICR . mX [ 219ULL ] = 0.0 ; out ->
mICR . mX [ 220ULL ] = 0.0 ; out -> mICR . mX [ 221ULL ] = 0.0 ; out -> mICR
. mX [ 222ULL ] = 0.0 ; out -> mICR . mX [ 223ULL ] = 0.0 ; out -> mICR . mX
[ 224ULL ] = 0.0 ; out -> mICR . mX [ 225ULL ] = 0.0 ; out -> mICR . mX [
226ULL ] = t240 -> mX . mX [ 61ULL ] - - 52.967654227071876 ; out -> mICR .
mX [ 227ULL ] = t240 -> mX . mX [ 62ULL ] - 26.483827113535959 ; out -> mICR
. mX [ 228ULL ] = t240 -> mX . mX [ 63ULL ] - 26.483827113535927 ; out ->
mICR . mX [ 229ULL ] = 0.0 ; out -> mICR . mX [ 230ULL ] = 0.0 ; out -> mICR
. mX [ 231ULL ] = 0.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
