#include "ne_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_sys_struct.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_ic.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_externals.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_ds_ic ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t27 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mIC . mX [ 0ULL ] = 0.0 ; out -> mIC . mX [ 1ULL
] = 0.0 ; out -> mIC . mX [ 2ULL ] = 0.0 ; out -> mIC . mX [ 3ULL ] = 0.0 ;
out -> mIC . mX [ 4ULL ] = 0.0 ; out -> mIC . mX [ 5ULL ] = 0.0 ; out -> mIC
. mX [ 6ULL ] = 0.0 ; out -> mIC . mX [ 7ULL ] = 0.0 ; out -> mIC . mX [ 8ULL
] = 0.0 ; out -> mIC . mX [ 9ULL ] = 0.0 ; out -> mIC . mX [ 10ULL ] = 0.0 ;
out -> mIC . mX [ 11ULL ] = 0.0 ; out -> mIC . mX [ 12ULL ] = 0.0 ; out ->
mIC . mX [ 13ULL ] = 0.0 ; out -> mIC . mX [ 14ULL ] = 0.0 ; out -> mIC . mX
[ 15ULL ] = 0.0 ; out -> mIC . mX [ 16ULL ] = 0.0 ; out -> mIC . mX [ 17ULL ]
= 0.0 ; out -> mIC . mX [ 18ULL ] = 0.0 ; out -> mIC . mX [ 19ULL ] = 0.0 ;
out -> mIC . mX [ 20ULL ] = 0.0 ; out -> mIC . mX [ 21ULL ] = 0.0 ; out ->
mIC . mX [ 22ULL ] = 0.0 ; out -> mIC . mX [ 23ULL ] = 0.0 ; out -> mIC . mX
[ 24ULL ] = 0.0 ; out -> mIC . mX [ 25ULL ] = 0.0 ; out -> mIC . mX [ 26ULL ]
= 0.0 ; out -> mIC . mX [ 27ULL ] = 310.26870075253589 ; out -> mIC . mX [
28ULL ] = 0.0 ; out -> mIC . mX [ 29ULL ] = t27 -> mP_R . mX [ 0ULL ] ; out
-> mIC . mX [ 30ULL ] = 0.0 ; out -> mIC . mX [ 31ULL ] = 0.0 ; out -> mIC .
mX [ 32ULL ] = 0.0 ; out -> mIC . mX [ 33ULL ] = t27 -> mP_R . mX [ 1ULL ] ;
out -> mIC . mX [ 34ULL ] = 0.0 ; out -> mIC . mX [ 35ULL ] = 0.0 ; out ->
mIC . mX [ 36ULL ] = 0.0 ; out -> mIC . mX [ 37ULL ] = 0.0 ; out -> mIC . mX
[ 38ULL ] = 0.0 ; out -> mIC . mX [ 39ULL ] = 0.0 ; out -> mIC . mX [ 40ULL ]
= t27 -> mP_R . mX [ 3ULL ] ; out -> mIC . mX [ 41ULL ] = 0.0 ; out -> mIC .
mX [ 42ULL ] = 0.0 ; out -> mIC . mX [ 43ULL ] = 0.0 ; out -> mIC . mX [
44ULL ] = 0.0 ; out -> mIC . mX [ 45ULL ] = 0.0 ; out -> mIC . mX [ 46ULL ] =
0.0 ; out -> mIC . mX [ 47ULL ] = t27 -> mP_R . mX [ 5ULL ] ; out -> mIC . mX
[ 48ULL ] = 0.0 ; out -> mIC . mX [ 49ULL ] = 0.0 ; out -> mIC . mX [ 50ULL ]
= 0.0 ; out -> mIC . mX [ 51ULL ] = 0.0 ; out -> mIC . mX [ 52ULL ] = 0.0 ;
out -> mIC . mX [ 53ULL ] = 0.0 ; out -> mIC . mX [ 54ULL ] = 0.0 ; out ->
mIC . mX [ 55ULL ] = 0.0 ; out -> mIC . mX [ 56ULL ] = 0.0 ; out -> mIC . mX
[ 57ULL ] = 0.0 ; out -> mIC . mX [ 58ULL ] = 0.0 ; out -> mIC . mX [ 59ULL ]
= 0.0 ; out -> mIC . mX [ 60ULL ] = 0.0 ; out -> mIC . mX [ 61ULL ] = 0.0 ;
out -> mIC . mX [ 62ULL ] = 0.0 ; out -> mIC . mX [ 63ULL ] = 0.0 ; out ->
mIC . mX [ 64ULL ] = 0.0 ; out -> mIC . mX [ 65ULL ] = 0.0 ; out -> mIC . mX
[ 66ULL ] = 0.0 ; out -> mIC . mX [ 67ULL ] = 0.0 ; out -> mIC . mX [ 68ULL ]
= 0.0 ; out -> mIC . mX [ 69ULL ] = 0.0 ; out -> mIC . mX [ 70ULL ] = 0.0 ;
out -> mIC . mX [ 71ULL ] = 0.0 ; out -> mIC . mX [ 72ULL ] = 0.0 ; out ->
mIC . mX [ 73ULL ] = 0.0 ; out -> mIC . mX [ 74ULL ] = 0.0 ; out -> mIC . mX
[ 75ULL ] = 0.0 ; out -> mIC . mX [ 76ULL ] = 0.0 ; out -> mIC . mX [ 77ULL ]
= 0.0 ; out -> mIC . mX [ 78ULL ] = 0.0 ; out -> mIC . mX [ 79ULL ] = 0.0 ;
out -> mIC . mX [ 80ULL ] = 0.0 ; out -> mIC . mX [ 81ULL ] = 0.0 ; out ->
mIC . mX [ 82ULL ] = 0.0 ; out -> mIC . mX [ 83ULL ] = 0.0 ; out -> mIC . mX
[ 84ULL ] = 0.0 ; out -> mIC . mX [ 85ULL ] = 0.0 ; out -> mIC . mX [ 86ULL ]
= 0.0 ; out -> mIC . mX [ 87ULL ] = 0.0 ; out -> mIC . mX [ 88ULL ] = 0.0 ;
out -> mIC . mX [ 89ULL ] = 0.0 ; out -> mIC . mX [ 90ULL ] = 0.0 ; out ->
mIC . mX [ 91ULL ] = 0.0 ; out -> mIC . mX [ 92ULL ] = 0.0 ; out -> mIC . mX
[ 93ULL ] = 0.0 ; out -> mIC . mX [ 94ULL ] = 0.0 ; out -> mIC . mX [ 95ULL ]
= 0.0 ; out -> mIC . mX [ 96ULL ] = 0.0 ; out -> mIC . mX [ 97ULL ] = 0.0 ;
out -> mIC . mX [ 98ULL ] = 0.0 ; out -> mIC . mX [ 99ULL ] = 0.0 ; out ->
mIC . mX [ 100ULL ] = 0.0 ; out -> mIC . mX [ 101ULL ] = 0.0 ; out -> mIC .
mX [ 102ULL ] = 0.0 ; out -> mIC . mX [ 103ULL ] = 0.0 ; out -> mIC . mX [
104ULL ] = 0.0 ; out -> mIC . mX [ 105ULL ] = 0.0 ; out -> mIC . mX [ 106ULL
] = 0.0 ; out -> mIC . mX [ 107ULL ] = 0.0 ; out -> mIC . mX [ 108ULL ] = 0.0
; out -> mIC . mX [ 109ULL ] = 0.0 ; out -> mIC . mX [ 110ULL ] = 0.0 ; out
-> mIC . mX [ 111ULL ] = 0.0 ; out -> mIC . mX [ 112ULL ] = 0.0 ; out -> mIC
. mX [ 113ULL ] = 0.0 ; out -> mIC . mX [ 114ULL ] = 0.0 ; out -> mIC . mX [
115ULL ] = 298.15 ; out -> mIC . mX [ 116ULL ] = 0.0 ; out -> mIC . mX [
117ULL ] = 0.0 ; out -> mIC . mX [ 118ULL ] = 0.0 ; out -> mIC . mX [ 119ULL
] = 0.0 ; out -> mIC . mX [ 120ULL ] = 298.15 ; out -> mIC . mX [ 121ULL ] =
298.15 ; out -> mIC . mX [ 122ULL ] = 298.15 ; out -> mIC . mX [ 123ULL ] =
298.15 ; out -> mIC . mX [ 124ULL ] = 0.0 ; out -> mIC . mX [ 125ULL ] = 0.0
; out -> mIC . mX [ 126ULL ] = 0.0 ; out -> mIC . mX [ 127ULL ] = 0.0 ; out
-> mIC . mX [ 128ULL ] = 0.0 ; out -> mIC . mX [ 129ULL ] = 0.0 ; out -> mIC
. mX [ 130ULL ] = 0.0 ; out -> mIC . mX [ 131ULL ] = 0.0 ; out -> mIC . mX [
132ULL ] = 0.0 ; out -> mIC . mX [ 133ULL ] = 0.0 ; out -> mIC . mX [ 134ULL
] = 0.0 ; out -> mIC . mX [ 135ULL ] = 0.0 ; out -> mIC . mX [ 136ULL ] = 0.0
; out -> mIC . mX [ 137ULL ] = 0.0 ; out -> mIC . mX [ 138ULL ] = 0.0 ; out
-> mIC . mX [ 139ULL ] = 0.0 ; out -> mIC . mX [ 140ULL ] = 0.0 ; out -> mIC
. mX [ 141ULL ] = 0.0 ; out -> mIC . mX [ 142ULL ] = 0.0 ; out -> mIC . mX [
143ULL ] = 0.0 ; out -> mIC . mX [ 144ULL ] = 0.0 ; out -> mIC . mX [ 145ULL
] = 0.0 ; out -> mIC . mX [ 146ULL ] = 298.15 ; out -> mIC . mX [ 147ULL ] =
0.0 ; out -> mIC . mX [ 148ULL ] = 0.0 ; out -> mIC . mX [ 149ULL ] = 0.0 ;
out -> mIC . mX [ 150ULL ] = 0.0 ; out -> mIC . mX [ 151ULL ] = 298.15 ; out
-> mIC . mX [ 152ULL ] = 298.15 ; out -> mIC . mX [ 153ULL ] = 298.15 ; out
-> mIC . mX [ 154ULL ] = 298.15 ; out -> mIC . mX [ 155ULL ] = 0.0 ; out ->
mIC . mX [ 156ULL ] = 0.0 ; out -> mIC . mX [ 157ULL ] = 0.0 ; out -> mIC .
mX [ 158ULL ] = 0.0 ; out -> mIC . mX [ 159ULL ] = 0.0 ; out -> mIC . mX [
160ULL ] = 0.0 ; out -> mIC . mX [ 161ULL ] = 0.0 ; out -> mIC . mX [ 162ULL
] = 0.0 ; out -> mIC . mX [ 163ULL ] = 0.0 ; out -> mIC . mX [ 164ULL ] = 0.0
; out -> mIC . mX [ 165ULL ] = 0.0 ; out -> mIC . mX [ 166ULL ] = 0.0 ; out
-> mIC . mX [ 167ULL ] = 0.0 ; out -> mIC . mX [ 168ULL ] = 0.0 ; out -> mIC
. mX [ 169ULL ] = 0.0 ; out -> mIC . mX [ 170ULL ] = 0.0 ; out -> mIC . mX [
171ULL ] = 0.0 ; out -> mIC . mX [ 172ULL ] = 0.0 ; out -> mIC . mX [ 173ULL
] = 0.0 ; out -> mIC . mX [ 174ULL ] = 0.0 ; out -> mIC . mX [ 175ULL ] = 0.0
; out -> mIC . mX [ 176ULL ] = 0.0 ; out -> mIC . mX [ 177ULL ] = 298.15 ;
out -> mIC . mX [ 178ULL ] = 0.0 ; out -> mIC . mX [ 179ULL ] = 0.0 ; out ->
mIC . mX [ 180ULL ] = 0.0 ; out -> mIC . mX [ 181ULL ] = 0.0 ; out -> mIC .
mX [ 182ULL ] = 298.15 ; out -> mIC . mX [ 183ULL ] = 298.15 ; out -> mIC .
mX [ 184ULL ] = 298.15 ; out -> mIC . mX [ 185ULL ] = 298.15 ; out -> mIC .
mX [ 186ULL ] = 0.0 ; out -> mIC . mX [ 187ULL ] = 0.0 ; out -> mIC . mX [
188ULL ] = 0.0 ; out -> mIC . mX [ 189ULL ] = 298.15 ; out -> mIC . mX [
190ULL ] = 0.0 ; out -> mIC . mX [ 191ULL ] = 0.0 ; out -> mIC . mX [ 192ULL
] = 0.0 ; out -> mIC . mX [ 193ULL ] = 0.0 ; out -> mIC . mX [ 194ULL ] =
298.15 ; out -> mIC . mX [ 195ULL ] = 298.15 ; out -> mIC . mX [ 196ULL ] =
298.15 ; out -> mIC . mX [ 197ULL ] = 298.15 ; ( void ) LC ; ( void ) out ;
return 0 ; }
