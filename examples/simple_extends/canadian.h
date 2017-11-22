#pragma once

#include "Protocol.h"

// Inherits from person so lets grab its public def
#include "person.h"

CLASS_PUBLIC(canadian) 
    bool likes_poutine;
    int (*get_eh)(void *self);
    EXTENDS_CLASS(person, dude);
END_CLASS

CONSTRUCTOR(canadian);
DESTRUCTOR(canadian);
