#ifndef __DistortionPatch_hpp__
#define __DistortionPatch_hpp__

#include "StompBox.h"

class DistortionPatch : public Patch {
public:
  float nonLinear(float x) {   // Distortion curve
    // tanh approx
    if(x < -3)
      return -1;
    else if(x > 3)
      return 1;
    else
      return x * ( 27 + x*x ) / ( 27 + 9*x*x );
  }
    
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output) {        
    int size = input.getSize();
    float* x = input.getSamples();
    float* y = output.getSamples();

    float drive, offset, gain;        
    drive  = getParameterValue(PARAMETER_A);  // get drive value
    offset = getParameterValue(PARAMETER_B); // get offset value        
    gain   = getParameterValue(PARAMETER_D);   // get gain value
        
    drive += 0.03;
    drive *= 40;
    gain  /= 2;
        
    for(int n = 0; n < size; n++) {            
      y[n] = gain*nonLinear((x[n]+offset/10)*drive); // process each sample
    }
  }
};


#endif /*  __DistortionPatch_hpp__ */
