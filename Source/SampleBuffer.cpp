#include "SampleBuffer.h"
#include <string.h>

SampleBuffer::SampleBuffer(AudioSampleBuffer& buf)
  : buffer(buf) {}

void SampleBuffer::getSamples(int from, int length, float* data){
  jassert(from+length <= buffer.getNumSamples());
  float* buf = buffer.getSampleData(0, from);
  memcpy(data, buf, length*sizeof(float));
}

void SampleBuffer::setSamples(int from, int length, float* data){
  jassert(from+length <= buffer.getNumSamples());
  float* buf = buffer.getSampleData(0, from);
  memcpy(buf, data, length*sizeof(float));
}

int SampleBuffer::getSize(){
  return buffer.getNumSamples();
}

float* SampleBuffer::getSamples(){
  return buffer.getSampleData(0, 0);
}

void SampleBuffer::setSamples(float* data){
  float* buf = buffer.getSampleData(0, 0);
  memcpy(buf, data, buffer.getNumSamples()*sizeof(float));
}
