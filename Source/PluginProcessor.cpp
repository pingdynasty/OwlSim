#include "PluginProcessor.h"
#include "PluginPatchProcessor.h"
#include "PluginEditor.h"
#include "SampleBuffer.h"

#include <iostream>

ThreadLocalValue<StompBoxAudioProcessor*> StompBoxAudioProcessor::instance;

// StompBoxAudioProcessor* StompBoxAudioProcessor::getThreadLocalInstance(){
//   return instance.get();
// }

PatchProcessor* StompBoxAudioProcessor::getPatchProcessor(){
  return instance.get()->patchprocessor;
}

// PatchProcessor* StompBoxAudioProcessor::getPatchProcessor(){
//   return patchprocessor;
// }

StompBoxAudioProcessor::StompBoxAudioProcessor() : bypass(false) {
  // Init first parameters 
  for(int i=0;i<5;i++)
    setParameter(i, 0.0f);

  // set default patch
  setPatch("Gain");

#ifdef DEBUG
  StringArray names = patches.getNames();
  for(int i=0; i<names.size(); ++i)
    std::cout << "Patch: " << names[i] << std::endl;
#endif // DEBUG
}

StompBoxAudioProcessor::~StompBoxAudioProcessor(){
}

StringArray StompBoxAudioProcessor::getPatchNames(){
  return patches.getNames();
}

const String StompBoxAudioProcessor::getCurrentPatchName(){
  return (const char*) currentPatchName.c_str(); // std::string to Juce::String
}

void StompBoxAudioProcessor::setPatch(std::string name){
  const ScopedLock myScopedLock(mutex);
  parameterNames.clear();  
  parameterDescriptions.clear();
  registerParameter(PARAMETER_A, "");
  registerParameter(PARAMETER_B, "");
  registerParameter(PARAMETER_C, "");
  registerParameter(PARAMETER_D, "");
  registerParameter(PARAMETER_E, "");
  currentPatchName = name;
  instance = this; // thread local instance must be set before Patch constructor is called
  patchprocessor = new PluginPatchProcessor(this);
  patchprocessor->setPatch(patches.create(name));
}

const String StompBoxAudioProcessor::getName() const{
  return "OWL";
}

int StompBoxAudioProcessor::getNumParameters(){
  return parameterNames.size();
}

float StompBoxAudioProcessor::getParameter(int index){
  if(index < sizeof(parameterValues))
    return parameterValues[index];
  return 0.0f;
}

void StompBoxAudioProcessor::setParameter(int index, float newValue){
  if(index < sizeof(parameterValues))
    parameterValues[index] = newValue;
}

const String StompBoxAudioProcessor::getParameterName(int index){
  if(index < sizeof(parameterValues))
    return parameterNames[index];
  return String::empty;
}

const String StompBoxAudioProcessor::getParameterText(int index){
  return String(getParameter(index));
}

const String StompBoxAudioProcessor::getInputChannelName(int channelIndex) const {
  return String(channelIndex + 1);
}

const String StompBoxAudioProcessor::getOutputChannelName(int channelIndex) const {
  return String(channelIndex + 1);
}

bool StompBoxAudioProcessor::isInputChannelStereoPair(int index) const {
  return true;
}

bool StompBoxAudioProcessor::isOutputChannelStereoPair(int index) const {
  return true;
}

bool StompBoxAudioProcessor::acceptsMidi() const {
#if JucePlugin_WantsMidiInput
  return true;
#else
  return false;
#endif
}

bool StompBoxAudioProcessor::producesMidi() const {
#if JucePlugin_ProducesMidiOutput
  return true;
#else
  return false;
#endif
}

bool StompBoxAudioProcessor::silenceInProducesSilenceOut() const {
  return false;
}

double StompBoxAudioProcessor::getTailLengthSeconds() const {
  return 0.0;
}

int StompBoxAudioProcessor::getNumPrograms() {
  return 0;
}

int StompBoxAudioProcessor::getCurrentProgram(){
  return 0;
}

void StompBoxAudioProcessor::setCurrentProgram(int index){
}

const String StompBoxAudioProcessor::getProgramName(int index){
  return String::empty;
}

void StompBoxAudioProcessor::changeProgramName(int index, const String& newName){
}

void StompBoxAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock){
  // Use this method as the place to do any pre-playback
  // initialisation that you need..
    
}

void StompBoxAudioProcessor::releaseResources(){
  // When playback stops, you can use this as an opportunity to free up any
  // spare memory, etc.
}

void StompBoxAudioProcessor::processBlock(AudioSampleBuffer& buffer, MidiBuffer& midiMessages){
  // Mutex
  const ScopedLock myScopedLock(mutex);

  SampleBuffer samples(buffer);

  // let the patch do the audio processing if not bypassed
  if(!bypass)
    patchprocessor->processAudio(samples);

  // clear any extra output channels
  for(int i = 1; i < getNumOutputChannels(); ++i)
    buffer.clear(i, 0, buffer.getNumSamples());    
}

bool StompBoxAudioProcessor::hasEditor() const {
  return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* StompBoxAudioProcessor::createEditor(){
  return new StompBoxAudioProcessorEditor(this);
}

void StompBoxAudioProcessor::getStateInformation(MemoryBlock& destData){
  // You should use this method to store your parameters in the memory block.
  // You could do that either as raw data, or use the XML or ValueTree classes
  // as intermediaries to make it easy to save and load complex data.
}

void StompBoxAudioProcessor::setStateInformation(const void* data, int sizeInBytes){
  // You should use this method to restore your parameters from this memory block,
  // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
  return new StompBoxAudioProcessor();
}

const String StompBoxAudioProcessor::getParameterDescription(int index){
  if(index < sizeof(parameterDescriptions))
    return parameterDescriptions[index];
  return String::empty;
}

void StompBoxAudioProcessor::registerParameter(PatchParameterId pid, const std::string& name, const std::string& description){
  parameterNames.set(pid, name);
  parameterDescriptions.set(pid, description);
}

// float StompBoxAudioProcessor::getParameterValue(PatchParameterId pid){
//   return getParameter(pid);
// }

// int StompBoxAudioProcessor::getBlockSize(){
//   return AudioProcessor::getBlockSize();
// }

// double StompBoxAudioProcessor::getSampleRate(){
//   return AudioProcessor::getSampleRate();
// }
