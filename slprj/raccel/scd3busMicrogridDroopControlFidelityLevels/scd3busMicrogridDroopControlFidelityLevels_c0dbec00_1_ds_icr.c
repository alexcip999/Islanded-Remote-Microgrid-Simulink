#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t143 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [
1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] =
0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out
-> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR .
mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [
10ULL ] = 0.0 ; out -> mICR . mX [ 11ULL ] = 0.0 ; out -> mICR . mX [ 12ULL ]
= 0.0 ; out -> mICR . mX [ 13ULL ] = 0.0 ; out -> mICR . mX [ 14ULL ] = 0.0 ;
out -> mICR . mX [ 15ULL ] = 0.0 ; out -> mICR . mX [ 16ULL ] = 0.0 ; out ->
mICR . mX [ 17ULL ] = 0.0 ; out -> mICR . mX [ 18ULL ] = 0.0 ; out -> mICR .
mX [ 19ULL ] = 0.0 ; out -> mICR . mX [ 20ULL ] = 0.0 ; out -> mICR . mX [
21ULL ] = 0.0 ; out -> mICR . mX [ 22ULL ] = 0.0 ; out -> mICR . mX [ 23ULL ]
= 0.0 ; out -> mICR . mX [ 24ULL ] = 0.0 ; out -> mICR . mX [ 25ULL ] = 0.0 ;
out -> mICR . mX [ 26ULL ] = t143 -> mX . mX [ 3ULL ] - - 4.3630711088270511
; out -> mICR . mX [ 27ULL ] = t143 -> mX . mX [ 4ULL ] - 2.1815355544135273
; out -> mICR . mX [ 28ULL ] = t143 -> mX . mX [ 5ULL ] - 2.1815355544135246
; out -> mICR . mX [ 29ULL ] = 0.0 ; out -> mICR . mX [ 30ULL ] = 0.0 ; out
-> mICR . mX [ 31ULL ] = 0.0 ; out -> mICR . mX [ 32ULL ] = 0.0 ; out -> mICR
. mX [ 33ULL ] = 0.0 ; out -> mICR . mX [ 34ULL ] = 0.0 ; out -> mICR . mX [
35ULL ] = 0.0 ; out -> mICR . mX [ 36ULL ] = 0.0 ; out -> mICR . mX [ 37ULL ]
= 0.0 ; out -> mICR . mX [ 38ULL ] = t143 -> mX . mX [ 0ULL ] - -
7.4172208850059871 ; out -> mICR . mX [ 39ULL ] = t143 -> mX . mX [ 1ULL ] -
3.7086104425029962 ; out -> mICR . mX [ 40ULL ] = t143 -> mX . mX [ 2ULL ] -
3.7086104425029922 ; out -> mICR . mX [ 41ULL ] = 0.0 ; out -> mICR . mX [
42ULL ] = 0.0 ; out -> mICR . mX [ 43ULL ] = 0.0 ; out -> mICR . mX [ 44ULL ]
= t143 -> mX . mX [ 20ULL ] - t143 -> mP_R . mX [ 0ULL ] ; out -> mICR . mX [
45ULL ] = t143 -> mX . mX [ 21ULL ] - t143 -> mP_R . mX [ 1ULL ] ; out ->
mICR . mX [ 46ULL ] = t143 -> mX . mX [ 22ULL ] - t143 -> mP_R . mX [ 2ULL ]
; out -> mICR . mX [ 47ULL ] = 0.0 ; out -> mICR . mX [ 48ULL ] = 0.0 ; out
-> mICR . mX [ 49ULL ] = 0.0 ; out -> mICR . mX [ 50ULL ] = 0.0 ; out -> mICR
. mX [ 51ULL ] = 0.0 ; out -> mICR . mX [ 52ULL ] = 0.0 ; out -> mICR . mX [
53ULL ] = 0.0 ; out -> mICR . mX [ 54ULL ] = 0.0 ; out -> mICR . mX [ 55ULL ]
= 0.0 ; out -> mICR . mX [ 56ULL ] = t143 -> mX . mX [ 23ULL ] - -
13.418472404191546 ; out -> mICR . mX [ 57ULL ] = t143 -> mX . mX [ 24ULL ] -
6.7092362020957772 ; out -> mICR . mX [ 58ULL ] = t143 -> mX . mX [ 25ULL ] -
6.70923620209577 ; out -> mICR . mX [ 59ULL ] = 0.0 ; out -> mICR . mX [
60ULL ] = 0.0 ; out -> mICR . mX [ 61ULL ] = 0.0 ; out -> mICR . mX [ 62ULL ]
= 0.0 ; out -> mICR . mX [ 63ULL ] = 0.0 ; out -> mICR . mX [ 64ULL ] = 0.0 ;
out -> mICR . mX [ 65ULL ] = 0.0 ; out -> mICR . mX [ 66ULL ] = 0.0 ; out ->
mICR . mX [ 67ULL ] = 0.0 ; out -> mICR . mX [ 68ULL ] = t143 -> mX . mX [
26ULL ] - - 13.418472404191546 ; out -> mICR . mX [ 69ULL ] = t143 -> mX . mX
[ 27ULL ] - 6.7092362020957772 ; out -> mICR . mX [ 70ULL ] = t143 -> mX . mX
[ 28ULL ] - 6.70923620209577 ; out -> mICR . mX [ 71ULL ] = 0.0 ; out -> mICR
. mX [ 72ULL ] = 0.0 ; out -> mICR . mX [ 73ULL ] = 0.0 ; out -> mICR . mX [
74ULL ] = t143 -> mX . mX [ 17ULL ] - t143 -> mP_R . mX [ 10ULL ] ; out ->
mICR . mX [ 75ULL ] = t143 -> mX . mX [ 18ULL ] - t143 -> mP_R . mX [ 11ULL ]
; out -> mICR . mX [ 76ULL ] = t143 -> mX . mX [ 19ULL ] - t143 -> mP_R . mX
[ 12ULL ] ; out -> mICR . mX [ 77ULL ] = 0.0 ; out -> mICR . mX [ 78ULL ] =
0.0 ; out -> mICR . mX [ 79ULL ] = 0.0 ; out -> mICR . mX [ 80ULL ] = t143 ->
mX . mX [ 10ULL ] - t143 -> mP_R . mX [ 7ULL ] ; out -> mICR . mX [ 81ULL ] =
t143 -> mX . mX [ 11ULL ] - t143 -> mP_R . mX [ 8ULL ] ; out -> mICR . mX [
82ULL ] = t143 -> mX . mX [ 12ULL ] - t143 -> mP_R . mX [ 9ULL ] ; out ->
mICR . mX [ 83ULL ] = 0.0 ; out -> mICR . mX [ 84ULL ] = 0.0 ; out -> mICR .
mX [ 85ULL ] = 0.0 ; out -> mICR . mX [ 86ULL ] = t143 -> mX . mX [ 29ULL ] -
t143 -> mP_R . mX [ 4ULL ] ; out -> mICR . mX [ 87ULL ] = t143 -> mX . mX [
30ULL ] - t143 -> mP_R . mX [ 5ULL ] ; out -> mICR . mX [ 88ULL ] = t143 ->
mX . mX [ 31ULL ] - t143 -> mP_R . mX [ 6ULL ] ; out -> mICR . mX [ 89ULL ] =
0.0 ; out -> mICR . mX [ 90ULL ] = 0.0 ; out -> mICR . mX [ 91ULL ] = 0.0 ;
out -> mICR . mX [ 92ULL ] = 0.0 ; out -> mICR . mX [ 93ULL ] = 0.0 ; out ->
mICR . mX [ 94ULL ] = 0.0 ; out -> mICR . mX [ 95ULL ] = 0.0 ; out -> mICR .
mX [ 96ULL ] = 0.0 ; out -> mICR . mX [ 97ULL ] = 0.0 ; out -> mICR . mX [
98ULL ] = t143 -> mX . mX [ 32ULL ] - - 22.599532470217333 ; out -> mICR . mX
[ 99ULL ] = t143 -> mX . mX [ 33ULL ] - 11.299766235108676 ; out -> mICR . mX
[ 100ULL ] = t143 -> mX . mX [ 34ULL ] - 11.299766235108663 ; out -> mICR .
mX [ 101ULL ] = 0.0 ; out -> mICR . mX [ 102ULL ] = 0.0 ; out -> mICR . mX [
103ULL ] = 0.0 ; out -> mICR . mX [ 104ULL ] = 0.0 ; out -> mICR . mX [
105ULL ] = 0.0 ; out -> mICR . mX [ 106ULL ] = 0.0 ; out -> mICR . mX [
107ULL ] = 0.0 ; out -> mICR . mX [ 108ULL ] = 0.0 ; out -> mICR . mX [
109ULL ] = 0.0 ; out -> mICR . mX [ 110ULL ] = 0.0 ; out -> mICR . mX [
111ULL ] = 0.0 ; out -> mICR . mX [ 112ULL ] = 0.0 ; out -> mICR . mX [
113ULL ] = t143 -> mX . mX [ 7ULL ] ; out -> mICR . mX [ 114ULL ] = t143 ->
mX . mX [ 8ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 115ULL ] = t143
-> mX . mX [ 9ULL ] - 268.70057685088807 ; out -> mICR . mX [ 116ULL ] = 0.0
; out -> mICR . mX [ 117ULL ] = 0.0 ; out -> mICR . mX [ 118ULL ] = 0.0 ; out
-> mICR . mX [ 119ULL ] = 0.0 ; out -> mICR . mX [ 120ULL ] = 0.0 ; out ->
mICR . mX [ 121ULL ] = 0.0 ; out -> mICR . mX [ 122ULL ] = 0.0 ; out -> mICR
. mX [ 123ULL ] = 0.0 ; out -> mICR . mX [ 124ULL ] = 0.0 ; out -> mICR . mX
[ 125ULL ] = t143 -> mX . mX [ 14ULL ] ; out -> mICR . mX [ 126ULL ] = t143
-> mX . mX [ 15ULL ] - - 268.70057685088796 ; out -> mICR . mX [ 127ULL ] =
t143 -> mX . mX [ 16ULL ] - 268.70057685088807 ; ( void ) LC ; ( void ) out ;
return 0 ; }
