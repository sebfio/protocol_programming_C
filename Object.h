#ifndef CLASS_OBJECT_H_
#define CLASS_OBJECT_H_

// Class definition for all base objects, allow for a contructor and destructor
struct Object {
    void *(*new)(void *);
    void (*delete)(void *);
};

// If a class inherits from object then it can run through with these standard definitions
void *new(void * arg);
void delete(void * arg);

#endif // CLASS_OBJECT_H_
