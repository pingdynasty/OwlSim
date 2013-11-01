#include "StompBox.h"

class MemoryBuffer : public AudioBuffer {
private:
  float** buffer;
  int channels;
  int size;
public:
  MemoryBuffer(int ch, int sz): buffer(NULL), channels(ch), size(sz) {
    buffer = new float* [channels];
    for(int i=0; i<channels; ++i)
      buffer[i] = new float[size];
  }
  ~MemoryBuffer(){
    if(buffer != NULL){
        for(int i=0; i<channels; ++i)
            delete buffer[i];
        delete buffer;
    }
  }
  float* getSamples(int channel){
    jassert(channel < channels);
    return buffer[channel];
  }
  int getChannels(){
    return channels;
  }
  int getSize(){
    return size;
  }
};
