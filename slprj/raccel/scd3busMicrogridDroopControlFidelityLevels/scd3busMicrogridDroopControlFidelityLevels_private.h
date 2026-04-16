#ifndef scd3busMicrogridDroopControlFidelityLevels_private_h_
#define scd3busMicrogridDroopControlFidelityLevels_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "scd3busMicrogridDroopControlFidelityLevels.h"
#include "scd3busMicrogridDroopControlFidelityLevels_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)     (((v1)==(v2))?((double)(v1)):    (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?     muDoubleScalarFloor((v) + 0.5) :     muDoubleScalarCeil((v) - 0.5) )
#endif
real_T rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T *
uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx ,
real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) ; extern boolean_T
rt_TDelayUpdateTailOrGrowBuf ( int32_T * bufSzPtr , int32_T * tailPtr ,
int32_T * headPtr , int32_T * lastPtr , real_T tMinusDelay , real_T * *
uBufPtr , boolean_T isfixedbuf , boolean_T istransportdelay , int32_T *
maxNewBufSzPtr ) ; extern real_T look1_binlcpw ( real_T u0 , const real_T bp0
[ ] , const real_T table [ ] , uint32_T maxIndex ) ; extern void myvhmeoa14 ( d5qf1ggxbu * localDW ) ; extern void jiypoxprlt ( real_T cymg30cldp , real_T es3igpj2hn , real_T c2r5a1kwfz , real_T hjnuemo4at , real_T jfjqsdqagj , real_T psy3njiwti , real_T bht44nti2c , jyhhxe0hxf * localB , d5qf1ggxbu * localDW ) ; extern void g04zyq5wwj ( dr3zeyo5on * localDW ) ; extern void i4ntyq1hna ( const real_T lpyitkag1t [ 3 ] , real_T hb0qq0zf0i , jcy052muck * localB , dr3zeyo5on * localDW , hn5x2iuncz * localP ) ; extern void owtlzp2km0 ( pd3um54lgy * localDW ) ; extern void ddgrpugzor ( const real_T bk4zh0nq31 [ 4 ] , real_T nbh1rjozvk , real_T d0vfqnxaix , gghhglrkef * localB , pd3um54lgy * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
