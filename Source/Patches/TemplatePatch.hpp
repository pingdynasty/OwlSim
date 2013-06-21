#ifndef __TemplatePatch_hpp__
#define __TemplatePatch_hpp__

#include "StompBox.h"

class TemplatePatch : public Patch {
public:
  TemplatePatch(){
    registerParameter(PARAMETER_A, "My Knob");
  }
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    // put your code here!
  }
};

#endif // __TemplatePatch_hpp__
