#include "modding.h"
#include "global.h"

#include "apcommon.h"

RECOMP_DECLARE_EVENT(Z64ROnline_onRandoLocationSent(u32 location));
RECOMP_DECLARE_EVENT(Z64ROnline_onRandoIsMultiworld(bool multiworld));

void Z64ROnline_rando_send_location(u32 location)
{
    rando_send_location(location);
    Z64ROnline_onRandoLocationSent(location);
}

void Z64ROnline_SetRandoMultiworldStatus(bool multiworld)
{
    Z64ROnline_onRandoIsMultiworld(multiworld);
}