#pragma once

#include "Protocol.h"

PROTOCOL(waste) 
    void (*sleep)(void);
    void (*sit)(void);
    void (*reddit)(void);
END_PROTOCOL
