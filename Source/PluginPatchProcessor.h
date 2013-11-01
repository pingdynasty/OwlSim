#ifndef PLUGINPATCHPROCESSOR_H_INCLUDED
#define PLUGINPATCHPROCESSOR_H_INCLUDED

#include "JuceHeader.h"
#include "StompBox.h"
#include "PatchProcessor.h"
#include "MemoryBuffer.hpp"

class StompBoxAudioProcessor;

class PluginPatchProcessor : public PatchProcessor {
public:  
  PluginPatchProcessor(StompBoxAudioProcessor* plugin);
  ~PluginPatchProcessor();
  void setPatch(Patch* patch);
  void registerParameter(PatchParameterId pid, const std::string& name, const std::string& description = "");
  float getParameterValue(PatchParameterId pid);
  int getBlockSize();
  double getSampleRate();
  AudioBuffer* createMemoryBuffer(int channels, int samples);
  void processAudio(AudioBuffer& output);
private:
  StompBoxAudioProcessor* plugin;
  juce::ScopedPointer<Patch> patch;
  juce::OwnedArray<MemoryBuffer> buffers;
};

#endif  // PLUGINPATCHPROCESSOR_H_INCLUDED
