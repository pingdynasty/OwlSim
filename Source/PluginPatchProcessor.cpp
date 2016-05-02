#include "PluginPatchProcessor.h"
#include "PluginProcessor.h"

PluginPatchProcessor::PluginPatchProcessor(StompBoxAudioProcessor* pl)
  : plugin(pl){
}

PluginPatchProcessor::~PluginPatchProcessor(){
  plugin = NULL;
}

void PluginPatchProcessor::setPatch(Patch* p){
  patch = p;
}

void PluginPatchProcessor::registerParameter(PatchParameterId pid, const char* name, const char* description){
  plugin->registerParameter(pid, name, description);
}

float PluginPatchProcessor::getParameterValue(PatchParameterId pid){
  return plugin->getParameter(pid);
}

int PluginPatchProcessor::getBlockSize(){
  int bs = plugin->getBlockSize();
  if(bs == 0)
    bs = 512;
  return bs;
}

double PluginPatchProcessor::getSampleRate(){
  double sr = plugin->getSampleRate();
  if(sr == 0)
    sr = 44100;
  return sr;
}

AudioBuffer* PluginPatchProcessor::createMemoryBuffer(int channels, int samples){
  MemoryBuffer* buf = new MemoryBuffer(channels, samples);
  buffers.add(buf);
  return buf;
}
  
void PluginPatchProcessor::processAudio(AudioBuffer& buffer){
  patch->processAudio(buffer);
}
