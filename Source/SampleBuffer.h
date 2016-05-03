#ifndef __SampleBuffer_h__
#define __SampleBuffer_h__

#include "JuceHeader.h"
#include "StompBox.h"

class SampleBuffer : public AudioBuffer {
private:
  juce::AudioSampleBuffer& buffer;
public:
  SampleBuffer(juce::AudioSampleBuffer&);
  float* getSamples(int channel);
  int getChannels();
  int getSize();
};

#endif // __SampleBuffer_h__
