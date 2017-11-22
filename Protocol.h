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
 * pull from several classes.
 */

#define GET_THIS(_classname)                                                \
    struct _classname ## PRIVATE *this = (struct _classname ## PRIVATE *) self

#define CREATE_OBJECT(_object, _classname)                                  \
    struct _classname *(_object) = CONSTRUCTOR(_classname)

#define CONSTRUCTOR_STD(_classname)                                         \
    struct _classname ## PRIVATE *this = malloc(sizeof(struct _classname ## PRIVATE)); \
    if (!this) {                                                            \
        errno = ENOMEM;                                                     \
    }                                                                       \
    this->pub.base.new     = _classname ## _new;                            \
    this->pub.base.delete  = _classname ## _delete 

#define DESTROY_OBJECT(_object)                                             \
    (_object)->base.delete((_object))

#define PASTE_PUBLIC_PARTS(_classname)                                      \
    struct _classname pub

#define BASE_OBJECT                                                         \
    struct Object base

#define CLASS_PUBLIC(_classname)                                            \
    struct _classname {                                                     \
    BASE_OBJECT; // Want semicolon here

#define CLASS_PRIVATE(_classname)                                           \
    struct _classname ## PRIVATE {                                          \
    PASTE_PUBLIC_PARTS(_classname); // Want semicolon here

#define EXTENDS_CLASS(_classname, obj_name)                                 \
    struct _classname *obj_name

#define END_CLASS   };

#define CONSTRUCTOR(_classname)                                             \
    void * _classname ## _new(void *args)

#define NEW( _classname, args)                                              \
    _classname ## _new((args))
    
#define DESTRUCTOR(_classname)                                              \
    void _classname ## _delete(void *self)

#define DELETE(self)                                                        \
    delete((self))

#endif // PROTOCOL_H_
