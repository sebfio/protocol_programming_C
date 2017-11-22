#include <stdio.h>

#include "canadian.h"

int main(void) {
    struct canadian *chuck = NEW(canadian, NULL);

    printf("Are they cool = %d\n", chuck->dude->is_cool);
    printf("Steal their identity %lld\n", chuck->dude->get_ssn(chuck->dude));

    DELETE(chuck);    

    return 0;
}
