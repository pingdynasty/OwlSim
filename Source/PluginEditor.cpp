#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "StompGui.h"

StompBoxAudioProcessorEditor::StompBoxAudioProcessorEditor (StompBoxAudioProcessor* ownerFilter)
  : AudioProcessorEditor (ownerFilter)
{
    panel = new StompGui(ownerFilter);
    addAndMakeVisible(panel);
    // This is where our plugin's editor size is set.
    setSize (529, 350);
}

StompBoxAudioProcessorEditor::~StompBoxAudioProcessorEditor()
{
}

void StompBoxAudioProcessorEditor::paint (Graphics& g)
{
}
