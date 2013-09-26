#include "SampleBuffer.h"
#include <string.h>

SampleBuffer::SampleBuffer(AudioSampleBuffer& buf)
  : buffer(buf) {}

int SampleBuffer::getSize(){
  return buffer.getNumSamples();
}

int SampleBuffer::getChannels(){
  return buffer.getNumChannels();
}

float* SampleBuffer::getSamples(int channel){
  return buffer.getSampleData(channel);
}
