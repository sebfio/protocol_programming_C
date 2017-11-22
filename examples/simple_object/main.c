#include <stdio.h>

#include "person.h"

int main(void) {
    struct person *someone = NEW(person, NULL);

    printf("Are they cool = %d\n", someone->is_cool);
    printf("Steal their identity %lld\n", someone->get_ssn(someone));

    DELETE(someone);    

    return 0;
}
