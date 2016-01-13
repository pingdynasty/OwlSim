#ifndef __PLUGINEDITOR_H__
#define __PLUGINEDITOR_H__

#include "JuceHeader.h"
#include "PluginProcessor.h"

class StompBoxAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    StompBoxAudioProcessorEditor (StompBoxAudioProcessor* ownerFilter);
    ~StompBoxAudioProcessorEditor();

    // This is just a standard Juce paint method...
    void paint (juce::Graphics& g);
private:
    juce::ScopedPointer<juce::Component> panel;
};


#endif  // __PLUGINEDITOR_H__
