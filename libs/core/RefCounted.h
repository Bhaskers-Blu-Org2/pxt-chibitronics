#ifndef REF_COUNTED_H
#define REF_COUNTED_H

#include <stdint.h>

#ifdef __cplusplus
 
/**
  * Base class for payload for ref-counted objects.
  * There is no constructor, as this struct is typically malloc()ed.
  */
struct RefCounted
{
public:
 
    /**
      * The high 15 bits hold the number of outstanding references. The lowest bit is always 1
      * to make sure it doesn't look like vtable.
      * Should never be even or one (object should be deleted then).
      * When it's set to 0xffff, it means the object sits in flash and should not be counted.
      */
    uint16_t refCount;
 
    /**
      * Increment reference count.
      */
    void incr();
 
    /**
      * Decrement reference count.
      */
    void decr();
 
    /**
      * Initializes for one outstanding reference.
      */
    void init();
 
    /**
      * Checks if the object resides in flash memory.
      *
      * @return true if the object resides in flash memory, false otherwise.
      */
    bool isReadOnly();
};
#endif /* __cplusplus */
 
#endif