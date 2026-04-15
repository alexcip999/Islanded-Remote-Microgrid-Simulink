#ifndef scd3busMicrogridDroopControlFidelityLevels_h_
#define scd3busMicrogridDroopControlFidelityLevels_h_
#ifndef scd3busMicrogridDroopControlFidelityLevels_COMMON_INCLUDES_
#define scd3busMicrogridDroopControlFidelityLevels_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "scd3busMicrogridDroopControlFidelityLevels_c0dbec00_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "scd3busMicrogridDroopControlFidelityLevels_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <float.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME scd3busMicrogridDroopControlFidelityLevels
#define NSAMPLE_TIMES (8) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (170) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (2)   
#elif NCSTATES != 2
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T hc1gyegy3f [ 3 ] ; real_T kqiv34pn4h [ 3 ] ; real_T
gjl0s33nyr [ 3 ] ; } jcy052muck ; typedef struct { int32_T ihi2jstbs2 ;
boolean_T ovi3mu0twa ; } dr3zeyo5on ; typedef struct { real_T om1sj125wt ; }
b0azs1odcw ; typedef struct { real_T gwsozz21xa ; real_T fz2vuipvug ; real_T
mn3x5l1iyv ; int32_T jnzyynoydb ; boolean_T gubhsqnfba ; boolean_T dor3umtfyw
; boolean_T noduoxzhbp ; boolean_T jmjac22ve4 ; } lzkrz32ccw ; typedef struct
{ real_T mtj0qfc1hb ; real_T nrfpufphvr ; real_T gcijdhs3n1 [ 4 ] ; real_T
eehr2alozi [ 4 ] ; real_T ikm2snr5zf [ 6 ] ; real_T pffnxrfxjy [ 4 ] ; real_T
nz5jti2wr1 [ 4 ] ; real_T o5rnvo024s [ 4 ] ; real_T m0vl3iooy4 [ 4 ] ; real_T
dyttx33jl4 [ 4 ] ; real_T a1kee0bbhh [ 4 ] ; real_T pur1ybnggo [ 6 ] ; real_T
a4enoxc25n [ 4 ] ; real_T eqnxhwykea [ 4 ] ; real_T dnpeo0mlyy [ 4 ] ; real_T
fcn2r552dv [ 4 ] ; real_T nmpnlfxsny [ 4 ] ; real_T pb2fck224w [ 4 ] ; real_T
jyztzvd3j4 ; real_T cqqbzqbgzr [ 4 ] ; real_T hvlyozxkyc ; real_T nhs5fzmxh5
[ 4 ] ; real_T enr4er5ugn ; real_T e1d05x53fh [ 4 ] ; real_T byvjh01bgg ;
real_T jripa5e0sa [ 4 ] ; real_T mkbvufs0fh ; real_T nzubz5zcaw [ 166 ] ;
real_T dveoezpzol [ 18 ] ; real_T o44efxocq0 ; real_T jnilobsjko ; real_T
fil4mrutwj ; real_T kcl20ozfx5 ; real_T m3egez1rs1 ; real_T endb33fl2h ;
real_T hzuydp0342 ; real_T jbpuex4112 ; real_T d2z5yi1abu ; real_T clygmtjfwh
; real_T hqskxvv54t ; real_T ffey2m0ah2 ; real_T polsp5zirz ; real_T
ndti0gtzl3 ; real_T pzqtzfecyw [ 2 ] ; real_T na4tyjngmd [ 2 ] ; real_T
fymik4ehbr [ 2 ] ; real_T ffj153gzwx [ 2 ] ; real_T c51pwmznvw [ 2 ] ; real_T
femzflyely [ 2 ] ; real_T jyj4ef53mr [ 2 ] ; real_T ex0hed1yyl [ 2 ] ; real_T
bxl5szpbbj [ 2 ] ; real_T aobve4fqdo [ 2 ] ; real_T ah4awuzbmi [ 2 ] ; real_T
gcqrargtap [ 2 ] ; real_T nelhatsdgn [ 2 ] ; real_T ivyaisc3iw [ 2 ] ; real_T
fx0in4qczm [ 2 ] ; real_T b0zpex3nd3 [ 2 ] ; real_T dsgoyg1upn [ 2 ] ; real_T
kh5quoykke [ 2 ] ; real_T azdyb5jzw2 ; real_T pfeoax4yjp ; real_T ckmflb5ptc
; real_T kh1chxh5dg ; real_T ejiwuxoqfh ; real_T bz420ozoal ; real_T
fzvssdup2a ; real_T nim1vqistm ; real_T hzqxukdt2n [ 3 ] ; real_T k2pix3y1pq
; real_T gee5ztsvvw ; real_T bmjrp4i5l2 ; real_T ly0sxsegct [ 6 ] ; real_T
hf5edtag1w ; real_T pdsagbfkyi ; real_T b3oezmaicg ; real_T cxextfpyro ;
real_T c4nvx3ktei ; real_T egc5x2s3e1 ; real_T ltzix1lvi4 ; real_T k3lhsxpimt
; real_T fddkxm4bda ; real_T m3enyhsvoz ; real_T ofnzty1w1l ; real_T
jewqbqieti ; real_T lqq2v20z4e ; real_T pqgdmyojvr ; real_T dhxxrbtiya ;
real_T lkgxgrmcdf ; real_T ab1tfr0xfv [ 2 ] ; real_T klcm0ofnb2 [ 2 ] ;
real_T mktfwuvyz0 [ 2 ] ; real_T hrf2kbz0fz [ 2 ] ; real_T ncijorklu2 [ 2 ] ;
real_T csz1erxzbp [ 2 ] ; real_T nohypq1rb4 [ 2 ] ; real_T c53six4jge [ 2 ] ;
real_T krbnjfnjon [ 2 ] ; real_T gvbz2kxljw [ 2 ] ; real_T deuh5tyk4q [ 2 ] ;
real_T d0gifw0q3v [ 2 ] ; real_T ahufcewv41 [ 2 ] ; real_T pg2dbtctik [ 2 ] ;
real_T evp4c5goee [ 2 ] ; real_T jdgl5035pl [ 2 ] ; real_T n0nnkknxzj [ 2 ] ;
real_T bf3cljzk3i [ 2 ] ; real_T lutjprh4lt ; real_T o0id30im0j ; real_T
hiku2rsz33 ; real_T jqjid2ex0e ; real_T glxm44mkys ; real_T eodqn1cxgj ;
real_T od3c3m5uvu ; real_T bo1uuaes1k ; real_T bsgqmzut0s ; real_T lrqp1tp2yx
[ 3 ] ; real_T l4aof44tt5 ; real_T dzso2blz3j ; real_T fdzts3csz1 ; real_T
k5e1dud3cs [ 6 ] ; real_T h53otsunu5 ; real_T lyfxv21wwk ; real_T dsqazdztds
; real_T f0tw1xremj ; real_T pyjku12imh ; real_T hh4tq13ns3 ; real_T
jeo2sdv30b ; real_T g31ndulfdx [ 2 ] ; real_T lvs2nqocrc ; real_T gnm1oejpr1
; real_T anrciyr1bu ; real_T laggjrezxv ; real_T oekaepqjyv ; real_T
lhdhpkyers ; real_T dmvf3ba4on ; real_T o12qoj43ak ; real_T moxna2fjso ;
real_T dqyaxoax35 ; real_T ooq523rnwd ; real_T a3jorwwe5p ; real_T hfcrw40dq2
[ 4 ] ; real_T jo3jcfotck [ 4 ] ; real_T nvfkwmhj20 ; real_T lwun3vmeu5 ;
real_T nacb4b1xou ; real_T lnfcgypq4p ; uint32_T ois3ekjgke ; uint32_T
dknyvaohjv ; boolean_T nrde2fmcqk ; boolean_T hj4zhmy0lq ; b0azs1odcw
jyzjgf4veo ; b0azs1odcw dnwyq4zwad ; jcy052muck gl43fmrisv ; jcy052muck
hujlteqo2z ; } B ; typedef struct { real_T c2pjulqreq [ 2 ] ; real_T
ldvgcubppo [ 2 ] ; real_T gmmxfl1bw3 [ 6 ] ; real_T l4zj40yoiw [ 2 ] ; real_T
ff1idcuyj3 [ 2 ] ; real_T hy1ejh3uja [ 2 ] ; real_T ftitttx1ko [ 2 ] ; real_T
nwsnu4bedy [ 2 ] ; real_T pf1lum1bqu [ 2 ] ; real_T cs5il4k0w2 [ 6 ] ; real_T
gq11ipk23p [ 2 ] ; real_T gsbxdcbtoo [ 2 ] ; real_T i3dxfx4ud3 [ 2 ] ; real_T
gtai5gwlbw [ 2 ] ; real_T p02z5qbxni [ 2 ] ; real_T omf1kqumni [ 2 ] ; real_T
o0pnnssinp ; real_T hnmxyifoxa [ 2 ] ; real_T ek2rwpc4pa [ 2 ] ; real_T
pkqxz2ee2e ; real_T gdbqjocnxn [ 2 ] ; real_T dhbbriu3am [ 2 ] ; real_T
mip5knuolb [ 112 ] ; real_T prhiof4qsq ; real_T ecsqxwncwm ; real_T
nim5l5b0xd ; real_T aybtzdp53j ; real_T casefabrfq ; real_T cnmjwkmazr [ 2 ]
; real_T brlwrgk15q [ 2 ] ; real_T o25uswlvdp [ 2 ] ; real_T medeidy042 [
6666 ] ; real_T cu4avl1hkj [ 2 ] ; real_T bsq0dfmaxa [ 2 ] ; real_T
cezbwb0d2a [ 2 ] ; real_T ox4tevucxv [ 6666 ] ; real_T g31vxfpy4q [ 2 ] ;
real_T db5bwiekun [ 2 ] ; real_T ls4rxzkes5 [ 2 ] ; real_T bdgovhv4ik [ 6666
] ; real_T eiw52ywrb4 [ 2 ] ; real_T hpqftlxp3c [ 2 ] ; real_T dk0rvfsmaq [ 2
] ; real_T kc40jaqb2h [ 6666 ] ; real_T a1sr2wqgmu [ 2 ] ; real_T g4ja2dajvk
[ 2 ] ; real_T luujgxmr1o [ 2 ] ; real_T e3gek0ry3d [ 6666 ] ; real_T
nvwrcwhvfh [ 2 ] ; real_T f0gipvq3m1 [ 2 ] ; real_T kwtkfmor5n [ 2 ] ; real_T
j1x1hsbdr0 [ 6666 ] ; real_T n5nzu3kjes ; real_T cpdftgvp5j ; real_T
aytq4ro10u ; real_T hon4sukebl [ 3 ] ; real_T buoynvge5k ; real_T ibybqspfgl
; real_T jsd0tjjonc ; real_T lqb3ywvxey ; real_T ho4bknelcg ; real_T
itoao1sfit [ 2 ] ; real_T c4lxq5nxdk [ 2 ] ; real_T i31qdzmytg [ 2 ] ; real_T
ijyhgxa4ir [ 6666 ] ; real_T ikmihxdjgd [ 2 ] ; real_T beyirrck3l [ 2 ] ;
real_T opjnplgrqr [ 2 ] ; real_T bzfzyz3bd1 [ 6666 ] ; real_T fhoxjffvpi [ 2
] ; real_T kibzgbc1sz [ 2 ] ; real_T cylq3fvmgt [ 2 ] ; real_T ezchfr4o4l [
6666 ] ; real_T brhp0ikhtk [ 2 ] ; real_T cx4aeyf40y [ 2 ] ; real_T
fndyh2xhdu [ 2 ] ; real_T eftulqbrzz [ 6666 ] ; real_T m0cw303eqj [ 2 ] ;
real_T hlb4yuxrtw [ 2 ] ; real_T plzxjtiyrv [ 2 ] ; real_T jookwiu0tz [ 6666
] ; real_T gwf111r5cb [ 2 ] ; real_T ga5s5ik0xv [ 2 ] ; real_T jqooyst0rm [ 2
] ; real_T d3ckza5q5a [ 6666 ] ; real_T a51ghepnze ; real_T hqs2mw0ghn ;
real_T eh404m514p ; real_T dhijvgbrcb [ 3 ] ; real_T e1h3pdnle0 ; real_T
fahmpvykdf ; real_T fhiibidmhv ; real_T hohmgcvl5b ; real_T aztl5dgba1 ;
real_T elswac3jyk ; real_T iml3sujeru ; real_T k5zonezswp ; real_T avrp3pl50n
; real_T nhad53qhlh [ 3 ] ; real_T bmdokcjl2s [ 3 ] ; real_T hpygl3vduj ;
real_T e1yo12tosu ; real_T ptavdiqfuy ; real_T exod2jkl51 ; void * pdwd2qqxba
; void * d3svesmau2 ; void * ctpmr0qy2w ; void * gn4tdbf40k ; void *
jnvtrrqjab ; void * ihbnz3xv44 ; void * dewjhbtsof ; void * czyrktcsyd ; void
* fyx05x0zdv ; void * eyk03rsw5y ; void * bvobfiadqb ; void * jr4kkfwx0e [ 2
] ; void * k12qk4zsfm [ 2 ] ; struct { void * LoggedData [ 2 ] ; } aw3nmy5ew5
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
cnspotbbsa ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} ckxcz3qb0c ; void * bjxv1rvheo [ 2 ] ; void * buyuofckyi [ 2 ] ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nkgor1datg ; struct
{ void * LoggedData ; } al5kuxfjwn ; struct { void * LoggedData [ 2 ] ; }
hxvgeow341 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} pwtoor2sjt ; struct { void * LoggedData [ 4 ] ; } bsgf2ryqdu ; struct {
void * AQHandles ; } k03x2e2zwo ; struct { void * AQHandles ; } b1iol10x4w ;
struct { void * AQHandles ; } pru2b1vufe ; struct { void * AQHandles ; }
iiuqq1u2xy ; struct { void * LoggedData [ 2 ] ; } ajopsahum1 ; struct { void
* AQHandles ; } elrlc2i1p2 ; struct { void * AQHandles ; } ht2kgpwizw ;
struct { void * AQHandles ; } hb0mah0exy ; struct { void * AQHandles ; }
gvx2zg2cea ; struct { void * AQHandles ; } nuyoxo0cqz ; struct { void *
LoggedData [ 3 ] ; } gww0cv0ikt ; struct { void * LoggedData [ 2 ] ; }
bsvedga4ar ; struct { void * AQHandles ; } g2zj3hehp4 ; struct { void *
AQHandles ; } c4ulfwrxhx ; struct { void * AQHandles ; } jq1p4omjox ; struct
{ void * AQHandles ; } po2vncqjoh ; struct { void * LoggedData [ 2 ] ; }
gkz0y4hq2m ; uint32_T evl1v4iore ; uint32_T nkjbdq4ryd ; int32_T lykadcxjo0 ;
int32_T kksigz1kjz ; int_T g0ey1umlvp [ 54 ] ; int_T aoolzur04j ; int_T
fdcsxjj0tt [ 5 ] ; int_T ka1dja1it3 [ 5 ] ; struct { int_T PrevIndex ; }
bgeyshjbzb ; struct { int_T PrevIndex ; } mjve5455le ; int_T ey2v3oako3 [ 5 ]
; int_T hvxmf3zuqp [ 5 ] ; struct { int_T PrevIndex ; } k1540yevzf ; struct {
int_T PrevIndex ; } blyhnqcwbl ; int_T cplapuxul1 ; int_T etyndqvhof ; int8_T
ivsks1bx0l ; int8_T kqwgkvrpbx ; int8_T mrclia2nhj ; int8_T mkfm1nwa4k ;
int8_T dfhxi1pprk ; int8_T goxydkgp3m ; uint8_T pesmq01kos ; uint8_T
ad2rr00kcq ; uint8_T mfooylrov2 ; uint8_T a0ow33ilzk ; uint8_T bkwrvqxkf1 ;
uint8_T j50udee3q4 ; uint8_T irp0xx4avl ; uint8_T p5powm1gdp ; uint8_T
puogz2oxpb ; uint8_T h4yemslxzv ; uint8_T ib045naqql ; uint8_T htly4042cc ;
uint8_T lmniz4owhh ; uint8_T hwjumjs5x1 ; uint8_T e4kyxoj0nc ; uint8_T
nihpeweagh ; uint8_T moyclcqaxp ; uint8_T baseatbrhl ; uint8_T o5sglifuzn ;
uint8_T iphlqctr2v ; uint8_T pwkdcusirn ; uint8_T dzmkslhpoi ; uint8_T
lc0mv3azov ; uint8_T j4reyhjks0 ; uint8_T mxcgazvi0e ; uint8_T iwne4nroqk ;
uint8_T juff0j4zxc ; uint8_T hdnm0in5gu ; boolean_T hd1wmr0d1r ; boolean_T
jdpempr5r1 ; boolean_T csrr5dodrz ; boolean_T jdkwfeajym ; boolean_T
ibt15oxvor ; boolean_T cwc1wqm0vk ; boolean_T mbinizmvii ; boolean_T
lwuyrwvpiz ; boolean_T p0iycn1rso ; boolean_T muorklbp1c ; boolean_T
m13d2twz41 ; boolean_T hqef4lwy1a ; boolean_T ck2irrfdg1 ; lzkrz32ccw
jyzjgf4veo ; lzkrz32ccw dnwyq4zwad ; dr3zeyo5on gl43fmrisv ; dr3zeyo5on
hujlteqo2z ; } DW ; typedef struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ;
} X ; typedef struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; } XDot ;
typedef struct { boolean_T cpre0ir1h4 ; boolean_T d4vwwltaq4 ; } XDis ;
typedef struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; } CStateAbsTol ;
typedef struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; } CXPtMin ; typedef
struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; } CXPtMax ; typedef struct {
real_T jqej3hari1 ; real_T oxjnlan55z ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct hn5x2iuncz_ { real_T
SwitchingTimeCalculation_PWM ; real_T SwitchingTimeCalculation_fsw ; } ;
struct P_ { real_T Kdroop_fp1 ; real_T Kdroop_fp2 ; real_T Kdroop_vq1 ;
real_T Kdroop_vq2 ; real_T Ki_vd ; real_T Ki_vq ; real_T Kp_vd ; real_T Kp_vq
; real_T Ts ; real_T Vdc1 ; real_T Vdc2 ; real_T Vrms ; real_T
consensus_enable ; real_T fgrid ; real_T
VdDiscretePIController_InitialConditionForIntegrator ; real_T
VqDiscretePIController_InitialConditionForIntegrator ; real_T
VdDiscretePIController_InitialConditionForIntegrator_idipyi4en2 ; real_T
VqDiscretePIController_InitialConditionForIntegrator_etog44td1j ; real_T
PowerMeasurementThreePhase_K ; real_T PowerMeasurementThreePhase_K_hy3xpce12q
; real_T SinusoidalMeasurementPLLThreePhase_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_oyh5wkhpw5 ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_bot0muxzza ; real_T
SinusoidalMeasurementPLLThreePhase1_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_ndbawt3bd0 ; real_T
SinusoidalMeasurementPLLThreePhase1_Kp_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_evcqlc0f5m ; real_T
VdDiscretePIController_LowerSaturationLimit ; real_T
VqDiscretePIController_LowerSaturationLimit ; real_T
VdDiscretePIController_LowerSaturationLimit_kzdnvpoxxj ; real_T
VqDiscretePIController_LowerSaturationLimit_l3t03oryem ; real_T
irradiance_OutValues [ 24 ] ; real_T irradiance_OutValues_gy1zpozhsg [ 24 ] ;
real_T SinusoidalMeasurementPLLThreePhase_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau ; real_T
SinusoidalMeasurementPLLThreePhase1_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz ; real_T
irradiance_TimeValues [ 24 ] ; real_T irradiance_TimeValues_h1agehmocs [ 24 ]
; real_T VdDiscretePIController_UpperSaturationLimit ; real_T
VqDiscretePIController_UpperSaturationLimit ; real_T
VdDiscretePIController_UpperSaturationLimit_clg5ygz5v5 ; real_T
VqDiscretePIController_UpperSaturationLimit_bclvwasnsn ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ;
real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_gca2pndy5y
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kxsgugcvmz
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_k5nbqzap3x
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l0mfddutlu
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_erg5yu5yxu
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue ;
real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_kpwvhjlgaq
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_c5wjg5w2lg
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_cl5dytyjkn
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_aj0bheagem
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_k3s5fw1q11
; real_T IntegratorwithWrappedStateDiscreteorContinuous_x0 ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_h1m1w5hlay ; uint32_T
LimitedCounter_uplimit ; uint32_T LimitedCounter_uplimit_gcdf4egkla ; real_T
Gain1_Gain ; real_T Gain1_Gain_ollxa44d1e ; real_T Gain2_Gain ; real_T
Gain1_Gain_b2wmxmysa4 ; real_T Gain1_Gain_cvrz05eflz ; real_T
Gain1_Gain_msdjc3sds3 ; real_T Gain1_Gain_bct5xv0x0d ; real_T
Gain1_Gain_fdb215vbov ; real_T Gain3_Gain ; real_T Gain1_Gain_hzadu4huns ;
real_T Gain1_Gain_caxz35q2gc ; real_T Gain2_Gain_fkhwdbr2xf ; real_T
Gain1_Gain_kzsdhtloji ; real_T Gain1_Gain_im4ln3hgws ; real_T
Gain1_Gain_ig1ss2ojir ; real_T Gain1_Gain_ons3rxrahf ; real_T
Gain1_Gain_pxruile2ng ; real_T Gain3_Gain_ku2mah5vw0 ; real_T
Connectat2s_Time ; real_T Connectat2s_Y0 ; real_T Connectat2s_YFinal ; real_T
Connectat4s_Time ; real_T Connectat4s_Y0 ; real_T Connectat4s_YFinal ; real_T
UnitDelay1_InitialCondition ; real_T UnitDelay1_InitialCondition_lapzeesnb2 ;
real_T UnitDelay_InitialCondition ; real_T SampleTimeMath_WtEt ; real_T
UnitDelay_InitialCondition_inzqlzdpmy ; real_T SampleTimeMath_WtEt_duutwjczyo
; real_T Integrator_gainval ; real_T Gain1_Gain_losnrngiyc ; real_T
Constant1_Value ; real_T Integrator_gainval_carz0grxbg ; real_T
Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T Saturation_UpperSat
; real_T Saturation_LowerSat ; real_T Gain1_Gain_dzyyjzode5 ; real_T
TransportDelay_Delay ; real_T TransportDelay_InitOutput ; real_T
TransportDelay1_Delay ; real_T TransportDelay1_InitOutput ; real_T
DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ; real_T
DiscreteTimeIntegrator_gainval ; real_T DiscreteTimeIntegrator_IC ; real_T
fromWS_Signal1_Time0 [ 4 ] ; real_T fromWS_Signal1_Data0 [ 4 ] ; real_T
Integrator_gainval_avayg33ayj ; real_T Integrator_gainval_bh1byogw3o ; real_T
Integrator_IC ; real_T UnitDelay1_InitialCondition_igxde5r1oa ; real_T
UnitDelay2_InitialCondition ; real_T Delay_InitialCondition ; real_T
Gain_Gain ; real_T Integrator_gainval_g1hx0pgpel ; real_T
Integrator_IC_g4xqnrlohi ; real_T UnitDelay1_InitialCondition_mkjhh3hej3 ;
real_T UnitDelay2_InitialCondition_ky4da5qoff ; real_T
Delay_InitialCondition_pxsgay3n2d ; real_T Gain_Gain_msl2mctrek ; real_T
Integrator_gainval_g2bxhp4r3m ; real_T Integrator_IC_ol30bkacbk ; real_T
UnitDelay1_InitialCondition_mwdjagajvk ; real_T
UnitDelay2_InitialCondition_oacume4w23 ; real_T
Delay_InitialCondition_jdzlvwaqw3 ; real_T Gain_Gain_ka0ohvwpd2 ; real_T
Integrator_gainval_nec3pprea3 ; real_T Integrator_IC_fe5bpfeox5 ; real_T
UnitDelay1_InitialCondition_jazgyvwy0b ; real_T
UnitDelay2_InitialCondition_c335id2yur ; real_T
Delay_InitialCondition_kvqzfvuqvw ; real_T Gain_Gain_n2i2fdezd0 ; real_T
Integrator_gainval_iydjvvm3uf ; real_T Integrator_IC_klk0nn5nsf ; real_T
UnitDelay1_InitialCondition_lqiknbltiv ; real_T
UnitDelay2_InitialCondition_lq1eghcbab ; real_T
Delay_InitialCondition_eo1i4emrrh ; real_T Gain_Gain_ewisuu03rb ; real_T
Integrator_gainval_h1oputbahl ; real_T Integrator_IC_edmj50xozy ; real_T
UnitDelay1_InitialCondition_ls5nawmwll ; real_T
UnitDelay2_InitialCondition_p5x2r4bsum ; real_T
Delay_InitialCondition_jdx3lhztnl ; real_T Gain_Gain_n13h0tbo3s ; real_T
Gain_Gain_ij5ephcub4 ; real_T Integrator_IC_i2u0y3f22e ; real_T
FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 2 ] ; real_T
Gain1_Gain_mocebkriwh ; real_T Integrator_gainval_gjezqe5f5f ; real_T
Integrator_gainval_prwo1fbvrt ; real_T Gain1_Gain_cwovvihjzo ; real_T
Initial_Value ; real_T DiscreteTimeIntegrator1_gainval_cxzqbmd0qn ; real_T
avoiddivisionby0_UpperSat ; real_T avoiddivisionby0_LowerSat ; real_T
UnitDelay2_InitialCondition_p5dmi4fyvs ; real_T Integrator_gainval_aiqo4pqknj
; real_T Gain1_Gain_abh3hvbccc ; real_T Constant1_Value_lsknndl14i ; real_T
Integrator_gainval_j4gmb2gwsc ; real_T Integrator_UpperSat_lm3ewrrsxh ;
real_T Integrator_LowerSat_hjh2vovvsr ; real_T Saturation_UpperSat_gox4btb11r
; real_T Saturation_LowerSat_axo2ygf3i0 ; real_T Gain1_Gain_e2meerxskp ;
real_T TransportDelay_Delay_ag53vhwsyv ; real_T
TransportDelay_InitOutput_hyaxfclhky ; real_T
TransportDelay1_Delay_fmvsbqj5tj ; real_T
TransportDelay1_InitOutput_pmbwserd04 ; real_T
DiscreteTimeIntegrator1_gainval_bfxxjmpabm ; real_T
DiscreteTimeIntegrator1_IC_akx0cgm0yv ; real_T
DiscreteTimeIntegrator_gainval_lrim5qbkf2 ; real_T
DiscreteTimeIntegrator_IC_nxtwlpx203 ; real_T FromWorkspace1_Time0 [ 4 ] ;
real_T FromWorkspace1_Data0 [ 4 ] ; real_T Integrator_gainval_nbtau22bcs ;
real_T Integrator_gainval_lx3n3x4rqc ; real_T Integrator_IC_cooq3xxsvj ;
real_T UnitDelay1_InitialCondition_j5udodixng ; real_T
UnitDelay2_InitialCondition_lxsa4gacjt ; real_T
Delay_InitialCondition_a55iiq0o4f ; real_T Gain_Gain_g1bxa5yagb ; real_T
Integrator_gainval_j3zllfw2ya ; real_T Integrator_IC_o1gepkaxe2 ; real_T
UnitDelay1_InitialCondition_jfuykwtijp ; real_T
UnitDelay2_InitialCondition_lratdejrvc ; real_T
Delay_InitialCondition_iyzd5f3bo1 ; real_T Gain_Gain_lhnhdifs0e ; real_T
Integrator_gainval_n4mbdo45bw ; real_T Integrator_IC_evhka53zqk ; real_T
UnitDelay1_InitialCondition_izykpui1wt ; real_T
UnitDelay2_InitialCondition_ec3b0v2ked ; real_T
Delay_InitialCondition_bavhdtocgy ; real_T Gain_Gain_o4zcph2u4p ; real_T
Integrator_gainval_paeznd5jot ; real_T Integrator_IC_ngdqv10nj2 ; real_T
UnitDelay1_InitialCondition_bosg34hruf ; real_T
UnitDelay2_InitialCondition_iqiy2ig2a2 ; real_T
Delay_InitialCondition_lcu1ixidx5 ; real_T Gain_Gain_knn0armyna ; real_T
Integrator_gainval_cewndrxcpd ; real_T Integrator_IC_bwgl5a0wob ; real_T
UnitDelay1_InitialCondition_nggtcjmvxt ; real_T
UnitDelay2_InitialCondition_ofqprotkgb ; real_T
Delay_InitialCondition_hqkwrz2i2i ; real_T Gain_Gain_in5c1sqasm ; real_T
Integrator_gainval_ksirpb4yxq ; real_T Integrator_IC_fpbmwehjlf ; real_T
UnitDelay1_InitialCondition_eyrhkzaysm ; real_T
UnitDelay2_InitialCondition_eqc4tfjodc ; real_T
Delay_InitialCondition_gukmfnnmw2 ; real_T Gain_Gain_dgbqv335s1 ; real_T
Gain_Gain_pcqi2zh5ks ; real_T Integrator_IC_dkgbnnaxcx ; real_T
FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [ 2 ] ; real_T
Gain1_Gain_algp55cnlc ; real_T Integrator_gainval_f0rqsj0fnp ; real_T
Integrator_gainval_kexeikjgzm ; real_T Gain1_Gain_kbqppqxrgb ; real_T
Initial_Value_j4wczc1lxq ; real_T DiscreteTimeIntegrator1_gainval_arqevlqjww
; real_T avoiddivisionby0_UpperSat_nx01wqrouz ; real_T
avoiddivisionby0_LowerSat_avgk30jeg3 ; real_T
UnitDelay2_InitialCondition_pvc43f4wjv ; real_T Gain_Gain_edy3rsxlbj ; real_T
Gain_Gain_liiiiertx5 ; real_T Integrator_gainval_jiozqx4w4v ; real_T
Gain1_Gain_b4avjwyrj2 ; real_T Constant1_Value_da1dwznx44 ; real_T
Integrator_gainval_coazxg22nt ; real_T Integrator_UpperSat_hpvvxjqfd4 ;
real_T Integrator_LowerSat_i10qscebp4 ; real_T Saturation_UpperSat_i15q0blda2
; real_T Saturation_LowerSat_jx0zzxgaew ; real_T Gain1_Gain_gi0auafmvm ;
real_T Integrator_gainval_o23ns0zq3s ; real_T Gain1_Gain_b02alh1u5u ; real_T
Constant1_Value_ktx3gyatq5 ; real_T Integrator_gainval_axkjs1f2yw ; real_T
Integrator_UpperSat_nxtktwi3hv ; real_T Integrator_LowerSat_micq5t2bis ;
real_T Saturation_UpperSat_kp53gt01p2 ; real_T Saturation_LowerSat_p4o1xc0k2h
; real_T Gain1_Gain_kgot1sgoty ; real_T Constant1_Value_lodywi0z2n ; real_T
Constant1_Value_ipdttkadk5 ; real_T Constant2_Value ; real_T Constant3_Value
; real_T Sequence_Value ; real_T V0_Value ; real_T Constant5_Value ; real_T
Constant1_Value_brrjsvceec ; real_T Constant2_Value_lexwhwkcr1 ; real_T
Constant3_Value_lyqvw4nurv ; real_T Sequence_Value_phlzt4e1pz ; real_T
V0_Value_gfkw3a205u ; real_T D_init_Value ; real_T D_max_Value ; real_T
D_min_Value ; real_T Delta_D_Value ; real_T RTP_44647E90_TFIXED_Value ;
real_T D_init_Value_gzmutkxqpm ; real_T D_max_Value_b3iaci24kf ; real_T
D_min_Value_jxuzma2pr2 ; real_T Delta_D_Value_nexecftfus ; real_T
RTP_DD0943EF_TFIXED_Value ; real_T RTP_1D2E87C1_IL_Value [ 3 ] ; real_T
RTP_6A29B757_IL_Value [ 3 ] ; real_T RTP_A18535C3_IL_Value [ 3 ] ; real_T
RTP_D6820555_IL_Value [ 3 ] ; creal_T alpha2_Gain ; creal_T alpha_Gain ;
creal_T alpha2_Gain_edh0qhxj4e ; creal_T alpha_Gain_pkcgaplt3m ; creal_T
alpha_Gain_h144fvpml1 ; creal_T alpha2_Gain_k54l5bjcyn ; creal_T
alpha_Gain_ns5srwfp4a ; creal_T alpha2_Gain_b2lryd4erl ; creal_T
alpha2_Gain_jmjocn5324 ; creal_T alpha_Gain_chzz2ghjpt ; creal_T
alpha2_Gain_jdfqf2swbm ; creal_T alpha_Gain_mt0yc41pmx ; creal_T
alpha_Gain_ebrttocmwz ; creal_T alpha2_Gain_g1epyvb0j5 ; creal_T
alpha_Gain_c32fofybnv ; creal_T alpha2_Gain_c0nmmexjjw ; uint32_T
Output_InitialCondition ; uint32_T Output_InitialCondition_i4kbzdl5hu ;
uint32_T FixPtConstant_Value ; uint32_T Constant_Value ; uint32_T
FixPtConstant_Value_kxw1vl0agc ; uint32_T Constant_Value_py20bfahtq ;
hn5x2iuncz gl43fmrisv ; hn5x2iuncz hujlteqo2z ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels_GetDWork ( ) ; extern void
mr_scd3busMicrogridDroopControlFidelityLevels_SetDWork ( const mxArray * ssDW
) ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
scd3busMicrogridDroopControlFidelityLevels_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
