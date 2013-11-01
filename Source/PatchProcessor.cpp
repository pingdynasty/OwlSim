/*** Patch base class implementation for StompBoxAudioProcessor **/

#include "PatchProcessor.h"
#include "PluginProcessor.h"

AudioBuffer::~AudioBuffer(){}

Patch::Patch() : processor(NULL) {
  processor = StompBoxAudioProcessor::getPatchProcessor();
}

Patch::~Patch(){
  processor = NULL;
}

void Patch::registerParameter(PatchParameterId pid, const std::string& name, const std::string& description){
  processor->registerParameter(pid, name, description);
}

float Patch::getParameterValue(PatchParameterId pid){
  return processor->getParameterValue(pid);
}

int Patch::getBlockSize(){
  return processor->getBlockSize();
}

double Patch::getSampleRate(){
  return processor->getSampleRate();
}

AudioBuffer* Patch::createMemoryBuffer(int channels, int samples){
  return processor->createMemoryBuffer(channels, samples);
}

