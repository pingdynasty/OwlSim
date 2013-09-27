#ifndef __SimpleDelayPatch_hpp__
#define __SimpleDelayPatch_hpp__

#include "StompBox.h"
#include "CircularBuffer.hpp"

#define DELAY_BUFFER_LENGTH 32768 // must be a power of 2

class SimpleDelayPatch : public Patch {
private:
  CircularBuffer <float, DELAY_BUFFER_LENGTH> delayBuffer;
  float delayTime, feedback, wetDry;

public:
  SimpleDelayPatch(){
    registerParameter(PARAMETER_A, "Delay");
    registerParameter(PARAMETER_B, "Feedback");
    registerParameter(PARAMETER_C, "Dry/Wet");
  }
  void processAudio(AudioBuffer &buffer) {
  
      const int size = buffer.getSize();           // samples in block
      
      delayTime = getParameterValue(PARAMETER_A); // delay time
      feedback  = getParameterValue(PARAMETER_B); // delay feedback
      wetDry    = getParameterValue(PARAMETER_C); // wet/dry balance
      float delaySamples = delayTime * (DELAY_BUFFER_LENGTH-1);
      
      for (int ch=0; ch<buffer.getChannels(); ++ch) {   //for each channel
          
          float* buf = buffer.getSamples(ch);
          float y;
          
          for (int i = 0; i < size; ++i) {  //for each sample
              y = buf[i] + feedback * delayBuffer.read(delaySamples);  //delay
              buf[i] = wetDry * y + (1.f - wetDry) * buf[i];   //wet/dry balance
              delayBuffer.write(buf[i]);
              
          }
      }
  }
    
        
 
};

#endif   // __SimpleDelayPatch_hpp__
