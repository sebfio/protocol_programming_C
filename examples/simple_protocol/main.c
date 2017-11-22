#include <stdio.h>

#include "person.h"

int main(void) {
    struct person *someone = NEW(person, NULL);

    // No response because he's waste
    someone->reddit();

    DELETE(someone);    

    return 0;
}
