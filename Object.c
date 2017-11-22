#include "Object.h"

// Bodies to call constructor and destructor on objects inheriting
// from the object base class

void *new(void *arg) {
    return ((struct Object *)arg)->new(arg);
}


void delete(void *arg) {
    ((struct Object *)arg)->delete(arg);
}
