#ifndef __SampleBuffer_h__
#define __SampleBuffer_h__

#include "JuceHeader.h"
#include "StompBox.h"

class SampleBuffer : public AudioBuffer {
private:
  AudioSampleBuffer& buffer;
public:
  SampleBuffer(AudioSampleBuffer&);
  float* getSamples(int channel);
  int getChannels();
  int getSize();
};

#endif // __SampleBuffer_h__
