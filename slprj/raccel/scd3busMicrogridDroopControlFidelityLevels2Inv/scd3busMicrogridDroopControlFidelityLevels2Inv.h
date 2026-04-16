#ifndef scd3busMicrogridDroopControlFidelityLevels2Inv_h_
#define scd3busMicrogridDroopControlFidelityLevels2Inv_h_
#ifndef scd3busMicrogridDroopControlFidelityLevels2Inv_COMMON_INCLUDES_
#define scd3busMicrogridDroopControlFidelityLevels2Inv_COMMON_INCLUDES_
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
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_c0dbec00_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <float.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME scd3busMicrogridDroopControlFidelityLevels2Inv
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
typedef struct { real_T m1y1qm02ir [ 3 ] ; real_T amgkmobw2z [ 3 ] ; real_T
nzn0clrnc5 [ 3 ] ; } noj2dzkc15 ; typedef struct { int32_T b0opggssyg ;
boolean_T lzz4y3ssut ; } hd0z2aqw5d ; typedef struct { real_T od2chy5axk ; }
memdyrzczu ; typedef struct { real_T labfb1voxm ; real_T pfkic4fkpj ; real_T
katnwwtjf0 ; int32_T gbtvozmuxb ; boolean_T m4pbicbspr ; boolean_T aefovjzruy
; boolean_T phnzvzv3xc ; boolean_T j5qp10qdau ; } bsuuxe2gfy ; typedef struct
{ real_T a35lsrbjwz ; real_T d31goal2b1 ; real_T nwgm4yop4v [ 4 ] ; real_T
hk22eeeuip [ 4 ] ; real_T jqp1ni5yle [ 6 ] ; real_T fgczhapgu2 [ 4 ] ; real_T
ockasa2aui [ 4 ] ; real_T crbg4nmnpw [ 4 ] ; real_T gqcsyp0bql [ 4 ] ; real_T
gnv3zyjwty [ 4 ] ; real_T gpanw3q3gw [ 4 ] ; real_T hbnilezh5i [ 6 ] ; real_T
ovorrl5csm [ 4 ] ; real_T itjg5uruho [ 4 ] ; real_T nq4whkyrdk [ 4 ] ; real_T
ebp3xxjbx4 [ 4 ] ; real_T aovyijozms [ 4 ] ; real_T p5lcyfyj2u [ 4 ] ; real_T
pbxp1bjaxm ; real_T antnjchln0 [ 4 ] ; real_T lig4rsx5z1 ; real_T jd204gdp2w
[ 4 ] ; real_T l3n3mt4q3p ; real_T bq4c111bs3 [ 4 ] ; real_T d5egbbonay ;
real_T esog4yyet3 [ 4 ] ; real_T hwm3viehw3 ; real_T mxefsp1e4p [ 166 ] ;
real_T px4qgqmmgx [ 18 ] ; real_T a14ofns5py ; real_T enfjevdaan ; real_T
hplttyct24 ; real_T p3zmhwsezq ; real_T pvbwgmuvqg ; real_T k2gklplyvt ;
real_T jmlmihxon2 ; real_T b1se15a1up ; real_T gkmok0yj2z ; real_T dgjp1fcvry
; real_T kjbirx5muq ; real_T cvg1dlbb2w ; real_T o2k4ww0on3 ; real_T
ippqnzyzwc ; real_T dmthjydnvv [ 2 ] ; real_T psnxbm4k0a [ 2 ] ; real_T
elqirq5xyl [ 2 ] ; real_T izp04t43gl [ 2 ] ; real_T joc0iqtapq [ 2 ] ; real_T
muzjb1gqkt [ 2 ] ; real_T glmwibrwbw [ 2 ] ; real_T p5bztxdzdp [ 2 ] ; real_T
bjwot0jql3 [ 2 ] ; real_T hrw4ncsvlt [ 2 ] ; real_T ajn0wrk2vx [ 2 ] ; real_T
adswrgixag [ 2 ] ; real_T efuvldqb2g [ 2 ] ; real_T fcfyvtz5km [ 2 ] ; real_T
idkuzo4nrv [ 2 ] ; real_T kfgt0ce4v5 [ 2 ] ; real_T ge3egvjh10 [ 2 ] ; real_T
gaqmpx1wrl [ 2 ] ; real_T amlv3nuap0 ; real_T ekcqtgnvui ; real_T ixzdgcfdct
; real_T cv2owmwlsq ; real_T en2zthw52w ; real_T pifewaekqa ; real_T
iigqetnrbl ; real_T hvqmw4ymlk ; real_T exwjrhnim1 [ 3 ] ; real_T k0wy3c0kpb
; real_T g02co4jrjz ; real_T jmlv142pz5 ; real_T ape4ewnngd [ 6 ] ; real_T
javpyv4dtn ; real_T jt4azuasq0 ; real_T o1c4dn30yo ; real_T gyfes0q4ox ;
real_T owoudggcou ; real_T k5cs3zawly ; real_T pobg24datj ; real_T ioq45u00sl
; real_T hjcyugfaj0 ; real_T f20jewerm0 ; real_T liwh542udk ; real_T
nyvy2jo00i ; real_T a0qtimz0di ; real_T dnpiwx4f1d ; real_T g05nawatzc ;
real_T atiwkc5qww ; real_T jq2dgj2xtx [ 2 ] ; real_T lz0se4nacy [ 2 ] ;
real_T c5v3kbg15g [ 2 ] ; real_T d0mkeqnxsv [ 2 ] ; real_T cp2zjgfyhh [ 2 ] ;
real_T bkobrnh3q4 [ 2 ] ; real_T drf3kqkqa4 [ 2 ] ; real_T cupsh0z3ms [ 2 ] ;
real_T dxuoskutq2 [ 2 ] ; real_T o2klk5aqc5 [ 2 ] ; real_T p2do40uxe3 [ 2 ] ;
real_T if04oyxoqy [ 2 ] ; real_T ep5veai0jt [ 2 ] ; real_T c2o1gkebxr [ 2 ] ;
real_T ivi2u05z2g [ 2 ] ; real_T fjjiqrulwl [ 2 ] ; real_T gjhfiq4jth [ 2 ] ;
real_T kot301zbsx [ 2 ] ; real_T fk3pnwfcaj ; real_T b0mctnw0s0 ; real_T
pcyhly0aw3 ; real_T ewxovokbhn ; real_T gwqwlnporj ; real_T msz32drood ;
real_T mbkjtl01xc ; real_T bzlcsvbb1h ; real_T p1icmtn4ie ; real_T nlyl0aruwx
[ 3 ] ; real_T c2mjkhgt1y ; real_T jq0eihhe03 ; real_T ag5pia043d ; real_T
le11tvw0b0 [ 6 ] ; real_T imwfo4prqb ; real_T csdw0bmygr ; real_T mqqr4i1cna
; real_T ajmghzdkf5 ; real_T guhvcib1aj ; real_T j5uackhf3v ; real_T
dyizch2kh0 ; real_T ix51qpa3dw [ 2 ] ; real_T hr3vgvnvb2 ; real_T k0vg341414
; real_T pm5q3j3blj ; real_T c12lv4krhz ; real_T fofchdvssl ; real_T
epc0wawu5c ; real_T fe1w2afdda ; real_T lktamsupz3 ; real_T hkmnzi5vi4 ;
real_T n3x3wq4wsu ; real_T dalwqidpga ; real_T i5aeoy3uwy ; real_T ayttns5unh
[ 4 ] ; real_T olos030ukp [ 4 ] ; real_T h43ul03upb ; real_T epga3r2mui ;
real_T jmbggxocin ; real_T feldzcio41 ; uint32_T ezs3o1mg3j ; uint32_T
e3dipteezg ; boolean_T jfuzs4l4zs ; boolean_T l0rgspqm5n ; memdyrzczu
l2ipdboeli ; memdyrzczu pgiisxljam ; noj2dzkc15 ik3s1aw220 ; noj2dzkc15
nc2tt33tmt ; } B ; typedef struct { real_T iyywllzkwf [ 2 ] ; real_T
eg4fysx1mx [ 2 ] ; real_T bkparlcc2g [ 6 ] ; real_T f3vdm2035l [ 2 ] ; real_T
p0mm3dhbtv [ 2 ] ; real_T pwu2l4tvh1 [ 2 ] ; real_T aefzo2yzzx [ 2 ] ; real_T
irgzqm0ada [ 2 ] ; real_T at1fopxguo [ 2 ] ; real_T ovsubkaz4j [ 6 ] ; real_T
eh42psi5hb [ 2 ] ; real_T d1mqpftjuj [ 2 ] ; real_T pnt3tpvhnt [ 2 ] ; real_T
hkz1ufztl2 [ 2 ] ; real_T nzzwuluxcu [ 2 ] ; real_T l03ie2oukb [ 2 ] ; real_T
hcgwk3rr3g ; real_T kkmfano5y0 [ 2 ] ; real_T acky13em2v [ 2 ] ; real_T
gricgs20cu ; real_T g252mubh53 [ 2 ] ; real_T jycabfb5kv [ 2 ] ; real_T
hfodak4r1n [ 112 ] ; real_T a4nnclkswd ; real_T okrpdklayl ; real_T
oisoladio2 ; real_T pcsoto3h0n ; real_T k1cxodcfys ; real_T hceryk2vkk [ 2 ]
; real_T m24htlwax5 [ 2 ] ; real_T bv0s5nhud0 [ 2 ] ; real_T e5tmmykfrc [
6666 ] ; real_T l5ioma3qgr [ 2 ] ; real_T mxybol3mg3 [ 2 ] ; real_T
bxnnxs3yt3 [ 2 ] ; real_T bjp3gu2hsg [ 6666 ] ; real_T kmpbiftblw [ 2 ] ;
real_T i0vkip5ppx [ 2 ] ; real_T akpzf2ubdu [ 2 ] ; real_T mafgllv14z [ 6666
] ; real_T apkup22uww [ 2 ] ; real_T d0q0zpad4g [ 2 ] ; real_T nwjui5oppi [ 2
] ; real_T jip5zjvdke [ 6666 ] ; real_T jnwxusn1fr [ 2 ] ; real_T oxbevvnwqo
[ 2 ] ; real_T gtzrn5fkce [ 2 ] ; real_T f25qjiyt25 [ 6666 ] ; real_T
lqw1vh3mbr [ 2 ] ; real_T fummjurtrs [ 2 ] ; real_T em1buhdbtn [ 2 ] ; real_T
eu1ps152cm [ 6666 ] ; real_T h2iie3edew ; real_T il2s41132p ; real_T
ecycztmnsy ; real_T cmjiuvd4kh [ 3 ] ; real_T dq3souomli ; real_T e3t1j4tdky
; real_T jnsaa3cmdy ; real_T cakt0nkvif ; real_T mvqfzjbuew ; real_T
ekqlaiqtvl [ 2 ] ; real_T mc3bkw5pf5 [ 2 ] ; real_T nzwdjjcvqv [ 2 ] ; real_T
bmzs3jeqo0 [ 6666 ] ; real_T b2bnwifjut [ 2 ] ; real_T mt21msxevx [ 2 ] ;
real_T onltiy2qbm [ 2 ] ; real_T ivwwh5dzgt [ 6666 ] ; real_T kxhlqntvfz [ 2
] ; real_T csqpczdnpt [ 2 ] ; real_T nwq41skwpj [ 2 ] ; real_T ogxj5xhicz [
6666 ] ; real_T cc5ww3x2j4 [ 2 ] ; real_T kuuhed4xnh [ 2 ] ; real_T
mj0svofnx5 [ 2 ] ; real_T l4j5o1z5e1 [ 6666 ] ; real_T i2m2dhfv5u [ 2 ] ;
real_T dk1gzxw5je [ 2 ] ; real_T ezz1eslrp1 [ 2 ] ; real_T frcpgz1zzu [ 6666
] ; real_T mn3jonc3ao [ 2 ] ; real_T f1ef5i0cwp [ 2 ] ; real_T luoiw1ptga [ 2
] ; real_T psk3af11by [ 6666 ] ; real_T dyrf0wzgmk ; real_T atweiyouss ;
real_T pzmcos45f2 ; real_T fqstztixgy [ 3 ] ; real_T mw0e3nupih ; real_T
jwcytez4qs ; real_T apicnljop2 ; real_T ebwd1rgli2 ; real_T m3vjiwfp1r ;
real_T jwmtiqejai ; real_T avpg5znsih ; real_T nmrmty5wzc ; real_T dnx4ztxxiv
; real_T ltojubybbg [ 3 ] ; real_T gt5v5gaivd [ 3 ] ; real_T iyracbdt2g ;
real_T lmyti3wz30 ; real_T h1acvfc4u5 ; real_T ayrsqdoxvq ; void * cj13tlwfqr
; void * f1oaimgqiw ; void * oh3eq1hsa3 ; void * oyksqlkafi ; void *
gb201dlylm ; void * c2mad42fvj ; void * n00ioe4hbe ; void * g0u5azj3tp ; void
* f0rj5uayfi ; void * chknc2oqmz ; void * nidyhufhxp ; void * lqagbbpjqo [ 2
] ; void * jwmqk3uiex [ 2 ] ; struct { void * LoggedData [ 2 ] ; } mv2cpjpyya
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
iri21xqs2j ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} gkucfey5hr ; void * ocyl3ugugx [ 2 ] ; void * fnivbgh0ad [ 2 ] ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } h2jrmzxoz4 ; struct
{ void * LoggedData ; } iesxqmdjxw ; struct { void * LoggedData [ 2 ] ; }
eeufxfnf4d ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} kh0zfybf3y ; struct { void * LoggedData [ 4 ] ; } nqzgxokvdn ; struct {
void * AQHandles ; } p5l0frvwng ; struct { void * AQHandles ; } clljeykgr1 ;
struct { void * AQHandles ; } o5l3wa022n ; struct { void * AQHandles ; }
o20lldxjm1 ; struct { void * LoggedData [ 2 ] ; } cerw1cxa3z ; struct { void
* AQHandles ; } jgirqq3lld ; struct { void * AQHandles ; } jptmgyn2hy ;
struct { void * AQHandles ; } ncsbmzl0nl ; struct { void * AQHandles ; }
e3ueh0xpb3 ; struct { void * AQHandles ; } piioayoohz ; struct { void *
LoggedData [ 3 ] ; } fcgzqvprag ; struct { void * LoggedData [ 2 ] ; }
efprodmswg ; struct { void * AQHandles ; } d0txuxeo0w ; struct { void *
AQHandles ; } dkb3s0kryl ; struct { void * AQHandles ; } ouybfvjrju ; struct
{ void * AQHandles ; } efqwmkl2rp ; struct { void * LoggedData [ 2 ] ; }
pwdpmtdqqm ; uint32_T om0ooqvd23 ; uint32_T p0t3wtfjhc ; int32_T dn5jy3yus2 ;
int32_T m5rfl1s1qt ; int_T kqp5b5k44j [ 54 ] ; int_T mwo052veq4 ; int_T
glufmomx3u [ 5 ] ; int_T crg03beu3x [ 5 ] ; struct { int_T PrevIndex ; }
lx0lpxffkf ; struct { int_T PrevIndex ; } p4yfuzxnov ; int_T nxq0123mtn [ 5 ]
; int_T f4p3hidioq [ 5 ] ; struct { int_T PrevIndex ; } mmawmidnpz ; struct {
int_T PrevIndex ; } jtdpjdznjm ; int_T gvxi5xuhay ; int_T psunv1nlzl ; int8_T
caxb1busmj ; int8_T cgklepmakj ; int8_T mqqktlx1aa ; int8_T hn40u5od0q ;
int8_T c552vmqk5k ; int8_T ki3cuq4dmp ; uint8_T lpha3u2wfp ; uint8_T
j1x4qb45ak ; uint8_T c3i5gpoda5 ; uint8_T dxcfru5kjc ; uint8_T f0mrecfs5m ;
uint8_T m0a2meaeq5 ; uint8_T phjawx2yhl ; uint8_T hxemhgj1yq ; uint8_T
ctkoovyndv ; uint8_T khapkb23og ; uint8_T onlrif1m0e ; uint8_T idubykuygp ;
uint8_T m1dpfe453z ; uint8_T fjyovv2g1l ; uint8_T cpezygvpa5 ; uint8_T
j0oazvb5q3 ; uint8_T b1utjiqmec ; uint8_T nyul3gyjpk ; uint8_T pxmwbkoak0 ;
uint8_T c0coxva4kb ; uint8_T ay5maw0kp1 ; uint8_T dq5mls4ffp ; uint8_T
axdy0nhprx ; uint8_T orojirsnzs ; uint8_T ayb3vcha0i ; uint8_T bg1zs3brty ;
uint8_T gsmdjr11nj ; uint8_T dz3vcol4zs ; boolean_T imuqbaiz25 ; boolean_T
dcx4fqll5r ; boolean_T cm1wpbbfu0 ; boolean_T cqnxxsfn3n ; boolean_T
mwlases2wk ; boolean_T nrtrpm1vbm ; boolean_T jgk04t4xwa ; boolean_T
hj0ue0qykk ; boolean_T hhjt0nqpca ; boolean_T cmpx5vcuoc ; boolean_T
mu5iczhfag ; boolean_T i0pbd25pwm ; boolean_T i0tcehxjnv ; bsuuxe2gfy
l2ipdboeli ; bsuuxe2gfy pgiisxljam ; hd0z2aqw5d ik3s1aw220 ; hd0z2aqw5d
nc2tt33tmt ; } DW ; typedef struct { real_T ajvwtxq0ue ; real_T jaandy3isl ;
} X ; typedef struct { real_T ajvwtxq0ue ; real_T jaandy3isl ; } XDot ;
typedef struct { boolean_T ajvwtxq0ue ; boolean_T jaandy3isl ; } XDis ;
typedef struct { real_T ajvwtxq0ue ; real_T jaandy3isl ; } CStateAbsTol ;
typedef struct { real_T ajvwtxq0ue ; real_T jaandy3isl ; } CXPtMin ; typedef
struct { real_T ajvwtxq0ue ; real_T jaandy3isl ; } CXPtMax ; typedef struct {
real_T omw1wylr0a ; real_T kqkvsikjxb ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct jkg1bbugzl_ { real_T
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
jkg1bbugzl ik3s1aw220 ; jkg1bbugzl nc2tt33tmt ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels2Inv_GetDWork ( ) ; extern void
mr_scd3busMicrogridDroopControlFidelityLevels2Inv_SetDWork ( const mxArray *
ssDW ) ; extern mxArray *
mr_scd3busMicrogridDroopControlFidelityLevels2Inv_GetSimStateDisallowedBlocks
( ) ; extern const rtwCAPI_ModelMappingStaticInfo *
scd3busMicrogridDroopControlFidelityLevels2Inv_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
