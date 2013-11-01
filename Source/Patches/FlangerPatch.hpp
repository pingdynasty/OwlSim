#ifndef ___FlangerPatch_hpp__
#define __FlangerPatch_hpp__

#include "StompBox.h"
#include "CircularBuffer.hpp"
#include "math.h"

//#define FLANGER_DELAY_BUFFER_LENGTH 1024 //must be power of 2

template<unsigned int bufsize>

class FlangerPatch : public Patch {
    
public:
    
  FlangerPatch(){
    registerParameter(PARAMETER_A, "Rate");
    registerParameter(PARAMETER_B, "Depth");
    registerParameter(PARAMETER_C, "Feedback");
    registerParameter(PARAMETER_D, "Dry/Wet");
  }

  double sampleRate = getSampleRate();
  float freq, rate, depth, wetDry, feedback, phase;
    
  float modulate(float freq) {
      
    float output;
      
    if ( phase >= 1.0 ) phase -= 1.0;
    phase += (1./(7200/freq));  //scaleable rate for AM!
    output = sin(phase*(2*M_PI));    //sine function

//    if (phase >= 2 * M_PI) phase -= 2 * M_PI;  
//    rate = 2 * M_PI / ((freq*20) / sampleRate);
//    phase += rate;
//    output = sin(phase);
      
    return output;
  };

  void processAudio(AudioBuffer &buffer){
      
    int size = buffer.getSize();
    float y;        
    freq     = getParameterValue(PARAMETER_A);
    depth    = getParameterValue(PARAMETER_B);
    feedback = getParameterValue(PARAMETER_C);
    wetDry   = getParameterValue(PARAMETER_D);   
    freq    *= 0.1f;
      
    float delaySamples = (depth * modulate(freq)) * (DELAY_BUFFER_LENGTH-1);
      
      for (int ch = 0; ch<buffer.getChannels(); ++ch) {
          
          float* buf = buffer.getSamples(ch);
          
          for (int i = 0 ; i < size; i++) {
              
              dSamples = olddelaySamples + (delaySamples - olddelaySamples);
              
              y = buf[i] + feedback * delayBuffer.read(dSamples);
              buf[i] = buf[i] * (1.f - wetDry)+ wetDry * y;
              delayBuffer.write(buf[i]);
          }
        
      }
      olddelaySamples = delaySamples;
    
  }
    
private:
    CircularBuffer<float, bufsize> delayBuffer;
    float olddelaySamples = 0, dSamples;
    
};


#endif /* __FlangerPatch_hpp__ */
