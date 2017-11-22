#pragma once

#include <stdbool.h>

#include "Protocol.h"

CLASS_PUBLIC(person) 
    bool is_cool;
    long long (*get_ssn)(void *self);
END_CLASS

CONSTRUCTOR(person);
DESTRUCTOR(person);
