#ifndef scd3busMicrogridDroopControlFidelityLevels3Inv_h_
#define scd3busMicrogridDroopControlFidelityLevels3Inv_h_
#ifndef scd3busMicrogridDroopControlFidelityLevels3Inv_COMMON_INCLUDES_
#define scd3busMicrogridDroopControlFidelityLevels3Inv_COMMON_INCLUDES_
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
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_c0dbec00_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "scd3busMicrogridDroopControlFidelityLevels3Inv_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <float.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME scd3busMicrogridDroopControlFidelityLevels3Inv
#define NSAMPLE_TIMES (8) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (169) 
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
typedef struct { real_T nogazibzfm [ 3 ] ; real_T ftc4o3n5nk [ 3 ] ; real_T
a4sdpjwhg4 [ 3 ] ; } cfbsix32hq ; typedef struct { int32_T aj2oigcqgi ;
boolean_T lsxk35ybyv ; } pbb5q0konc ; typedef struct { real_T inwo2h1a1g ; }
hduftbmnkl ; typedef struct { real_T desvtlntjf ; real_T kijpyuwzj0 ; real_T
arum3s1iob ; int32_T d3lpme3mvz ; boolean_T f20uonvryl ; boolean_T db5aykws4l
; boolean_T k1j5ku2pbl ; boolean_T bzwnjg0fmw ; } dexa4nfqku ; typedef struct
{ real_T ei4lln0q5s ; real_T nxdqhvmm51 ; real_T ocygpq4qf0 [ 4 ] ; real_T
ao0kryqjj3 [ 4 ] ; real_T fhgph55f5i [ 6 ] ; real_T d0pcxvv4fy [ 4 ] ; real_T
o1u4pbga12 [ 4 ] ; real_T nzjiysdywz [ 4 ] ; real_T k14cxuvsl0 [ 4 ] ; real_T
el54jkizkh [ 4 ] ; real_T fpxkasfanp [ 4 ] ; real_T mvsbjqpvhv ; real_T
alnx5dergm [ 4 ] ; real_T kir5y4ijul ; real_T i3xyqowhx1 [ 4 ] ; real_T
aqfqsbltuz [ 6 ] ; real_T eiz05m2eq2 [ 4 ] ; real_T fhm4g3pvxm [ 4 ] ; real_T
bikpuh2ld4 [ 4 ] ; real_T o2iweabsuq [ 4 ] ; real_T ll1gece2b5 [ 4 ] ; real_T
bmfjchb3lk [ 4 ] ; real_T jnljm5kzya ; real_T gdij1hrikx [ 4 ] ; real_T
o4yycglk5f ; real_T boi3sufhga [ 4 ] ; real_T mwz2ikf430 ; real_T bv1u2xbzop
[ 166 ] ; real_T f20it1oows [ 16 ] ; real_T nzx22fo5fy ; real_T iuaxjtvahh ;
real_T i5mqx3xny3 ; real_T h0dfdt4wyz ; real_T pzfa2xkl4v ; real_T g5mcoun4lw
; real_T gs5wyihvys ; real_T k4r3cthrxf ; real_T m53iz40fis ; real_T
cmw5wgndfk ; real_T eer3gu02w3 ; real_T mr1iw300fl ; real_T ki2vyklrir ;
real_T g3urskcfkd ; real_T cghnfm25nc [ 2 ] ; real_T pctiiqsvk3 [ 2 ] ;
real_T nkuagesbta [ 2 ] ; real_T igaw0wp0y0 [ 2 ] ; real_T dczis3xiep [ 2 ] ;
real_T nijspiecck [ 2 ] ; real_T gb34qd5y35 [ 2 ] ; real_T egk2boxzw4 [ 2 ] ;
real_T lghz2c0xl2 [ 2 ] ; real_T dya2llmwfm [ 2 ] ; real_T cwrct0qxcx [ 2 ] ;
real_T lwkcctbczd [ 2 ] ; real_T bjij5l0l3p [ 2 ] ; real_T fvxepto024 [ 2 ] ;
real_T pvdx2f2gof [ 2 ] ; real_T ktydu3l1b0 [ 2 ] ; real_T kztaprpwui [ 2 ] ;
real_T msfj4wv45z [ 2 ] ; real_T lnhr0cum31 ; real_T cbpjfq0qno ; real_T
abboxxs5l2 ; real_T nir1444pax ; real_T hwzgslfiyz ; real_T cxuz2nmitq ;
real_T gwpvflfwrv ; real_T bjicotbkry ; real_T arbbalrswd [ 3 ] ; real_T
coqhvhwbrp ; real_T dazpwzrztl ; real_T cjpiiwmtl5 ; real_T heudw3exo2 [ 6 ]
; real_T mbigu2kv2k ; real_T m2wr0yeloo ; real_T fsjkq0qgiv ; real_T
c2tfqobu1t ; real_T luvwyfccsq ; real_T pabo1inqr2 ; real_T jwfrbsyz4m ;
real_T j13x1hvcxk ; real_T gnlmcbev4b ; real_T jayoj4dyw5 ; real_T ewn2md5kh1
; real_T jkesiy2yaq ; real_T dqrf0afg10 ; real_T bnycunj4ml ; real_T
i2fvx1pe3h ; real_T klzefxis2q ; real_T ol1w00hqsk [ 2 ] ; real_T d1mwguypvu
[ 2 ] ; real_T gj0usqebxt [ 2 ] ; real_T nsfwsytx24 [ 2 ] ; real_T hxt1f1mnqp
[ 2 ] ; real_T hsxva3bpd0 [ 2 ] ; real_T hpdhpbs42v [ 2 ] ; real_T nj22mo4ljg
[ 2 ] ; real_T omwbssai1v [ 2 ] ; real_T bpjdloer22 [ 2 ] ; real_T nv02mnmrwr
[ 2 ] ; real_T ai4cebu1f1 [ 2 ] ; real_T ki1rj12jle [ 2 ] ; real_T dsql1vygr1
[ 2 ] ; real_T fhmzeecr0u [ 2 ] ; real_T mhf5firapd [ 2 ] ; real_T coyt01nnp0
[ 2 ] ; real_T p5lr4gvlsn [ 2 ] ; real_T pjym1ajgbs ; real_T l0mq0e2tqh ;
real_T ec4or2w0ub ; real_T ok4bawuixn ; real_T e2hup0w4sn ; real_T bnkqjnoev4
; real_T blome054s3 ; real_T ceszkpvj4e ; real_T lqttytwmph ; real_T
guvniyvble [ 3 ] ; real_T lgmylwafep ; real_T owxzcg2iad ; real_T ixaiqffqcr
; real_T lmn0fcncxd [ 6 ] ; real_T fmkhhgef14 ; real_T atsvwv5tp4 ; real_T
psl2exfnnn ; real_T hysc2volxl ; real_T a03dtwgaki ; real_T izfgdxnfne ;
real_T kj4eyjl3od ; real_T apoxoe5dcw ; real_T pzwji1itcz ; real_T gdewrkkciq
; real_T l1xn0mp434 ; real_T hhnwwr4ci0 ; real_T epzbtl4un0 ; real_T
ff2ptonks1 ; real_T nerroyjo0m ; real_T iz0atbsnlp ; real_T er0d24lgwc ;
real_T k3mmpyllb3 ; real_T eyji0ccwdf ; real_T gvidcnjsr4 [ 4 ] ; real_T
lzyqewxzpm [ 4 ] ; real_T ppnk5m4iga ; real_T e4siafb0lo ; real_T n4cqcbw2xh
; real_T ixlmzxyt5a ; uint32_T i0wylh14fe ; uint32_T pchmqn5ziu ; boolean_T
fw1zjpewii ; boolean_T b2nujtyat5 ; hduftbmnkl apxr4nbt5e ; cfbsix32hq
gjqcaemk4s ; hduftbmnkl mtpjy52dke ; cfbsix32hq p2op1l50wj ; } B ; typedef
struct { real_T igp4e0q2dy [ 2 ] ; real_T ebhknt2oct [ 2 ] ; real_T
a2yklk2okj [ 6 ] ; real_T ktk3xcoeow [ 2 ] ; real_T coz2rcxvm2 [ 2 ] ; real_T
jfw3i1yois [ 2 ] ; real_T hpdk3ydble [ 2 ] ; real_T ga2zrxiyy2 [ 2 ] ; real_T
mtmznjmnve [ 2 ] ; real_T iiz0beb1lq ; real_T f3yo23vsc4 [ 2 ] ; real_T
kd4mlnk2i2 [ 2 ] ; real_T o0xynyiyj4 [ 6 ] ; real_T pztgpo5brr [ 2 ] ; real_T
ht25ebncfs [ 2 ] ; real_T m0ool5xksw [ 2 ] ; real_T ip421yb4ap [ 2 ] ; real_T
cbsi4vtapq [ 2 ] ; real_T kgt3hpmou3 [ 2 ] ; real_T nhbaleh02v ; real_T
ns0qvotrse [ 2 ] ; real_T pil32a3uqc [ 2 ] ; real_T k4r1gjjpzc [ 112 ] ;
real_T gohfk1jtbu ; real_T papa2czqp5 ; real_T hhfza0f5ux ; real_T mqtnwv0wde
; real_T phpxzrwru3 ; real_T iqdogipqa0 [ 2 ] ; real_T fypbch5xg5 [ 2 ] ;
real_T omjmmacz0s [ 2 ] ; real_T es0vi2vc4y [ 6666 ] ; real_T fl3t2cgv5z [ 2
] ; real_T dqwzjbomsm [ 2 ] ; real_T faxq2wkx44 [ 2 ] ; real_T muz4pauda2 [
6666 ] ; real_T k1h5daak4g [ 2 ] ; real_T klvvjdakg1 [ 2 ] ; real_T
djdo4x1ory [ 2 ] ; real_T h24iwq1uar [ 6666 ] ; real_T hkcgttfatr [ 2 ] ;
real_T bzhokjz5zo [ 2 ] ; real_T l0tqid5d3p [ 2 ] ; real_T c5hbnctcve [ 6666
] ; real_T covd0mdzee [ 2 ] ; real_T cejirscuqq [ 2 ] ; real_T jaor3yv0sk [ 2
] ; real_T j5ykdsh3xg [ 6666 ] ; real_T erwe5kokmk [ 2 ] ; real_T cm0yzg4hjv
[ 2 ] ; real_T kwzs2ktzbr [ 2 ] ; real_T jfzipitsg1 [ 6666 ] ; real_T
bgar0ceodu ; real_T gz2kvmem5e ; real_T puih5sxmme ; real_T dyff3fzlxt [ 3 ]
; real_T mhxi50mhri ; real_T lnx1lyijbt ; real_T mztrvnbkmk ; real_T
jiszsxprzt ; real_T egszjcwo1k ; real_T le25uoqrik [ 2 ] ; real_T owhd5nmkjz
[ 2 ] ; real_T kxcjoz00e5 [ 2 ] ; real_T jw4pwmb2s2 [ 6666 ] ; real_T
dhow5r3y2p [ 2 ] ; real_T ig3jbztcve [ 2 ] ; real_T e5wrnot1gy [ 2 ] ; real_T
ir4fijbdbc [ 6666 ] ; real_T liyc2ho35c [ 2 ] ; real_T loifcbedcz [ 2 ] ;
real_T pfados4t4n [ 2 ] ; real_T lmsdnkenwr [ 6666 ] ; real_T o4t4rjsrrq [ 2
] ; real_T juhg1qafw4 [ 2 ] ; real_T fsxznmdk1u [ 2 ] ; real_T kzwjoczyn4 [
6666 ] ; real_T fqf21ght1i [ 2 ] ; real_T pqjf5uue3q [ 2 ] ; real_T
kzw41qicpu [ 2 ] ; real_T gc3yuogkxi [ 6666 ] ; real_T jhp0in4zeq [ 2 ] ;
real_T afjwtvg3o0 [ 2 ] ; real_T lpdvwsv52f [ 2 ] ; real_T a0aouxlnfs [ 6666
] ; real_T j51ta5vpjb ; real_T gwwn1szeya ; real_T f1bwiww3s1 ; real_T
cai5yztywq [ 3 ] ; real_T hj1olrch3e ; real_T omdfsreo4k ; real_T jnzqsnosyh
; real_T fdsg4iku4y ; real_T khtlnly2vt ; real_T om0owczd5p ; real_T
oak2nun0um ; real_T nvhqhw00bv ; real_T jc2yomumvt ; real_T bmu05gegqt [ 3 ]
; real_T l1jv4u5u3z [ 3 ] ; real_T czluvlhdsa ; real_T ovjzkk24an ; real_T
ov41cvfymg ; real_T l31qghudbc ; void * arbr51rwzn ; void * lugsz5xb0q ; void
* mluf31ydsw ; void * iat4crtkny ; void * iiarpsqnrs ; void * kmmgnpoubn ;
void * pfvr1vg01v ; void * i51sb3dy2q ; void * mb2f2wiehd ; void * jk4j30l44u
; void * nr4uqrr0cb ; void * o5hegfgfyk [ 2 ] ; void * cmddnkpozk [ 2 ] ;
struct { void * LoggedData [ 2 ] ; } mmk4ena2fl ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } fv05w3we10 ; struct { void * TimePtr
; void * DataPtr ; void * RSimInfoPtr ; } lb3idwawei ; void * idaqywf052 [ 2
] ; void * hyj00qgflr [ 2 ] ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } d4c3eeji5y ; struct { void * LoggedData ; } ptuihn0ocp ;
struct { void * LoggedData [ 2 ] ; } kq3jy32feo ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } cbqzjfwyfy ; struct { void *
LoggedData [ 4 ] ; } lotx24kccj ; struct { void * AQHandles ; } p11o5bbpn4 ;
struct { void * AQHandles ; } cxz0syi4tt ; struct { void * AQHandles ; }
j1oxfkhmlo ; struct { void * AQHandles ; } mwdoevrqft ; struct { void *
LoggedData [ 2 ] ; } k3qye24qi1 ; struct { void * AQHandles ; } l53nyfcuxj ;
struct { void * AQHandles ; } jv41kl4bmq ; struct { void * LoggedData [ 2 ] ;
} kevlkpgnsn ; struct { void * AQHandles ; } nkvd0vwvnl ; struct { void *
AQHandles ; } gttt1ihcol ; struct { void * AQHandles ; } iz13mxqyo5 ; struct
{ void * AQHandles ; } lszsq3sr0a ; struct { void * LoggedData [ 2 ] ; }
cr3tojq2pg ; struct { void * AQHandles ; } fkurjwrbar ; struct { void *
AQHandles ; } apamdfeeyu ; struct { void * LoggedData [ 2 ] ; } csyflaj5bn ;
uint32_T hhgsk40cvn ; uint32_T nx0rjaxcj3 ; int32_T eb5a2jwnve ; int32_T
hzfzgctitr ; int_T ahtzz2odpb [ 54 ] ; int_T iz0tdvh2hc ; int_T jbjuk3nnnm [
5 ] ; int_T a2issmmgvf [ 5 ] ; struct { int_T PrevIndex ; } hhyfi1vrp5 ;
struct { int_T PrevIndex ; } cwztsp5rno ; int_T nb1q0htq55 [ 5 ] ; int_T
jmz4hrtgel [ 5 ] ; struct { int_T PrevIndex ; } hgupavxccv ; struct { int_T
PrevIndex ; } jwnjzpijbs ; int_T md1bwjhkkp ; int_T grvq3hv51e ; int8_T
p00kg4muyl ; int8_T c2ncw41wxg ; int8_T egq1ghnpb5 ; int8_T k5cgzbylfl ;
int8_T po4vaxsfdq ; int8_T kin11gx2fj ; uint8_T c4otiuzuo5 ; uint8_T
c4mpfhh2as ; uint8_T jxu2orojgs ; uint8_T awuesy1lt1 ; uint8_T buhrqlieac ;
uint8_T peam1jh1hg ; uint8_T ku4h0wos2s ; uint8_T lipykh5ngi ; uint8_T
cwmqhmqaxj ; uint8_T lrrq3v5qhy ; uint8_T eesooawdyy ; uint8_T h30ttln1fg ;
uint8_T gggtoeevmr ; uint8_T ho1k4hjgs0 ; uint8_T bxiappbtmt ; uint8_T
ihos5io54g ; uint8_T h1pt35z4wk ; uint8_T mfdy0i32nn ; uint8_T kvivwkvqjp ;
uint8_T afu1i31dy4 ; uint8_T idtiebnfkn ; uint8_T ma2krwqriw ; uint8_T
evcelmfhn1 ; uint8_T kwmvdihilp ; uint8_T fvlomljqdn ; uint8_T ckn0elaluz ;
uint8_T o3a2qmmqtd ; uint8_T oipqhkzcf3 ; boolean_T jefqre4rbf ; boolean_T
hxcxhiqtou ; boolean_T mhzjidfr1v ; boolean_T cl43g3mjtq ; boolean_T
g4w3pzgdq2 ; boolean_T h1fk4ddvwy ; boolean_T eqgx1rhgs4 ; boolean_T
nr3gek2l0c ; boolean_T ezf1ewalj4 ; boolean_T glgou5blo3 ; boolean_T
cfnkufejpq ; boolean_T dtrrjfo343 ; boolean_T mfpsmo45px ; dexa4nfqku
apxr4nbt5e ; pbb5q0konc gjqcaemk4s ; dexa4nfqku mtpjy52dke ; pbb5q0konc
p2op1l50wj ; } DW ; typedef struct { real_T ozbjrx4cxp ; real_T kqz1cjdryn ;
} X ; typedef struct { real_T ozbjrx4cxp ; real_T kqz1cjdryn ; } XDot ;
typedef struct { boolean_T ozbjrx4cxp ; boolean_T kqz1cjdryn ; } XDis ;
typedef struct { real_T ozbjrx4cxp ; real_T kqz1cjdryn ; } CStateAbsTol ;
typedef struct { real_T ozbjrx4cxp ; real_T kqz1cjdryn ; } CXPtMin ; typedef
struct { real_T ozbjrx4cxp ; real_T kqz1cjdryn ; } CXPtMax ; typedef struct {
real_T plomzlbabi ; real_T byigej2rva ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct fuvhhavfln_ { real_T
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
irradiance_OutValues [ 24 ] ; real_T irradiance_OutValues_bih3ladc5h [ 24 ] ;
real_T SinusoidalMeasurementPLLThreePhase_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau ; real_T
SinusoidalMeasurementPLLThreePhase1_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz ; real_T
irradiance_TimeValues [ 24 ] ; real_T irradiance_TimeValues_md2pkqwexe [ 24 ]
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
LimitedCounter_uplimit ; uint32_T LimitedCounter_uplimit_g1dxlmsgnr ; real_T
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
UnitDelay1_InitialCondition ; real_T UnitDelay_InitialCondition ; real_T
SampleTimeMath_WtEt ; real_T UnitDelay1_InitialCondition_lapzeesnb2 ; real_T
UnitDelay_InitialCondition_eb3rjuvtg0 ; real_T SampleTimeMath_WtEt_gemlxxvjnm
; real_T Integrator_gainval ; real_T Gain1_Gain_losnrngiyc ; real_T
Constant1_Value ; real_T Integrator_gainval_carz0grxbg ; real_T
Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T Saturation_UpperSat
; real_T Saturation_LowerSat ; real_T Gain1_Gain_dzyyjzode5 ; real_T
TransportDelay_Delay ; real_T TransportDelay_InitOutput ; real_T
TransportDelay1_Delay ; real_T TransportDelay1_InitOutput ; real_T
DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ; real_T
DiscreteTimeIntegrator_gainval ; real_T DiscreteTimeIntegrator_IC ; real_T
Gain_Gain ; real_T fromWS_Signal1_Time0 [ 4 ] ; real_T fromWS_Signal1_Data0 [
4 ] ; real_T Integrator_gainval_avayg33ayj ; real_T
Integrator_gainval_bh1byogw3o ; real_T Integrator_IC ; real_T
UnitDelay1_InitialCondition_igxde5r1oa ; real_T UnitDelay2_InitialCondition ;
real_T Delay_InitialCondition ; real_T Gain_Gain_a0tugaykcq ; real_T
Integrator_gainval_g1hx0pgpel ; real_T Integrator_IC_g4xqnrlohi ; real_T
UnitDelay1_InitialCondition_mkjhh3hej3 ; real_T
UnitDelay2_InitialCondition_ky4da5qoff ; real_T
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
DiscreteTimeIntegrator_IC_nxtwlpx203 ; real_T Gain_Gain_ogxlrpbcid ; real_T
FromWorkspace1_Time0 [ 4 ] ; real_T FromWorkspace1_Data0 [ 4 ] ; real_T
Integrator_gainval_nbtau22bcs ; real_T Integrator_gainval_lx3n3x4rqc ; real_T
Integrator_IC_cooq3xxsvj ; real_T UnitDelay1_InitialCondition_j5udodixng ;
real_T UnitDelay2_InitialCondition_lxsa4gacjt ; real_T
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
; real_T Sequence_Value ; real_T V0_Value ; real_T D_init_Value ; real_T
D_max_Value ; real_T D_min_Value ; real_T Delta_D_Value ; real_T
RTP_DD0943EF_TFIXED_Value ; real_T RTP_1D2E87C1_IL_Value [ 3 ] ; real_T
RTP_A18535C3_IL_Value [ 3 ] ; real_T Constant5_Value ; real_T
Constant1_Value_brrjsvceec ; real_T Constant2_Value_lexwhwkcr1 ; real_T
Constant3_Value_lyqvw4nurv ; real_T Sequence_Value_phlzt4e1pz ; real_T
V0_Value_gfkw3a205u ; real_T D_init_Value_dbc3r2jhlx ; real_T
D_max_Value_egs3yvu4uo ; real_T D_min_Value_nxrfycqjlc ; real_T
Delta_D_Value_cdafqbhbdi ; real_T RTP_44647E90_TFIXED_Value ; real_T
RTP_6A29B757_IL_Value [ 3 ] ; real_T RTP_D6820555_IL_Value [ 3 ] ; creal_T
alpha2_Gain ; creal_T alpha_Gain ; creal_T alpha2_Gain_edh0qhxj4e ; creal_T
alpha_Gain_pkcgaplt3m ; creal_T alpha_Gain_h144fvpml1 ; creal_T
alpha2_Gain_k54l5bjcyn ; creal_T alpha_Gain_ns5srwfp4a ; creal_T
alpha2_Gain_b2lryd4erl ; creal_T alpha2_Gain_jmjocn5324 ; creal_T
alpha_Gain_chzz2ghjpt ; creal_T alpha2_Gain_jdfqf2swbm ; creal_T
alpha_Gain_mt0yc41pmx ; creal_T alpha_Gain_ebrttocmwz ; creal_T
alpha2_Gain_g1epyvb0j5 ; creal_T alpha_Gain_c32fofybnv ; creal_T
alpha2_Gain_c0nmmexjjw ; uint32_T Output_InitialCondition ; uint32_T
Output_InitialCondition_cpt4tpfquj ; uint32_T FixPtConstant_Value ; uint32_T
Constant_Value ; uint32_T FixPtConstant_Value_jcpw3o5bej ; uint32_T
Constant_Value_apa5exl3vj ; fuvhhavfln gjqcaemk4s ; fuvhhavfln p2op1l50wj ; }
; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels3Inv_GetDWork ( ) ; extern void
mr_scd3busMicrogridDroopControlFidelityLevels3Inv_SetDWork ( const mxArray *
ssDW ) ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels3Inv_GetSimStateDisallowedBlocks
( ) ; extern const rtwCAPI_ModelMappingStaticInfo *
scd3busMicrogridDroopControlFidelityLevels3Inv_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
