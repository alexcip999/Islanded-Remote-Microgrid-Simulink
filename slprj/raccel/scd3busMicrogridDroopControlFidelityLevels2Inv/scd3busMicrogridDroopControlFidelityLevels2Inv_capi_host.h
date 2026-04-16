#ifndef scd3busMicrogridDroopControlFidelityLevels2Inv_cap_host_h__
#define scd3busMicrogridDroopControlFidelityLevels2Inv_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
scd3busMicrogridDroopControlFidelityLevels2Inv_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void
scd3busMicrogridDroopControlFidelityLevels2Inv_host_InitializeDataMapInfo ( scd3busMicrogridDroopControlFidelityLevels2Inv_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
