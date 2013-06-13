#ifndef __SampleBuffer_h__
#define __SampleBuffer_h__

#include "JuceHeader.h"
#include "StompBox.h"

class InputSampleBuffer : public AudioInputBuffer {
private:
  AudioSampleBuffer& buffer;
public:
  InputSampleBuffer(AudioSampleBuffer& buf);
  void getSamples(int from, int length, float* data);
  float* getSamples();
  int getSize();
};

class OutputSampleBuffer : public AudioOutputBuffer {
private:
  AudioSampleBuffer& buffer;
public:
  OutputSampleBuffer(AudioSampleBuffer& buf);
  void setSamples(int from, int length, float* data);
  void setSamples(float* data);
  float* getSamples();
  int getSize();
};

#endif // __SampleBuffer_h__
