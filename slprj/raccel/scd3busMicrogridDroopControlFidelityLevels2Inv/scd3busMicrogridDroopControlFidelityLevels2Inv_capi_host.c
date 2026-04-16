#include "scd3busMicrogridDroopControlFidelityLevels2Inv_capi_host.h"
static scd3busMicrogridDroopControlFidelityLevels2Inv_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        scd3busMicrogridDroopControlFidelityLevels2Inv_host_InitializeDataMapInfo(&(root), "scd3busMicrogridDroopControlFidelityLevels2Inv");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
