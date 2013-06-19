#ifndef __CircularBuffer_h__
#define __CircularBuffer_h__

#include <string.h> /* for memset */

/**
 * size must be a power of two
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

#endif // __CircularBuffer_h__
