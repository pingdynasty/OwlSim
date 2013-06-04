#ifndef __PLUGINEDITOR_H__
#define __PLUGINEDITOR_H__

#include "JuceHeader.h"
#include "PluginProcessor.h"

class StompBoxAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    StompBoxAudioProcessorEditor (StompBoxAudioProcessor* ownerFilter);
    ~StompBoxAudioProcessorEditor();

    // This is just a standard Juce paint method...
    void paint (Graphics& g);
private:
    ScopedPointer<Component> panel;
};


#endif  // __PLUGINEDITOR_H__
