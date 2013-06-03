#ifndef __Circular_Buffer_h__
#define __Circular_Buffer_h__

// #include <inttypes.h>
#include <string.h>

/**
   size must be a power of two
 */
template<class T, unsigned int size>
class CircularBuffer {
private:
  T buffer[size];
  unsigned int writeIndex;
public:
  CircularBuffer():writeIndex(0) {
    memset(buffer, 0, sizeof(buffer));
  }
  inline void write(T value){
    buffer[(writeIndex++) & (size-1)] = value;
  }
//   inline T read(){
//     return buffer[(writeIndex + (~readIndex++)) & (size-1)];
//   }
  inline T head(){
    return buffer[(writeIndex - 1) & (size-1)];
  }
  inline T tail(){
    return buffer[(writeIndex) & (size-1)];
  }
  inline T read(int index){
    return buffer[(writeIndex + (~index)) & (size-1)];
  }
  inline unsigned int getSize(){
    return size;
  }
};

#endif // __Circular_Buffer_h__


/* Comments to understand this very low level way of doing buffers 

 buffer[(writeIndex++) & (size-1)] = value;
 
 If the index goes over the buffer size, then it is truncated to 0 - ie the most significant bits are dropped.
 That is because buffer length is a power of two.
 E.g. with size 16, size-1 = 15, or 0x0f, or in binary 1111.
 Thus when you 'and' the left side, the index, with 1111, you get the same effect as if you use the modulus operator,
 but without having to do an expensive division.
 The index itself overflows at 2^32, at which point it simply starts at 0 again.
 
 The post-increment operator means that the variable will be incremented after it is evaluated, so the index is always advanced.
 
 
 return buffer[(writeIndex + (~index)) & (size-1)];
 
 this is a trick to save another operation, usually it would be:
 buffer[(writeIndex - (index+1)) & (size-1)];
 or (and this would be required for buffer lengths that are not powers of 2):
 buffer[(writeIndex - (index+1)) % (size-1)];
 
 note that size-1 is computed by the compiler, since size is a constant passed in to the template.


*/