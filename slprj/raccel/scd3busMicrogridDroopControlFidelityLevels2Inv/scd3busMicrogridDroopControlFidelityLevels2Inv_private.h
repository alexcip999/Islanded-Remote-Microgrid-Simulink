#ifndef scd3busMicrogridDroopControlFidelityLevels2Inv_private_h_
#define scd3busMicrogridDroopControlFidelityLevels2Inv_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv.h"
#include "scd3busMicrogridDroopControlFidelityLevels2Inv_types.h"
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
[ ] , const real_T table [ ] , uint32_T maxIndex ) ; extern void ocqwcltyv2 ( hd0z2aqw5d * localDW ) ; extern void kpkhaw10gu ( const real_T g4n0ajnqtq [ 3 ] , real_T pzqgflhfsq , noj2dzkc15 * localB , hd0z2aqw5d * localDW , jkg1bbugzl * localP ) ; extern void nra2rkvvqt ( bsuuxe2gfy * localDW ) ; extern void h2nwj3yylw ( const real_T j0gix4jdm0 [ 4 ] , real_T diwjeezevr , real_T hvmth3ax5g , memdyrzczu * localB , bsuuxe2gfy * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
