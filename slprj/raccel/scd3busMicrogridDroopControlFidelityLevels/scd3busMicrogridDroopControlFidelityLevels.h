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
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME scd3busMicrogridDroopControlFidelityLevels
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (276) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
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
boolean_T ovi3mu0twa ; } dr3zeyo5on ; typedef struct { real_T nwndlohwul ; }
kdf1f4vz3k ; typedef struct { real_T g3x2ylxmfm ; real_T dobxemgbno ; real_T
lqrypliobb ; int32_T eqx0jaojrc ; boolean_T b1dj2v4hrf ; boolean_T kakcq2mtq2
; boolean_T lcxsvvoxc0 ; boolean_T n5dq5nbaiq ; } kx5rga5han ; typedef struct
{ real_T mtj0qfc1hb ; real_T nlshxc1fne ; real_T l3fxxsnbn1 ; real_T
nxca4r15o2 [ 4 ] ; real_T mxygqxmg5b [ 4 ] ; real_T ivr23dfhja [ 4 ] ; real_T
ikm2snr5zf [ 6 ] ; real_T pffnxrfxjy [ 4 ] ; real_T nz5jti2wr1 [ 4 ] ; real_T
o5rnvo024s [ 4 ] ; real_T m0vl3iooy4 [ 4 ] ; real_T dyttx33jl4 [ 4 ] ; real_T
a1kee0bbhh [ 4 ] ; real_T pur1ybnggo [ 6 ] ; real_T a4enoxc25n [ 4 ] ; real_T
eqnxhwykea [ 4 ] ; real_T dnpeo0mlyy [ 4 ] ; real_T fcn2r552dv [ 4 ] ; real_T
nmpnlfxsny [ 4 ] ; real_T pb2fck224w [ 4 ] ; real_T cod5e4a0o2 ; real_T
gcijdhs3n1 [ 4 ] ; real_T jd4vhketbl ; real_T eehr2alozi [ 4 ] ; real_T
mszui4mlls [ 6 ] ; real_T cqqbzqbgzr [ 4 ] ; real_T jripa5e0sa [ 4 ] ; real_T
e1d05x53fh [ 4 ] ; real_T dwijbl3bjl [ 4 ] ; real_T lhsyoiahgf [ 4 ] ; real_T
nhs5fzmxh5 [ 4 ] ; real_T iuqtvexuo1 ; real_T emo3v2vqak [ 4 ] ; real_T
hxayrjxjub ; real_T hd5eic2203 [ 4 ] ; real_T dq21zfhelg [ 6 ] ; real_T
lanjejqga3 [ 4 ] ; real_T idiep0ndrb [ 4 ] ; real_T ni0rdfpaiz [ 4 ] ; real_T
mzoigr1pto [ 4 ] ; real_T iyavy0mr1f [ 4 ] ; real_T ntbljiq5zn [ 4 ] ; real_T
jhd1tmpynk ; real_T oyguz13q4c [ 4 ] ; real_T cv1o2a5t5q ; real_T dxoe5dpid1
[ 4 ] ; real_T ozvbrmkbw3 ; real_T fzvddpamtf [ 4 ] ; real_T dp0ij1vanu ;
real_T f00ifjb2pa [ 4 ] ; real_T mkbvufs0fh ; real_T nzubz5zcaw [ 319 ] ;
real_T dveoezpzol [ 40 ] ; real_T o44efxocq0 ; real_T jnilobsjko ; real_T
fil4mrutwj ; real_T polsp5zirz ; real_T ndti0gtzl3 ; real_T pzqtzfecyw [ 2 ]
; real_T na4tyjngmd [ 2 ] ; real_T fymik4ehbr [ 2 ] ; real_T ffj153gzwx [ 2 ]
; real_T c51pwmznvw [ 2 ] ; real_T femzflyely [ 2 ] ; real_T jyj4ef53mr [ 2 ]
; real_T ex0hed1yyl [ 2 ] ; real_T bxl5szpbbj [ 2 ] ; real_T aobve4fqdo [ 2 ]
; real_T ah4awuzbmi [ 2 ] ; real_T gcqrargtap [ 2 ] ; real_T nelhatsdgn [ 2 ]
; real_T ivyaisc3iw [ 2 ] ; real_T fx0in4qczm [ 2 ] ; real_T b0zpex3nd3 [ 2 ]
; real_T dsgoyg1upn [ 2 ] ; real_T kh5quoykke [ 2 ] ; real_T azdyb5jzw2 ;
real_T pfeoax4yjp ; real_T ckmflb5ptc ; real_T kh1chxh5dg ; real_T ejiwuxoqfh
; real_T fzvssdup2a ; real_T nim1vqistm ; real_T hzqxukdt2n [ 3 ] ; real_T
k2pix3y1pq ; real_T gee5ztsvvw ; real_T bmjrp4i5l2 ; real_T ly0sxsegct [ 6 ]
; real_T hf5edtag1w ; real_T pdsagbfkyi ; real_T b3oezmaicg ; real_T
cxextfpyro ; real_T c4nvx3ktei ; real_T egc5x2s3e1 ; real_T dhxxrbtiya ;
real_T lkgxgrmcdf ; real_T ab1tfr0xfv [ 2 ] ; real_T klcm0ofnb2 [ 2 ] ;
real_T mktfwuvyz0 [ 2 ] ; real_T hrf2kbz0fz [ 2 ] ; real_T ncijorklu2 [ 2 ] ;
real_T csz1erxzbp [ 2 ] ; real_T nohypq1rb4 [ 2 ] ; real_T c53six4jge [ 2 ] ;
real_T krbnjfnjon [ 2 ] ; real_T gvbz2kxljw [ 2 ] ; real_T deuh5tyk4q [ 2 ] ;
real_T d0gifw0q3v [ 2 ] ; real_T ahufcewv41 [ 2 ] ; real_T pg2dbtctik [ 2 ] ;
real_T evp4c5goee [ 2 ] ; real_T jdgl5035pl [ 2 ] ; real_T n0nnkknxzj [ 2 ] ;
real_T bf3cljzk3i [ 2 ] ; real_T lutjprh4lt ; real_T o0id30im0j ; real_T
hiku2rsz33 ; real_T jqjid2ex0e ; real_T glxm44mkys ; real_T bo1uuaes1k ;
real_T bsgqmzut0s ; real_T lrqp1tp2yx [ 3 ] ; real_T l4aof44tt5 ; real_T
dzso2blz3j ; real_T fdzts3csz1 ; real_T k5e1dud3cs [ 6 ] ; real_T h53otsunu5
; real_T lyfxv21wwk ; real_T dsqazdztds ; real_T gm1xdteuds ; real_T
isj3flk3ou ; real_T lpg332fpyb ; real_T lhrmwvzfyn ; real_T bpjnnuxfn1 ;
real_T jypfklsueu [ 2 ] ; real_T phwugr0a0a [ 2 ] ; real_T leqm5y1zwg [ 2 ] ;
real_T emkvi1j0bu [ 2 ] ; real_T nvsw45afzo [ 2 ] ; real_T ni2krpqmgz [ 2 ] ;
real_T nsljb2ifjn [ 2 ] ; real_T fimpbh33uj [ 2 ] ; real_T nx40jr3syt [ 2 ] ;
real_T nx1ewelsxs [ 2 ] ; real_T ofweiciwag [ 2 ] ; real_T gf4dnb3vca [ 2 ] ;
real_T dxlhbwmuit [ 2 ] ; real_T nlkyoo1kog [ 2 ] ; real_T nnsqxr52cl [ 2 ] ;
real_T e3dntyokof [ 2 ] ; real_T cvpva1atyv [ 2 ] ; real_T bmcs4ysxl1 [ 2 ] ;
real_T c5bru3cdtm ; real_T f1kulco30u ; real_T g2f5qpdy4w ; real_T ef3docnbik
; real_T hqllpo34wc ; real_T klw3ewy50c ; real_T cgspuhcwwz ; real_T
k1lectvyzj [ 3 ] ; real_T oppf1fxd05 ; real_T lib1ka5kui ; real_T ls4awidmoa
; real_T hprt2wrf3q [ 6 ] ; real_T o55m4yghay ; real_T kb0kgzmamc ; real_T
movfkvgsaj ; real_T jplzr4edf3 ; real_T oumcy40znh ; real_T og5isqp1ng ;
real_T jcsfqyqgzg ; real_T m3ocz5tq2v ; real_T ggqyb4hwtm [ 2 ] ; real_T
b4ttlgqnxq [ 2 ] ; real_T gh1dodlvah [ 2 ] ; real_T aua0mqanzs [ 2 ] ; real_T
ca5hxth2ch [ 2 ] ; real_T pkxkxbgnaa [ 2 ] ; real_T counvczeso [ 2 ] ; real_T
gqe1rrqy30 [ 2 ] ; real_T hxzwamb0vo [ 2 ] ; real_T blfvt41ea5 [ 2 ] ; real_T
ctaiw3jh3d [ 2 ] ; real_T e0aii22ygz [ 2 ] ; real_T ll2rj5tycd [ 2 ] ; real_T
l0ulycwg52 [ 2 ] ; real_T fa25pjkrlj [ 2 ] ; real_T lu3dewd3dz [ 2 ] ; real_T
kbssvm3ws5 [ 2 ] ; real_T gk2lxyfmhf [ 2 ] ; real_T hz4z0mdceg ; real_T
k0rzuljbzz ; real_T hgrvtnmsvd ; real_T f2jvbmoprk ; real_T n50mphecxv ;
real_T ouo2u3pdmp ; real_T ptm1bu2ttm ; real_T gbmipjfklh [ 3 ] ; real_T
hfjbwzkor5 ; real_T g33mnprry5 ; real_T etcygcbmfv ; real_T pc0diyarlu [ 6 ]
; real_T ihdd31jp1x ; real_T dp1rxtwtyd ; real_T lmms4yg3pq ; real_T
f0tw1xremj ; real_T pyjku12imh ; real_T hh4tq13ns3 ; real_T jeo2sdv30b ;
real_T k1isqnlhbt ; real_T lz5jdukiyh ; real_T lvs2nqocrc ; real_T gnm1oejpr1
; real_T anrciyr1bu ; real_T laggjrezxv ; real_T oekaepqjyv ; real_T
lhdhpkyers ; real_T dmvf3ba4on ; real_T o12qoj43ak ; real_T oavzj55hpw ;
real_T kwya2k2ipm ; real_T frsba51lrj ; real_T niqj100q02 ; real_T mawdjtht3e
; real_T aq1twcaw1u ; real_T padsuxoio0 ; real_T oglv1n35qg ; real_T
moxna2fjso ; real_T flr4wnqmp0 ; real_T jmnkkv221i ; real_T dqyaxoax35 ;
real_T ooq523rnwd ; real_T a3jorwwe5p ; real_T hkklovkgb2 ; real_T jpvvah0tua
; real_T g31ndulfdx [ 2 ] ; real_T ci25nekdgx [ 4 ] ; real_T iexbyegbrd [ 4 ]
; real_T gexkpgjman [ 4 ] ; real_T jkxpkob0tx [ 4 ] ; uint16_T b1cyy5mtot ;
uint16_T ksfl3ov3w0 ; uint16_T nuvoi5ut5g ; uint16_T aekoqywszx ; boolean_T
nrde2fmcqk ; boolean_T hj4zhmy0lq ; boolean_T cnbpicqxla ; boolean_T
l0gqforkpa ; kdf1f4vz3k izamymonit ; kdf1f4vz3k j2wpgjfxgi ; jcy052muck
i0sih0wbey ; kdf1f4vz3k omzkn45ngp ; jcy052muck jp4rpyga2c ; kdf1f4vz3k
dqdfnpqzmi ; jcy052muck gl43fmrisv ; jcy052muck hujlteqo2z ; } B ; typedef
struct { real_T fux2l3jlcp [ 2 ] ; real_T inauu4jprt [ 2 ] ; real_T
aq5zbtsmvn [ 2 ] ; real_T gmmxfl1bw3 [ 6 ] ; real_T fy40hggdnw [ 2 ] ; real_T
l0soz05bit [ 2 ] ; real_T cocxu03fcu [ 2 ] ; real_T o0nnrlfudc [ 2 ] ; real_T
e0ef4p5vuf [ 2 ] ; real_T nlq1hmcfry [ 2 ] ; real_T cs5il4k0w2 [ 6 ] ; real_T
gh2dgbroxj [ 2 ] ; real_T bbsdtpdyeu [ 2 ] ; real_T a0h4rw2pzq [ 2 ] ; real_T
fxpbq0232m [ 2 ] ; real_T hy3x2mcczq [ 2 ] ; real_T p22f5daims [ 2 ] ; real_T
ajeijb2ja1 ; real_T bbd0kx4b5f [ 2 ] ; real_T pfwdm5fmqu [ 2 ] ; real_T
p4w2k5v1wj [ 6 ] ; real_T gaxse5kxim [ 2 ] ; real_T fleil3vprp [ 2 ] ; real_T
et4s534kkm [ 2 ] ; real_T mg5lmkzaqw [ 2 ] ; real_T ptuz1wboei [ 2 ] ; real_T
frs1xovyzt [ 2 ] ; real_T d0c4nyywdh ; real_T ahrnq0r2qe [ 2 ] ; real_T
omzhgagfms [ 2 ] ; real_T fuuvnismc3 [ 6 ] ; real_T mu4ixewcyv [ 2 ] ; real_T
mhluyzwmws [ 2 ] ; real_T l10sjzgjvn [ 2 ] ; real_T ibxz0r3d1f [ 2 ] ; real_T
e5r5dtjs4q [ 2 ] ; real_T ghqsaeko4d [ 2 ] ; real_T p305xpsemf ; real_T
h3b1gewseh [ 2 ] ; real_T iuodq432xi [ 2 ] ; real_T gesxkgm4kx ; real_T
hhp0ifl2yw [ 2 ] ; real_T ianoqttrxv [ 2 ] ; real_T he1ppeigal [ 212 ] ;
real_T prhiof4qsq ; real_T ecsqxwncwm ; real_T casefabrfq ; real_T cnmjwkmazr
[ 2 ] ; real_T brlwrgk15q [ 2 ] ; real_T o25uswlvdp [ 2 ] ; real_T medeidy042
[ 6666 ] ; real_T cu4avl1hkj [ 2 ] ; real_T bsq0dfmaxa [ 2 ] ; real_T
cezbwb0d2a [ 2 ] ; real_T ox4tevucxv [ 6666 ] ; real_T g31vxfpy4q [ 2 ] ;
real_T db5bwiekun [ 2 ] ; real_T ls4rxzkes5 [ 2 ] ; real_T bdgovhv4ik [ 6666
] ; real_T eiw52ywrb4 [ 2 ] ; real_T hpqftlxp3c [ 2 ] ; real_T dk0rvfsmaq [ 2
] ; real_T kc40jaqb2h [ 6666 ] ; real_T a1sr2wqgmu [ 2 ] ; real_T g4ja2dajvk
[ 2 ] ; real_T luujgxmr1o [ 2 ] ; real_T e3gek0ry3d [ 6666 ] ; real_T
nvwrcwhvfh [ 2 ] ; real_T f0gipvq3m1 [ 2 ] ; real_T kwtkfmor5n [ 2 ] ; real_T
j1x1hsbdr0 [ 6666 ] ; real_T n5nzu3kjes ; real_T cpdftgvp5j ; real_T
aytq4ro10u ; real_T hon4sukebl [ 3 ] ; real_T buoynvge5k ; real_T ibybqspfgl
; real_T ho4bknelcg ; real_T itoao1sfit [ 2 ] ; real_T c4lxq5nxdk [ 2 ] ;
real_T i31qdzmytg [ 2 ] ; real_T ijyhgxa4ir [ 6666 ] ; real_T ikmihxdjgd [ 2
] ; real_T beyirrck3l [ 2 ] ; real_T opjnplgrqr [ 2 ] ; real_T bzfzyz3bd1 [
6666 ] ; real_T fhoxjffvpi [ 2 ] ; real_T kibzgbc1sz [ 2 ] ; real_T
cylq3fvmgt [ 2 ] ; real_T ezchfr4o4l [ 6666 ] ; real_T brhp0ikhtk [ 2 ] ;
real_T cx4aeyf40y [ 2 ] ; real_T fndyh2xhdu [ 2 ] ; real_T eftulqbrzz [ 6666
] ; real_T m0cw303eqj [ 2 ] ; real_T hlb4yuxrtw [ 2 ] ; real_T plzxjtiyrv [ 2
] ; real_T jookwiu0tz [ 6666 ] ; real_T gwf111r5cb [ 2 ] ; real_T ga5s5ik0xv
[ 2 ] ; real_T jqooyst0rm [ 2 ] ; real_T d3ckza5q5a [ 6666 ] ; real_T
a51ghepnze ; real_T hqs2mw0ghn ; real_T eh404m514p ; real_T dhijvgbrcb [ 3 ]
; real_T gj5tqz5elk ; real_T n44uemposi ; real_T fivxiuqj2z ; real_T
buhecvr1pt [ 2 ] ; real_T atn2wtkmo0 [ 2 ] ; real_T feqvc1ej3d [ 2 ] ; real_T
ofmyd2sov3 [ 6666 ] ; real_T f32vhshmmu [ 2 ] ; real_T irzu0iqkni [ 2 ] ;
real_T d5pbdyuvtg [ 2 ] ; real_T gnphoanxtz [ 6666 ] ; real_T diibw0wn5k [ 2
] ; real_T avq0bsytvn [ 2 ] ; real_T jbtv0v3llf [ 2 ] ; real_T lbhtc5inzu [
6666 ] ; real_T ejfyznegdy [ 2 ] ; real_T g1iersdkym [ 2 ] ; real_T
bvkwnbndsl [ 2 ] ; real_T guu0mjawsj [ 6666 ] ; real_T gkjiu4qsxw [ 2 ] ;
real_T jd1zetj1x5 [ 2 ] ; real_T mk1tx352rk [ 2 ] ; real_T j2lbcu45hs [ 6666
] ; real_T prsaxcizol [ 2 ] ; real_T pii4dmzetm [ 2 ] ; real_T kx0kwq0jq3 [ 2
] ; real_T di5wkr5wom [ 6666 ] ; real_T ievt4amgtp ; real_T apbi5w44rp ;
real_T ajdwn3ipdj ; real_T id5wg2dmpb [ 3 ] ; real_T opidlovknh ; real_T
mamquzwzt0 ; real_T gu23ijp0sq ; real_T p02qskrzuz [ 2 ] ; real_T iiskefcqyq
[ 2 ] ; real_T ki03evrtju [ 2 ] ; real_T abqcgyqwqb [ 6666 ] ; real_T
azce2wilhj [ 2 ] ; real_T mqlk3v203p [ 2 ] ; real_T iv3e54thqv [ 2 ] ; real_T
iydh1n0chb [ 6666 ] ; real_T l3d02p0mrt [ 2 ] ; real_T fxe2f1albw [ 2 ] ;
real_T eiencxohul [ 2 ] ; real_T ibfqlp3xff [ 6666 ] ; real_T iui0wjrvgl [ 2
] ; real_T fccyynsmqq [ 2 ] ; real_T fvcdxw4we3 [ 2 ] ; real_T dcn0sqf2ph [
6666 ] ; real_T nl1jetd05j [ 2 ] ; real_T la0oxh111m [ 2 ] ; real_T
bhakrhq2mv [ 2 ] ; real_T pphvyn3ub0 [ 6666 ] ; real_T myuvzzoldj [ 2 ] ;
real_T l3ihnwusir [ 2 ] ; real_T pqhqygtwdl [ 2 ] ; real_T l11yzgtc0o [ 6666
] ; real_T g4kf51akz3 ; real_T myoy2snmlb ; real_T nb0m3n4cgq ; real_T
ivtqjknt4n [ 3 ] ; real_T e1h3pdnle0 ; real_T fahmpvykdf ; real_T fhiibidmhv
; real_T hohmgcvl5b ; real_T fa01ge22gh ; real_T ifoqklag0c ; real_T
avzsiziipq ; real_T c0exork5u4 ; real_T aztl5dgba1 ; real_T elswac3jyk ;
real_T iml3sujeru ; real_T k5zonezswp ; real_T avrp3pl50n ; real_T k4kwwtmvrw
; real_T b1jxs5xdzp ; real_T nhad53qhlh [ 3 ] ; real_T bmdokcjl2s [ 3 ] ;
real_T hb00oxsrva [ 3 ] ; real_T jl2qnhrjsi [ 3 ] ; void * pdwd2qqxba ; void
* d3svesmau2 ; void * ctpmr0qy2w ; void * gn4tdbf40k ; void * jnvtrrqjab ;
void * ihbnz3xv44 ; void * dewjhbtsof ; void * czyrktcsyd ; void * fyx05x0zdv
; void * eyk03rsw5y ; void * bvobfiadqb ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } cnspotbbsa ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } ckxcz3qb0c ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } nkgor1datg ; struct { void *
LoggedData ; } al5kuxfjwn ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } pwtoor2sjt ; struct { void * LoggedData ; } pxxsj1swie ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } fci0zvaqnz
; struct { void * LoggedData ; } kz31d4f4fy ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } n5wcfptujm ; struct { void * LoggedData ;
} lsyrasxddc ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } ctauzmd2y5 ; struct { void * LoggedData ; } mcpprjawa1 ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } gjgunwb1iw ; struct { void
* LoggedData ; } o2zk5nxc0o ; struct { void * LoggedData [ 6 ] ; } bsgf2ryqdu
; struct { void * AQHandles ; } k03x2e2zwo ; struct { void * AQHandles ; }
b1iol10x4w ; struct { void * AQHandles ; } ned1oily5f ; struct { void *
AQHandles ; } pvnj1zld1t ; struct { void * AQHandles ; } pru2b1vufe ; struct
{ void * AQHandles ; } iiuqq1u2xy ; struct { void * LoggedData [ 2 ] ; }
ajopsahum1 ; struct { void * AQHandles ; } elrlc2i1p2 ; struct { void *
AQHandles ; } ht2kgpwizw ; struct { void * LoggedData [ 4 ] ; } bsvedga4ar ;
struct { void * AQHandles ; } g2zj3hehp4 ; struct { void * AQHandles ; }
c4ulfwrxhx ; struct { void * AQHandles ; } i3zk5hga54 ; struct { void *
AQHandles ; } ja2dj0f0ul ; struct { void * AQHandles ; } bp0kyk0a0l ; struct
{ void * AQHandles ; } kvp4r5utln ; struct { void * AQHandles ; } jq1p4omjox
; struct { void * AQHandles ; } po2vncqjoh ; struct { void * LoggedData [ 4 ]
; } gkz0y4hq2m ; struct { void * AQHandles ; } hb0mah0exy ; struct { void *
AQHandles ; } gvx2zg2cea ; struct { void * AQHandles ; } nuyoxo0cqz ; struct
{ void * LoggedData [ 3 ] ; } gww0cv0ikt ; struct { void * LoggedData ; }
kg0cv3bcem ; int_T g0ey1umlvp [ 107 ] ; int_T aoolzur04j ; struct { int_T
PrevIndex ; } bgeyshjbzb ; struct { int_T PrevIndex ; } mjve5455le ; struct {
int_T PrevIndex ; } k1540yevzf ; struct { int_T PrevIndex ; } blyhnqcwbl ;
struct { int_T PrevIndex ; } iawjkczuo4 ; struct { int_T PrevIndex ; }
ifyhgjywal ; struct { int_T PrevIndex ; } fzvd40rmlh ; struct { int_T
PrevIndex ; } bge3hyfznp ; int_T cplapuxul1 ; int_T mrlqkg10mu ; int_T
h3gttudkrz ; uint16_T hsvj4eebrn ; uint16_T hs0hjj1ybi ; uint16_T aztyv1ktkn
; uint16_T kfllfsevwe ; int8_T ivsks1bx0l ; int8_T kqwgkvrpbx ; int8_T
mrclia2nhj ; int8_T mkfm1nwa4k ; int8_T fbs3atjfwy ; int8_T bmi1l3smrw ;
int8_T kxd33zbdfo ; int8_T hawnej3muw ; int8_T dfhxi1pprk ; int8_T goxydkgp3m
; int8_T f4hygz04jf ; int8_T me4ua1waij ; uint8_T pesmq01kos ; uint8_T
ad2rr00kcq ; uint8_T mfooylrov2 ; uint8_T a0ow33ilzk ; uint8_T bkwrvqxkf1 ;
uint8_T j50udee3q4 ; uint8_T irp0xx4avl ; uint8_T p5powm1gdp ; uint8_T
puogz2oxpb ; uint8_T h4yemslxzv ; uint8_T ib045naqql ; uint8_T htly4042cc ;
uint8_T lmniz4owhh ; uint8_T hwjumjs5x1 ; uint8_T e4kyxoj0nc ; uint8_T
nihpeweagh ; uint8_T moyclcqaxp ; uint8_T baseatbrhl ; uint8_T o5sglifuzn ;
uint8_T iphlqctr2v ; uint8_T pwkdcusirn ; uint8_T dzmkslhpoi ; uint8_T
lc0mv3azov ; uint8_T j4reyhjks0 ; uint8_T mxcgazvi0e ; uint8_T iwne4nroqk ;
uint8_T juff0j4zxc ; uint8_T hdnm0in5gu ; uint8_T ij2bghgxrl ; uint8_T
fxn3lhqzuu ; uint8_T hs4wdf4ex0 ; uint8_T ink54q4ffg ; uint8_T fzwybmzxln ;
uint8_T go3jd5lryw ; uint8_T ia1onekt4o ; uint8_T nt0txctzex ; uint8_T
nwfxzu3kgs ; uint8_T lgbtorkmxp ; uint8_T itrrzj355z ; uint8_T n2j411fnpd ;
uint8_T grglbtthdq ; uint8_T cb4npu440q ; uint8_T ktmckyvcby ; uint8_T
hvya4zjgu4 ; uint8_T gj114pcwwo ; uint8_T mhglafl51h ; uint8_T ngmsujkrep ;
uint8_T aqspy2pl3t ; uint8_T imhiup3lqp ; uint8_T b4kbcupsj1 ; uint8_T
ou3zgr4lxd ; uint8_T eq3tarvmgx ; boolean_T hd1wmr0d1r ; boolean_T jdpempr5r1
; boolean_T csrr5dodrz ; boolean_T jdkwfeajym ; boolean_T ibt15oxvor ;
boolean_T cwc1wqm0vk ; boolean_T mbinizmvii ; boolean_T lwuyrwvpiz ;
boolean_T p0iycn1rso ; boolean_T jjxambycum ; boolean_T kje4hvz1hd ;
boolean_T afgncpkgxf ; boolean_T dyatimqmxm ; boolean_T fxfvt0nvbh ;
boolean_T ozalouinao ; boolean_T muorklbp1c ; boolean_T m13d2twz41 ;
boolean_T lihhrn2u0q ; boolean_T ca2e51hn33 ; kx5rga5han izamymonit ;
kx5rga5han j2wpgjfxgi ; dr3zeyo5on i0sih0wbey ; kx5rga5han omzkn45ngp ;
dr3zeyo5on jp4rpyga2c ; kx5rga5han dqdfnpqzmi ; dr3zeyo5on gl43fmrisv ;
dr3zeyo5on hujlteqo2z ; } DW ; typedef struct { real_T cpre0ir1h4 ; real_T
d4vwwltaq4 ; real_T av4tushgcc ; real_T axejew11xc ; } X ; typedef struct {
real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; real_T av4tushgcc ; real_T axejew11xc
; } XDot ; typedef struct { boolean_T cpre0ir1h4 ; boolean_T d4vwwltaq4 ;
boolean_T av4tushgcc ; boolean_T axejew11xc ; } XDis ; typedef struct {
real_T cpre0ir1h4 ; real_T d4vwwltaq4 ; real_T av4tushgcc ; real_T axejew11xc
; } CStateAbsTol ; typedef struct { real_T cpre0ir1h4 ; real_T d4vwwltaq4 ;
real_T av4tushgcc ; real_T axejew11xc ; } CXPtMin ; typedef struct { real_T
cpre0ir1h4 ; real_T d4vwwltaq4 ; real_T av4tushgcc ; real_T axejew11xc ; }
CXPtMax ; typedef struct { real_T jqej3hari1 ; real_T hkxjmb2ql1 ; real_T
oassd4g2j4 ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct hn5x2iuncz_ { real_T SwitchingTimeCalculation_PWM ;
real_T SwitchingTimeCalculation_fsw ; } ; struct P_ { real_T Kdroop_fp ;
real_T Kdroop_vq ; real_T Ki_vd ; real_T Ki_vq ; real_T Kp_vd ; real_T Kp_vq
; real_T Ts ; real_T Vdc1 ; real_T Vdc2 ; real_T Vrms ; real_T fgrid ; real_T
VdDiscretePIController_InitialConditionForIntegrator ; real_T
VqDiscretePIController_InitialConditionForIntegrator ; real_T
VdDiscretePIController_InitialConditionForIntegrator_idipyi4en2 ; real_T
VqDiscretePIController_InitialConditionForIntegrator_etog44td1j ; real_T
VdDiscretePIController_InitialConditionForIntegrator_m40nct4a0v ; real_T
VqDiscretePIController_InitialConditionForIntegrator_p1cqjmhvrz ; real_T
VdDiscretePIController_InitialConditionForIntegrator_ocphkcnssd ; real_T
VqDiscretePIController_InitialConditionForIntegrator_ntkeopnw2y ; real_T
PowerMeasurementThreePhase_K ; real_T PowerMeasurementThreePhase_K_hy3xpce12q
; real_T PowerMeasurementThreePhase_K_ldrzfwwor5 ; real_T
PowerMeasurementThreePhase_K_jzgjy3c5n3 ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_oyh5wkhpw5 ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_etnuutkyak ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_gfz3wxg2ch ; real_T
SinusoidalMeasurementPLLThreePhase_Ki_LF_bot0muxzza ; real_T
SinusoidalMeasurementPLLThreePhase1_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase2_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase3_Ki_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_ndbawt3bd0 ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_f4x3glewrn ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_btdxqffwlg ; real_T
SinusoidalMeasurementPLLThreePhase1_Kp_LF ; real_T
SinusoidalMeasurementPLLThreePhase_Kp_LF_evcqlc0f5m ; real_T
SinusoidalMeasurementPLLThreePhase2_Kp_LF ; real_T
SinusoidalMeasurementPLLThreePhase3_Kp_LF ; real_T
VdDiscretePIController_LowerSaturationLimit ; real_T
VqDiscretePIController_LowerSaturationLimit ; real_T
VdDiscretePIController_LowerSaturationLimit_kzdnvpoxxj ; real_T
VqDiscretePIController_LowerSaturationLimit_l3t03oryem ; real_T
VdDiscretePIController_LowerSaturationLimit_maqhemt3rd ; real_T
VqDiscretePIController_LowerSaturationLimit_ompcxgfqbt ; real_T
VdDiscretePIController_LowerSaturationLimit_imyiwgubmo ; real_T
VqDiscretePIController_LowerSaturationLimit_mremxhutdg ; real_T
irradiance_OutValues [ 24 ] ; real_T irradiance_OutValues_hek4zzfvq5 [ 24 ] ;
real_T irradiance_OutValues_l5210yomf1 [ 24 ] ; real_T
irradiance_OutValues_a4rdpfx5q1 [ 24 ] ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_g5132cv40x ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_lv1x1d0eub ; real_T
SinusoidalMeasurementPLLThreePhase1_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz ; real_T
SinusoidalMeasurementPLLThreePhase2_Theta0 ; real_T
SinusoidalMeasurementPLLThreePhase3_Theta0 ; real_T irradiance_TimeValues [
24 ] ; real_T irradiance_TimeValues_lg2o30zpc4 [ 24 ] ; real_T
irradiance_TimeValues_ggjepudrjv [ 24 ] ; real_T
irradiance_TimeValues_klynxqb2sk [ 24 ] ; real_T
VdDiscretePIController_UpperSaturationLimit ; real_T
VqDiscretePIController_UpperSaturationLimit ; real_T
VdDiscretePIController_UpperSaturationLimit_clg5ygz5v5 ; real_T
VqDiscretePIController_UpperSaturationLimit_bclvwasnsn ; real_T
VdDiscretePIController_UpperSaturationLimit_gwelb2o1es ; real_T
VqDiscretePIController_UpperSaturationLimit_fphvjlnnoc ; real_T
VdDiscretePIController_UpperSaturationLimit_lwtdll32bx ; real_T
VqDiscretePIController_UpperSaturationLimit_g5hnj3mz0m ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ;
real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_gca2pndy5y
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kxsgugcvmz
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_k5nbqzap3x
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_nt1yo4ecuv
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_mgdj25xznc
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_lo4dhbuz2c
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_cwjshf1gof
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l0mfddutlu
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_erg5yu5yxu
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_hy00zirnfp
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_otl3xaojln
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue ;
real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_kpwvhjlgaq
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_c5wjg5w2lg
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_cl5dytyjkn
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_hfhh4bqcmx
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_ahgtaisizf
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_gzkx55n53n
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_ljuqjpujux
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_aj0bheagem
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_k3s5fw1q11
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_pgx2j5mpm4
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_mawc2fn552
; real_T IntegratorwithWrappedStateDiscreteorContinuous_x0 ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_h1m1w5hlay ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_ir1jud0cu5 ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_hdh4fs21a2 ; uint16_T
LimitedCounter_uplimit ; uint16_T LimitedCounter_uplimit_chlbczr5xp ;
uint16_T LimitedCounter_uplimit_gnyrogwr2c ; uint16_T
LimitedCounter_uplimit_ahwhatsf15 ; real_T Gain1_Gain ; real_T
Gain1_Gain_ollxa44d1e ; real_T Gain2_Gain ; real_T Gain1_Gain_b2wmxmysa4 ;
real_T Gain1_Gain_cvrz05eflz ; real_T Gain1_Gain_msdjc3sds3 ; real_T
Gain1_Gain_bct5xv0x0d ; real_T Gain1_Gain_fdb215vbov ; real_T Gain3_Gain ;
real_T Gain1_Gain_hzadu4huns ; real_T Gain1_Gain_caxz35q2gc ; real_T
Gain2_Gain_fkhwdbr2xf ; real_T Gain1_Gain_kzsdhtloji ; real_T
Gain1_Gain_im4ln3hgws ; real_T Gain1_Gain_ig1ss2ojir ; real_T
Gain1_Gain_ons3rxrahf ; real_T Gain1_Gain_pxruile2ng ; real_T
Gain3_Gain_ku2mah5vw0 ; real_T Gain1_Gain_ojiysctlis ; real_T
Gain1_Gain_ctfv2ehtma ; real_T Gain2_Gain_iq2a15ibxp ; real_T
Gain1_Gain_g4qqtkj0uw ; real_T Gain1_Gain_evhgfiy2dc ; real_T
Gain1_Gain_fzgm1zo03s ; real_T Gain1_Gain_cu1eupza5y ; real_T
Gain1_Gain_bcw1epffdu ; real_T Gain3_Gain_eyjsswez2w ; real_T
Gain1_Gain_igrlycqcxh ; real_T Gain1_Gain_cfhrvxyyyt ; real_T
Gain2_Gain_mxewt3slpb ; real_T Gain1_Gain_o0emyganag ; real_T
Gain1_Gain_hqamhb2ogo ; real_T Gain1_Gain_cwzhu4z1zu ; real_T
Gain1_Gain_htf3hmw03m ; real_T Gain1_Gain_cyewue1y2k ; real_T
Gain3_Gain_bjsgiowjtv ; real_T Connectat2s_Time ; real_T Connectat2s_Y0 ;
real_T Connectat2s_YFinal ; real_T Connectat2s1_Time ; real_T Connectat2s1_Y0
; real_T Connectat2s1_YFinal ; real_T Connectat2s2_Time ; real_T
Connectat2s2_Y0 ; real_T Connectat2s2_YFinal ; real_T
UnitDelay1_InitialCondition ; real_T UnitDelay1_InitialCondition_lapzeesnb2 ;
real_T UnitDelay_InitialCondition ; real_T SampleTimeMath_WtEt ; real_T
UnitDelay1_InitialCondition_ikvhji4ogl ; real_T
UnitDelay_InitialCondition_etw0spqh0b ; real_T SampleTimeMath_WtEt_l4wlpuavwf
; real_T UnitDelay1_InitialCondition_ihnyqfqp54 ; real_T
UnitDelay_InitialCondition_j01dcl1355 ; real_T SampleTimeMath_WtEt_pfemkitsnl
; real_T UnitDelay_InitialCondition_lfcgd1m32e ; real_T
SampleTimeMath_WtEt_jjxmcsczc0 ; real_T Integrator_gainval ; real_T
Gain1_Gain_losnrngiyc ; real_T Constant1_Value ; real_T
Integrator_gainval_carz0grxbg ; real_T Integrator_UpperSat ; real_T
Integrator_LowerSat ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat
; real_T Gain1_Gain_dzyyjzode5 ; real_T fromWS_Signal1_Time0 [ 6 ] ; real_T
fromWS_Signal1_Data0 [ 6 ] ; real_T Integrator_gainval_avayg33ayj ; real_T
Integrator_gainval_bh1byogw3o ; real_T Integrator_IC ; real_T
UnitDelay1_InitialCondition_igxde5r1oa ; real_T UnitDelay2_InitialCondition ;
real_T Delay_InitialCondition ; real_T Gain_Gain ; real_T
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
Initial_Value ; real_T DiscreteTimeIntegrator1_gainval ; real_T
avoiddivisionby0_UpperSat ; real_T avoiddivisionby0_LowerSat ; real_T
UnitDelay2_InitialCondition_p5dmi4fyvs ; real_T Integrator_gainval_aiqo4pqknj
; real_T Gain1_Gain_abh3hvbccc ; real_T Constant1_Value_lsknndl14i ; real_T
Integrator_gainval_j4gmb2gwsc ; real_T Integrator_UpperSat_lm3ewrrsxh ;
real_T Integrator_LowerSat_hjh2vovvsr ; real_T Saturation_UpperSat_gox4btb11r
; real_T Saturation_LowerSat_axo2ygf3i0 ; real_T Gain1_Gain_e2meerxskp ;
real_T FromWorkspace1_Time0 [ 6 ] ; real_T FromWorkspace1_Data0 [ 6 ] ;
real_T Integrator_gainval_nbtau22bcs ; real_T Integrator_gainval_lx3n3x4rqc ;
real_T Integrator_IC_cooq3xxsvj ; real_T
UnitDelay1_InitialCondition_j5udodixng ; real_T
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
UnitDelay2_InitialCondition_pvc43f4wjv ; real_T Integrator_gainval_of05xrydg5
; real_T Gain1_Gain_kwmlgohbh3 ; real_T Constant1_Value_h5kmnkh3sf ; real_T
Integrator_gainval_bkn3tztrni ; real_T Integrator_UpperSat_paozthj4zt ;
real_T Integrator_LowerSat_djff542tgk ; real_T Saturation_UpperSat_kfyvjuldrl
; real_T Saturation_LowerSat_fvf5dwqvvx ; real_T Gain1_Gain_nuw11fl03x ;
real_T FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0 [ 2 ] ;
real_T Integrator_gainval_fgdfb0ukir ; real_T Integrator_gainval_nufqi4pmed ;
real_T Integrator_IC_brvjckouau ; real_T
UnitDelay1_InitialCondition_lxazr3tuct ; real_T
UnitDelay2_InitialCondition_nlqvkhmzb3 ; real_T
Delay_InitialCondition_f0u5z02e4k ; real_T Gain_Gain_a1dmkpvvyl ; real_T
Integrator_gainval_ns5roz2mit ; real_T Integrator_IC_ebhrdx1l0t ; real_T
UnitDelay1_InitialCondition_gpa03xqy4d ; real_T
UnitDelay2_InitialCondition_g2spypkfwa ; real_T
Delay_InitialCondition_acrtpxpzmg ; real_T Gain_Gain_jp4o2nga2p ; real_T
Integrator_gainval_pofuhi0okg ; real_T Integrator_IC_iiwd13rbbl ; real_T
UnitDelay1_InitialCondition_gbzgwfomcl ; real_T
UnitDelay2_InitialCondition_bizjnctltj ; real_T
Delay_InitialCondition_evyq0fynqb ; real_T Gain_Gain_gbzwqthk5i ; real_T
Integrator_gainval_eiefy5fpf4 ; real_T Integrator_IC_d0xhhmdsae ; real_T
UnitDelay1_InitialCondition_gvm5qqs32k ; real_T
UnitDelay2_InitialCondition_n4vmlb0rd3 ; real_T
Delay_InitialCondition_fvfewjbszw ; real_T Gain_Gain_p5mm5kga3f ; real_T
Integrator_gainval_bpumpscwlr ; real_T Integrator_IC_lxrxjoey0o ; real_T
UnitDelay1_InitialCondition_inneredmkw ; real_T
UnitDelay2_InitialCondition_mzqfzcw325 ; real_T
Delay_InitialCondition_cthobcdge3 ; real_T Gain_Gain_n3aryppv23 ; real_T
Integrator_gainval_kvinm5saf1 ; real_T Integrator_IC_ft33if1mhh ; real_T
UnitDelay1_InitialCondition_bssdblmgq5 ; real_T
UnitDelay2_InitialCondition_ct1nsponrz ; real_T
Delay_InitialCondition_gcw4w1taz0 ; real_T Gain_Gain_n043cloqnn ; real_T
Gain_Gain_bb2lkc15oa ; real_T Integrator_IC_c5keywtevf ; real_T
FromWorkspace4_Time0 [ 6 ] ; real_T FromWorkspace4_Data0 [ 6 ] ; real_T
Gain1_Gain_niirzeax2q ; real_T Integrator_gainval_aur3kpxgw0 ; real_T
Integrator_gainval_amsvc2wmt3 ; real_T Gain1_Gain_lx4uox5xwr ; real_T
Initial_Value_j5jv1ulm0p ; real_T DiscreteTimeIntegrator1_gainval_falznq34t5
; real_T avoiddivisionby0_UpperSat_cc3zt2pgzv ; real_T
avoiddivisionby0_LowerSat_olllmmm4bn ; real_T
UnitDelay2_InitialCondition_e12vavsad2 ; real_T Integrator_gainval_a3fxm0a25j
; real_T Gain1_Gain_gtmns454wi ; real_T Constant1_Value_htiipytmdf ; real_T
Integrator_gainval_feykyx3p0q ; real_T Integrator_UpperSat_bx5pfnhsxq ;
real_T Integrator_LowerSat_la45z3uy4e ; real_T Saturation_UpperSat_fh0m0epk2f
; real_T Saturation_LowerSat_me0m1zfje2 ; real_T Gain1_Gain_katkucvxre ;
real_T FromWorkspace5_Time0 [ 5 ] ; real_T FromWorkspace5_Data0 [ 5 ] ;
real_T Integrator_gainval_e2dgxut2qc ; real_T Integrator_gainval_bsfnaqifac ;
real_T Integrator_IC_erwde4upuv ; real_T
UnitDelay1_InitialCondition_gr2twzkhzk ; real_T
UnitDelay2_InitialCondition_hg2hviixzm ; real_T
Delay_InitialCondition_iesjuiezbr ; real_T Gain_Gain_axipb0qg0p ; real_T
Integrator_gainval_m15mctci5n ; real_T Integrator_IC_gzn3hobbh0 ; real_T
UnitDelay1_InitialCondition_fsdx2zcfhb ; real_T
UnitDelay2_InitialCondition_ntky5bcna2 ; real_T
Delay_InitialCondition_prtl101xx4 ; real_T Gain_Gain_hwbek131fu ; real_T
Integrator_gainval_pihkoapdlb ; real_T Integrator_IC_nvhjo4cobe ; real_T
UnitDelay1_InitialCondition_fd0tphzlrl ; real_T
UnitDelay2_InitialCondition_fqqmiap4jz ; real_T
Delay_InitialCondition_ewgnrpqzyh ; real_T Gain_Gain_f0r1vvz5al ; real_T
Integrator_gainval_hs52tleruf ; real_T Integrator_IC_pefk01bl1m ; real_T
UnitDelay1_InitialCondition_k3xuyqpsh1 ; real_T
UnitDelay2_InitialCondition_a1nmbd5y25 ; real_T
Delay_InitialCondition_clzce4ccce ; real_T Gain_Gain_dnn10t1q1k ; real_T
Integrator_gainval_mxhwdub0fg ; real_T Integrator_IC_hq3hbyocoh ; real_T
UnitDelay1_InitialCondition_bf253krejr ; real_T
UnitDelay2_InitialCondition_m2gx2ejsig ; real_T
Delay_InitialCondition_ivkwm4jubn ; real_T Gain_Gain_njdzepyjha ; real_T
Integrator_gainval_hlziaugl4v ; real_T Integrator_IC_no3ciekp5x ; real_T
UnitDelay1_InitialCondition_k3xqraknk3 ; real_T
UnitDelay2_InitialCondition_cll4rsyc2b ; real_T
Delay_InitialCondition_fy0hm1jzh1 ; real_T Gain_Gain_e4u04gphjz ; real_T
Gain_Gain_gtanyi5b3f ; real_T Integrator_IC_io0pemxg3l ; real_T
FromWorkspace6_Time0 [ 2 ] ; real_T FromWorkspace6_Data0 [ 2 ] ; real_T
Gain1_Gain_dvsjajudxx ; real_T Integrator_gainval_mpz0lvbwq5 ; real_T
Integrator_gainval_eexoe3dkzl ; real_T Gain1_Gain_pftthgad3p ; real_T
Initial_Value_kug3lordr1 ; real_T DiscreteTimeIntegrator1_gainval_hyxioaecba
; real_T avoiddivisionby0_UpperSat_hddmyd3om2 ; real_T
avoiddivisionby0_LowerSat_mdlmrveeuz ; real_T
UnitDelay2_InitialCondition_bt1dah4zxx ; real_T Gain_Gain_edy3rsxlbj ; real_T
Gain_Gain_liiiiertx5 ; real_T Gain_Gain_hkq1gtgjr0 ; real_T
Integrator_gainval_jiozqx4w4v ; real_T Gain1_Gain_b4avjwyrj2 ; real_T
Constant1_Value_da1dwznx44 ; real_T Integrator_gainval_coazxg22nt ; real_T
Integrator_UpperSat_hpvvxjqfd4 ; real_T Integrator_LowerSat_i10qscebp4 ;
real_T Saturation_UpperSat_i15q0blda2 ; real_T Saturation_LowerSat_jx0zzxgaew
; real_T Gain1_Gain_gi0auafmvm ; real_T Integrator_gainval_o23ns0zq3s ;
real_T Gain1_Gain_b02alh1u5u ; real_T Constant1_Value_ktx3gyatq5 ; real_T
Integrator_gainval_axkjs1f2yw ; real_T Integrator_UpperSat_nxtktwi3hv ;
real_T Integrator_LowerSat_micq5t2bis ; real_T Saturation_UpperSat_kp53gt01p2
; real_T Saturation_LowerSat_p4o1xc0k2h ; real_T Gain1_Gain_kgot1sgoty ;
real_T Integrator_gainval_ioercdup43 ; real_T Gain1_Gain_lt0x1wl4vx ; real_T
Constant1_Value_ilqlhyvbt0 ; real_T Integrator_gainval_ajqdp1xaa1 ; real_T
Integrator_UpperSat_bizln0u5t5 ; real_T Integrator_LowerSat_capm0ftbol ;
real_T Saturation_UpperSat_fypdw3dpyx ; real_T Saturation_LowerSat_nq01lpqzme
; real_T Gain1_Gain_ok3di22qd5 ; real_T Integrator_gainval_dcrfjzf2wm ;
real_T Gain1_Gain_c2gbygplut ; real_T Constant1_Value_ak2impny3a ; real_T
Integrator_gainval_eejb45n41q ; real_T Integrator_UpperSat_ivn2z4pfnb ;
real_T Integrator_LowerSat_oujyfkp0ta ; real_T Saturation_UpperSat_osfzoisagp
; real_T Saturation_LowerSat_c4kwopqfkb ; real_T Gain1_Gain_k5djs3xjry ;
real_T Constant1_Value_lodywi0z2n ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Sequence_Value ; real_T V0_Value ; real_T
Constant5_Value ; real_T Constant2_Value_lexwhwkcr1 ; real_T
Constant3_Value_lyqvw4nurv ; real_T Sequence_Value_phlzt4e1pz ; real_T
V0_Value_gfkw3a205u ; real_T D_init_Value ; real_T D_max_Value ; real_T
D_min_Value ; real_T Delta_D_Value ; real_T RTP_7E699339_vc_Value ; real_T
RTP_A256F8D3_TFIXED_Value ; real_T RTP_090ACF6A_IL_Value [ 3 ] ; real_T
RTP_D6820555_IL_Value [ 3 ] ; real_T Constant5_Value_c1kzczhsb5 ; real_T
Constant2_Value_omljmr31if ; real_T Constant3_Value_jprn2aoezq ; real_T
Sequence_Value_jodp2kr1h5 ; real_T V0_Value_kvcy0floga ; real_T
D_init_Value_onwkle1j2e ; real_T D_max_Value_pzpddg4ksn ; real_T
D_min_Value_gqgaltf3jb ; real_T Delta_D_Value_n31esydecf ; real_T
RTP_964844C2_TFIXED_Value ; real_T RTP_DA80F3CA_vc_Value ; real_T
RTP_9877B8CC_IL_Value [ 3 ] ; real_T RTP_E6C6C471_IL_Value [ 3 ] ; real_T
Constant5_Value_ln34bkcsep ; real_T Constant2_Value_efcvr4zbxz ; real_T
Constant3_Value_hpbabhw0ud ; real_T Sequence_Value_pndkvecmxy ; real_T
V0_Value_cjbf34ugrc ; real_T D_init_Value_nrjtlf3m5l ; real_T
D_max_Value_n3iuon0ekq ; real_T D_min_Value_d1nmexi4u4 ; real_T
Delta_D_Value_a4kbzdzszs ; real_T RTP_4885036D_vc_Value ; real_T
RTP_A2627236_TFIXED_Value ; real_T RTP_0D07AB21_IL_Value [ 3 ] ; real_T
RTP_92A154B5_IL_Value [ 3 ] ; real_T D_init_Value_g30phkuedk ; real_T
D_max_Value_ij35xptd5d ; real_T D_min_Value_k2ebw5fbzb ; real_T
Delta_D_Value_ircdw5fcf1 ; real_T RTP_948EE262_TFIXED_Value ; real_T
RTP_F1AE813E_vc_Value ; real_T RTP_A18535C3_IL_Value [ 3 ] ; real_T
RTP_EEB2E26D_IL_Value [ 3 ] ; creal_T alpha2_Gain ; creal_T alpha_Gain ;
creal_T alpha2_Gain_edh0qhxj4e ; creal_T alpha_Gain_pkcgaplt3m ; creal_T
alpha_Gain_h144fvpml1 ; creal_T alpha2_Gain_k54l5bjcyn ; creal_T
alpha_Gain_ns5srwfp4a ; creal_T alpha2_Gain_b2lryd4erl ; creal_T
alpha2_Gain_jmjocn5324 ; creal_T alpha_Gain_chzz2ghjpt ; creal_T
alpha2_Gain_jdfqf2swbm ; creal_T alpha_Gain_mt0yc41pmx ; creal_T
alpha_Gain_ebrttocmwz ; creal_T alpha2_Gain_g1epyvb0j5 ; creal_T
alpha_Gain_c32fofybnv ; creal_T alpha2_Gain_c0nmmexjjw ; creal_T
alpha2_Gain_lygx2hofk2 ; creal_T alpha_Gain_dcste4tmgj ; creal_T
alpha2_Gain_ls3h4r4bcm ; creal_T alpha_Gain_oa023s1p50 ; creal_T
alpha_Gain_nj3waaq4vn ; creal_T alpha2_Gain_far3bgjzlx ; creal_T
alpha_Gain_ocs3sj1rwp ; creal_T alpha2_Gain_h2altglsvz ; creal_T
alpha2_Gain_d4w3q4kwvg ; creal_T alpha_Gain_nsfbar4bry ; creal_T
alpha2_Gain_mnmtcarmdg ; creal_T alpha_Gain_o55yuvlhme ; creal_T
alpha_Gain_ilmnyflfs1 ; creal_T alpha2_Gain_lnfdq3oeaa ; creal_T
alpha_Gain_ozldmdnr2n ; creal_T alpha2_Gain_abznrdgtan ; uint16_T
Output_InitialCondition ; uint16_T Output_InitialCondition_myrqri23ne ;
uint16_T Output_InitialCondition_kh5r014ws1 ; uint16_T
Output_InitialCondition_k2lx1lfz0b ; uint16_T FixPtConstant_Value ; uint16_T
Constant_Value ; uint16_T FixPtConstant_Value_cv4kqetwb2 ; uint16_T
Constant_Value_jgeniii0bg ; uint16_T FixPtConstant_Value_gp2w1nxfn2 ;
uint16_T Constant_Value_nowhy2eyhg ; uint16_T FixPtConstant_Value_opy5tvingt
; uint16_T Constant_Value_kbqynn00o4 ; hn5x2iuncz i0sih0wbey ; hn5x2iuncz
jp4rpyga2c ; hn5x2iuncz gl43fmrisv ; hn5x2iuncz hujlteqo2z ; } ; extern const
char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW
rtDW ; extern P rtP ; extern mxArray *
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
