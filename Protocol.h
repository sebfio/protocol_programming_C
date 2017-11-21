#ifndef PROTOCOL_H_
#define PROTOCOL_H_

#include <errno.h>
#include <stdlib.h>

#include "Object.h"

/*
 * This file is mostly to define macros used for the simplification of
 * object creation and managing.
 *
 * Xmacros will have to be added on a per module basis to have objects
 * pull from several classes.½@½@
 */

#define CREATE_OBJECT(_object, _classname)                                  \
    struct _classname *(_object) = malloc(sizeof(struct _classname ## PRIVATE));                     \
    if (!(_object)) {                                                       \
        errno = ENOMEM;                                                     \
    }                                                                       \
    (_object)->base.new     = _classname ## _new;                           \
    (_object)->base.delete  = _classname ## _delete;                        \
    (_object)->base.new((_object))

#define DESTROY_OBJECT(_object)                                             \
    (_object)->base.delete((_object))

#define CLASS_PUBLIC(_classname)                                            \
    struct _classname

#define CLASS_PRIVATE(_classname)                                           \
    struct _classname ## PRIVATE

#define BASE_OBJECT                                                         \
    struct Object base

// Just an anonymous inner struct
#define EXTENDS_CLASSES                                                     \
    struct

#define PASTE_PUBLIC_PARTS(_classname)                                      \
    struct _classname pub

#define GET_THIS(_classname)                                                \
    struct _classname ## PRIVATE *this = (struct _classname ## PRIVATE *) self;


#define END_CLASS   };

#endif // PROTOCOL_H_
