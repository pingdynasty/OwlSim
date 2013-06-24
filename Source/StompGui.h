/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Jun 2013 12:03:45pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_STOMPGUI_STOMPGUI_5A5A7FF4__
#define __JUCER_HEADER_STOMPGUI_STOMPGUI_5A5A7FF4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
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
    Slider* slider4;
    Slider* slider3;
    Label* label3;
    Label* label4;
    ComboBox* menu;
    Label* label1;
    Slider* slider1;
    Label* label2;
    Slider* slider2;
    TextButton* switchButton;
    Image cachedImage_owlFaceplate_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StompGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCER_HEADER_STOMPGUI_STOMPGUI_5A5A7FF4__
