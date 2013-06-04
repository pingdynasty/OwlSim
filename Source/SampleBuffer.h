#ifndef __SampleBuffer_h__
#define __SampleBuffer_h__

#include "JuceHeader.h"
#include "StompBox.h"

class SampleBuffer : public AudioInputBuffer, public AudioOutputBuffer {
private:
  AudioSampleBuffer& buffer;
public:
  SampleBuffer(AudioSampleBuffer& buf);
  void getSamples(int from, int length, float* data);
  void setSamples(int from, int length, float* data);
  int getSize();
  float* getSamples();
  void setSamples(float* data);
};

#endif // __SampleBuffer_h__
