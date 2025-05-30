/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVROverlay_IVROverlay_013_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_FindOverlay_params *params = (struct IVROverlay_IVROverlay_013_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_FindOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_FindOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_013_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_CreateOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_CreateOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_013_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_DestroyOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_DestroyOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_013_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetHighQualityOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetHighQualityOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_013_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetHighQualityOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetHighQualityOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayKey( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayKey_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayName( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayName_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayImageData( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayImageData_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayRenderingPid( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayRenderingPid( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTexelAspect( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTexelAspect( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_013_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlaySortOrder( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlaySortOrder_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_013_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlaySortOrder( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlaySortOrder_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTransformType( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformType_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_013_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ShowOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ShowOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_HideOverlay_params *params = (struct IVROverlay_IVROverlay_013_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_HideOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_HideOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_013_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_013_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_IsOverlayVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_IsOverlayVisible_params *params = (struct wow64_IVROverlay_IVROverlay_013_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_013_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_013_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    u_VREvent_t_103 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_PollNextOverlayEvent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_PollNextOverlayEvent_params *params = (struct wow64_IVROverlay_IVROverlay_013_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    u_VREvent_t_103 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ComputeOverlayIntersection( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *params = (struct wow64_IVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *params = (struct wow64_IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_IsHoverTargetOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetGamepadFocusOverlay(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetGamepadFocusOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetGamepadFocusOverlay(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetGamepadFocusOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayNeighbor_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayNeighbor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayNeighbor_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *params = (struct IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *params = (struct wow64_IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_013_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_013_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ClearOverlayTexture( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ClearOverlayTexture_params *params = (struct wow64_IVROverlay_IVROverlay_013_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayRaw( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayRaw_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayFromFile( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayFromFile_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTexture( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTexture_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    void *u_pNativeTextureHandle;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle ? &u_pNativeTextureHandle : nullptr, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
    if (params->pNativeTextureHandle) *params->pNativeTextureHandle = u_pNativeTextureHandle;
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *params = (struct wow64_IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_013_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_013_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetOverlayTextureSize( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureSize_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_013_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_CreateDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_CreateDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_013_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_013_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_IsDashboardVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_IsDashboardVisible_params *params = (struct wow64_IVROverlay_IVROverlay_013_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_IsActiveDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_013_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_013_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ShowDashboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ShowDashboard_params *params = (struct wow64_IVROverlay_IVROverlay_013_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_013_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_013_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ShowKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ShowKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_013_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_ShowKeyboardForOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_013_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_013_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_GetKeyboardText( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_GetKeyboardText_params *params = (struct wow64_IVROverlay_IVROverlay_013_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_013_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_013_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_HideKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_HideKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_013_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_013_SetOverlayIntersectionMask( void *args )
{
    struct wow64_IVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *params = (struct wow64_IVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->u_iface;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}
#endif

