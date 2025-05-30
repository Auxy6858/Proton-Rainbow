/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_CreateListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_CreateListenSocket_params *params = (struct ISteamNetworking_SteamNetworking001_CreateListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_CreateListenSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_CreateListenSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_CreateListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_CreateConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_CreateConnectionSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_DestroySocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_DestroySocket_params *params = (struct ISteamNetworking_SteamNetworking001_DestroySocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_DestroySocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_DestroySocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_DestroySocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_DestroyListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params = (struct ISteamNetworking_SteamNetworking001_DestroyListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_DestroyListenSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_DestroyListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_SendDataOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params = (struct ISteamNetworking_SteamNetworking001_SendDataOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_SendDataOnSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_SendDataOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params = (struct ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params = (struct ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_IsDataAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking001_IsDataAvailable_params *params = (struct ISteamNetworking_SteamNetworking001_IsDataAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_IsDataAvailable( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_IsDataAvailable_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_IsDataAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_RetrieveData( void *args )
{
    struct ISteamNetworking_SteamNetworking001_RetrieveData_params *params = (struct ISteamNetworking_SteamNetworking001_RetrieveData_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_RetrieveData( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_RetrieveData_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_RetrieveData_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_GetSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking001_GetSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking001_GetSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_GetSocketInfo( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_GetSocketInfo_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_GetSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
    return 0;
}
#endif

NTSTATUS ISteamNetworking_SteamNetworking001_GetListenSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworking_SteamNetworking001_GetListenSocketInfo( void *args )
{
    struct wow64_ISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params = (struct wow64_ISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->u_iface;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
    return 0;
}
#endif

