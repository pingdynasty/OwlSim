/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_C09E1113F370FC98__
#define __JUCE_HEADER_C09E1113F370FC98__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
using namespace juce;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class StompGui  : public Component,
                  public Timer,
                  public SliderListener,
                  public ComboBoxListener,
                  public ButtonListener
{
public:
    //==============================================================================
    StompGui (StompBoxAudioProcessor* ptr);
    ~StompGui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback();
    void updateLabels();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* owl_illustration_illustrator_svg;
    static const int owl_illustration_illustrator_svgSize;
    static const char* owlFaceplate_png;
    static const int owlFaceplate_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    StompBoxAudioProcessor* processor;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> slider4;
    ScopedPointer<Slider> slider3;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<ComboBox> menu;
    ScopedPointer<Label> label1;
    ScopedPointer<Slider> slider1;
    ScopedPointer<Label> label2;
    ScopedPointer<Slider> slider2;
    ScopedPointer<TextButton> switchButton;
    ScopedPointer<Slider> slider5;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> labelNbInOut;
    Image cachedImage_owlFaceplate_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StompGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_C09E1113F370FC98__
