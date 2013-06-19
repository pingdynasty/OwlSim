#ifndef __OverdrivePatch_hpp__
#define __OverdrivePatch_hpp__

#include "StompBox.h"

class OverdrivePatch : public Patch {
public:
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    float gain = getParameterValue(PARAMETER_D);  // get output gain value
    float offset = getParameterValue(PARAMETER_C); 	  // get offset value
    float drive = getParameterValue(PARAMETER_A); // get input drive value
    offset /= 10;
    drive += 0.03;
    drive *= 40;
    gain/= 2;
    
    int size = input.getSize();
    float* x = input.getSamples();
    float* y = output.getSamples();
    for(int i=0; i<size; i++)
      y[i] = gain*nonLinear((x[i]+offset)*drive); // process each sample
  }
    
    
  float nonLinear(float x){ 		// Overdrive curve
    if (x<-3)
      return -1;
    else if (x>3)
      return 1;
    else
      return x * ( 27 + x*x ) / ( 27 + 9*x*x );
  }
};

#endif // __OverdrivePatch_hpp__
