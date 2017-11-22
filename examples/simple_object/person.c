#include <stdio.h>

#include "person.h"

CLASS_PRIVATE(person)
    float salary; 
    long long ssn;
END_CLASS

long long get_ssn(void *self) {
    GET_THIS(person);
    return this->ssn;
}

CONSTRUCTOR(person) {
    CONSTRUCTOR_STD(person);
    this->salary        = 99999.99;
    this->ssn           = 1234567890;
    this->is_cool       = false;
    this->get_ssn       = get_ssn;
    return this;
}

DESTRUCTOR(person) {
    free(self);
}

