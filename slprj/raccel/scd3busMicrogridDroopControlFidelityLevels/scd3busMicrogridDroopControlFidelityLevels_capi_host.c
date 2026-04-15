#include "scd3busMicrogridDroopControlFidelityLevels_capi_host.h"
static scd3busMicrogridDroopControlFidelityLevels_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        scd3busMicrogridDroopControlFidelityLevels_host_InitializeDataMapInfo(&(root), "scd3busMicrogridDroopControlFidelityLevels");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
