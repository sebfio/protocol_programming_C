#include "Object.h"

// Bodies to call constructor and destructor on objects inheriting
// from the object base class

void *new(void *arg) {
    return ((struct Object *)arg)->new();
}


void delete(void *arg) {
    return ((struct Object *)arg)->delete();
}
