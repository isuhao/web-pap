#include "stdafx.h"


#include "WGCityInitInfo.h"


UINT WGCityInitInfoHandler::Execute( WGCityInitInfo* pPacket, Player* pPlayer )
{
    __ENTER_FUNCTION

        return PACKET_EXE_CONTINUE ;

    __LEAVE_FUNCTION

        return PACKET_EXE_ERROR ;
}
