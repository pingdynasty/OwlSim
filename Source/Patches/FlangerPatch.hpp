#ifndef ___FlangerPatch_hpp__
#define __FlangerPatch_hpp__

#include "StompBox.h"
#include "CircularBuffer.hpp"
#include "math.h"

#define FLANGER_DELAY_BUFFER_LENGTH 1024 //must be power of 2

class FlangerPatch : public Patch {
public:
  FlangerPatch(){
    registerParameter(PARAMETER_A, "Rate", "Phaser speed");
    registerParameter(PARAMETER_B, "Depth", "Depth of modulation");
    registerParameter(PARAMETER_C, "Feedback", "Amount of feedback");
    registerParameter(PARAMETER_D, "Wet/Dry", "Wet / Dry mix");
  }

  double sampleRate;
  float rate, depth, wetDry, feedback, phase;
  unsigned int delaySamples;    
  CircularBuffer<float, FLANGER_DELAY_BUFFER_LENGTH> delayBuffer;    
    
  float modulate(float rate) {    
    float output;        
    if ( phase >= 1.0 ) phase -= 1.0;
    phase += (1./(7200/(rate)));  //scaleable rate for AM!
    output = sin(phase*(2*M_PI));    //sine function        
    return output;
  };

  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){    
    int size = input.getSize();
    float* x = input.getSamples();        
    float y;        
    rate     = getParameterValue(PARAMETER_A);
    depth    = getParameterValue(PARAMETER_B);
    feedback = getParameterValue(PARAMETER_C);
    wetDry   = getParameterValue(PARAMETER_D);    
    unsigned int delaySamples;    
    rate *= 0.1f;    
    for (int n = 0 ; n < size; n++) {        
      delaySamples = (depth * modulate(rate)) * (DELAY_BUFFER_LENGTH-1);
      y = x[n] + feedback * delayBuffer.read(delaySamples);
      x[n] = x[n] * (1.f - wetDry)+ wetDry * y;
      delayBuffer.write(x[n]);        
    }    
    output.setSamples(x);    
  }
    
};


#endif /* __FlangerPatch_hpp__ */
