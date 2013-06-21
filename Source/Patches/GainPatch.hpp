#ifndef __GainPatch_hpp__
#define __GainPatch_hpp__

#include "StompBox.h"

class GainPatch : public Patch {
public:
  GainPatch(){
    registerParameter(PARAMETER_A, "A");
    registerParameter(PARAMETER_B, "B");
    registerParameter(PARAMETER_C, "C");
    registerParameter(PARAMETER_D, "D");
    registerParameter(PARAMETER_E, "E");
  }
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    float gain = getParameterValue(PARAMETER_D);
    float* x = input.getSamples();
    float* y = output.getSamples();
    int size = input.getSize();
    for(int i=0; i<size; ++i)
      y[i] = gain*x[i];
  }
};

#endif // __GainPatch_hpp__
