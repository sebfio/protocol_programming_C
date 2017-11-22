#include <stdio.h>

#include "canadian.h"

CLASS_PRIVATE(canadian)
    int ehs_said;
END_CLASS

int get_eh(void *self) {
    GET_THIS(canadian);
    return this->ehs_said;
}

CONSTRUCTOR(canadian) {
    CONSTRUCTOR_STD(canadian);
    this->dude              = NEW(person, NULL);

    this->ehs_said          = 1314123;
    this->likes_poutine     = true;

    // Overrides the 'person' default value and sets it to true
    this->dude->is_cool     = true;

    return this;
}

DESTRUCTOR(canadian) {
    GET_THIS(canadian);
    DELETE(this->dude);

    free(self);
}

