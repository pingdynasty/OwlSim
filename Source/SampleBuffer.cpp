#include "SampleBuffer.h"
#include <string.h>

InputSampleBuffer::InputSampleBuffer(AudioSampleBuffer& buf)
  : buffer(buf) {}

void InputSampleBuffer::getSamples(int from, int length, float* data){
  jassert(from+length <= buffer.getNumSamples());
  float* buf = buffer.getSampleData(0, from);
  memcpy(data, buf, length*sizeof(float));
}

int InputSampleBuffer::getSize(){
  return buffer.getNumSamples();
}

float* InputSampleBuffer::getSamples(){
  return buffer.getSampleData(0, 0);
}

OutputSampleBuffer::OutputSampleBuffer(AudioSampleBuffer& buf)
  : buffer(buf) {}

void OutputSampleBuffer::setSamples(int from, int length, float* data){
  jassert(from+length <= buffer.getNumSamples());
  float* buf = buffer.getSampleData(0, from);
  memcpy(buf, data, length*sizeof(float));
}

int OutputSampleBuffer::getSize(){
  return buffer.getNumSamples();
}

float* OutputSampleBuffer::getSamples(){
  return buffer.getSampleData(0, 0);
}

void OutputSampleBuffer::setSamples(float* data){
  float* buf = buffer.getSampleData(0, 0);
  memcpy(data, buf, buffer.getNumSamples()*sizeof(float));
}
