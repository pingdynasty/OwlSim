#ifndef __SimplePatches_h__
#define __SimplePatches_h__

#include "StompBox.h"

class CopyPatch : public Patch {
public:
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    int size = input.getSize();
    float* buf = input.getSamples();
    input.getSamples(0, size, buf);
    output.setSamples(0, size, buf);
  }
};

class GainPatch : public Patch {
public:
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    int size = input.getSize();
    float gain = getParameterValue(PARAMETER_D);
    float* buf = input.getSamples();
    for(int i=0; i<size; ++i)
      buf[i] = gain*buf[i];
    output.setSamples(buf);
  }
};

#endif // __SimplePatches_h__
