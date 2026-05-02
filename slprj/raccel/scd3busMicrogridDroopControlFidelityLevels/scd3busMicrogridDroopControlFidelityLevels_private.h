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
extern void g04zyq5wwj ( dr3zeyo5on * localDW ) ; extern void i4ntyq1hna ( const
real_T lpyitkag1t [ 3 ] , real_T hb0qq0zf0i , jcy052muck * localB ,
dr3zeyo5on * localDW , hn5x2iuncz * localP ) ; extern void lo52y2kjt2 ( kx5rga5han * localDW ) ; extern void delloegdsb ( const real_T lnyu5zmve2 [ 4 ] , real_T cc14byczv0 , real_T hx5uiyvy3r , kdf1f4vz3k * localB , kx5rga5han * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
