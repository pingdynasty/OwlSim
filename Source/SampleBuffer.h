#ifndef __SampleBuffer_h__
#define __SampleBuffer_h__

#include "../JuceLibraryCode/JuceHeader.h"

#define UNIPOLAR_OFFSET 2047

class SampleBuffer : public AudioInputBuffer, public AudioOutputBuffer {
private:
  AudioSampleBuffer& buffer;
public:
  SampleBuffer(AudioSampleBuffer& buf)
    : buffer(buf) {}
  void getSamples(int from, int length, float* data){
    jassert(from+length <= buffer.getNumSamples());
/*     jassert(channel < buffer.getNumChannels()); */
    float* buf = buffer.getSampleData(0, from);
    memcpy(data, buf, length*sizeof(float));
  }
  void setSamples(int from, int length, float* data){
    jassert(from+length <= buffer.getNumSamples());
/*     jassert(channel < buffer.getNumChannels()); */
    float* buf = buffer.getSampleData(0, from);
    memcpy(buf, data, length*sizeof(float));
  }
  int getSize(){
    return buffer.getNumSamples();
  }
  float* getSamples(){
    return buffer.getSampleData(0, 0);
  }
  void setSamples(float* data){
    float* buf = buffer.getSampleData(0, 0);
    memcpy(data, buf, buffer.getNumSamples()*sizeof(float));
  }
};

#endif // __SampleBuffer_h__
