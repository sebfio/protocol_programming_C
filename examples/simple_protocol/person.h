#pragma once

#include <stdbool.h>

#include "Protocol.h"
#include "some_protocol.h"

CLASS_PUBLIC(person) 
    EXTENDS_PROTOCOL(waste);
    bool is_cool;
    long long (*get_ssn)(void *self);
END_CLASS

CONSTRUCTOR(person);
DESTRUCTOR(person);
