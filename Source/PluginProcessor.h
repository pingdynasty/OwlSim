#ifndef __PLUGINPROCESSOR_H__
#define __PLUGINPROCESSOR_H__

#include "JuceHeader.h"
#include "PluginPatchProcessor.h"
#include "PatchRegistry.h"

class StompBoxAudioProcessor  : public juce::AudioProcessor {
public:
  StompBoxAudioProcessor();
  ~StompBoxAudioProcessor();
  void prepareToPlay (double sampleRate, int samplesPerBlock);
  void releaseResources();
  void processBlock (juce::AudioSampleBuffer& buffer, juce::MidiBuffer& midiMessages);

  juce::AudioProcessorEditor* createEditor();
  bool hasEditor() const;
  const juce::String getName() const;
  int getNumParameters();
  float getParameter (int index);
  void setParameter (int index, float newValue);
  const juce::String getParameterName (int index);
  const juce::String getParameterText (int index);
  const juce::String getInputChannelName (int channelIndex) const;
  const juce::String getOutputChannelName (int channelIndex) const;
  bool isInputChannelStereoPair (int index) const;
  bool isOutputChannelStereoPair (int index) const;
  bool acceptsMidi() const;
  bool producesMidi() const;
  bool silenceInProducesSilenceOut() const;
  double getTailLengthSeconds() const;
  int getNumPrograms();
  int getCurrentProgram();
  void setCurrentProgram (int index);
  const juce::String getProgramName (int index);
  void changeProgramName (int index, const juce::String& newName);
  void getStateInformation (juce::MemoryBlock& destData);
  void setStateInformation (const void* data, int sizeInBytes);

  const juce::String getParameterDescription(int index);
  void setPatch(std::string name);
/*   static StompBoxAudioProcessor* getThreadLocalInstance(); */
  static PatchProcessor* getPatchProcessor();
  bool bypass;

  /*** PatchProcessor methods */
  juce::StringArray getPatchNames();
  const juce::String getCurrentPatchName();
  const int getCurrentPatchNbInputs();
  const int getCurrentPatchNbOutputs();
    
  void registerParameter(PatchParameterId pid, const std::string& name, 
			 const std::string& description = "");
/*   float getParameterValue(PatchParameterId pid); */
/*   int getBlockSize(); */
/*   double getSampleRate(); */

  inline bool needsUIUpdate() { return uIUpdateFlag; };
  inline void requestUIUpdate() { uIUpdateFlag = true; };
  inline void clearUIUpdateFlag() { uIUpdateFlag = false; };

private:
  static juce::ThreadLocalValue<StompBoxAudioProcessor*> instance;
  PatchRegistry patches;
  juce::ScopedPointer<PluginPatchProcessor> patchprocessor;
  float parameterValues[16];
  std::string currentPatchName;
  juce::CriticalSection mutex;
  juce::StringArray parameterNames;
  juce::StringArray parameterDescriptions;
  bool uIUpdateFlag;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StompBoxAudioProcessor)
};

#endif  // __PLUGINPROCESSOR_H__
