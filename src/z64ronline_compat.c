#include "modding.h"
#include "global.h"

#include "apcommon.h"

RECOMP_DECLARE_EVENT(Z64ROnline_onRandoLocationSent(u32 location, int slot));

void Z64ROnline_rando_send_location(u32 location) {
    rando_send_location(location);
    Z64ROnline_onRandoLocationSent(location, rando_get_own_slot_id());
}