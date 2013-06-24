/*** Patch base class implementation for StompBoxAudioProcessor **/

#include "PatchProcessor.h"
#include "PluginProcessor.h"

Patch::Patch() : processor(NULL) {
  processor = StompBoxAudioProcessor::getThreadLocalInstance();
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
  return  processor->getBlockSize();
}

double Patch::getSampleRate(){
  return processor->getSampleRate();
}
