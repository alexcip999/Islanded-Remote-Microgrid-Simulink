#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t177 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [
1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] =
0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out
-> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR .
mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [
10ULL ] = t177 -> mX . mX [ 16ULL ] - t177 -> mP_R . mX [ 3ULL ] ; out ->
mICR . mX [ 11ULL ] = t177 -> mX . mX [ 17ULL ] - t177 -> mP_R . mX [ 4ULL ]
; out -> mICR . mX [ 12ULL ] = t177 -> mX . mX [ 18ULL ] - t177 -> mP_R . mX
[ 5ULL ] ; out -> mICR . mX [ 13ULL ] = 0.0 ; out -> mICR . mX [ 14ULL ] =
0.0 ; out -> mICR . mX [ 15ULL ] = 0.0 ; out -> mICR . mX [ 16ULL ] = 0.0 ;
out -> mICR . mX [ 17ULL ] = 0.0 ; out -> mICR . mX [ 18ULL ] = 0.0 ; out ->
mICR . mX [ 19ULL ] = 0.0 ; out -> mICR . mX [ 20ULL ] = 0.0 ; out -> mICR .
mX [ 21ULL ] = 0.0 ; out -> mICR . mX [ 22ULL ] = t177 -> mX . mX [ 19ULL ] -
- 13.418472404191546 ; out -> mICR . mX [ 23ULL ] = t177 -> mX . mX [ 20ULL ]
- 6.7092362020957772 ; out -> mICR . mX [ 24ULL ] = t177 -> mX . mX [ 21ULL ]
- 6.70923620209577 ; out -> mICR . mX [ 25ULL ] = 0.0 ; out -> mICR . mX [
26ULL ] = 0.0 ; out -> mICR . mX [ 27ULL ] = 0.0 ; out -> mICR . mX [ 28ULL ]
= t177 -> mX . mX [ 13ULL ] - t177 -> mP_R . mX [ 12ULL ] ; out -> mICR . mX
[ 29ULL ] = t177 -> mX . mX [ 14ULL ] - t177 -> mP_R . mX [ 13ULL ] ; out ->
mICR . mX [ 30ULL ] = t177 -> mX . mX [ 15ULL ] - t177 -> mP_R . mX [ 14ULL ]
; out -> mICR . mX [ 31ULL ] = 0.0 ; out -> mICR . mX [ 32ULL ] = 0.0 ; out
-> mICR . mX [ 33ULL ] = 0.0 ; out -> mICR . mX [ 34ULL ] = 0.0 ; out -> mICR
. mX [ 35ULL ] = 0.0 ; out -> mICR . mX [ 36ULL ] = 0.0 ; out -> mICR . mX [
37ULL ] = 0.0 ; out -> mICR . mX [ 38ULL ] = 0.0 ; out -> mICR . mX [ 39ULL ]
= 0.0 ; out -> mICR . mX [ 40ULL ] = 0.0 ; out -> mICR . mX [ 41ULL ] = 0.0 ;
out -> mICR . mX [ 42ULL ] = 0.0 ; out -> mICR . mX [ 43ULL ] = t177 -> mX .
mX [ 10ULL ] ; out -> mICR . mX [ 44ULL ] = t177 -> mX . mX [ 11ULL ] - -
268.70057685088796 ; out -> mICR . mX [ 45ULL ] = t177 -> mX . mX [ 12ULL ] -
268.70057685088807 ; out -> mICR . mX [ 46ULL ] = 0.0 ; out -> mICR . mX [
47ULL ] = 0.0 ; out -> mICR . mX [ 48ULL ] = 0.0 ; out -> mICR . mX [ 49ULL ]
= 0.0 ; out -> mICR . mX [ 50ULL ] = 0.0 ; out -> mICR . mX [ 51ULL ] = 0.0 ;
out -> mICR . mX [ 52ULL ] = 0.0 ; out -> mICR . mX [ 53ULL ] = 0.0 ; out ->
mICR . mX [ 54ULL ] = 0.0 ; out -> mICR . mX [ 55ULL ] = 0.0 ; out -> mICR .
mX [ 56ULL ] = 0.0 ; out -> mICR . mX [ 57ULL ] = 0.0 ; out -> mICR . mX [
58ULL ] = 0.0 ; out -> mICR . mX [ 59ULL ] = 0.0 ; out -> mICR . mX [ 60ULL ]
= 0.0 ; out -> mICR . mX [ 61ULL ] = 0.0 ; out -> mICR . mX [ 62ULL ] = t177
-> mX . mX [ 29ULL ] - - 13.418472404191546 ; out -> mICR . mX [ 63ULL ] =
t177 -> mX . mX [ 30ULL ] - 6.7092362020957772 ; out -> mICR . mX [ 64ULL ] =
t177 -> mX . mX [ 31ULL ] - 6.70923620209577 ; out -> mICR . mX [ 65ULL ] =
0.0 ; out -> mICR . mX [ 66ULL ] = 0.0 ; out -> mICR . mX [ 67ULL ] = 0.0 ;
out -> mICR . mX [ 68ULL ] = t177 -> mX . mX [ 26ULL ] - t177 -> mP_R . mX [
15ULL ] ; out -> mICR . mX [ 69ULL ] = t177 -> mX . mX [ 27ULL ] - t177 ->
mP_R . mX [ 16ULL ] ; out -> mICR . mX [ 70ULL ] = t177 -> mX . mX [ 28ULL ]
- t177 -> mP_R . mX [ 17ULL ] ; out -> mICR . mX [ 71ULL ] = 0.0 ; out ->
mICR . mX [ 72ULL ] = 0.0 ; out -> mICR . mX [ 73ULL ] = 0.0 ; out -> mICR .
mX [ 74ULL ] = t177 -> mX . mX [ 32ULL ] - t177 -> mP_R . mX [ 9ULL ] ; out
-> mICR . mX [ 75ULL ] = t177 -> mX . mX [ 33ULL ] - t177 -> mP_R . mX [
10ULL ] ; out -> mICR . mX [ 76ULL ] = t177 -> mX . mX [ 34ULL ] - t177 ->
mP_R . mX [ 11ULL ] ; out -> mICR . mX [ 77ULL ] = 0.0 ; out -> mICR . mX [
78ULL ] = 0.0 ; out -> mICR . mX [ 79ULL ] = 0.0 ; out -> mICR . mX [ 80ULL ]
= 0.0 ; out -> mICR . mX [ 81ULL ] = 0.0 ; out -> mICR . mX [ 82ULL ] = 0.0 ;
out -> mICR . mX [ 83ULL ] = 0.0 ; out -> mICR . mX [ 84ULL ] = 0.0 ; out ->
mICR . mX [ 85ULL ] = 0.0 ; out -> mICR . mX [ 86ULL ] = 0.0 ; out -> mICR .
mX [ 87ULL ] = 0.0 ; out -> mICR . mX [ 88ULL ] = 0.0 ; out -> mICR . mX [
89ULL ] = t177 -> mX . mX [ 23ULL ] ; out -> mICR . mX [ 90ULL ] = t177 -> mX
. mX [ 24ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 91ULL ] = t177 ->
mX . mX [ 25ULL ] - 268.70057685088807 ; out -> mICR . mX [ 92ULL ] = 0.0 ;
out -> mICR . mX [ 93ULL ] = 0.0 ; out -> mICR . mX [ 94ULL ] = 0.0 ; out ->
mICR . mX [ 95ULL ] = 0.0 ; out -> mICR . mX [ 96ULL ] = 0.0 ; out -> mICR .
mX [ 97ULL ] = 0.0 ; out -> mICR . mX [ 98ULL ] = 0.0 ; out -> mICR . mX [
99ULL ] = 0.0 ; out -> mICR . mX [ 100ULL ] = 0.0 ; out -> mICR . mX [ 101ULL
] = 0.0 ; out -> mICR . mX [ 102ULL ] = 0.0 ; out -> mICR . mX [ 103ULL ] =
0.0 ; out -> mICR . mX [ 104ULL ] = 0.0 ; out -> mICR . mX [ 105ULL ] = 0.0 ;
out -> mICR . mX [ 106ULL ] = 0.0 ; out -> mICR . mX [ 107ULL ] = 0.0 ; out
-> mICR . mX [ 108ULL ] = t177 -> mX . mX [ 39ULL ] - - 13.418472404191546 ;
out -> mICR . mX [ 109ULL ] = t177 -> mX . mX [ 40ULL ] - 6.7092362020957772
; out -> mICR . mX [ 110ULL ] = t177 -> mX . mX [ 41ULL ] - 6.70923620209577
; out -> mICR . mX [ 111ULL ] = 0.0 ; out -> mICR . mX [ 112ULL ] = 0.0 ; out
-> mICR . mX [ 113ULL ] = 0.0 ; out -> mICR . mX [ 114ULL ] = t177 -> mX . mX
[ 36ULL ] - t177 -> mP_R . mX [ 6ULL ] ; out -> mICR . mX [ 115ULL ] = t177
-> mX . mX [ 37ULL ] - t177 -> mP_R . mX [ 7ULL ] ; out -> mICR . mX [ 116ULL
] = t177 -> mX . mX [ 38ULL ] - t177 -> mP_R . mX [ 8ULL ] ; out -> mICR . mX
[ 117ULL ] = 0.0 ; out -> mICR . mX [ 118ULL ] = 0.0 ; out -> mICR . mX [
119ULL ] = 0.0 ; out -> mICR . mX [ 120ULL ] = 0.0 ; out -> mICR . mX [
121ULL ] = 0.0 ; out -> mICR . mX [ 122ULL ] = 0.0 ; out -> mICR . mX [
123ULL ] = 0.0 ; out -> mICR . mX [ 124ULL ] = 0.0 ; out -> mICR . mX [
125ULL ] = 0.0 ; out -> mICR . mX [ 126ULL ] = 0.0 ; out -> mICR . mX [
127ULL ] = 0.0 ; out -> mICR . mX [ 128ULL ] = 0.0 ; out -> mICR . mX [
129ULL ] = t177 -> mX . mX [ 3ULL ] ; out -> mICR . mX [ 130ULL ] = t177 ->
mX . mX [ 4ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 131ULL ] = t177
-> mX . mX [ 5ULL ] - 268.70057685088807 ; out -> mICR . mX [ 132ULL ] = 0.0
; out -> mICR . mX [ 133ULL ] = 0.0 ; out -> mICR . mX [ 134ULL ] = 0.0 ; out
-> mICR . mX [ 135ULL ] = 0.0 ; out -> mICR . mX [ 136ULL ] = 0.0 ; out ->
mICR . mX [ 137ULL ] = 0.0 ; out -> mICR . mX [ 138ULL ] = t177 -> mX . mX [
6ULL ] - - 4.3630711088270511 ; out -> mICR . mX [ 139ULL ] = t177 -> mX . mX
[ 7ULL ] - 2.1815355544135273 ; out -> mICR . mX [ 140ULL ] = t177 -> mX . mX
[ 8ULL ] - 2.1815355544135246 ; out -> mICR . mX [ 141ULL ] = 0.0 ; out ->
mICR . mX [ 142ULL ] = 0.0 ; out -> mICR . mX [ 143ULL ] = 0.0 ; out -> mICR
. mX [ 144ULL ] = 0.0 ; out -> mICR . mX [ 145ULL ] = 0.0 ; out -> mICR . mX
[ 146ULL ] = 0.0 ; out -> mICR . mX [ 147ULL ] = 0.0 ; out -> mICR . mX [
148ULL ] = 0.0 ; out -> mICR . mX [ 149ULL ] = 0.0 ; out -> mICR . mX [
150ULL ] = t177 -> mX . mX [ 0ULL ] - - 7.4172208850059871 ; out -> mICR . mX
[ 151ULL ] = t177 -> mX . mX [ 1ULL ] - 3.7086104425029962 ; out -> mICR . mX
[ 152ULL ] = t177 -> mX . mX [ 2ULL ] - 3.7086104425029922 ; out -> mICR . mX
[ 153ULL ] = 0.0 ; out -> mICR . mX [ 154ULL ] = 0.0 ; out -> mICR . mX [
155ULL ] = 0.0 ; out -> mICR . mX [ 156ULL ] = 0.0 ; out -> mICR . mX [
157ULL ] = 0.0 ; out -> mICR . mX [ 158ULL ] = 0.0 ; out -> mICR . mX [
159ULL ] = 0.0 ; out -> mICR . mX [ 160ULL ] = 0.0 ; out -> mICR . mX [
161ULL ] = 0.0 ; out -> mICR . mX [ 162ULL ] = t177 -> mX . mX [ 42ULL ] - -
22.599532470217333 ; out -> mICR . mX [ 163ULL ] = t177 -> mX . mX [ 43ULL ]
- 11.299766235108676 ; out -> mICR . mX [ 164ULL ] = t177 -> mX . mX [ 44ULL
] - 11.299766235108663 ; out -> mICR . mX [ 165ULL ] = 0.0 ; out -> mICR . mX
[ 166ULL ] = 0.0 ; out -> mICR . mX [ 167ULL ] = 0.0 ; ( void ) LC ; ( void )
out ; return 0 ; }
