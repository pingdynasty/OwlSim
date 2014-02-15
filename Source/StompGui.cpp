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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "StompGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
StompGui::StompGui (StompBoxAudioProcessor* ptr)
{
    setName ("StompGui");
    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryVerticalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::backgroundColourId, Colours::azure);
    slider4->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider4->setColour (Slider::rotarySliderFillColourId, Colours::black);
    slider4->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::RotaryVerticalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider3->setColour (Slider::trackColourId, Colours::red);
    slider3->setColour (Slider::rotarySliderFillColourId, Colours::black);
    slider3->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           "label text"));
    label3->setFont (Font (15.00f, Font::bold));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           "label text"));
    label4->setFont (Font (15.00f, Font::bold));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (menu = new ComboBox ("PatchMenu"));
    menu->setEditableText (false);
    menu->setJustificationType (Justification::centredLeft);
    menu->setTextWhenNothingSelected (String::empty);
    menu->setTextWhenNoChoicesAvailable ("(no choices)");
    menu->addListener (this);

    addAndMakeVisible (label1 = new Label ("new label",
                                           "label text"));
    label1->setFont (Font (15.00f, Font::bold));
    label1->setJustificationType (Justification::centred);
    label1->setEditable (false, false, false);
    label1->setColour (TextEditor::textColourId, Colours::black);
    label1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider1 = new Slider ("new slider"));
    slider1->setRange (0, 1, 0);
    slider1->setSliderStyle (Slider::RotaryVerticalDrag);
    slider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider1->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider1->setColour (Slider::rotarySliderFillColourId, Colours::black);
    slider1->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           "label text"));
    label2->setFont (Font (15.00f, Font::bold));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::RotaryVerticalDrag);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider2->setColour (Slider::rotarySliderFillColourId, Colours::black);
    slider2->addListener (this);

    addAndMakeVisible (switchButton = new TextButton ("new button"));
    switchButton->setButtonText (String::empty);
    switchButton->addListener (this);
    switchButton->setColour (TextButton::buttonColourId, Colours::grey);
    switchButton->setColour (TextButton::buttonOnColourId, Colour (0xfff37033));

    addAndMakeVisible (slider5 = new Slider ("new slider"));
    slider5->setRange (0, 1, 0);
    slider5->setSliderStyle (Slider::RotaryVerticalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::backgroundColourId, Colours::azure);
    slider5->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider5->setColour (Slider::rotarySliderFillColourId, Colours::black);
    slider5->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           "label text"));
    label5->setFont (Font (15.00f, Font::bold));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           "E"));
    label6->setFont (Font (15.00f, Font::bold));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    cachedImage_owlFaceplate_png = ImageCache::getFromMemory (owlFaceplate_png, owlFaceplate_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (529, 350);


    //[Constructor] You can add your own custom stuff here..
    processor = ptr;

    updateLabels();
    menu->addItemList(processor->getPatchNames(), 1);
    menu->setTextWhenNothingSelected(processor->getCurrentPatchName());
    menu->setText(processor->getCurrentPatchName());

    slider1->setValue(processor->getParameter(0), dontSendNotification);
    slider2->setValue(processor->getParameter(1), dontSendNotification);
    slider3->setValue(processor->getParameter(2), dontSendNotification);
    slider4->setValue(processor->getParameter(3), dontSendNotification);
    slider5->setValue(processor->getParameter(4), dontSendNotification);

    // Switch Button as a Bypass button
    switchButton->setToggleState(! processor->bypass, 0);

    startTimer(100);

    //[/Constructor]
}

StompGui::~StompGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider4 = nullptr;
    slider3 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    menu = nullptr;
    label1 = nullptr;
    slider1 = nullptr;
    label2 = nullptr;
    slider2 = nullptr;
    switchButton = nullptr;
    slider5 = nullptr;
    label5 = nullptr;
    label6 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    stopTimer();
    //[/Destructor]
}

//==============================================================================
void StompGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xfffffefe));

    g.setColour (Colours::black.withAlpha (0.300f));
    g.drawImage (cachedImage_owlFaceplate_png,
                 -1, 1, 529, 351,
                 0, 0, cachedImage_owlFaceplate_png.getWidth(), cachedImage_owlFaceplate_png.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void StompGui::resized()
{
    slider4->setBounds (415, 61, 90, 90);
    slider3->setBounds (285, 61, 90, 90);
    label3->setBounds (285, 146, 90, 24);
    label4->setBounds (415, 146, 90, 24);
    menu->setBounds (188, 8, 150, 24);
    label1->setBounds (25, 146, 90, 24);
    slider1->setBounds (25, 61, 90, 90);
    label2->setBounds (155, 146, 90, 24);
    slider2->setBounds (155, 61, 90, 90);
    switchButton->setBounds (240, 248, 50, 50);
    slider5->setBounds (416, 229, 90, 90);
    label5->setBounds (416, 317, 90, 24);
    label6->setBounds (504, 260, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void StompGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..

        processor->setParameterNotifyingHost(3, slider4->getValue());

        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..

        processor->setParameterNotifyingHost(2, slider3->getValue());

        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider1)
    {
        //[UserSliderCode_slider1] -- add your slider handling code here..

        processor->setParameterNotifyingHost(0, slider1->getValue());

        //[/UserSliderCode_slider1]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..

        processor->setParameterNotifyingHost(1, slider2->getValue());

        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider5)
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        
        processor->setParameterNotifyingHost(4, slider5->getValue());
        
        //[/UserSliderCode_slider5]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void StompGui::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == menu)
    {
        //[UserComboBoxCode_menu] -- add your combo box handling code here..
        String js=menu->getText(); // JUCE string
        std::string ss (js.toUTF8()); // convert to std::string
        processor->setPatch(ss);
		updateLabels();
        //[/UserComboBoxCode_menu]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void StompGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == switchButton)
    {
        //[UserButtonCode_switchButton] -- add your button handler code here..
        if (switchButton->getToggleState() == 0){
            switchButton->setToggleState(1,0);
            processor->bypass = false ;
        }
        else{
            switchButton->setToggleState(0,0);
            processor->bypass = true ;
        }
        //[/UserButtonCode_switchButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void StompGui::updateLabels(){
  label1->setText(processor->getParameterName(0), dontSendNotification);
  label1->setTooltip(processor->getParameterDescription(0));
  label2->setText(processor->getParameterName(1), dontSendNotification);
  label2->setTooltip(processor->getParameterDescription(1));
  label3->setText(processor->getParameterName(2), dontSendNotification);
  label3->setTooltip(processor->getParameterDescription(2));
  label4->setText(processor->getParameterName(3), dontSendNotification);
  label4->setTooltip(processor->getParameterDescription(3));
  label5->setText(processor->getParameterName(4), dontSendNotification);
  label5->setTooltip(processor->getParameterDescription(4));
}

void StompGui::timerCallback()
{
    slider1->setValue(processor->getParameter(0), dontSendNotification);
    slider2->setValue(processor->getParameter(1), dontSendNotification);
    slider3->setValue(processor->getParameter(2), dontSendNotification);
    slider4->setValue(processor->getParameter(3), dontSendNotification);
    slider5->setValue(processor->getParameter(4), dontSendNotification);

	if (processor->needsUIUpdate()) {
		processor->clearUIUpdateFlag();
		menu->setText(processor->getCurrentPatchName());
	}
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="StompGui" componentName="StompGui"
                 parentClasses="public Component, public Timer" constructorParams="StompBoxAudioProcessor* ptr"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="529" initialHeight="350">
  <BACKGROUND backgroundColour="fffffefe">
    <IMAGE pos="-1 1 529 351" resource="owlFaceplate_png" opacity="0.2999999999999999889"
           mode="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="1c26ed829054fb4" memberName="slider4" virtualName=""
          explicitFocusOrder="0" pos="415 61 90 90" bkgcol="fff0ffff" thumbcol="ff6495ed"
          rotarysliderfill="ff000000" min="0" max="1" int="0" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="e44596456ad5f45a" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="285 61 90 90" thumbcol="ff6495ed"
          trackcol="ffff0000" rotarysliderfill="ff000000" min="0" max="1"
          int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="c6868610a29034d9" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="285 146 90 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <LABEL name="new label" id="35cbf618dd2e7081" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="415 146 90 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <COMBOBOX name="PatchMenu" id="8b1d6ff87e1a42ab" memberName="menu" virtualName=""
            explicitFocusOrder="0" pos="188 8 150 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="fbcc8348dda6e61" memberName="label1" virtualName=""
         explicitFocusOrder="0" pos="25 146 90 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="d09e9694cb2d845d" memberName="slider1"
          virtualName="" explicitFocusOrder="0" pos="25 61 90 90" thumbcol="ff6495ed"
          rotarysliderfill="ff000000" min="0" max="1" int="0" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="83868abb5ff5c18f" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="155 146 90 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="38cf3a8b43a9e95" memberName="slider2" virtualName=""
          explicitFocusOrder="0" pos="155 61 90 90" thumbcol="ff6495ed"
          rotarysliderfill="ff000000" min="0" max="1" int="0" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <TEXTBUTTON name="new button" id="5784b08aab473727" memberName="switchButton"
              virtualName="" explicitFocusOrder="0" pos="240 248 50 50" bgColOff="ff808080"
              bgColOn="fff37033" buttonText="" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <SLIDER name="new slider" id="e62fcb9e36520b1" memberName="slider5" virtualName=""
          explicitFocusOrder="0" pos="416 229 90 90" bkgcol="fff0ffff"
          thumbcol="ff6495ed" rotarysliderfill="ff000000" min="0" max="1"
          int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="5770a67abf9e34ae" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="416 317 90 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <LABEL name="new label" id="f77a88c932ab8274" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="504 260 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="E" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: owl_illustration_illustrator_svg, 19418, "../drawings/Owl_Illustration_Illustrator.svg"
static const unsigned char resource_StompGui_owl_illustration_illustrator_svg[] = { 60,63,120,109,108,32,118,101,114,115,105,111,110,61,34,49,46,48,34,32,101,110,99,111,100,105,110,103,61,34,117,116,102,
45,56,34,63,62,13,10,60,33,45,45,32,71,101,110,101,114,97,116,111,114,58,32,65,100,111,98,101,32,73,108,108,117,115,116,114,97,116,111,114,32,49,54,46,48,46,48,44,32,83,86,71,32,69,120,112,111,114,116,
32,80,108,117,103,45,73,110,32,46,32,83,86,71,32,86,101,114,115,105,111,110,58,32,54,46,48,48,32,66,117,105,108,100,32,48,41,32,32,45,45,62,13,10,60,33,68,79,67,84,89,80,69,32,115,118,103,32,80,85,66,
76,73,67,32,34,45,47,47,87,51,67,47,47,68,84,68,32,83,86,71,32,49,46,49,47,47,69,78,34,32,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,71,114,97,112,104,105,99,115,47,83,86,71,47,
49,46,49,47,68,84,68,47,115,118,103,49,49,46,100,116,100,34,62,13,10,60,115,118,103,32,118,101,114,115,105,111,110,61,34,49,46,49,34,32,120,109,108,110,115,61,34,104,116,116,112,58,47,47,119,119,119,46,
119,51,46,111,114,103,47,50,48,48,48,47,115,118,103,34,32,120,109,108,110,115,58,120,108,105,110,107,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,120,108,105,110,
107,34,32,120,61,34,48,112,120,34,32,121,61,34,48,112,120,34,32,119,105,100,116,104,61,34,54,49,50,112,120,34,13,10,9,32,104,101,105,103,104,116,61,34,55,57,50,112,120,34,32,118,105,101,119,66,111,120,
61,34,48,32,48,32,54,49,50,32,55,57,50,34,32,101,110,97,98,108,101,45,98,97,99,107,103,114,111,117,110,100,61,34,110,101,119,32,48,32,48,32,54,49,50,32,55,57,50,34,32,120,109,108,58,115,112,97,99,101,
61,34,112,114,101,115,101,114,118,101,34,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,50,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,
34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,52,57,46,53,44,49,52,53,46,50,54,53,99,48,45,49,56,44,48,45,51,53,46,57,57,56,44,48,45,53,51,46,57,57,56,99,
48,46,50,53,52,45,48,46,49,53,57,44,49,46,51,50,54,45,49,46,52,54,57,44,49,46,54,49,49,45,49,46,57,54,51,13,10,9,9,67,54,49,46,51,56,55,44,55,49,46,52,53,55,44,55,52,46,57,44,53,54,46,53,52,52,44,57,49,
46,55,54,52,44,52,52,46,55,50,99,50,49,46,52,55,53,45,49,53,46,48,53,57,44,52,53,46,51,54,55,45,50,51,46,50,56,53,44,55,49,46,53,50,55,45,50,52,46,56,50,52,99,56,46,54,48,57,45,48,46,53,48,56,44,49,55,
46,50,49,57,45,48,46,49,57,55,44,50,53,46,55,57,49,44,48,46,57,54,49,13,10,9,9,99,54,46,54,44,48,46,56,57,51,44,49,51,46,49,48,55,44,50,46,49,56,50,44,49,57,46,53,48,56,44,51,46,57,56,52,99,51,57,46,52,
57,44,49,49,46,49,49,57,44,55,50,46,50,49,55,44,51,57,46,53,56,56,44,56,56,46,56,51,54,44,55,55,46,50,52,50,99,51,46,56,55,53,44,56,46,55,55,56,44,54,46,55,57,51,44,49,55,46,56,54,51,44,56,46,55,53,52,
44,50,55,46,50,53,54,13,10,9,9,99,48,46,48,56,44,48,46,51,56,51,44,48,46,48,48,50,44,48,46,56,56,57,44,48,46,53,54,49,44,48,46,57,57,52,99,48,46,56,51,50,45,51,46,50,57,57,44,49,46,53,56,45,54,46,53,54,
56,44,50,46,52,55,55,45,57,46,55,57,56,99,49,50,46,48,53,51,45,52,51,46,53,56,55,44,52,53,46,54,48,50,45,55,57,46,48,51,50,44,56,56,46,52,57,50,45,57,51,46,53,50,55,13,10,9,9,99,56,46,54,53,56,45,50,46,
57,50,55,44,49,55,46,53,48,54,45,53,46,48,49,51,44,50,54,46,53,55,56,45,54,46,49,53,53,99,52,46,55,49,57,45,48,46,53,57,52,44,57,46,52,52,53,45,48,46,57,56,57,44,49,52,46,49,57,57,45,49,46,49,99,55,46,
54,56,50,45,48,46,49,55,56,44,49,53,46,51,51,44,48,46,49,55,52,44,50,50,46,57,51,54,44,49,46,50,52,50,13,10,9,9,99,55,46,52,48,54,44,49,46,48,52,51,44,49,52,46,55,48,53,44,50,46,54,49,49,44,50,49,46,56,
50,52,44,52,46,57,48,56,99,51,52,46,49,51,55,44,49,49,46,48,49,51,44,54,48,46,50,57,49,44,51,50,46,48,49,54,44,55,56,46,53,53,55,44,54,50,46,56,54,57,99,48,46,51,52,54,44,48,46,53,56,52,44,48,46,55,49,
51,44,49,46,49,53,54,44,49,46,48,54,56,44,49,46,55,51,50,13,10,9,9,99,48,44,49,56,44,48,44,51,54,44,48,44,53,52,99,45,48,46,51,54,53,45,48,46,53,55,50,45,48,46,55,53,45,49,46,49,51,49,45,49,46,48,57,54,
45,49,46,55,49,53,99,45,49,55,46,53,57,52,45,50,57,46,55,53,57,45,52,50,46,54,53,45,53,48,46,52,51,53,45,55,53,46,51,49,56,45,54,49,46,56,49,13,10,9,9,99,45,56,46,55,53,50,45,51,46,48,52,55,45,49,55,46,
55,53,56,45,53,46,48,52,55,45,50,54,46,57,54,49,45,54,46,49,56,52,99,45,51,46,57,54,55,45,48,46,52,56,57,45,55,46,57,52,49,45,48,46,56,55,45,49,49,46,57,50,54,45,48,46,57,57,52,99,45,55,46,54,55,45,48,
46,50,51,56,45,49,53,46,51,50,44,48,46,48,48,56,45,50,50,46,57,52,55,44,49,46,48,50,49,13,10,9,9,99,45,53,46,56,52,50,44,48,46,55,55,55,45,49,49,46,54,50,49,44,49,46,56,52,52,45,49,55,46,51,49,56,44,51,
46,51,51,57,99,45,50,49,46,50,55,44,53,46,53,56,49,45,52,48,46,49,56,44,49,53,46,54,50,54,45,53,54,46,53,57,52,44,51,48,46,50,52,53,99,45,50,49,46,49,50,49,44,49,56,46,56,48,57,45,51,53,46,50,53,50,44,
52,49,46,57,51,55,45,52,50,46,51,49,52,44,54,57,46,51,52,57,13,10,9,9,99,45,48,46,52,56,56,44,49,46,57,45,48,46,57,48,52,44,51,46,56,49,56,45,49,46,51,55,49,44,53,46,55,50,53,99,45,48,46,48,54,52,44,48,
46,50,55,55,45,48,46,48,55,52,44,48,46,54,53,54,45,48,46,54,53,52,44,48,46,53,56,52,99,45,48,46,49,54,50,45,48,46,54,50,51,45,48,46,51,52,45,49,46,50,56,51,45,48,46,53,48,54,45,49,46,57,52,53,13,10,9,
9,99,45,48,46,55,48,55,45,50,46,56,50,52,45,49,46,51,49,54,45,53,46,54,55,56,45,50,46,49,51,53,45,56,46,52,55,49,99,45,56,46,48,49,45,50,55,46,52,50,54,45,50,50,46,57,56,50,45,53,48,46,51,51,57,45,52,
53,46,48,51,51,45,54,56,46,52,57,50,99,45,50,51,46,54,53,54,45,49,57,46,52,55,52,45,53,48,46,57,52,51,45,50,57,46,55,57,45,56,49,46,53,50,45,51,49,46,51,50,54,13,10,9,9,99,45,56,46,56,48,57,45,48,46,52,
52,51,45,49,55,46,54,44,48,46,48,52,49,45,50,54,46,51,52,44,49,46,51,53,53,99,45,54,46,55,55,51,44,49,46,48,49,57,45,49,51,46,52,52,49,44,50,46,52,54,53,45,49,57,46,57,56,54,44,52,46,52,55,99,45,51,51,
46,56,53,52,44,49,48,46,51,54,54,45,54,50,46,50,56,57,44,51,51,46,49,50,54,45,55,57,46,56,49,54,44,54,51,46,56,53,54,13,10,9,9,99,45,48,46,50,56,49,44,48,46,52,57,52,45,48,46,53,52,51,44,49,46,48,48,54,
45,48,46,56,55,57,44,49,46,52,54,51,67,53,48,46,48,51,51,44,49,52,53,46,49,52,52,44,52,57,46,55,50,53,44,49,52,53,46,49,55,51,44,52,57,46,53,44,49,52,53,46,50,54,53,122,34,47,62,13,10,60,47,103,62,13,
10,60,103,32,105,100,61,34,76,97,121,101,114,95,57,34,62,13,10,9,60,112,97,116,104,32,100,61,34,77,52,57,46,49,50,57,44,55,54,54,46,50,49,49,99,48,45,57,55,46,48,57,54,44,48,45,49,57,52,46,49,57,49,44,
48,45,50,57,49,46,50,57,49,99,48,46,50,50,55,44,48,46,48,55,56,44,48,46,53,52,55,44,48,46,48,57,44,48,46,54,54,52,44,48,46,50,52,54,99,48,46,51,51,54,44,48,46,52,53,53,44,48,46,53,57,54,44,48,46,57,54,
57,44,48,46,56,55,57,44,49,46,52,54,49,13,10,9,9,99,49,48,46,56,53,50,44,49,56,46,57,44,50,53,46,50,56,49,44,51,52,46,52,55,57,44,52,51,46,52,48,56,44,52,54,46,53,55,56,99,50,49,46,54,52,54,44,49,52,46,
52,53,49,44,52,53,46,53,51,57,44,50,50,46,48,53,49,44,55,49,46,53,50,44,50,51,46,49,51,53,99,54,46,48,56,52,44,48,46,50,53,52,44,49,50,46,49,53,54,44,48,46,48,49,54,44,49,56,46,50,50,51,45,48,46,53,54,
56,13,10,9,9,99,53,46,49,48,57,45,48,46,52,56,56,44,49,48,46,49,55,50,45,49,46,50,52,54,44,49,53,46,49,57,55,45,50,46,50,56,57,99,49,54,46,53,52,53,45,51,46,52,51,56,44,51,49,46,57,48,52,45,57,46,55,54,
52,44,52,54,46,49,50,53,45,49,56,46,56,54,55,99,57,46,57,50,54,45,54,46,51,53,52,44,49,56,46,56,54,53,45,49,51,46,56,56,57,44,50,54,46,56,55,57,45,50,50,46,53,50,55,13,10,9,9,99,48,46,52,54,51,45,48,46,
53,48,50,44,48,46,57,53,55,45,48,46,57,55,51,44,49,46,52,51,56,45,49,46,52,53,57,99,48,46,55,55,57,44,48,46,51,53,50,44,49,46,49,56,57,44,48,46,57,51,52,44,49,46,54,55,50,44,49,46,52,49,54,99,57,46,56,
54,51,44,57,46,56,53,44,49,57,46,55,49,57,44,49,57,46,55,49,49,44,50,57,46,53,56,52,44,50,57,46,53,54,50,13,10,9,9,99,48,46,52,55,57,44,48,46,52,55,57,44,48,46,56,55,49,44,49,46,48,56,56,44,49,46,54,52,
53,44,49,46,51,51,50,99,48,46,53,49,45,48,46,52,57,50,44,49,46,48,49,50,45,48,46,57,54,55,44,49,46,53,45,49,46,52,53,53,99,54,46,52,49,45,54,46,52,48,54,44,49,50,46,56,49,52,45,49,50,46,56,49,52,44,49,
57,46,50,50,53,45,49,57,46,50,50,51,13,10,9,9,99,51,46,53,51,57,45,51,46,53,51,57,44,55,46,48,55,54,45,55,46,48,56,52,44,49,48,46,54,50,53,45,49,48,46,54,49,49,99,48,46,51,56,57,45,48,46,51,56,57,44,48,
46,54,56,45,48,46,57,52,51,44,49,46,52,49,52,45,48,46,57,55,51,99,48,46,52,48,52,44,48,46,52,50,54,44,48,46,56,52,52,44,48,46,56,55,57,44,49,46,50,55,49,44,49,46,51,52,13,10,9,9,99,55,46,52,52,49,44,56,
46,48,50,57,44,49,53,46,54,56,52,44,49,53,46,49,50,53,44,50,52,46,56,48,49,44,50,49,46,49,56,56,99,50,49,46,54,55,44,49,52,46,52,49,44,52,53,46,53,52,49,44,50,50,46,48,52,53,44,55,49,46,53,50,51,44,50,
51,46,49,51,55,99,55,46,56,54,55,44,48,46,51,51,52,44,49,53,46,55,48,57,45,48,46,49,49,49,44,50,51,46,53,49,45,49,46,49,51,57,13,10,9,9,99,54,46,48,56,56,45,48,46,56,48,49,44,49,50,46,48,57,52,45,50,46,
48,52,57,44,49,56,46,48,50,55,45,51,46,54,54,50,99,51,54,46,53,57,52,45,57,46,57,51,56,44,54,54,46,54,48,53,45,51,52,46,54,50,55,44,56,51,46,56,53,57,45,54,53,46,53,48,50,99,48,46,48,56,50,45,48,46,49,
52,54,44,48,46,50,53,52,45,48,46,50,52,44,48,46,51,56,53,45,48,46,51,53,53,13,10,9,9,99,48,44,56,49,46,55,53,56,44,48,44,49,54,51,46,53,49,56,44,48,44,50,52,53,46,50,55,55,99,45,48,46,48,57,56,45,48,46,
48,55,52,45,48,46,50,51,50,45,48,46,49,50,49,45,48,46,50,56,53,45,48,46,50,49,55,99,45,49,46,51,55,55,45,50,46,52,51,50,45,52,46,54,50,49,45,50,46,57,48,52,45,54,46,52,56,56,45,50,46,49,56,57,13,10,9,
9,99,45,50,46,52,50,50,44,48,46,57,50,54,45,51,46,56,51,54,44,51,46,48,52,55,45,51,46,55,54,50,44,53,46,55,56,53,99,48,46,48,50,44,48,46,54,57,55,44,48,46,48,53,55,44,49,46,51,57,53,44,48,46,48,53,55,
44,50,46,48,57,99,48,46,48,48,54,44,49,49,46,50,56,49,44,48,46,48,48,54,44,50,50,46,53,54,50,44,48,44,51,51,46,56,52,52,13,10,9,9,99,48,44,48,46,54,51,51,44,48,46,48,51,57,44,49,46,50,56,49,45,48,46,48,
56,54,44,49,46,56,57,53,99,45,48,46,49,50,53,44,48,46,54,48,50,45,48,46,51,49,56,44,49,46,50,53,52,45,48,46,54,56,44,49,46,55,51,52,99,45,48,46,57,49,44,49,46,50,48,51,45,50,46,49,54,52,44,49,46,55,52,
45,51,46,54,56,50,44,49,46,51,57,49,13,10,9,9,99,45,49,46,53,53,49,45,48,46,51,53,55,45,50,46,54,53,54,45,49,46,53,57,56,45,50,46,56,52,56,45,51,46,49,57,51,99,45,48,46,48,55,50,45,48,46,54,50,53,45,48,
46,48,51,57,45,49,46,50,54,54,45,48,46,48,51,57,45,49,46,56,57,56,99,45,48,46,48,48,52,45,49,57,46,50,48,51,45,48,46,48,48,50,45,51,56,46,52,48,52,45,48,46,48,48,50,45,53,55,46,54,48,55,13,10,9,9,99,48,
45,50,46,55,50,55,45,48,46,48,48,52,45,53,46,52,53,49,44,48,46,48,48,52,45,56,46,49,55,54,99,48,45,48,46,55,54,44,48,46,49,48,50,45,49,46,53,50,51,44,48,46,48,52,49,45,50,46,50,55,55,99,45,48,46,49,51,
53,45,49,46,54,53,50,45,49,46,53,45,50,46,57,48,54,45,51,46,49,53,56,45,50,46,57,56,54,13,10,9,9,99,45,49,46,54,49,57,45,48,46,48,55,56,45,51,46,49,50,55,44,49,46,49,48,53,45,51,46,52,48,54,44,50,46,55,
50,49,99,45,48,46,48,56,56,44,48,46,52,57,54,45,48,46,48,55,44,49,46,48,49,50,45,48,46,48,55,50,44,49,46,53,49,56,99,45,48,46,48,48,54,44,50,46,51,52,52,45,48,46,48,48,50,44,52,46,54,56,57,45,48,46,48,
48,50,44,55,46,48,51,51,13,10,9,9,99,48,44,52,46,49,56,52,44,48,46,48,49,50,44,56,46,51,54,53,45,48,46,48,49,52,44,49,50,46,53,53,49,99,45,48,46,48,48,52,44,48,46,54,56,50,45,48,46,48,53,51,44,49,46,52,
48,54,45,48,46,50,56,49,44,50,46,48,52,49,99,45,48,46,51,57,49,44,49,46,48,57,52,45,49,46,52,48,56,44,49,46,53,55,45,50,46,54,49,55,44,49,46,51,57,51,13,10,9,9,99,45,49,46,48,50,45,48,46,49,52,56,45,49,
46,56,50,54,45,48,46,57,53,53,45,49,46,57,52,49,45,50,46,48,51,53,99,45,48,46,48,54,56,45,48,46,54,50,57,45,48,46,48,52,51,45,49,46,50,54,54,45,48,46,48,52,51,45,49,46,57,99,45,48,46,48,48,50,45,49,57,
46,50,54,54,44,48,45,51,56,46,53,51,49,45,48,46,48,48,50,45,53,55,46,55,57,57,13,10,9,9,99,48,45,48,46,53,48,56,44,48,46,48,50,55,45,49,46,48,49,56,45,48,46,48,50,49,45,49,46,53,50,99,45,48,46,50,49,49,
45,50,46,49,56,56,45,49,46,57,49,56,45,51,46,55,52,45,52,46,48,53,57,45,51,46,55,49,57,99,45,50,46,49,53,44,48,46,48,49,56,45,51,46,55,55,57,44,49,46,53,57,52,45,51,46,57,51,44,51,46,56,50,54,13,10,9,
9,99,45,48,46,48,52,53,44,48,46,54,57,53,45,48,46,48,50,55,44,49,46,51,57,53,45,48,46,48,50,55,44,50,46,48,57,50,99,45,48,46,48,48,52,44,55,46,48,51,51,45,48,46,48,48,50,44,49,52,46,48,54,56,45,48,46,
48,48,50,44,50,49,46,49,48,52,99,48,44,48,46,52,52,53,44,48,46,48,49,52,44,48,46,56,56,57,45,48,46,48,48,56,44,49,46,51,51,13,10,9,9,99,45,48,46,48,55,56,44,49,46,53,54,54,45,48,46,53,44,50,46,48,54,50,
45,50,46,48,54,50,44,50,46,52,57,52,99,45,48,46,49,54,56,44,48,46,48,52,53,45,48,46,51,50,50,44,48,46,49,51,55,45,48,46,53,56,50,44,48,46,50,52,54,99,48,44,48,46,54,57,57,44,48,44,49,46,51,57,51,44,48,
44,50,46,48,56,52,13,10,9,9,99,48,44,52,46,54,56,57,44,48,46,48,49,44,57,46,51,55,57,45,48,46,48,49,50,44,49,52,46,48,55,99,45,48,46,48,48,52,44,48,46,55,53,45,48,46,48,52,53,44,49,46,53,51,49,45,48,46,
50,53,52,44,50,46,50,52,54,99,45,48,46,53,51,53,44,49,46,56,52,45,50,46,51,55,57,44,51,46,48,55,50,45,52,46,49,56,57,44,50,46,57,48,56,13,10,9,9,99,45,50,46,48,54,49,45,48,46,49,56,52,45,51,46,54,53,54,
45,49,46,55,55,53,45,51,46,56,49,54,45,51,46,56,51,54,99,45,48,46,48,52,53,45,48,46,53,54,54,45,48,46,48,50,49,45,49,46,49,52,49,45,48,46,48,50,49,45,49,46,55,48,57,99,48,45,49,51,46,48,53,53,44,48,45,
50,54,46,49,48,57,44,48,46,48,48,50,45,51,57,46,49,54,54,13,10,9,9,99,48,45,48,46,56,56,57,44,48,46,48,53,55,45,49,46,55,55,55,44,48,46,48,51,51,45,50,46,54,54,50,99,45,48,46,48,53,55,45,50,46,49,50,51,
45,49,46,52,56,52,45,51,46,55,49,51,45,51,46,53,56,45,52,46,48,50,57,99,45,49,46,57,51,56,45,48,46,50,57,51,45,51,46,56,49,56,44,48,46,56,49,54,45,52,46,52,54,49,44,50,46,55,52,52,13,10,9,9,99,45,48,46,
50,51,54,44,48,46,55,48,49,45,48,46,51,48,49,44,49,46,52,56,56,45,48,46,51,48,51,44,50,46,50,51,52,99,45,48,46,48,50,51,44,54,46,48,50,49,45,48,46,48,49,52,44,49,50,46,48,52,51,45,48,46,48,49,54,44,49,
56,46,48,54,50,99,45,48,46,48,48,50,44,48,46,54,57,55,45,48,46,48,49,52,44,49,46,51,57,54,45,48,46,48,53,49,44,50,46,48,57,13,10,9,9,99,45,48,46,48,52,57,44,48,46,57,55,53,45,48,46,52,44,49,46,56,53,57,
45,48,46,57,49,56,44,50,46,54,54,56,99,45,49,46,57,57,52,44,51,46,49,51,51,45,54,46,48,50,44,51,46,49,48,53,45,55,46,57,55,55,45,48,46,48,53,49,99,45,48,46,54,49,51,45,48,46,57,56,56,45,48,46,57,52,57,
45,50,46,48,55,50,45,48,46,57,53,57,45,51,46,50,52,13,10,9,9,99,45,48,46,48,48,56,45,49,46,48,49,52,44,48,46,48,52,55,45,50,46,48,50,57,44,48,46,48,48,56,45,51,46,48,52,49,99,45,48,46,49,56,52,45,52,46,
54,52,51,45,52,46,51,49,50,45,56,46,53,51,55,45,56,46,57,51,56,45,56,46,51,48,51,99,45,53,46,54,56,50,44,48,46,50,56,53,45,56,46,53,53,53,44,52,46,55,54,45,56,46,53,56,56,44,56,46,54,57,53,13,10,9,9,99,
45,48,46,48,48,56,44,48,46,56,56,53,44,48,46,48,52,49,44,49,46,55,55,51,44,48,46,48,52,49,44,50,46,54,54,99,48,46,48,48,52,44,49,53,46,54,53,52,44,48,46,48,48,52,44,51,49,46,51,48,55,44,48,46,48,48,50,
44,52,54,46,57,54,49,99,48,44,48,46,53,55,44,48,46,48,49,52,44,49,46,49,52,51,45,48,46,48,51,49,44,49,46,55,49,49,13,10,9,9,99,45,48,46,49,55,50,44,50,46,49,50,53,45,49,46,55,55,55,44,51,46,56,53,53,45,
51,46,56,49,50,44,52,46,49,52,49,99,45,50,46,50,48,53,44,48,46,51,48,57,45,52,46,50,52,54,45,48,46,56,54,49,45,52,46,57,55,53,45,50,46,57,51,56,99,45,48,46,50,50,55,45,48,46,54,51,57,45,48,46,50,57,55,
45,49,46,51,53,52,45,48,46,51,50,50,45,50,46,48,52,49,13,10,9,9,99,45,48,46,48,52,57,45,49,46,51,51,44,48,46,48,51,57,45,50,46,54,54,52,45,48,46,48,50,53,45,51,46,57,57,50,99,45,48,46,49,51,51,45,50,46,
54,57,49,45,49,46,52,49,54,45,52,46,55,50,49,45,51,46,56,49,52,45,53,46,57,50,56,99,45,50,46,51,56,53,45,49,46,49,57,55,45,52,46,55,56,57,45,49,46,48,54,54,45,55,46,48,51,55,44,48,46,52,49,56,13,10,9,
9,99,45,50,46,49,56,57,44,49,46,52,52,53,45,51,46,49,51,53,44,51,46,53,55,56,45,51,46,49,52,51,44,54,46,49,53,50,99,45,48,46,48,49,52,44,52,46,53,54,52,45,48,46,48,49,44,57,46,49,50,55,45,48,46,48,49,
56,44,49,51,46,54,56,57,99,45,48,46,48,48,50,44,48,46,53,55,44,48,46,48,49,54,44,49,46,49,52,54,45,48,46,48,53,55,44,49,46,55,48,57,13,10,9,9,99,45,48,46,49,50,49,44,48,46,57,53,49,45,48,46,55,53,54,44,
49,46,53,57,50,45,49,46,54,57,53,44,49,46,56,48,57,99,45,49,46,51,49,52,44,48,46,51,48,49,45,50,46,53,51,55,45,48,46,53,50,57,45,50,46,55,53,50,45,49,46,57,51,54,99,45,48,46,48,57,52,45,48,46,54,50,51,
45,48,46,48,53,51,45,49,46,50,54,52,45,48,46,48,53,51,45,49,46,56,57,56,13,10,9,9,99,45,48,46,48,48,50,45,49,56,46,53,48,54,45,48,46,48,48,50,45,51,55,46,48,49,52,45,48,46,48,48,52,45,53,53,46,53,49,56,
99,48,45,48,46,54,57,53,44,48,46,48,51,49,45,49,46,52,45,48,46,48,52,57,45,50,46,48,56,56,99,45,48,46,52,48,50,45,51,46,52,50,52,45,51,46,54,48,53,45,53,46,52,56,45,54,46,52,52,55,45,53,46,49,13,10,9,
9,99,45,51,46,49,57,55,44,48,46,52,51,50,45,53,46,51,48,55,44,50,46,57,56,45,53,46,50,49,57,44,54,46,50,49,49,99,48,46,48,50,44,48,46,54,51,53,44,48,46,48,56,52,44,49,46,50,54,54,44,48,46,48,56,52,44,
49,46,57,99,48,46,48,48,54,44,52,46,55,53,52,44,48,46,48,48,54,44,57,46,53,48,54,44,48,44,49,52,46,50,53,56,13,10,9,9,99,48,44,48,46,53,55,44,48,44,49,46,49,52,56,45,48,46,48,57,56,44,49,46,55,48,53,99,
45,48,46,51,53,50,44,50,46,48,49,52,45,50,46,48,50,51,44,51,46,51,48,49,45,52,46,48,56,44,51,46,49,57,49,99,45,49,46,57,48,52,45,48,46,49,48,52,45,51,46,52,51,45,49,46,53,55,54,45,51,46,54,48,57,45,51,
46,53,50,53,13,10,9,9,99,45,48,46,48,53,51,45,48,46,53,54,52,45,48,46,48,50,55,45,49,46,49,51,57,45,48,46,48,50,55,45,49,46,55,48,57,99,45,48,46,48,48,50,45,57,46,52,52,49,44,48,46,48,48,54,45,49,56,46,
56,56,53,45,48,46,48,49,50,45,50,56,46,51,51,99,45,48,46,48,48,50,45,49,46,48,48,54,45,48,46,48,52,55,45,50,46,48,51,49,45,48,46,50,52,52,45,51,46,48,49,56,13,10,9,9,99,45,48,46,53,53,55,45,50,46,56,49,
52,45,51,46,50,51,52,45,52,46,53,57,50,45,53,46,56,51,45,52,46,52,53,53,99,45,50,46,56,52,54,44,48,46,49,53,45,53,46,48,57,52,44,50,46,51,52,52,45,53,46,51,54,49,44,53,46,50,51,50,99,45,48,46,49,44,49,
46,48,55,45,48,46,49,49,53,44,50,46,49,53,45,48,46,49,49,53,44,51,46,50,50,55,13,10,9,9,99,45,48,46,48,48,54,44,50,54,46,51,54,53,45,48,46,48,48,52,44,53,50,46,55,50,57,45,48,46,48,48,52,44,55,57,46,48,
57,50,99,48,44,48,46,53,55,44,48,46,48,50,53,44,49,46,49,52,53,45,48,46,48,49,52,44,49,46,55,49,53,99,45,48,46,48,51,49,44,48,46,52,57,56,45,48,46,48,55,56,44,49,46,48,50,45,48,46,50,51,44,49,46,52,57,
50,13,10,9,9,99,45,48,46,52,52,53,44,49,46,51,57,51,45,49,46,52,51,54,44,50,46,50,49,49,45,50,46,56,56,49,44,50,46,52,49,54,99,45,50,46,48,49,52,44,48,46,50,57,49,45,51,46,54,54,52,45,48,46,56,49,50,45,
52,46,48,57,56,45,50,46,56,48,49,99,45,48,46,49,55,50,45,48,46,55,57,51,45,48,46,49,53,56,45,49,46,54,51,53,45,48,46,49,53,56,45,50,46,52,53,53,13,10,9,9,99,45,48,46,48,48,56,45,50,49,46,57,50,56,45,48,
46,48,48,54,45,52,51,46,56,53,53,45,48,46,48,48,56,45,54,53,46,55,56,51,99,48,45,48,46,54,57,55,44,48,46,48,50,55,45,49,46,52,45,48,46,48,53,53,45,50,46,48,56,56,99,45,48,46,50,56,51,45,50,46,51,56,57,
45,50,46,49,54,50,45,52,46,49,54,52,45,52,46,53,54,50,45,52,46,51,53,55,13,10,9,9,99,45,50,46,51,48,53,45,48,46,49,56,54,45,52,46,52,55,57,44,49,46,52,48,52,45,53,46,48,50,57,44,51,46,55,54,50,99,45,48,
46,49,56,52,44,48,46,55,57,51,45,48,46,50,52,54,44,49,46,54,50,55,45,48,46,50,53,56,44,50,46,52,52,53,99,45,48,46,48,51,53,44,50,46,55,50,53,44,48,46,48,52,55,44,53,46,52,53,51,45,48,46,48,52,55,44,56,
46,49,55,52,13,10,9,9,99,45,48,46,49,51,57,44,52,46,48,51,55,45,51,46,50,55,55,44,55,46,52,50,45,55,46,49,56,56,44,55,46,56,56,57,99,45,52,46,50,49,49,44,48,46,53,48,50,45,56,46,48,51,53,45,50,46,48,48,
56,45,57,46,49,57,57,45,54,46,48,48,52,99,45,48,46,51,50,54,45,49,46,49,49,57,45,48,46,51,52,45,50,46,50,52,56,45,48,46,51,52,45,51,46,51,57,49,13,10,9,9,99,48,45,49,49,46,53,57,56,44,48,45,50,51,46,49,
57,53,45,48,46,48,48,50,45,51,52,46,55,57,49,99,48,45,48,46,54,51,53,44,48,46,48,50,57,45,49,46,50,55,51,45,48,46,48,50,53,45,49,46,57,48,50,99,45,48,46,51,52,45,51,46,57,52,49,45,52,46,50,50,49,45,54,
46,54,52,49,45,56,46,48,52,53,45,53,46,55,49,57,13,10,9,9,99,45,50,46,53,57,56,44,48,46,54,50,55,45,53,46,48,53,49,44,51,46,50,50,55,45,52,46,57,51,52,44,54,46,52,49,52,99,48,46,48,52,49,44,49,46,48,55,
52,44,48,46,49,44,50,46,49,53,44,48,46,49,48,50,44,51,46,50,50,55,99,48,46,48,48,56,44,49,49,46,52,48,56,44,48,46,48,48,54,44,50,50,46,56,49,54,44,48,46,48,48,52,44,51,52,46,50,50,53,13,10,9,9,99,48,44,
48,46,54,57,53,44,48,46,48,48,56,44,49,46,51,57,53,45,48,46,48,50,55,44,50,46,48,57,99,45,48,46,50,50,55,44,52,46,53,49,50,45,51,46,55,55,55,44,56,46,51,53,55,45,56,46,49,57,55,44,56,46,56,56,55,99,45,
52,46,55,49,55,44,48,46,53,54,56,45,57,46,49,49,51,45,50,46,50,55,53,45,49,48,46,52,49,52,45,54,46,55,51,50,13,10,9,9,99,45,48,46,51,50,50,45,49,46,49,48,55,45,48,46,52,49,52,45,50,46,50,51,52,45,48,46,
52,49,45,51,46,51,56,51,99,48,46,48,49,50,45,54,46,56,52,54,45,48,46,48,49,45,49,51,46,54,56,57,44,48,46,48,49,56,45,50,48,46,53,51,51,99,48,46,48,48,52,45,49,46,50,51,54,45,48,46,50,55,45,50,46,51,55,
57,45,48,46,55,50,51,45,51,46,53,48,50,13,10,9,9,99,45,49,46,48,55,56,45,50,46,54,55,52,45,52,46,48,55,56,45,53,46,51,52,52,45,56,46,51,56,53,45,53,46,48,48,56,99,45,51,46,51,49,52,44,48,46,50,53,56,45,
54,46,51,52,52,44,50,46,55,52,52,45,55,46,50,52,54,44,54,46,48,56,50,99,45,48,46,50,55,57,44,49,46,48,52,53,45,48,46,51,55,49,44,50,46,49,48,55,45,48,46,51,55,49,44,51,46,49,57,51,13,10,9,9,99,48,46,48,
49,56,44,49,50,46,53,53,49,44,48,46,48,49,44,50,53,46,48,57,56,44,48,46,48,49,44,51,55,46,54,52,54,99,48,44,48,46,54,51,51,44,48,46,48,50,51,44,49,46,50,55,45,48,46,48,50,53,44,49,46,57,99,45,48,46,49,
49,57,44,49,46,53,48,56,45,49,46,49,51,57,44,50,46,53,48,54,45,50,46,53,53,49,44,50,46,53,52,55,13,10,9,9,99,45,49,46,52,55,51,44,48,46,48,52,51,45,50,46,54,49,51,45,49,46,48,48,54,45,50,46,55,53,54,45,
50,46,53,54,50,99,45,48,46,48,52,53,45,48,46,53,48,50,45,48,46,48,50,49,45,49,46,48,49,52,45,48,46,48,50,49,45,49,46,53,50,49,99,45,48,46,48,48,50,45,51,48,46,54,48,57,45,48,46,48,48,50,45,54,49,46,50,
49,57,44,48,45,57,49,46,56,51,13,10,9,9,99,48,45,48,46,54,51,51,44,48,46,48,51,53,45,49,46,50,55,44,48,46,48,49,54,45,49,46,57,99,45,48,46,48,53,53,45,49,46,56,52,45,49,46,51,54,53,45,51,46,49,56,52,45,
51,46,48,56,50,45,51,46,49,56,57,99,45,49,46,55,50,49,45,48,46,48,48,52,45,51,46,48,48,52,44,49,46,50,57,57,45,51,46,49,48,50,44,51,46,49,55,52,13,10,9,9,99,45,48,46,48,50,55,44,48,46,53,48,52,45,48,46,
48,49,44,49,46,48,49,50,45,48,46,48,49,44,49,46,53,50,49,99,45,48,46,48,48,50,44,54,46,50,48,57,44,48,44,49,50,46,52,49,56,45,48,46,48,48,54,44,49,56,46,54,50,57,99,48,44,48,46,54,51,51,44,48,46,48,49,
44,49,46,50,55,57,45,48,46,49,49,53,44,49,46,56,57,51,13,10,9,9,99,45,48,46,51,54,57,44,49,46,56,48,51,45,49,46,55,57,57,44,50,46,56,57,49,45,51,46,53,52,49,44,50,46,55,55,99,45,49,46,53,57,56,45,48,46,
49,48,57,45,50,46,56,55,57,45,49,46,51,57,56,45,51,46,48,54,49,45,51,46,49,49,49,99,45,48,46,48,53,49,45,48,46,53,45,48,46,48,50,55,45,49,46,48,49,50,45,48,46,48,50,55,45,49,46,53,49,56,13,10,9,9,99,45,
48,46,48,48,52,45,52,46,49,49,57,45,48,46,48,48,52,45,56,46,50,52,45,48,46,48,48,50,45,49,50,46,51,54,49,99,48,46,48,48,52,45,54,46,55,55,57,44,48,46,48,50,45,49,51,46,53,54,49,44,48,46,48,48,56,45,50,
48,46,51,52,50,99,48,45,48,46,53,53,55,45,48,46,48,54,56,45,49,46,49,53,50,45,48,46,50,56,49,45,49,46,54,53,52,13,10,9,9,99,45,48,46,53,53,49,45,49,46,50,57,49,45,49,46,56,53,55,45,49,46,57,50,50,45,51,
46,50,56,49,45,49,46,54,57,57,99,45,49,46,50,50,53,44,48,46,49,57,51,45,50,46,50,52,52,44,49,46,50,51,45,50,46,52,51,57,44,50,46,53,56,54,99,45,48,46,48,57,50,44,48,46,54,50,51,45,48,46,48,53,55,44,49,
46,50,54,52,45,48,46,48,53,55,44,49,46,56,57,54,13,10,9,9,99,45,48,46,48,48,50,44,49,52,46,52,53,49,45,48,46,48,48,50,44,50,56,46,57,48,50,45,48,46,48,48,52,44,52,51,46,51,53,50,99,48,44,48,46,55,54,45,
48,46,48,48,56,44,49,46,53,50,45,48,46,48,52,55,44,50,46,50,55,55,99,45,48,46,48,53,49,44,49,46,48,52,49,45,48,46,52,50,44,49,46,57,56,54,45,49,46,48,48,52,44,50,46,56,51,50,13,10,9,9,99,45,49,46,48,52,
55,44,49,46,53,49,52,45,50,46,52,53,51,44,50,46,51,52,56,45,52,46,51,53,50,44,50,46,49,57,49,99,45,48,46,52,50,52,45,48,46,48,51,53,45,48,46,56,52,52,45,48,46,48,54,54,45,49,46,51,50,50,45,48,46,49,48,
52,99,45,48,46,48,52,55,44,48,46,51,53,50,45,48,46,49,48,50,44,48,46,53,57,54,45,48,46,49,48,57,44,48,46,56,52,50,13,10,9,9,99,45,48,46,48,49,54,44,48,46,53,48,56,45,48,46,48,49,44,49,46,48,49,52,45,48,
46,48,49,44,49,46,53,50,49,99,48,44,52,46,51,49,49,44,48,46,48,49,50,44,56,46,54,49,57,45,48,46,48,49,50,44,49,50,46,57,50,56,99,45,48,46,48,48,52,44,48,46,55,52,56,45,48,46,48,52,49,44,49,46,53,52,51,
45,48,46,50,56,55,44,50,46,50,51,56,13,10,9,9,99,45,48,46,53,55,44,49,46,54,49,57,45,50,46,49,57,55,44,50,46,53,50,55,45,51,46,57,51,50,44,50,46,51,52,52,99,45,49,46,54,51,49,45,48,46,49,55,52,45,51,46,
48,48,50,45,49,46,52,56,50,45,51,46,50,55,57,45,51,46,50,50,55,99,45,48,46,49,48,55,45,48,46,54,56,50,45,48,46,48,55,45,49,46,51,57,49,45,48,46,48,55,45,50,46,48,56,54,13,10,9,9,99,45,48,46,48,48,52,45,
49,56,46,54,51,51,45,48,46,48,48,52,45,51,55,46,50,54,54,45,48,46,48,48,52,45,53,53,46,56,57,56,99,48,45,48,46,54,57,55,44,48,46,48,50,57,45,49,46,51,57,54,45,48,46,48,50,55,45,50,46,48,57,99,45,48,46,
49,54,52,45,49,46,57,57,56,45,49,46,55,57,49,45,51,46,53,52,49,45,51,46,55,53,56,45,51,46,54,48,52,13,10,9,9,99,45,49,46,57,55,57,45,48,46,48,54,54,45,51,46,54,56,50,44,49,46,51,52,54,45,51,46,57,54,49,
44,51,46,51,53,57,99,45,48,46,49,49,51,44,48,46,56,49,49,45,48,46,49,48,53,44,49,46,54,52,51,45,48,46,49,48,53,44,50,46,52,54,53,99,45,48,46,48,48,54,44,49,53,46,55,56,49,45,48,46,48,48,52,44,51,49,46,
53,54,49,45,48,46,48,48,52,44,52,55,46,51,52,50,13,10,9,9,99,48,44,48,46,53,55,44,48,46,48,49,44,49,46,49,52,49,45,48,46,48,48,54,44,49,46,55,49,49,99,45,48,46,48,49,50,44,48,46,51,56,49,45,48,46,48,50,
51,44,48,46,55,54,52,45,48,46,49,48,52,44,49,46,49,51,51,99,45,48,46,50,52,52,44,49,46,49,50,55,45,49,46,48,56,50,44,49,46,56,48,55,45,50,46,49,52,49,44,49,46,55,55,55,13,10,9,9,99,45,49,46,48,50,45,48,
46,48,51,49,45,49,46,56,56,51,45,48,46,55,57,49,45,50,46,48,53,53,45,49,46,56,57,56,99,45,48,46,48,56,54,45,48,46,53,53,57,45,48,46,48,53,57,45,49,46,49,51,55,45,48,46,48,53,57,45,49,46,55,48,53,99,45,
48,46,48,48,52,45,56,46,53,53,55,45,48,46,48,48,50,45,49,55,46,49,49,49,45,48,46,48,48,50,45,50,53,46,54,54,56,13,10,9,9,99,48,45,48,46,53,48,54,44,48,46,48,50,45,49,46,48,49,54,45,48,46,48,49,45,49,46,
53,50,99,45,48,46,50,50,53,45,51,46,57,54,49,45,51,46,51,56,49,45,55,46,48,53,53,45,55,46,50,48,49,45,55,46,50,55,53,99,45,51,46,53,48,50,45,48,46,50,48,51,45,55,46,53,51,49,44,50,46,52,49,56,45,55,46,
57,51,56,44,54,46,56,54,53,13,10,9,9,99,45,48,46,48,53,51,44,48,46,53,54,52,45,48,46,48,51,49,44,49,46,49,51,57,45,48,46,48,51,49,44,49,46,55,48,55,99,45,48,46,48,48,50,44,51,49,46,52,57,56,44,48,44,54,
50,46,57,57,56,44,48,44,57,52,46,52,57,52,99,48,44,48,46,54,51,53,44,48,46,48,50,51,44,49,46,50,55,45,48,46,48,50,53,44,49,46,57,48,50,13,10,9,9,99,45,48,46,48,55,54,44,48,46,57,56,52,45,48,46,55,48,57,
44,49,46,53,55,54,45,49,46,53,55,50,44,49,46,53,51,51,99,45,48,46,55,56,49,45,48,46,48,52,49,45,49,46,51,54,57,45,48,46,54,48,55,45,49,46,52,52,53,45,49,46,52,55,57,99,45,48,46,48,53,53,45,48,46,54,50,
57,45,48,46,48,50,57,45,49,46,50,54,56,45,48,46,48,50,57,45,49,46,57,13,10,9,9,99,45,48,46,48,48,50,45,50,49,46,50,51,45,48,46,48,48,50,45,52,50,46,52,54,49,45,48,46,48,48,52,45,54,51,46,54,57,51,99,48,
45,48,46,57,53,49,44,48,46,48,51,49,45,49,46,57,48,52,45,48,46,48,52,51,45,50,46,56,53,50,99,45,48,46,50,55,49,45,51,46,52,54,57,45,50,46,57,53,55,45,54,46,49,54,45,54,46,52,51,57,45,54,46,51,53,53,13,
10,9,9,99,45,51,46,50,56,53,45,48,46,49,57,49,45,54,46,50,56,57,44,49,46,57,49,45,55,46,48,54,52,44,53,46,52,99,45,48,46,49,54,44,48,46,55,50,57,45,48,46,49,50,57,44,49,46,53,49,45,48,46,49,51,51,44,50,
46,50,54,54,99,45,48,46,48,49,50,44,50,46,50,56,49,44,48,46,48,48,54,44,52,46,53,54,50,44,48,46,48,48,52,44,54,46,56,52,50,13,10,9,9,99,45,48,46,48,48,50,44,50,46,50,54,52,45,50,46,49,49,55,44,52,45,52,
46,48,52,49,44,52,46,48,48,50,99,45,50,46,50,57,53,44,48,46,48,48,52,45,52,46,49,49,53,45,49,46,54,48,52,45,52,46,51,49,49,45,51,46,57,51,52,99,45,48,46,48,52,57,45,48,46,53,54,56,45,48,46,48,50,53,45,
49,46,49,52,51,45,48,46,48,50,53,45,49,46,55,49,53,13,10,9,9,99,45,48,46,48,48,50,45,53,46,55,54,52,45,48,46,48,49,45,49,49,46,53,51,49,44,48,46,48,48,54,45,49,55,46,50,57,57,99,48,46,48,48,52,45,49,46,
48,55,54,44,48,46,48,54,52,45,50,46,49,53,50,44,48,46,49,54,54,45,51,46,50,50,51,99,48,46,54,53,56,45,54,46,57,57,52,45,54,46,49,56,45,49,50,46,51,53,52,45,49,50,46,56,52,52,45,49,48,46,48,56,54,13,10,
9,9,99,45,52,46,56,50,54,44,49,46,54,52,51,45,55,46,49,56,54,44,54,46,53,51,55,45,54,46,53,48,50,44,49,48,46,53,57,54,99,48,46,49,50,53,44,48,46,55,52,52,44,48,46,49,56,50,44,49,46,53,49,50,44,48,46,49,
56,50,44,50,46,50,54,56,99,48,46,48,49,44,49,50,46,56,54,53,44,48,46,48,49,44,50,53,46,55,50,57,44,48,44,51,56,46,53,57,54,13,10,9,9,99,48,44,48,46,55,54,45,48,46,48,49,44,49,46,53,50,55,45,48,46,49,51,
49,44,50,46,50,55,53,99,45,48,46,56,50,44,53,46,48,48,52,45,53,46,50,55,51,44,56,46,56,56,55,45,49,48,46,50,53,52,44,57,46,49,52,49,99,45,53,46,52,54,55,44,48,46,50,55,57,45,49,48,46,49,49,53,45,51,46,
52,51,50,45,49,49,46,51,51,50,45,56,46,50,55,51,13,10,9,9,99,45,48,46,50,57,57,45,49,46,49,56,50,45,48,46,51,54,55,45,50,46,51,55,51,45,48,46,51,54,53,45,51,46,53,56,99,48,46,48,48,54,45,57,46,55,54,50,
44,48,46,48,49,52,45,49,57,46,53,50,49,45,48,46,48,49,50,45,50,57,46,50,56,49,99,45,48,46,48,48,50,45,49,46,49,51,49,45,48,46,49,48,55,45,50,46,50,55,57,45,48,46,51,49,56,45,51,46,51,57,51,13,10,9,9,99,
45,48,46,56,49,49,45,52,46,51,48,49,45,52,46,57,51,52,45,55,46,55,49,49,45,57,46,53,53,57,45,55,46,55,49,51,99,45,52,46,54,48,53,44,48,45,56,46,55,51,54,44,51,46,51,55,49,45,57,46,53,55,44,55,46,54,57,
57,99,45,48,46,49,56,57,44,48,46,57,56,54,45,48,46,50,55,44,50,46,48,49,45,48,46,50,55,49,44,51,46,48,49,52,13,10,9,9,99,45,48,46,48,49,52,44,50,51,46,51,56,57,45,48,46,48,49,44,52,54,46,55,55,51,45,48,
46,48,49,50,44,55,48,46,49,54,99,48,44,48,46,54,57,53,44,48,46,48,50,51,44,49,46,51,57,54,45,48,46,48,50,53,44,50,46,48,57,99,45,48,46,49,54,56,44,50,46,51,55,53,45,49,46,57,57,50,44,52,46,49,49,53,45,
52,46,51,48,55,44,52,46,50,54,13,10,9,9,99,45,50,46,48,55,44,48,46,49,50,57,45,52,46,52,48,54,45,49,46,51,53,45,52,46,55,55,45,51,46,57,57,99,45,48,46,48,55,56,45,48,46,53,54,49,45,48,46,48,53,51,45,49,
46,49,52,49,45,48,46,48,53,49,45,49,46,55,49,49,99,48,46,48,49,50,45,49,50,46,54,55,52,45,48,46,48,49,50,45,50,53,46,51,52,56,44,48,46,48,54,54,45,51,56,46,48,50,51,13,10,9,9,99,48,46,48,50,53,45,52,45,
50,46,57,54,55,45,55,46,54,48,53,45,54,46,56,56,53,45,56,46,48,51,49,99,45,52,46,52,52,51,45,48,46,52,56,50,45,56,46,48,55,44,50,46,49,53,45,56,46,56,56,51,44,54,46,52,53,51,99,45,48,46,49,55,52,44,48,
46,57,50,56,45,48,46,50,51,44,49,46,56,56,55,45,48,46,50,51,50,44,50,46,56,51,13,10,9,9,99,45,48,46,48,49,56,44,57,46,56,50,52,45,48,46,48,49,44,49,57,46,54,52,54,45,48,46,48,49,50,44,50,57,46,52,54,57,
99,48,44,48,46,53,55,45,48,46,48,50,44,49,46,49,52,51,45,48,46,48,49,54,44,49,46,55,49,53,99,48,46,48,49,52,44,49,46,53,55,56,45,49,46,52,53,57,44,50,46,57,48,56,45,50,46,57,50,52,44,50,46,57,50,13,10,
9,9,99,45,49,46,54,56,52,44,48,46,48,49,45,50,46,57,57,56,45,49,46,49,52,56,45,51,46,49,52,56,45,50,46,57,99,45,48,46,48,53,53,45,48,46,54,51,49,45,48,46,48,50,53,45,49,46,50,54,54,45,48,46,48,50,53,45,
49,46,57,99,48,45,50,50,46,52,57,56,44,48,45,52,52,46,57,57,56,44,48,45,54,55,46,52,57,54,13,10,9,9,99,48,45,48,46,54,57,55,44,48,46,48,50,51,45,49,46,51,57,53,45,48,46,48,49,56,45,50,46,48,57,50,99,45,
48,46,49,56,45,51,46,50,53,45,50,46,54,55,45,53,46,56,51,54,45,53,46,57,54,57,45,54,46,48,54,52,99,45,51,46,54,50,51,45,48,46,50,53,52,45,54,46,49,49,55,44,50,46,50,55,51,45,54,46,54,52,51,44,52,46,56,
49,49,13,10,9,9,99,45,48,46,49,57,49,44,48,46,57,49,56,45,48,46,50,53,56,44,49,46,56,55,57,45,48,46,50,54,44,50,46,56,50,50,99,45,48,46,48,49,54,44,49,49,46,57,49,52,45,48,46,48,49,44,50,51,46,56,50,56,
45,48,46,48,49,50,44,51,53,46,55,52,52,99,48,44,48,46,54,57,55,44,48,46,48,49,54,44,49,46,51,57,54,45,48,46,48,50,51,44,50,46,48,57,13,10,9,9,99,45,48,46,49,56,44,51,46,49,50,55,45,50,46,53,54,52,44,53,
46,55,48,55,45,53,46,53,55,50,44,54,46,48,52,57,99,45,51,46,50,51,52,44,48,46,51,54,55,45,54,46,49,52,49,45,49,46,52,54,51,45,55,46,48,50,55,45,52,46,53,51,57,99,45,48,46,50,54,45,48,46,56,57,54,45,48,
46,51,50,45,49,46,56,55,51,45,48,46,51,50,50,45,50,46,56,48,57,13,10,9,9,99,45,48,46,48,50,51,45,56,46,53,53,53,45,48,46,48,49,52,45,49,55,46,49,49,49,45,48,46,48,49,52,45,50,53,46,54,54,56,99,48,45,48,
46,52,52,53,44,48,46,48,50,53,45,48,46,56,57,49,45,48,46,48,49,45,49,46,51,51,99,45,48,46,48,50,57,45,48,46,51,55,53,45,48,46,48,55,56,45,48,46,55,53,56,45,48,46,50,48,53,45,49,46,49,48,53,13,10,9,9,99,
45,48,46,54,57,57,45,49,46,57,48,54,45,50,46,54,51,49,45,51,46,49,50,55,45,52,46,52,52,57,45,50,46,56,51,54,99,45,50,46,48,54,56,44,48,46,51,50,56,45,51,46,53,50,51,44,49,46,57,49,52,45,51,46,54,55,50,
44,52,46,48,49,50,99,45,48,46,48,50,55,44,48,46,51,55,55,45,48,46,48,48,50,44,48,46,55,54,45,48,46,48,48,50,44,49,46,49,51,57,13,10,9,9,99,48,46,48,48,50,44,57,46,53,55,44,48,46,48,48,50,44,49,57,46,49,
52,49,44,48,46,48,48,50,44,50,56,46,55,49,49,99,48,44,48,46,53,48,54,44,48,46,48,49,56,44,49,46,48,49,56,45,48,46,48,50,55,44,49,46,53,49,56,99,45,48,46,49,49,53,44,49,46,50,57,57,45,48,46,57,56,54,44,
50,46,49,52,53,45,50,46,49,57,55,44,50,46,49,55,13,10,9,9,99,45,49,46,50,48,51,44,48,46,48,50,55,45,50,46,49,55,56,45,48,46,56,48,49,45,50,46,51,50,56,45,50,46,48,52,55,99,45,48,46,48,55,52,45,48,46,54,
50,53,45,48,46,48,51,57,45,49,46,50,54,54,45,48,46,48,51,57,45,49,46,56,57,56,99,45,48,46,48,48,50,45,49,51,46,53,54,52,45,48,46,48,48,56,45,50,55,46,49,50,53,44,48,46,48,48,54,45,52,48,46,54,56,57,13,
10,9,9,99,48,46,48,48,50,45,50,46,49,53,50,44,48,46,48,56,45,52,46,51,48,51,44,48,46,49,53,56,45,54,46,52,53,53,99,48,46,49,49,55,45,51,46,50,53,45,50,46,50,48,51,45,54,46,50,49,53,45,53,46,50,56,51,45,
54,46,55,48,53,99,45,51,46,52,53,57,45,48,46,53,53,51,45,54,46,53,50,53,44,49,46,51,55,49,45,55,46,52,57,52,44,52,46,54,54,50,13,10,9,9,99,45,48,46,50,57,51,44,48,46,57,57,54,45,48,46,50,56,55,44,49,46,
57,57,56,45,48,46,50,56,55,44,51,46,48,49,99,48,44,50,51,46,48,55,44,48,44,52,54,46,49,51,57,44,48,44,54,57,46,50,48,57,99,48,44,48,46,54,57,55,45,48,46,48,49,44,49,46,51,57,53,45,48,46,48,50,49,44,50,
46,48,57,13,10,9,9,99,45,48,46,48,49,52,44,48,46,55,56,53,45,48,46,50,53,56,44,49,46,52,57,54,45,48,46,55,49,53,44,50,46,49,50,55,99,45,49,46,48,55,54,44,49,46,52,56,52,45,50,46,53,52,53,44,50,46,48,53,
49,45,52,46,51,50,54,44,49,46,55,51,99,45,49,46,54,56,50,45,48,46,51,48,49,45,51,46,48,52,51,45,49,46,55,55,53,45,51,46,50,55,51,45,51,46,53,51,49,13,10,9,9,99,45,48,46,48,57,45,48,46,54,56,54,45,48,46,
48,53,57,45,49,46,51,57,49,45,48,46,48,53,57,45,50,46,48,56,56,99,45,48,46,48,48,50,45,49,54,46,54,55,45,48,46,48,48,50,45,51,51,46,51,51,54,45,48,46,48,48,52,45,53,48,46,48,48,50,99,48,45,48,46,55,54,
50,44,48,46,48,51,49,45,49,46,53,50,53,45,48,46,48,50,55,45,50,46,50,56,51,13,10,9,9,99,45,48,46,50,55,51,45,51,46,53,55,52,45,51,46,50,56,53,45,54,46,51,49,52,45,54,46,56,55,49,45,54,46,51,48,55,99,45,
51,46,54,49,55,44,48,46,48,49,45,54,46,56,55,49,44,51,46,48,50,55,45,54,46,56,48,55,44,55,46,49,55,50,99,48,46,48,54,54,44,52,46,51,55,51,44,48,46,48,51,55,44,56,46,55,52,52,44,48,46,48,52,53,44,49,51,
46,49,49,55,13,10,9,9,99,48,46,48,48,50,44,48,46,53,48,54,44,48,46,48,49,56,44,49,46,48,49,56,45,48,46,48,51,57,44,49,46,53,50,99,45,48,46,48,57,56,44,48,46,56,54,55,45,48,46,55,49,49,44,49,46,52,48,54,
45,49,46,53,49,52,44,49,46,51,56,55,99,45,48,46,55,56,57,45,48,46,48,49,56,45,49,46,51,57,56,45,48,46,53,55,52,45,49,46,52,56,45,49,46,52,51,57,13,10,9,9,99,45,48,46,48,53,57,45,48,46,54,50,57,45,48,46,
48,51,53,45,49,46,50,54,56,45,48,46,48,51,53,45,49,46,57,99,45,48,46,48,48,50,45,49,52,46,55,54,54,45,48,46,48,48,50,45,50,57,46,53,51,51,45,48,46,48,48,50,45,52,52,46,50,57,57,99,48,45,48,46,53,55,44,
48,46,48,51,51,45,49,46,49,52,53,45,48,46,48,50,49,45,49,46,55,48,57,13,10,9,9,99,45,48,46,50,52,50,45,50,46,53,51,57,45,50,46,49,52,53,45,52,46,52,54,53,45,52,46,52,56,54,45,52,46,54,54,52,99,45,51,46,
49,48,55,45,48,46,50,54,52,45,53,46,51,54,49,44,50,46,49,56,56,45,53,46,51,55,55,44,52,46,56,55,53,99,45,48,46,48,48,54,44,48,46,56,56,57,44,48,46,48,50,55,44,49,46,55,55,53,44,48,46,48,50,55,44,50,46,
54,54,50,13,10,9,9,99,48,46,48,48,50,44,52,51,46,52,49,50,44,48,44,56,54,46,56,50,52,44,48,44,49,51,48,46,50,51,56,99,48,44,48,46,53,55,45,48,46,48,48,54,44,49,46,49,51,57,45,48,46,48,48,54,44,49,46,55,
48,57,99,45,48,46,48,48,50,44,49,46,55,53,54,45,48,46,55,52,50,44,51,46,49,56,45,49,46,57,53,53,44,52,46,51,57,51,13,10,9,9,99,45,48,46,55,55,51,44,48,46,55,55,45,49,46,54,56,56,44,49,46,51,51,50,45,50,
46,54,56,54,44,49,46,55,54,50,99,45,49,46,56,53,53,44,48,46,56,48,53,45,51,46,56,49,50,44,49,46,48,52,49,45,53,46,55,55,49,44,48,46,54,56,56,99,45,51,46,48,56,50,45,48,46,53,53,55,45,53,46,54,48,53,45,
49,46,57,53,57,45,54,46,56,48,57,45,53,46,48,57,52,13,10,9,9,67,52,57,46,54,57,53,44,55,54,54,46,55,53,50,44,52,57,46,51,54,53,44,55,54,54,46,53,48,50,44,52,57,46,49,50,57,44,55,54,54,46,50,49,49,122,
34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,49,48,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,
105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,52,57,46,49,50,57,44,50,52,52,46,48,57,51,99,48,45,49,56,44,48,45,51,54,44,48,45,53,52,99,48,46,50,53,52,45,48,46,49,53,
56,44,49,46,51,50,54,45,49,46,52,54,57,44,49,46,54,49,49,45,49,46,57,54,49,13,10,9,9,99,49,48,46,50,55,53,45,49,55,46,56,53,44,50,51,46,55,56,57,45,51,50,46,55,54,50,44,52,48,46,54,53,50,45,52,52,46,53,
56,54,99,50,49,46,52,55,53,45,49,53,46,48,53,56,44,52,53,46,51,54,55,45,50,51,46,50,56,53,44,55,49,46,53,50,55,45,50,52,46,56,50,52,99,56,46,54,48,57,45,48,46,53,48,56,44,49,55,46,50,49,57,45,48,46,49,
57,55,44,50,53,46,55,57,49,44,48,46,57,54,49,13,10,9,9,99,54,46,54,44,48,46,56,57,51,44,49,51,46,49,48,55,44,50,46,49,56,50,44,49,57,46,53,48,56,44,51,46,57,56,52,99,51,57,46,52,57,44,49,49,46,49,49,57,
44,55,50,46,50,49,55,44,51,57,46,53,56,55,44,56,56,46,56,51,54,44,55,55,46,50,52,52,99,51,46,56,55,51,44,56,46,55,55,55,44,54,46,55,57,53,44,49,55,46,56,54,49,44,56,46,55,53,52,44,50,55,46,50,53,52,13,
10,9,9,99,48,46,48,56,44,48,46,51,56,51,44,48,46,48,48,50,44,48,46,56,57,49,44,48,46,53,54,50,44,48,46,57,57,52,99,48,46,56,51,45,51,46,50,57,57,44,49,46,53,56,45,54,46,53,54,56,44,50,46,52,55,51,45,57,
46,55,57,55,99,49,50,46,48,53,53,45,52,51,46,53,56,56,44,52,53,46,54,48,53,45,55,57,46,48,51,51,44,56,56,46,52,57,52,45,57,51,46,53,50,56,13,10,9,9,99,56,46,54,53,56,45,50,46,57,50,55,44,49,55,46,53,48,
56,45,53,46,48,49,51,44,50,54,46,53,56,45,54,46,49,53,53,99,52,46,55,49,55,45,48,46,53,57,52,44,57,46,52,52,51,45,48,46,57,56,57,44,49,52,46,49,57,57,45,49,46,49,99,55,46,54,56,45,48,46,49,55,56,44,49,
53,46,51,50,56,44,48,46,49,55,52,44,50,50,46,57,51,52,44,49,46,50,52,51,13,10,9,9,99,55,46,52,48,54,44,49,46,48,52,50,44,49,52,46,55,48,53,44,50,46,54,49,44,50,49,46,56,50,54,44,52,46,57,48,55,99,51,52,
46,49,51,53,44,49,49,46,48,49,51,44,54,48,46,50,56,57,44,51,50,46,48,49,55,44,55,56,46,53,53,53,44,54,50,46,56,54,57,99,48,46,51,52,54,44,48,46,53,56,52,44,48,46,55,49,51,44,49,46,49,53,54,44,49,46,48,
55,44,49,46,55,51,52,13,10,9,9,99,48,44,49,56,44,48,44,51,53,46,57,57,56,44,48,44,53,51,46,57,57,56,99,45,48,46,51,54,55,45,48,46,53,55,45,48,46,55,53,50,45,49,46,49,51,49,45,49,46,48,57,54,45,49,46,55,
49,53,99,45,49,55,46,53,57,54,45,50,57,46,55,54,45,52,50,46,54,53,50,45,53,48,46,52,51,52,45,55,53,46,51,50,45,54,49,46,56,49,49,13,10,9,9,99,45,56,46,55,53,50,45,51,46,48,52,55,45,49,55,46,55,53,56,45,
53,46,48,52,55,45,50,54,46,57,54,49,45,54,46,49,56,52,99,45,51,46,57,54,53,45,48,46,52,56,56,45,55,46,57,51,57,45,48,46,56,54,57,45,49,49,46,57,50,54,45,48,46,57,57,52,99,45,55,46,54,54,56,45,48,46,50,
51,54,45,49,53,46,51,50,50,44,48,46,48,48,56,45,50,50,46,57,52,53,44,49,46,48,50,49,13,10,9,9,99,45,53,46,56,52,52,44,48,46,55,55,55,45,49,49,46,54,50,51,44,49,46,56,52,52,45,49,55,46,51,50,50,44,51,46,
51,52,99,45,50,49,46,50,54,56,44,53,46,53,56,45,52,48,46,49,55,56,44,49,53,46,54,50,53,45,53,54,46,53,57,50,44,51,48,46,50,52,52,99,45,50,49,46,49,50,49,44,49,56,46,56,49,49,45,51,53,46,50,53,44,52,49,
46,57,51,56,45,52,50,46,51,49,52,44,54,57,46,51,53,13,10,9,9,99,45,48,46,52,56,56,44,49,46,57,45,48,46,57,48,54,44,51,46,56,49,56,45,49,46,51,55,49,44,53,46,55,50,55,99,45,48,46,48,54,54,44,48,46,50,55,
53,45,48,46,48,55,54,44,48,46,54,53,54,45,48,46,54,53,52,44,48,46,53,56,50,99,45,48,46,49,54,50,45,48,46,54,50,51,45,48,46,51,52,45,49,46,50,56,51,45,48,46,53,48,54,45,49,46,57,52,53,13,10,9,9,99,45,48,
46,55,48,55,45,50,46,56,50,52,45,49,46,51,49,56,45,53,46,54,55,56,45,50,46,49,51,51,45,56,46,52,55,49,99,45,56,46,48,49,50,45,50,55,46,52,50,54,45,50,50,46,57,56,52,45,53,48,46,51,52,45,52,53,46,48,51,
53,45,54,56,46,52,57,99,45,50,51,46,54,53,54,45,49,57,46,52,55,53,45,53,48,46,57,52,51,45,50,57,46,55,57,49,45,56,49,46,53,50,49,45,51,49,46,51,50,56,13,10,9,9,99,45,56,46,56,48,55,45,48,46,52,52,49,45,
49,55,46,53,57,56,44,48,46,48,52,49,45,50,54,46,51,51,56,44,49,46,51,53,53,99,45,54,46,55,55,51,44,49,46,48,50,45,49,51,46,52,52,49,44,50,46,52,54,55,45,49,57,46,57,56,52,44,52,46,52,55,49,99,45,51,51,
46,56,53,53,44,49,48,46,51,54,53,45,54,50,46,50,57,49,44,51,51,46,49,50,53,45,55,57,46,56,49,56,44,54,51,46,56,53,53,13,10,9,9,99,45,48,46,50,56,49,44,48,46,52,57,52,45,48,46,53,52,51,44,49,46,48,48,54,
45,48,46,56,55,55,44,49,46,52,54,51,67,52,57,46,54,54,50,44,50,52,51,46,57,55,44,52,57,46,51,53,52,44,50,52,51,46,57,57,57,44,52,57,46,49,50,57,44,50,52,52,46,48,57,51,122,34,47,62,13,10,60,47,103,62,
13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,49,49,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,112,45,114,117,108,101,
61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,53,54,50,46,53,48,50,44,51,52,49,46,52,52,50,99,45,54,46,56,48,53,45,49,50,46,51,54,53,45,49,53,46,51,54,55,45,50,51,46,51,55,57,45,50,53,46,54,48,
50,45,51,51,46,48,56,50,13,10,9,9,99,45,49,55,46,56,48,55,45,49,54,46,56,55,57,45,51,56,46,54,52,53,45,50,56,46,50,53,45,54,50,46,52,54,51,45,51,52,46,49,50,55,99,45,53,46,50,56,55,45,49,46,51,48,53,45,
49,48,46,54,52,53,45,50,46,50,53,52,45,49,54,46,48,54,50,45,50,46,56,55,51,99,45,53,46,53,52,55,45,48,46,54,51,51,45,49,49,46,49,45,49,46,48,50,51,45,49,54,46,54,56,52,45,49,46,48,50,55,13,10,9,9,99,45,
52,46,51,49,49,45,48,46,48,48,52,45,56,46,54,48,55,44,48,46,50,55,55,45,49,50,46,57,44,48,46,54,54,99,45,49,50,46,53,48,50,44,49,46,49,49,53,45,50,52,46,54,44,51,46,57,54,53,45,51,54,46,51,48,57,44,56,
46,52,52,57,99,45,52,50,46,50,57,57,44,49,54,46,49,57,53,45,55,51,46,54,57,53,44,53,50,46,49,51,57,45,56,52,46,52,53,57,44,57,52,46,57,55,51,13,10,9,9,99,45,48,46,53,53,53,44,50,46,50,48,57,45,49,46,48,
54,49,44,52,46,52,50,56,45,49,46,53,56,56,44,54,46,54,52,49,99,45,48,46,54,49,51,44,48,46,48,53,49,45,48,46,53,51,49,45,48,46,52,51,52,45,48,46,53,57,54,45,48,46,55,53,50,99,45,49,46,54,50,55,45,55,46,
56,51,45,51,46,57,49,56,45,49,53,46,52,54,49,45,54,46,56,54,53,45,50,50,46,56,57,54,13,10,9,9,99,45,49,53,46,57,49,56,45,52,48,46,49,56,54,45,53,48,46,50,54,52,45,55,48,46,56,55,49,45,57,49,46,57,56,54,
45,56,50,46,50,49,51,99,45,53,46,57,57,54,45,49,46,54,51,49,45,49,50,46,48,54,56,45,50,46,56,55,53,45,49,56,46,50,50,51,45,51,46,54,55,99,45,54,46,55,57,49,45,48,46,56,55,55,45,49,51,46,54,50,49,45,49,
46,51,51,56,45,50,48,46,52,55,53,45,49,46,49,55,50,13,10,9,9,99,45,52,46,55,53,50,44,48,46,49,49,53,45,57,46,52,56,54,44,48,46,52,53,57,45,49,52,46,50,49,49,44,49,46,48,49,52,99,45,49,49,46,52,52,49,44,
49,46,51,52,52,45,50,50,46,53,52,53,44,52,46,48,53,53,45,51,51,46,50,52,56,44,56,46,50,56,55,99,45,51,48,46,51,50,52,44,49,49,46,57,57,52,45,53,51,46,54,51,51,44,51,50,46,49,55,50,45,55,48,46,48,54,49,
44,54,48,46,51,50,50,13,10,9,9,99,45,48,46,51,49,56,44,48,46,53,52,55,45,48,46,54,49,49,44,49,46,49,49,51,45,48,46,57,56,44,49,46,54,50,53,99,45,48,46,49,48,57,44,48,46,49,53,50,45,48,46,52,51,54,44,48,
46,49,53,50,45,48,46,54,54,50,44,48,46,50,50,51,99,48,45,49,55,46,55,52,54,44,48,45,51,53,46,52,57,50,44,48,45,53,51,46,50,51,56,13,10,9,9,99,48,46,50,50,53,45,48,46,48,56,50,44,49,46,49,57,49,45,49,46,
49,49,55,44,49,46,52,52,51,45,49,46,53,53,55,99,49,49,46,53,57,52,45,50,48,46,50,53,44,50,55,46,50,52,54,45,51,54,46,54,50,51,44,52,55,46,48,50,51,45,52,57,46,48,48,54,99,50,48,46,54,50,53,45,49,50,46,
57,49,52,44,52,51,46,49,54,54,45,49,57,46,55,53,50,44,54,55,46,52,52,55,45,50,48,46,56,51,13,10,9,9,99,56,46,54,50,51,45,48,46,51,56,51,44,49,55,46,50,50,49,44,48,46,48,57,44,50,53,46,55,55,49,44,49,46,
51,55,53,99,53,46,52,53,49,44,48,46,56,50,44,49,48,46,56,51,54,44,49,46,57,49,50,44,49,54,46,49,53,50,44,51,46,51,54,49,99,50,48,46,51,55,57,44,53,46,53,54,50,44,51,56,46,53,52,57,44,49,53,46,50,55,57,
44,53,52,46,52,51,50,44,50,57,46,49,56,54,13,10,9,9,99,49,57,46,52,56,44,49,55,46,48,53,53,44,51,51,46,49,54,50,44,51,55,46,57,52,57,44,52,49,46,48,49,52,44,54,50,46,54,51,57,99,49,46,51,53,57,44,52,46,
50,56,57,44,50,46,52,56,54,44,56,46,54,51,57,44,51,46,52,44,49,51,46,48,52,51,99,48,46,48,55,52,44,48,46,51,53,55,44,48,46,48,53,49,44,48,46,55,55,57,44,48,46,53,57,52,44,48,46,57,52,49,13,10,9,9,99,48,
46,48,54,54,45,48,46,50,50,55,44,48,46,49,52,49,45,48,46,52,52,57,44,48,46,49,57,55,45,48,46,54,55,54,99,48,46,56,52,45,51,46,51,55,55,44,49,46,53,53,51,45,54,46,55,57,51,44,50,46,53,51,55,45,49,48,46,
49,50,57,99,57,46,49,54,50,45,51,49,46,48,56,54,44,50,54,46,57,55,51,45,53,54,46,48,54,54,44,53,51,46,52,45,55,52,46,55,55,55,13,10,9,9,99,50,50,46,48,50,51,45,49,53,46,53,57,50,44,52,54,46,54,55,56,45,
50,51,46,55,50,55,44,55,51,46,54,48,52,45,50,52,46,57,54,49,99,54,46,53,50,51,45,48,46,50,57,57,44,49,51,46,48,52,53,45,48,46,48,56,50,44,49,57,46,53,53,51,44,48,46,54,99,52,46,54,54,54,44,48,46,52,56,
56,44,57,46,51,48,51,44,49,46,49,52,49,44,49,51,46,56,56,57,44,50,46,48,56,56,13,10,9,9,99,49,52,46,52,51,44,50,46,57,55,55,44,50,56,46,48,56,44,56,46,48,54,52,44,52,48,46,56,51,54,44,49,53,46,52,53,55,
99,50,49,46,57,56,54,44,49,50,46,55,52,50,44,51,57,46,51,50,56,44,51,48,46,49,48,53,44,53,49,46,55,55,57,44,53,50,46,50,57,57,99,48,46,48,52,57,44,48,46,48,57,44,48,46,49,57,57,44,48,46,49,50,53,44,48,
46,51,48,49,44,48,46,49,56,54,13,10,9,9,67,53,54,50,46,53,48,50,44,51,48,53,46,54,57,54,44,53,54,50,46,53,48,50,44,51,50,51,46,53,54,57,44,53,54,50,46,53,48,50,44,51,52,49,46,52,52,50,122,34,47,62,13,
10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,49,50,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,112,45,
114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,49,57,48,46,57,50,44,53,49,49,46,48,50,55,99,45,50,54,46,52,52,51,45,48,46,51,52,52,45,52,57,46,57,53,49,45,56,46,55,53,56,45,55,48,
46,48,57,45,50,53,46,57,56,52,13,10,9,9,99,45,49,55,46,57,57,56,45,49,53,46,51,56,57,45,50,57,46,54,53,52,45,51,52,46,55,53,54,45,51,53,46,48,50,57,45,53,55,46,56,51,99,45,50,46,50,57,53,45,57,46,56,53,
57,45,51,46,49,49,49,45,49,57,46,56,55,50,45,50,46,53,50,55,45,51,48,46,48,48,53,99,49,46,50,51,50,45,50,49,46,51,50,50,44,56,46,48,53,57,45,52,48,46,54,54,44,50,48,46,55,51,56,45,53,55,46,56,49,56,13,
10,9,9,99,49,53,46,50,55,51,45,50,48,46,54,55,44,51,53,46,52,54,55,45,51,52,46,50,50,57,44,54,48,46,51,51,54,45,52,48,46,55,53,52,99,53,46,54,52,49,45,49,46,52,55,57,44,49,49,46,51,56,57,45,50,46,51,55,
53,44,49,55,46,50,48,55,45,50,46,56,56,55,99,53,46,51,56,51,45,48,46,52,55,51,44,49,48,46,55,54,56,45,48,46,53,50,53,44,49,54,46,49,52,49,45,48,46,50,48,55,13,10,9,9,99,56,46,54,56,56,44,48,46,53,49,56,
44,49,55,46,49,57,57,44,50,46,48,57,52,44,50,53,46,53,49,50,44,52,46,55,50,49,99,51,51,46,54,57,55,44,49,48,46,54,52,53,44,53,57,46,57,54,49,44,51,54,46,56,54,55,44,55,48,46,53,57,52,44,55,48,46,53,50,
55,99,49,46,57,51,50,44,54,46,49,49,49,44,51,46,51,52,44,49,50,46,51,52,52,44,52,46,48,54,50,44,49,56,46,55,49,55,13,10,9,9,99,48,46,51,49,52,44,50,46,55,54,56,44,48,46,53,50,49,44,53,46,53,52,57,44,48,
46,55,52,54,44,56,46,51,50,52,99,48,46,49,55,52,44,50,46,49,52,56,44,48,46,51,52,56,44,52,46,50,57,51,44,48,46,52,51,54,44,54,46,52,52,53,99,48,46,53,51,55,44,49,51,46,48,49,49,45,49,46,56,56,49,44,50,
53,46,52,53,56,45,55,46,49,54,52,44,51,55,46,51,53,51,13,10,9,9,99,45,48,46,56,55,51,44,49,46,57,54,55,45,49,46,55,54,52,44,51,46,57,50,56,45,50,46,54,53,50,44,53,46,56,56,55,99,45,49,51,46,52,53,53,44,
50,57,46,54,55,52,45,51,57,46,51,53,57,44,53,49,46,54,48,50,45,55,48,46,56,55,53,44,53,57,46,57,52,53,99,45,53,46,50,48,53,44,49,46,51,55,55,45,49,48,46,52,57,44,50,46,51,53,52,45,49,53,46,56,53,57,44,
50,46,56,56,49,13,10,9,9,67,49,57,56,46,54,52,53,44,53,49,48,46,55,49,55,44,49,57,52,46,55,57,55,44,53,49,49,46,48,50,44,49,57,48,46,57,50,44,53,49,49,46,48,50,55,122,32,77,50,57,53,46,53,49,50,44,52,
48,55,46,57,49,49,99,45,48,46,48,55,52,45,52,52,46,56,51,52,45,51,54,46,51,51,45,56,48,46,48,48,54,45,55,57,46,55,52,56,45,56,48,46,50,49,55,13,10,9,9,99,45,52,51,46,57,50,56,45,48,46,50,49,51,45,56,48,
46,52,52,53,44,51,53,46,50,52,56,45,56,48,46,53,50,55,44,55,57,46,57,56,50,99,45,48,46,48,56,54,44,52,52,46,57,56,55,44,51,54,46,53,52,49,44,56,48,46,50,52,53,44,56,48,46,48,48,56,44,56,48,46,51,49,13,
10,9,9,67,50,53,56,46,53,54,54,44,52,56,56,46,48,53,51,44,50,57,53,46,51,53,50,44,52,53,51,46,48,56,50,44,50,57,53,46,53,49,50,44,52,48,55,46,57,49,49,122,34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,
100,61,34,76,97,121,101,114,95,51,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,
111,100,100,34,32,100,61,34,77,53,50,57,46,48,49,56,44,52,48,50,46,56,49,99,45,48,46,48,53,55,44,52,57,46,49,49,54,45,51,50,46,52,44,57,48,46,55,49,56,45,55,55,46,56,50,44,49,48,51,46,57,52,54,13,10,9,
9,99,45,53,46,52,55,55,44,49,46,53,57,54,45,49,49,46,48,53,57,44,50,46,55,52,50,45,49,54,46,55,50,49,44,51,46,52,50,50,99,45,53,46,55,51,44,48,46,54,56,57,45,49,49,46,52,56,54,44,49,45,49,55,46,50,54,
52,44,48,46,55,54,56,99,45,52,50,46,55,51,52,45,49,46,55,49,57,45,55,56,46,48,49,54,45,50,55,46,53,52,51,45,57,52,46,50,53,56,45,54,51,46,50,52,54,13,10,9,9,99,45,49,46,56,48,57,45,51,46,57,55,53,45,51,
46,54,56,56,45,55,46,57,50,45,53,46,48,56,56,45,49,50,46,48,55,99,45,50,46,49,49,55,45,54,46,50,55,45,51,46,53,48,50,45,49,50,46,54,56,50,45,52,46,49,52,49,45,49,57,46,50,55,49,99,45,48,46,52,57,54,45,
53,46,49,50,54,45,48,46,52,52,51,45,49,48,46,50,54,49,45,48,46,51,48,51,45,49,53,46,51,56,54,13,10,9,9,99,48,46,56,50,56,45,50,57,46,57,54,53,44,49,50,46,49,48,55,45,53,53,46,51,56,55,44,51,51,46,54,57,
53,45,55,54,46,49,50,53,99,49,51,46,56,54,51,45,49,51,46,51,49,54,44,51,48,46,51,50,54,45,50,50,46,48,55,44,52,57,46,48,49,56,45,50,54,46,53,56,54,99,53,46,49,55,50,45,49,46,50,53,50,44,49,48,46,52,50,
50,45,50,46,48,53,51,44,49,53,46,55,51,52,45,50,46,53,49,56,13,10,9,9,99,53,46,51,56,51,45,48,46,52,55,51,44,49,48,46,55,55,45,48,46,53,51,53,44,49,54,46,49,52,51,45,48,46,49,57,55,99,49,51,46,50,55,51,
44,48,46,56,51,44,50,53,46,57,56,56,44,52,44,51,56,46,48,56,54,44,57,46,53,54,52,99,50,56,46,56,48,57,44,49,51,46,50,52,54,44,53,48,46,50,55,57,44,51,56,46,51,52,52,44,53,56,46,57,48,50,44,54,56,46,56,
53,50,13,10,9,9,99,49,46,54,48,52,44,53,46,54,55,56,44,50,46,55,50,51,44,49,49,46,52,53,49,44,51,46,51,52,52,44,49,55,46,51,50,52,67,53,50,56,46,55,54,54,44,51,57,53,46,50,53,57,44,53,50,57,46,48,51,53,
44,51,57,57,46,50,51,57,44,53,50,57,46,48,49,56,44,52,48,50,46,56,49,122,32,77,52,55,55,46,50,56,53,44,52,48,56,46,56,55,13,10,9,9,99,45,48,46,48,51,55,45,52,52,46,50,48,53,45,51,53,46,54,48,53,45,56,
48,46,49,48,50,45,55,57,46,57,51,50,45,56,48,46,50,49,55,99,45,52,52,46,54,57,53,45,48,46,49,49,53,45,56,48,46,51,54,49,44,51,54,46,48,53,57,45,56,48,46,51,53,53,44,56,48,46,49,53,56,99,48,46,48,48,50,
44,52,51,46,55,50,50,44,51,53,46,49,56,57,44,56,48,46,48,52,54,44,56,48,46,48,49,44,56,48,46,49,49,54,13,10,9,9,67,52,52,49,46,55,52,44,52,56,56,46,57,57,52,44,52,55,55,46,49,54,56,44,52,53,50,46,56,57,
49,44,52,55,55,46,50,56,53,44,52,48,56,46,56,55,122,34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,52,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,
101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,51,48,54,46,49,49,49,44,52,52,57,46,57,50,56,99,49,51,46,52,54,51,44,
49,51,46,52,54,51,44,50,54,46,56,48,49,44,50,54,46,56,48,51,44,52,48,46,49,53,44,52,48,46,49,53,50,13,10,9,9,99,45,48,46,56,48,57,44,49,46,48,52,51,45,51,56,46,50,53,52,44,51,56,46,53,52,55,45,51,57,46,
57,57,52,44,52,48,46,48,50,53,99,45,48,46,50,55,49,45,48,46,49,57,51,45,48,46,53,56,52,45,48,46,51,55,57,45,48,46,56,53,55,45,48,46,54,49,49,99,45,48,46,50,56,57,45,48,46,50,52,50,45,48,46,53,52,49,45,
48,46,53,51,49,45,48,46,56,49,49,45,48,46,56,48,49,13,10,9,9,99,45,49,50,46,51,54,51,45,49,50,46,51,54,51,45,50,52,46,55,50,53,45,50,52,46,55,50,55,45,51,55,46,48,56,56,45,51,55,46,48,57,99,45,48,46,52,
57,45,48,46,52,56,54,45,48,46,57,55,53,45,48,46,57,56,50,45,49,46,51,55,57,45,49,46,51,57,51,99,45,48,46,48,49,54,45,48,46,50,48,53,45,48,46,48,51,51,45,48,46,50,54,56,45,48,46,48,49,56,45,48,46,51,50,
13,10,9,9,99,48,46,48,49,54,45,48,46,48,54,49,44,48,46,48,53,49,45,48,46,49,49,57,44,48,46,48,57,52,45,48,46,49,54,50,99,49,51,46,49,54,45,49,51,46,49,55,56,44,50,54,46,51,50,50,45,50,54,46,51,53,52,44,
51,57,46,52,56,56,45,51,57,46,53,50,51,67,51,48,53,46,56,50,52,44,52,53,48,46,48,55,54,44,51,48,54,46,48,48,50,44,52,52,57,46,57,57,56,44,51,48,54,46,49,49,49,44,52,52,57,46,57,50,56,122,13,10,9,9,34,
47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,53,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,
112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,50,57,51,46,56,49,56,44,52,48,55,46,57,51,53,99,45,48,46,48,52,49,44,52,51,46,51,53,54,45,51,53,46,50,56,49,44,55,56,46,53,53,
45,55,56,46,55,57,49,44,55,56,46,51,53,54,13,10,9,9,99,45,52,51,46,55,48,51,45,48,46,49,56,57,45,55,56,46,50,50,55,45,51,53,46,56,53,55,45,55,56,46,49,51,53,45,55,56,46,54,52,54,99,48,46,48,57,45,52,50,
46,50,56,55,44,51,52,46,50,53,56,45,55,56,46,51,55,53,44,55,56,46,55,48,55,45,55,56,46,50,53,52,13,10,9,9,67,50,53,57,46,52,56,52,44,51,50,57,46,53,49,49,44,50,57,51,46,56,57,54,44,51,54,53,46,49,52,57,
44,50,57,51,46,56,49,56,44,52,48,55,46,57,51,53,122,32,77,49,52,49,46,53,56,44,52,48,56,46,50,48,52,99,45,48,46,48,50,44,52,48,46,52,55,57,44,51,50,46,52,52,49,44,55,51,46,56,49,55,44,55,51,46,54,50,49,
44,55,51,46,56,55,56,13,10,9,9,99,52,49,46,49,53,56,44,48,46,48,54,52,44,55,51,46,55,57,55,45,51,51,46,49,53,50,44,55,51,46,56,51,45,55,51,46,54,53,53,99,48,46,48,51,51,45,52,48,46,54,49,49,45,51,50,46,
54,56,45,55,51,46,55,55,57,45,55,51,46,55,48,51,45,55,51,46,55,56,55,13,10,9,9,67,49,55,52,46,51,51,52,44,51,51,52,46,54,51,52,44,49,52,49,46,55,51,56,44,51,54,55,46,55,49,54,44,49,52,49,46,53,56,44,52,
48,56,46,50,48,52,122,34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,54,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,
100,100,34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,52,55,53,46,53,57,44,52,48,56,46,57,51,53,99,45,48,46,48,56,44,52,51,46,53,55,53,45,51,53,46,53,57,
44,55,56,46,52,49,57,45,55,56,46,54,53,44,55,56,46,51,48,56,13,10,9,9,99,45,52,51,46,51,56,55,45,48,46,49,49,49,45,55,56,46,52,48,56,45,51,53,46,53,50,53,45,55,56,46,50,54,56,45,55,56,46,54,57,52,99,48,
46,49,51,57,45,52,51,46,51,48,57,44,51,53,46,53,49,50,45,55,56,46,50,53,54,44,55,56,46,53,53,57,45,55,56,46,50,49,53,13,10,9,9,67,52,51,57,46,56,57,54,44,51,51,48,46,51,55,52,44,52,55,53,46,54,53,44,51,
54,53,46,48,50,50,44,52,55,53,46,53,57,44,52,48,56,46,57,51,53,122,32,77,51,50,51,46,52,54,51,44,52,48,56,46,55,55,52,99,48,46,48,49,50,44,52,48,46,50,53,55,44,51,50,46,52,52,51,44,55,51,46,55,51,57,44,
55,51,46,55,57,53,44,55,51,46,54,56,55,13,10,9,9,99,52,49,46,54,56,56,45,48,46,48,53,51,44,55,51,46,55,49,51,45,51,51,46,57,56,44,55,51,46,54,52,54,45,55,51,46,56,52,49,99,45,48,46,48,54,56,45,51,57,46,
57,54,49,45,51,50,46,51,54,53,45,55,51,46,55,56,51,45,55,52,46,48,56,54,45,55,51,46,53,57,54,13,10,9,9,67,51,53,53,46,55,54,44,51,51,53,46,50,49,44,51,50,51,46,52,52,57,44,51,54,56,46,53,52,52,44,51,50,
51,46,52,54,51,44,52,48,56,46,55,55,52,122,34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,55,34,62,13,10,9,60,112,97,116,104,32,102,105,108,108,45,114,117,108,101,61,34,
101,118,101,110,111,100,100,34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,50,50,50,46,53,54,56,44,52,53,57,46,56,56,49,99,45,50,56,46,55,55,53,45,48,46,48,
55,54,45,53,50,46,48,50,57,45,50,51,46,53,50,51,45,53,49,46,57,48,54,45,53,50,46,50,56,50,13,10,9,9,99,48,46,49,50,51,45,50,57,46,48,51,51,44,50,51,46,57,53,51,45,53,50,46,48,57,44,53,50,46,53,50,55,45,
53,49,46,56,53,53,99,50,56,46,49,54,52,44,48,46,50,51,50,44,53,49,46,55,56,53,44,50,51,46,50,51,52,44,53,49,46,54,50,49,44,53,50,46,51,56,51,13,10,9,9,67,50,55,52,46,54,53,44,52,51,54,46,56,57,49,44,50,
53,49,46,49,57,57,44,52,53,57,46,57,57,54,44,50,50,50,46,53,54,56,44,52,53,57,46,56,56,49,122,34,47,62,13,10,60,47,103,62,13,10,60,103,32,105,100,61,34,76,97,121,101,114,95,56,34,62,13,10,9,60,112,97,
116,104,32,102,105,108,108,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,99,108,105,112,45,114,117,108,101,61,34,101,118,101,110,111,100,100,34,32,100,61,34,77,52,52,52,46,48,51,55,44,52,
48,56,46,56,99,45,48,46,48,51,53,44,50,57,46,49,50,52,45,50,51,46,55,56,53,44,53,50,46,49,57,50,45,53,50,46,51,52,56,44,53,50,46,48,52,52,13,10,9,9,99,45,50,56,46,52,54,55,45,48,46,49,53,45,53,49,46,56,
54,57,45,50,51,46,51,48,51,45,53,49,46,56,48,55,45,53,50,46,50,48,54,99,48,46,48,54,50,45,50,56,46,55,54,56,44,50,51,46,53,49,56,45,53,50,46,49,52,51,44,53,50,46,52,52,51,45,53,49,46,57,52,51,13,10,9,
9,67,52,50,48,46,56,53,55,44,51,53,54,46,56,56,56,44,52,52,52,46,48,52,55,44,51,56,48,46,48,54,51,44,52,52,52,46,48,51,55,44,52,48,56,46,56,122,34,47,62,13,10,60,47,103,62,13,10,60,47,115,118,103,62,13,
10,0,0};

const char* StompGui::owl_illustration_illustrator_svg = (const char*) resource_StompGui_owl_illustration_illustrator_svg;
const int StompGui::owl_illustration_illustrator_svgSize = 19418;

// JUCER_RESOURCE: owlFaceplate_png, 63100, "../../StompBox/drawings/Owl Faceplate.png"
static const unsigned char resource_StompGui_owlFaceplate_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,5,78,0,0,4,37,8,6,0,0,0,105,129,87,213,0,0,0,9,112,72,89,115,0,0,46,35,0,0,46,35,1,
120,165,63,118,0,0,10,79,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,103,84,83,233,22,61,247,222,244,66,75,136,128,148,75,111,82,21,8,
32,82,66,139,128,20,145,38,42,33,9,16,74,136,33,161,217,21,81,193,17,69,69,4,27,200,160,136,3,142,142,128,140,21,81,44,12,138,10,216,7,228,33,162,142,131,163,136,138,202,251,225,123,163,107,214,188,247,
230,205,254,181,215,62,231,172,243,157,179,207,7,192,8,12,150,72,51,81,53,128,12,169,66,30,17,224,131,199,196,198,225,228,46,64,129,10,36,112,0,16,8,179,100,33,115,253,35,1,0,248,126,60,60,43,34,192,7,
190,0,1,120,211,11,8,0,192,77,155,192,48,28,135,255,15,234,66,153,92,1,128,132,1,192,116,145,56,75,8,128,20,0,64,122,142,66,166,0,64,70,1,128,157,152,38,83,0,160,4,0,96,203,99,98,227,0,80,45,0,96,39,127,
230,211,0,128,157,248,153,123,1,0,91,148,33,21,1,160,145,0,32,19,101,136,68,0,104,59,0,172,207,86,138,69,0,88,48,0,20,102,75,196,57,0,216,45,0,48,73,87,102,72,0,176,183,0,192,206,16,11,178,0,8,12,0,48,
81,136,133,41,0,4,123,0,96,200,35,35,120,0,132,153,0,20,70,242,87,60,241,43,174,16,231,42,0,0,120,153,178,60,185,36,57,69,129,91,8,45,113,7,87,87,46,30,40,206,73,23,43,20,54,97,2,97,154,64,46,194,121,
153,25,50,129,52,15,224,243,204,0,0,160,145,21,17,224,131,243,253,120,206,14,174,206,206,54,142,182,14,95,45,234,191,6,255,34,98,98,227,254,229,207,171,112,64,0,0,225,116,126,209,254,44,47,179,26,128,
59,6,128,109,254,162,37,238,4,104,94,11,160,117,247,139,102,178,15,64,181,0,160,233,218,87,243,112,248,126,60,60,69,161,144,185,217,217,229,228,228,216,74,196,66,91,97,202,87,125,254,103,194,95,192,87,
253,108,249,126,60,252,247,245,224,190,226,36,129,50,93,129,71,4,248,224,194,204,244,76,165,28,207,146,9,132,98,220,230,143,71,252,183,11,255,252,29,211,34,196,73,98,185,88,42,20,227,81,18,113,142,68,
154,140,243,50,165,34,137,66,146,41,197,37,210,255,100,226,223,44,251,3,62,223,53,0,176,106,62,1,123,145,45,168,93,99,3,246,75,39,16,88,116,192,226,247,0,0,242,187,111,193,212,40,8,3,128,104,131,225,207,
119,255,239,63,253,71,160,37,0,128,102,73,146,113,0,0,94,68,36,46,84,202,179,63,199,8,0,0,68,160,129,42,176,65,27,244,193,24,44,192,6,28,193,5,220,193,11,252,96,54,132,66,36,196,194,66,16,66,10,100,128,
28,114,96,41,172,130,66,40,134,205,176,29,42,96,47,212,64,29,52,192,81,104,134,147,112,14,46,194,85,184,14,61,112,15,250,97,8,158,193,40,188,129,9,4,65,200,8,19,97,33,218,136,1,98,138,88,35,142,8,23,153,
133,248,33,193,72,4,18,139,36,32,201,136,20,81,34,75,145,53,72,49,82,138,84,32,85,72,29,242,61,114,2,57,135,92,70,186,145,59,200,0,50,130,252,134,188,71,49,148,129,178,81,61,212,12,181,67,185,168,55,26,
132,70,162,11,208,100,116,49,154,143,22,160,155,208,114,180,26,61,140,54,161,231,208,171,104,15,218,143,62,67,199,48,192,232,24,7,51,196,108,48,46,198,195,66,177,56,44,9,147,99,203,177,34,172,12,171,198,
26,176,86,172,3,187,137,245,99,207,177,119,4,18,129,69,192,9,54,4,119,66,32,97,30,65,72,88,76,88,78,216,72,168,32,28,36,52,17,218,9,55,9,3,132,81,194,39,34,147,168,75,180,38,186,17,249,196,24,98,50,49,
135,88,72,44,35,214,18,143,19,47,16,123,136,67,196,55,36,18,137,67,50,39,185,144,2,73,177,164,84,210,18,210,70,210,110,82,35,233,44,169,155,52,72,26,35,147,201,218,100,107,178,7,57,148,44,32,43,200,133,
228,157,228,195,228,51,228,27,228,33,242,91,10,157,98,64,113,164,248,83,226,40,82,202,106,74,25,229,16,229,52,229,6,101,152,50,65,85,163,154,82,221,168,161,84,17,53,143,90,66,173,161,182,82,175,81,135,
168,19,52,117,154,57,205,131,22,73,75,165,173,162,149,211,26,104,23,104,247,105,175,232,116,186,17,221,149,30,78,151,208,87,210,203,233,71,232,151,232,3,244,119,12,13,134,21,131,199,136,103,40,25,155,
24,7,24,103,25,119,24,175,152,76,166,25,211,139,25,199,84,48,55,49,235,152,231,153,15,153,111,85,88,42,182,42,124,21,145,202,10,149,74,149,38,149,27,42,47,84,169,170,166,170,222,170,11,85,243,85,203,84,
143,169,94,83,125,174,70,85,51,83,227,169,9,212,150,171,85,170,157,80,235,83,27,83,103,169,59,168,135,170,103,168,111,84,63,164,126,89,253,137,6,89,195,76,195,79,67,164,81,160,177,95,227,188,198,32,11,
99,25,179,120,44,33,107,13,171,134,117,129,53,196,38,177,205,217,124,118,42,187,152,253,29,187,139,61,170,169,161,57,67,51,74,51,87,179,82,243,148,102,63,7,227,152,113,248,156,116,78,9,231,40,167,151,
243,126,138,222,20,239,41,226,41,27,166,52,76,185,49,101,92,107,170,150,151,150,88,171,72,171,81,171,71,235,189,54,174,237,167,157,166,189,69,187,89,251,129,14,65,199,74,39,92,39,71,103,143,206,5,157,
231,83,217,83,221,167,10,167,22,77,61,58,245,174,46,170,107,165,27,161,187,68,119,191,110,167,238,152,158,190,94,128,158,76,111,167,222,121,189,231,250,28,125,47,253,84,253,109,250,167,245,71,12,88,6,
179,12,36,6,219,12,206,24,60,197,53,113,111,60,29,47,199,219,241,81,67,93,195,64,67,165,97,149,97,151,225,132,145,185,209,60,163,213,70,141,70,15,140,105,198,92,227,36,227,109,198,109,198,163,38,6,38,
33,38,75,77,234,77,238,154,82,77,185,166,41,166,59,76,59,76,199,205,204,205,162,205,214,153,53,155,61,49,215,50,231,155,231,155,215,155,223,183,96,90,120,90,44,182,168,182,184,101,73,178,228,90,166,89,
238,182,188,110,133,90,57,89,165,88,85,90,93,179,70,173,157,173,37,214,187,173,187,167,17,167,185,78,147,78,171,158,214,103,195,176,241,182,201,182,169,183,25,176,229,216,6,219,174,182,109,182,125,97,
103,98,23,103,183,197,174,195,238,147,189,147,125,186,125,141,253,61,7,13,135,217,14,171,29,90,29,126,115,180,114,20,58,86,58,222,154,206,156,238,63,125,197,244,150,233,47,103,88,207,16,207,216,51,227,
182,19,203,41,196,105,157,83,155,211,71,103,23,103,185,115,131,243,136,139,137,75,130,203,46,151,62,46,155,27,198,221,200,189,228,74,116,245,113,93,225,122,210,245,157,155,179,155,194,237,168,219,175,
238,54,238,105,238,135,220,159,204,52,159,41,158,89,51,115,208,195,200,67,224,81,229,209,63,11,159,149,48,107,223,172,126,79,67,79,129,103,181,231,35,47,99,47,145,87,173,215,176,183,165,119,170,247,97,
239,23,62,246,62,114,159,227,62,227,60,55,222,50,222,89,95,204,55,192,183,200,183,203,79,195,111,158,95,133,223,67,127,35,255,100,255,122,255,209,0,167,128,37,1,103,3,137,129,65,129,91,2,251,248,122,124,
33,191,142,63,58,219,101,246,178,217,237,65,140,160,185,65,21,65,143,130,173,130,229,193,173,33,104,200,236,144,173,33,247,231,152,206,145,206,105,14,133,80,126,232,214,208,7,97,230,97,139,195,126,12,
39,133,135,133,87,134,63,142,112,136,88,26,209,49,151,53,119,209,220,67,115,223,68,250,68,150,68,222,155,103,49,79,57,175,45,74,53,42,62,170,46,106,60,218,55,186,52,186,63,198,46,102,89,204,213,88,157,
88,73,108,75,28,57,46,42,174,54,110,108,190,223,252,237,243,135,226,157,226,11,227,123,23,152,47,200,93,112,121,161,206,194,244,133,167,22,169,46,18,44,58,150,64,76,136,78,56,148,240,65,16,42,168,22,140,
37,242,19,119,37,142,10,121,194,29,194,103,34,47,209,54,209,136,216,67,92,42,30,78,242,72,42,77,122,146,236,145,188,53,121,36,197,51,165,44,229,185,132,39,169,144,188,76,13,76,221,155,58,158,22,154,118,
32,109,50,61,58,189,49,131,146,145,144,113,66,170,33,77,147,182,103,234,103,230,102,118,203,172,101,133,178,254,197,110,139,183,47,30,149,7,201,107,179,144,172,5,89,45,10,182,66,166,232,84,90,40,215,42,
7,178,103,101,87,102,191,205,137,202,57,150,171,158,43,205,237,204,179,202,219,144,55,156,239,159,255,237,18,194,18,225,146,182,165,134,75,87,45,29,88,230,189,172,106,57,178,60,113,121,219,10,227,21,5,
43,134,86,6,172,60,184,138,182,42,109,213,79,171,237,87,151,174,126,189,38,122,77,107,129,94,193,202,130,193,181,1,107,235,11,85,10,229,133,125,235,220,215,237,93,79,88,47,89,223,181,97,250,134,157,27,
62,21,137,138,174,20,219,23,151,21,127,216,40,220,120,229,27,135,111,202,191,153,220,148,180,169,171,196,185,100,207,102,210,102,233,230,222,45,158,91,14,150,170,151,230,151,14,110,13,217,218,180,13,223,
86,180,237,245,246,69,219,47,151,205,40,219,187,131,182,67,185,163,191,60,184,188,101,167,201,206,205,59,63,84,164,84,244,84,250,84,54,238,210,221,181,97,215,248,110,209,238,27,123,188,246,52,236,213,
219,91,188,247,253,62,201,190,219,85,1,85,77,213,102,213,101,251,73,251,179,247,63,174,137,170,233,248,150,251,109,93,173,78,109,113,237,199,3,210,3,253,7,35,14,182,215,185,212,213,29,210,61,84,82,143,
214,43,235,71,14,199,31,190,254,157,239,119,45,13,54,13,85,141,156,198,226,35,112,68,121,228,233,247,9,223,247,30,13,58,218,118,140,123,172,225,7,211,31,118,29,103,29,47,106,66,154,242,154,70,155,83,154,
251,91,98,91,186,79,204,62,209,214,234,222,122,252,71,219,31,15,156,52,60,89,121,74,243,84,201,105,218,233,130,211,147,103,242,207,140,157,149,157,125,126,46,249,220,96,219,162,182,123,231,99,206,223,
106,15,111,239,186,16,116,225,210,69,255,139,231,59,188,59,206,92,242,184,116,242,178,219,229,19,87,184,87,154,175,58,95,109,234,116,234,60,254,147,211,79,199,187,156,187,154,174,185,92,107,185,238,122,
189,181,123,102,247,233,27,158,55,206,221,244,189,121,241,22,255,214,213,158,57,61,221,189,243,122,111,247,197,247,245,223,22,221,126,114,39,253,206,203,187,217,119,39,238,173,188,79,188,95,244,64,237,
65,217,67,221,135,213,63,91,254,220,216,239,220,127,106,192,119,160,243,209,220,71,247,6,133,131,207,254,145,245,143,15,67,5,143,153,143,203,134,13,134,235,158,56,62,57,57,226,63,114,253,233,252,167,67,
207,100,207,38,158,23,254,162,254,203,174,23,22,47,126,248,213,235,215,206,209,152,209,161,151,242,151,147,191,109,124,165,253,234,192,235,25,175,219,198,194,198,30,190,201,120,51,49,94,244,86,251,237,
193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,
233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,235,167,73,68,65,84,120,218,236,253,47,116,220,202,191,239,121,127,146,75,206,131,126,58,65,135,89,89,38,151,69,97,231,65,145,217,60,104,
119,216,29,180,219,236,176,216,108,88,108,52,208,14,154,203,220,27,205,26,228,222,232,174,65,86,216,29,20,109,54,3,122,69,205,206,160,40,236,92,180,31,160,234,180,220,110,183,75,106,253,169,42,189,95,
107,101,237,236,189,237,196,93,146,170,190,245,213,183,170,94,9,216,113,122,18,39,146,126,151,148,74,74,104,17,0,232,68,46,233,15,73,217,106,93,228,52,7,158,25,131,35,73,15,140,191,193,185,94,173,139,
43,154,1,123,158,247,84,210,111,146,102,146,34,90,5,0,142,86,72,202,36,253,185,90,23,75,154,3,7,198,225,59,73,243,151,190,238,21,77,5,115,195,212,131,182,152,22,1,128,222,3,186,165,164,63,72,162,98,207,
152,28,73,186,51,99,50,252,119,190,90,23,11,154,1,181,231,123,86,139,187,1,0,253,41,77,204,253,85,210,114,181,46,74,154,4,59,227,242,141,164,139,67,95,67,226,116,218,55,72,61,104,139,104,17,0,24,69,33,
146,168,216,63,78,91,189,5,135,211,147,181,115,170,93,64,178,20,0,156,177,148,244,167,72,162,226,241,56,61,87,85,180,176,23,137,211,233,221,16,245,160,45,162,69,0,192,41,229,38,160,35,217,2,51,110,191,
248,22,28,206,62,203,103,188,12,153,244,179,27,137,100,41,0,184,108,41,146,168,216,142,219,115,61,147,60,37,113,58,141,27,32,145,244,73,36,75,1,192,39,133,168,68,133,94,126,11,14,39,159,221,143,60,183,
147,124,86,35,145,44,5,0,31,45,69,18,149,113,188,202,157,61,104,39,111,70,226,52,236,11,254,187,216,179,20,0,66,80,136,36,234,212,199,245,185,72,158,250,32,87,85,105,202,164,107,58,207,102,36,146,165,
0,16,146,165,72,162,78,121,92,79,180,147,60,37,113,26,214,5,142,85,237,133,246,187,72,150,2,64,168,10,73,95,76,48,87,208,28,147,26,231,231,34,121,234,178,92,36,77,167,244,60,206,84,37,75,231,180,6,0,4,
107,169,106,11,173,5,77,49,169,49,62,81,45,121,74,226,212,255,11,26,169,122,187,253,73,82,66,139,0,192,164,228,218,38,81,75,154,99,18,227,126,42,233,94,108,189,227,226,179,72,210,116,26,19,41,182,191,
2,128,233,41,197,57,4,83,27,243,35,85,201,211,132,196,169,191,23,113,166,237,82,124,0,0,150,170,150,242,19,204,133,31,3,36,218,179,255,18,70,147,139,164,105,200,207,91,44,86,116,1,0,182,10,177,133,214,
84,98,128,72,210,3,137,83,255,38,74,191,155,224,141,201,18,0,96,159,82,210,130,96,110,18,49,1,201,211,241,45,36,93,146,52,13,114,162,52,51,113,119,74,139,0,0,158,145,75,250,67,210,130,88,32,220,152,128,
196,169,63,129,27,75,241,1,0,4,115,168,199,8,137,72,158,142,105,177,90,23,231,52,67,112,207,20,75,241,1,0,109,44,197,234,175,32,145,56,117,55,112,75,181,173,46,5,0,224,88,11,19,204,101,52,69,80,241,66,
34,146,167,163,60,79,36,77,131,121,134,34,19,111,127,18,75,241,1,0,199,43,84,37,81,191,112,144,107,24,72,156,18,184,1,0,166,23,204,125,17,85,168,33,197,15,137,72,158,14,137,164,105,24,207,77,42,138,20,
0,0,253,202,84,21,46,44,104,10,127,145,56,37,112,3,0,76,215,66,84,161,134,18,75,36,34,121,58,200,51,67,210,212,235,231,36,18,69,10,0,128,225,149,38,238,166,10,213,67,36,78,9,220,0,0,40,68,21,106,8,177,
69,34,146,167,125,202,37,157,241,140,120,249,108,164,162,72,1,0,224,134,76,84,161,122,133,196,233,56,147,26,54,157,7,0,184,106,161,234,109,120,78,83,120,25,103,164,170,146,167,232,86,46,146,166,190,61,
11,145,56,96,21,0,224,174,82,219,194,133,130,230,112,23,137,211,225,130,183,185,170,55,221,41,173,1,0,240,64,38,222,134,251,28,115,220,209,18,157,201,69,210,212,167,251,63,86,149,44,157,139,34,5,0,128,
31,150,170,10,23,50,154,194,61,36,78,251,13,220,34,73,23,170,18,166,49,45,2,0,240,80,33,233,15,73,183,36,142,188,138,65,230,34,121,218,133,92,36,77,125,185,231,83,109,87,117,1,0,224,107,220,125,45,105,
73,236,225,14,18,167,253,4,110,137,182,111,186,1,0,8,197,66,44,227,247,41,30,153,139,228,233,49,74,73,111,153,184,120,113,159,127,22,69,10,0,128,176,98,144,77,220,93,208,28,227,34,113,218,109,224,54,83,
149,48,77,105,13,0,64,192,50,19,200,45,105,10,231,99,147,59,241,34,183,237,132,229,140,151,4,206,222,215,145,170,85,93,159,196,114,124,0,64,216,22,170,182,207,202,104,138,113,144,56,237,38,120,155,139,
55,221,0,128,233,41,36,93,179,15,170,243,113,10,201,211,102,74,145,52,117,245,94,142,77,204,205,253,12,0,152,154,76,20,46,140,130,196,105,251,192,45,18,111,186,1,0,144,182,167,130,178,15,170,187,113,203,
131,88,17,99,235,156,151,1,206,221,191,169,216,191,20,0,0,137,194,133,193,145,56,109,30,184,197,170,222,116,207,68,194,20,0,128,186,82,236,199,228,106,252,18,73,122,144,148,208,26,7,145,52,117,235,190,
157,137,109,176,0,0,120,46,238,166,112,97,0,36,78,237,3,183,88,44,13,2,0,192,214,66,213,219,240,130,166,112,42,150,249,38,94,252,62,231,118,181,46,46,105,6,39,238,213,185,216,6,11,0,0,27,165,72,160,246,
138,196,233,203,129,91,42,150,6,1,0,208,214,66,85,5,106,78,83,56,17,215,36,170,42,79,35,90,227,241,125,186,90,23,231,52,195,232,247,231,92,36,76,1,0,56,38,238,166,112,161,99,36,78,159,15,220,82,19,184,
165,180,6,0,0,71,203,76,32,151,209,20,163,199,56,115,73,119,180,196,47,185,170,195,160,74,154,98,148,251,49,82,85,160,64,194,20,0,128,110,44,68,2,181,51,36,78,159,6,111,169,72,152,2,0,208,151,76,36,80,
93,136,119,174,76,188,51,117,165,164,183,36,77,71,185,7,35,113,208,42,0,0,125,90,136,4,234,209,72,156,110,131,183,84,36,76,1,0,24,74,38,18,168,99,199,62,119,154,246,222,237,165,170,74,211,156,187,97,208,
251,46,18,9,83,0,0,134,180,16,9,212,214,38,159,56,37,97,10,0,192,168,50,145,64,29,43,6,138,84,237,119,154,76,180,9,206,87,235,98,193,157,48,232,61,119,97,226,238,136,214,0,0,96,112,11,145,64,109,108,178,
137,83,18,166,0,0,56,37,147,116,73,245,223,224,241,80,44,233,155,166,151,200,186,93,173,139,75,238,128,193,238,179,185,216,195,20,0,0,87,44,68,2,213,218,228,18,167,36,76,1,0,32,144,195,147,216,232,97,
66,31,57,91,173,139,51,174,252,32,247,214,92,36,76,1,0,112,213,181,170,151,201,37,77,241,188,201,36,78,77,69,197,103,77,123,47,47,0,0,124,177,16,9,212,33,227,164,11,73,55,19,248,168,165,56,12,106,136,
251,105,102,238,167,152,214,0,0,192,249,216,232,139,72,160,62,43,248,196,41,9,83,0,0,188,198,155,240,225,98,166,123,73,179,192,63,230,123,182,131,232,245,30,74,197,202,46,0,0,124,84,170,42,90,184,165,
41,30,11,54,113,202,137,157,0,0,4,21,200,125,89,173,139,43,154,162,247,216,233,155,194,173,18,188,100,50,208,219,189,19,75,186,19,9,83,0,0,124,87,168,74,160,46,104,138,74,144,137,83,78,236,4,0,128,64,
14,173,98,168,68,85,242,52,52,203,213,186,248,200,21,238,252,126,137,84,45,201,159,211,26,0,0,4,37,51,113,119,54,245,134,8,42,113,202,126,74,0,0,76,66,174,170,122,48,163,41,122,137,167,46,20,214,126,167,
133,170,37,250,37,87,183,179,123,36,18,43,187,0,0,152,130,165,137,187,139,169,54,64,16,137,83,246,83,2,0,128,64,14,157,198,86,33,237,119,202,190,166,221,222,27,115,19,119,199,180,6,0,0,147,49,217,115,
7,188,78,156,114,240,19,0,0,16,7,72,245,17,99,69,146,190,203,255,106,194,107,246,198,237,236,158,72,69,161,2,0,0,83,86,170,42,90,88,76,233,67,123,155,56,61,61,137,175,196,242,32,0,0,48,225,64,174,231,
88,43,149,244,224,241,71,200,86,235,226,140,43,121,244,125,16,139,66,5,0,0,176,149,107,66,219,102,121,151,56,101,31,83,0,0,64,32,55,88,220,117,163,106,47,75,223,148,170,150,232,23,92,197,163,174,255,149,
40,84,0,0,0,251,45,76,220,93,134,252,33,189,73,156,154,183,221,119,98,121,16,0,0,32,144,27,50,6,251,38,41,241,236,199,254,184,90,23,75,174,94,235,107,158,154,184,59,166,53,0,0,192,1,165,170,173,145,110,
67,253,128,206,39,78,107,167,118,126,230,126,4,0,0,4,114,131,199,98,137,164,111,30,253,200,203,213,186,248,200,149,107,117,173,99,85,43,187,102,180,6,0,0,104,32,87,160,171,190,254,147,227,193,219,76,82,
72,167,186,2,0,128,225,252,147,164,255,233,77,20,205,222,68,209,255,243,227,103,89,208,36,205,253,248,89,254,251,155,40,122,37,63,86,253,148,146,206,126,252,44,255,131,43,215,56,238,190,82,85,101,154,
208,26,0,0,160,161,127,145,52,127,19,69,241,155,40,250,26,82,44,230,100,197,41,111,187,1,0,64,15,110,85,85,160,150,52,69,171,248,204,135,37,251,44,209,111,126,93,83,177,44,31,0,0,116,167,84,64,135,182,
58,151,56,61,61,137,47,84,45,203,143,184,215,0,0,64,15,129,220,57,201,181,86,49,90,34,183,151,236,179,68,191,217,245,140,84,21,42,204,105,13,0,0,208,131,204,196,221,133,207,31,194,153,165,250,167,39,113,
242,38,138,254,155,9,222,254,137,251,11,0,0,244,224,159,36,253,151,55,81,148,154,101,68,37,77,98,199,241,37,251,165,88,162,223,36,238,158,75,250,111,146,254,149,214,0,0,0,61,137,37,93,188,137,162,87,63,
126,150,153,175,31,98,244,138,83,243,182,251,179,170,3,160,0,0,0,134,82,138,195,163,218,196,110,223,229,222,178,238,243,80,150,131,245,124,237,98,85,203,242,83,90,3,0,0,12,40,55,241,90,238,219,15,62,106,
226,148,61,149,0,0,0,129,156,95,76,252,246,224,208,143,148,173,214,197,25,87,230,197,235,118,33,182,195,2,0,0,227,186,149,103,103,14,140,178,84,255,244,36,142,222,68,209,255,42,233,191,18,188,1,0,128,
145,253,139,164,127,243,125,25,209,80,126,252,44,139,55,81,20,201,157,101,222,103,108,185,112,48,238,78,222,68,209,255,46,233,223,196,118,88,0,0,96,92,255,170,106,219,172,191,126,252,44,11,31,126,224,
193,43,78,169,50,5,0,0,14,203,69,245,169,77,60,23,73,250,174,241,95,128,95,175,214,197,21,87,228,217,235,116,165,170,202,20,0,0,192,53,183,242,160,250,116,176,196,41,123,153,2,0,0,143,144,144,123,57,182,
155,171,122,25,62,150,66,210,123,159,150,122,13,120,109,18,115,109,18,90,3,0,0,56,172,144,244,209,229,162,133,65,18,167,84,153,2,0,0,15,229,162,250,244,165,24,239,65,227,29,52,244,113,181,46,150,92,133,
39,215,228,66,210,13,45,1,0,0,60,226,108,209,66,175,137,83,170,76,1,0,0,129,92,184,76,101,227,183,17,254,106,14,132,122,122,45,98,85,133,10,41,173,1,0,0,60,148,203,193,162,133,222,14,135,50,129,244,189,
164,25,215,30,0,0,120,44,125,19,69,233,155,40,250,202,33,68,143,253,248,89,254,251,155,40,138,53,252,146,112,14,132,122,28,119,207,77,220,253,159,105,13,0,0,224,169,127,81,117,112,212,255,248,241,179,
252,239,174,252,80,189,84,156,178,68,8,0,0,4,168,148,116,185,90,23,11,154,226,81,220,23,105,216,131,162,110,87,235,226,146,150,255,213,246,119,162,80,1,0,0,132,37,83,181,45,83,57,246,15,210,105,226,212,
4,111,247,98,137,16,0,0,8,215,82,213,50,162,146,166,248,21,3,94,105,152,211,219,75,73,111,105,251,95,103,8,220,107,184,132,53,0,0,192,144,74,19,115,47,199,252,33,94,119,24,188,205,84,85,27,164,92,91,0,
0,16,176,153,164,111,38,113,5,73,102,15,216,98,128,191,234,154,164,169,116,122,18,223,72,122,16,73,83,0,0,16,174,72,210,189,137,123,70,211,201,30,167,230,67,220,74,250,39,174,43,0,0,152,72,32,55,127,19,
69,175,126,252,44,51,154,67,122,19,69,63,213,239,146,241,98,181,46,254,231,41,183,241,233,73,28,191,137,162,7,177,52,31,0,0,76,199,191,190,137,162,217,155,40,250,191,126,252,44,255,125,232,191,252,168,
165,250,230,0,168,59,13,127,32,0,0,0,128,43,50,57,178,7,211,216,78,79,226,7,245,183,250,232,124,202,251,203,154,3,160,110,68,149,41,0,0,152,166,82,35,156,55,208,58,113,74,240,6,0,0,240,40,144,251,184,
90,23,217,148,27,193,108,95,240,208,195,31,93,172,214,197,219,137,182,105,100,98,238,57,143,25,0,0,128,22,170,18,168,229,16,127,89,171,61,78,79,79,226,59,85,149,166,17,215,11,0,0,64,145,164,7,115,72,210,
100,153,196,113,214,195,31,125,62,197,246,52,171,187,30,68,210,20,0,0,96,99,110,226,238,120,136,191,172,81,197,169,249,161,238,197,210,124,0,0,128,231,100,154,240,210,253,30,170,78,179,213,186,56,155,
96,59,206,68,161,2,0,0,192,115,74,85,91,57,45,251,252,75,172,43,78,77,240,246,77,36,77,1,0,0,14,73,37,125,55,213,130,147,211,67,213,233,245,212,218,208,28,188,122,47,146,166,0,0,0,207,137,36,221,155,184,
169,55,86,21,167,102,217,217,103,174,9,128,1,100,61,255,249,177,249,5,0,67,184,92,173,139,219,169,125,232,14,171,78,39,85,109,106,246,51,125,16,133,10,0,198,145,171,170,224,58,86,74,83,2,24,88,166,158,
86,124,189,178,8,222,238,36,205,184,6,0,106,29,210,110,128,245,211,50,232,202,125,88,186,106,170,196,162,61,255,43,214,211,164,235,201,158,255,70,176,8,160,110,161,1,55,176,119,168,47,125,232,160,63,60,
155,202,129,91,181,253,76,35,30,25,0,38,150,206,45,226,238,125,95,183,81,172,214,69,225,120,223,183,47,190,150,233,11,147,157,255,246,143,61,255,141,184,27,192,175,62,79,85,242,52,239,242,15,125,245,66,
240,118,39,222,120,3,161,202,181,77,110,214,131,176,194,252,146,244,107,201,37,142,11,8,211,3,65,224,187,218,36,57,97,194,12,4,221,231,126,116,125,2,219,67,223,119,76,213,105,190,90,23,239,39,210,86,115,
19,119,3,8,83,61,158,254,250,76,60,94,118,61,217,39,238,126,82,244,240,161,246,123,226,110,32,92,231,171,117,177,232,234,15,123,245,76,103,51,19,155,209,3,62,42,180,77,122,110,130,178,82,219,183,208,249,
84,15,43,241,48,232,171,7,115,245,223,127,120,38,16,4,224,190,82,85,242,52,155,80,95,118,76,213,105,167,65,175,195,109,116,167,234,116,88,0,126,201,77,191,94,74,250,107,79,44,78,220,237,103,220,189,25,
179,234,213,173,245,255,15,192,15,183,171,117,113,217,197,31,244,106,79,167,113,37,246,51,5,92,14,206,10,73,107,213,18,162,84,133,78,62,216,219,4,120,177,249,85,15,244,82,90,8,112,206,36,18,130,181,254,
169,77,213,105,177,90,23,111,3,111,155,72,236,103,10,184,232,87,140,173,109,33,194,38,14,167,42,116,218,49,119,164,167,201,212,205,182,93,17,253,57,224,156,76,29,236,123,250,106,167,19,184,17,111,188,
129,49,31,234,122,128,150,73,36,69,209,89,160,151,238,4,121,239,106,1,94,68,11,1,131,91,172,214,197,249,68,250,159,239,106,94,33,31,116,114,217,84,55,221,139,149,3,192,24,138,218,175,117,237,247,36,69,
209,69,255,190,137,175,165,109,1,195,135,157,127,7,48,156,220,196,149,173,251,247,87,181,135,155,55,222,64,191,74,243,208,110,130,180,220,4,104,25,77,3,7,130,188,180,22,208,109,42,86,99,38,245,64,175,
50,245,116,250,167,99,253,203,92,205,246,239,44,37,189,13,181,93,216,18,11,24,108,162,92,170,42,72,40,107,113,119,78,211,96,228,49,32,210,182,112,33,209,182,98,53,97,92,0,122,83,234,136,237,178,94,241,
198,27,232,101,34,92,136,228,40,194,9,240,54,129,92,42,146,170,64,31,147,251,243,144,39,243,102,146,248,189,193,132,240,122,181,46,174,2,109,139,11,85,43,188,0,28,175,48,191,242,90,220,93,76,233,16,62,
4,57,78,164,218,38,85,223,213,98,112,0,199,107,181,162,233,213,233,73,252,67,188,217,0,154,42,77,112,86,15,212,216,0,30,83,13,238,98,243,235,157,182,111,204,1,52,27,83,206,2,79,158,222,72,186,176,252,
242,183,33,38,62,56,4,10,104,45,87,149,32,253,75,20,37,96,186,49,247,38,222,78,181,45,100,72,68,46,7,104,170,241,161,81,175,78,79,226,191,105,55,224,224,100,54,23,9,82,160,105,112,151,104,155,68,125,167,
109,149,42,128,231,5,187,175,167,153,240,125,183,248,210,224,246,126,53,21,183,247,162,98,8,120,73,97,126,125,213,182,122,52,167,89,128,23,199,152,196,140,49,155,101,255,140,55,192,11,241,166,164,75,219,
188,14,137,83,96,43,215,246,109,118,38,150,250,0,125,4,119,169,182,213,169,137,120,83,14,236,186,92,173,139,219,64,159,255,7,139,201,220,89,72,149,100,156,35,0,60,43,83,173,48,129,10,82,160,243,241,39,
209,182,136,225,3,49,55,240,68,110,226,206,242,165,47,36,113,138,41,63,36,185,204,146,31,130,53,96,212,192,110,19,212,109,2,187,88,84,167,98,218,130,171,186,52,207,250,92,135,15,137,202,87,235,226,125,
96,147,214,7,38,170,152,184,210,196,220,84,145,2,227,143,75,145,182,213,169,172,8,3,44,207,26,32,113,138,169,60,12,185,72,146,2,62,7,118,169,72,62,96,90,22,106,176,132,200,163,103,251,208,222,250,193,
108,85,64,210,20,19,85,234,113,146,52,103,245,22,224,85,204,77,101,42,166,58,118,29,60,107,128,196,41,66,83,212,3,54,146,164,64,80,129,93,172,199,149,169,41,173,130,192,229,178,92,66,228,209,115,124,232,
144,168,127,14,225,179,154,202,218,27,38,158,152,128,108,39,238,46,104,18,32,152,152,59,213,182,42,149,152,27,161,43,37,125,124,46,127,68,226,20,33,4,108,155,183,218,25,135,54,1,147,11,236,18,61,222,187,
41,161,85,16,152,92,1,37,79,15,28,18,21,196,246,4,22,219,17,0,190,42,76,220,253,151,137,185,115,154,4,152,84,204,157,238,196,220,49,173,130,0,237,93,253,68,226,20,190,5,108,185,170,68,41,1,27,128,125,
65,93,164,199,203,141,82,90,5,1,200,101,177,255,146,71,207,233,190,67,162,188,63,20,138,164,41,2,147,137,226,4,0,207,143,121,177,30,111,169,149,208,42,8,196,147,228,41,137,83,184,62,81,204,181,77,148,
22,52,9,128,22,129,221,38,152,219,36,82,35,90,5,30,42,245,194,254,75,30,61,147,115,61,78,48,22,171,117,241,214,243,207,116,39,105,206,109,10,143,251,151,76,108,117,5,160,253,56,24,105,155,64,165,120,1,
190,187,94,173,139,171,205,191,144,56,133,75,242,90,208,198,155,109,0,125,5,118,137,30,87,164,70,180,10,60,81,42,156,228,233,119,109,151,249,93,174,214,197,173,199,159,133,164,41,124,236,75,234,49,119,
78,147,0,232,97,124,76,197,42,48,248,235,215,54,82,36,78,49,166,92,36,74,1,140,31,212,37,34,145,10,127,148,10,32,121,122,122,18,95,73,250,108,254,213,219,67,161,72,154,194,163,126,163,30,115,231,52,9,
128,17,198,204,84,36,82,225,151,197,106,93,156,147,56,197,144,138,157,160,173,160,73,0,56,24,212,37,38,152,251,141,160,14,142,42,229,121,242,212,44,233,251,44,233,235,106,93,44,61,253,12,36,77,225,114,
31,81,143,185,115,154,4,128,131,227,232,76,219,36,106,66,139,192,81,11,18,167,24,42,104,91,146,40,5,224,105,80,151,106,155,68,37,168,131,75,99,236,25,9,145,209,250,5,146,166,112,205,38,230,206,216,163,
20,128,135,227,106,36,105,166,109,34,53,166,85,224,10,18,167,232,90,46,233,79,130,54,0,129,6,117,177,182,75,140,102,98,89,63,198,85,138,228,233,24,253,0,73,83,184,160,80,149,44,221,196,221,37,77,2,32,
176,152,123,86,139,185,129,209,144,56,69,23,147,182,165,182,85,165,4,109,0,166,20,212,37,38,152,251,77,84,163,98,188,113,152,228,233,112,207,60,73,83,140,169,30,115,23,52,7,128,9,141,191,51,109,147,168,
49,45,130,33,145,56,69,27,185,170,55,220,127,48,81,3,128,95,1,93,172,199,123,163,70,180,10,6,82,138,228,233,16,207,56,73,83,12,173,16,85,165,0,176,47,230,158,137,106,84,12,132,196,41,108,45,107,65,91,
65,115,0,192,139,65,93,61,160,139,105,17,244,172,20,201,211,62,159,103,146,166,24,74,110,98,238,37,207,51,0,88,199,220,155,194,5,98,110,116,142,196,41,14,77,192,150,226,13,55,0,116,17,208,37,146,126,23,
7,76,161,255,177,155,228,105,247,207,47,73,83,244,173,30,115,23,52,7,0,28,21,115,207,196,54,90,232,16,137,83,212,21,155,192,141,131,157,0,160,183,128,46,54,1,221,239,4,116,232,65,41,146,167,93,62,175,
36,77,209,215,115,186,20,103,4,0,192,16,49,247,166,26,21,104,133,196,41,10,19,184,177,95,41,0,140,23,208,145,68,69,151,74,73,239,169,92,59,250,249,188,144,116,67,75,160,195,231,114,169,170,64,97,73,115,
0,192,160,99,122,164,109,18,117,70,139,160,9,18,167,211,84,136,100,41,0,184,22,208,197,34,137,138,238,228,170,42,79,75,154,162,213,243,56,151,116,71,75,224,72,165,72,150,2,128,107,99,124,36,146,168,104,
128,196,233,116,20,34,89,10,0,190,4,116,177,72,162,226,120,185,72,158,182,121,254,230,34,105,138,246,74,145,44,5,0,95,198,252,72,36,81,241,2,18,167,97,43,68,178,20,0,124,15,232,98,145,68,69,123,217,106,
93,156,209,12,214,207,91,34,233,27,45,129,134,74,145,44,5,0,223,99,128,72,36,81,177,7,137,211,112,3,183,47,36,75,1,32,184,128,46,81,149,64,157,73,138,105,17,88,90,172,214,197,57,205,96,245,124,61,72,138,
104,13,88,90,170,74,150,46,104,10,0,8,42,38,136,68,18,21,6,137,211,128,38,69,226,45,55,0,76,41,160,75,181,77,162,70,180,8,94,112,187,90,23,151,52,195,193,9,210,119,158,37,88,200,37,125,145,180,100,27,
12,0,152,68,140,16,139,213,95,147,70,226,212,111,153,164,63,8,220,0,96,242,1,221,92,188,17,199,203,206,169,140,219,251,252,68,170,42,77,153,12,225,57,133,137,185,23,171,117,81,208,28,0,48,217,152,33,150,
244,73,172,254,154,20,18,167,4,110,0,128,176,130,185,153,9,232,8,230,176,207,71,86,167,60,121,110,30,36,165,180,4,118,148,218,158,21,144,209,28,0,128,157,248,33,21,171,191,38,129,196,41,129,27,0,32,204,
96,46,209,246,141,56,193,28,234,49,197,25,251,160,255,122,78,238,36,205,105,9,212,100,98,69,23,0,192,62,150,136,180,93,202,159,210,34,225,33,113,234,182,92,236,161,4,0,232,38,152,251,36,150,34,163,82,
72,122,63,245,216,226,244,36,190,144,116,195,237,0,85,47,20,22,170,14,87,45,104,14,0,64,203,216,34,86,245,66,246,119,177,250,43,24,36,78,9,220,0,0,211,10,230,62,153,128,46,162,69,38,45,95,173,139,247,
19,126,22,102,146,238,185,13,38,111,169,106,69,215,146,166,0,0,244,16,107,108,150,242,195,99,36,78,221,145,153,192,109,65,83,0,0,6,8,230,230,98,73,209,212,45,86,235,226,124,130,247,126,162,234,48,168,
136,91,96,146,74,85,43,186,56,47,0,0,48,68,220,17,139,42,84,175,145,56,29,63,112,91,136,234,82,0,192,120,193,92,34,246,66,157,178,243,41,189,180,53,91,87,60,136,109,43,166,40,19,69,10,0,128,113,227,144,
153,168,66,245,14,137,211,113,228,98,239,82,0,128,91,129,92,164,234,109,248,39,241,54,124,106,222,79,229,176,168,211,147,248,158,201,202,164,148,170,150,227,95,83,164,0,0,112,40,30,137,69,21,170,55,72,
156,14,107,161,234,77,119,70,83,0,0,28,14,230,82,109,171,80,17,190,82,210,219,208,95,230,158,158,196,87,146,62,115,185,39,161,144,116,45,138,20,0,0,238,199,39,115,177,125,150,211,72,156,14,19,184,253,
33,233,150,192,13,0,224,89,32,23,139,195,164,166,34,232,195,162,204,203,128,7,46,115,240,50,85,213,165,25,77,1,0,240,44,86,73,106,113,55,28,66,226,180,199,9,136,170,189,75,23,52,5,0,192,243,64,46,18,203,
248,167,224,118,181,46,46,3,188,127,99,73,223,68,242,63,84,165,88,142,15,0,8,43,238,190,16,203,248,157,65,226,180,123,11,177,28,31,0,16,110,48,55,83,149,64,77,105,141,32,125,92,173,139,101,96,247,236,
55,113,24,84,136,10,177,170,11,0,16,118,220,61,55,113,55,113,204,136,72,156,118,163,20,111,186,1,0,211,10,228,82,85,111,194,231,180,70,112,49,205,251,80,226,153,211,147,248,70,85,213,6,194,81,152,152,
123,65,83,0,0,38,20,119,115,254,192,72,72,156,30,63,185,248,34,222,116,3,0,166,27,200,197,170,14,220,153,137,165,208,161,8,98,191,83,83,29,125,207,229,12,70,38,246,47,5,0,16,119,127,22,133,11,131,34,113,
218,78,33,222,116,3,0,80,15,228,34,85,149,125,159,68,2,53,4,94,239,119,106,238,199,239,220,139,65,88,136,109,176,0,0,32,238,30,9,137,211,102,114,113,224,19,0,0,47,5,114,115,113,144,84,8,206,124,77,86,
157,158,196,15,98,31,94,223,45,196,54,88,0,0,188,20,119,95,136,131,164,122,69,226,212,78,38,150,6,1,0,208,52,152,155,171,90,78,68,32,231,167,82,210,91,223,182,35,58,61,137,47,36,221,112,249,188,181,16,
9,83,0,0,136,187,29,65,226,244,176,76,36,76,1,0,32,144,155,174,229,106,93,124,244,232,94,75,36,125,227,178,121,167,20,231,6,0,0,64,220,237,32,18,167,251,101,34,97,10,0,0,129,28,36,233,227,106,93,44,61,
185,199,190,73,74,184,100,222,40,69,194,20,0,0,226,110,135,145,56,125,44,19,9,83,0,0,8,228,80,87,74,122,239,250,210,233,211,147,248,202,220,87,240,227,158,34,97,10,0,0,113,183,243,72,156,86,50,145,48,
5,0,128,64,14,207,198,74,171,117,113,230,240,189,148,136,37,250,62,40,69,194,20,0,0,226,110,143,76,61,113,154,137,132,41,0,0,4,114,176,113,185,90,23,183,142,222,67,44,209,119,223,194,220,67,37,77,1,0,
0,113,183,47,166,154,56,205,68,194,20,0,0,2,57,52,81,74,122,235,90,226,139,37,250,206,91,152,184,187,160,41,0,0,32,238,246,205,212,18,167,185,170,55,221,25,151,30,0,0,2,57,52,182,92,173,139,143,14,221,
43,137,88,162,239,170,133,72,152,2,0,224,122,220,125,37,233,147,164,136,214,216,111,42,137,211,194,4,110,11,46,57,0,0,94,4,113,145,164,11,2,57,39,125,92,173,139,165,35,247,201,131,164,148,75,226,148,76,
172,236,2,0,128,184,59,16,161,39,78,75,19,184,221,114,169,1,0,32,144,67,103,241,213,232,75,246,79,79,226,11,73,55,92,14,103,228,98,101,23,0,0,190,199,221,55,146,230,180,198,86,168,137,211,82,156,216,9,
0,64,72,129,92,172,106,249,62,129,156,27,110,87,235,226,114,228,192,254,187,72,166,187,160,16,43,187,0,0,8,45,238,190,145,52,163,53,194,76,156,46,196,126,74,0,0,132,28,200,221,137,229,217,46,120,191,90,
23,249,72,247,193,157,72,162,143,173,20,133,10,0,0,132,28,119,167,170,18,168,201,148,219,33,164,196,105,166,106,121,80,206,237,13,0,192,36,2,185,59,113,128,212,168,177,215,106,93,156,141,116,237,31,104,
254,81,45,76,220,93,210,20,0,0,4,31,119,207,53,225,131,91,67,72,156,22,38,112,91,114,59,3,0,48,201,64,238,70,44,217,30,203,249,208,75,180,79,79,226,111,154,120,229,195,136,50,81,168,0,0,192,20,99,238,
72,19,61,119,192,231,196,105,41,233,203,106,93,92,113,11,3,0,64,32,167,234,77,56,134,143,199,6,59,40,202,36,202,239,104,246,193,21,162,80,1,0,0,226,238,9,238,127,234,107,226,116,33,150,7,1,0,128,167,129,
28,251,159,14,239,122,136,23,217,28,8,53,138,82,20,42,0,0,128,167,113,89,170,137,108,155,229,91,226,52,87,149,48,205,184,77,1,0,192,212,3,57,135,188,237,251,96,206,211,147,248,74,84,21,15,105,105,226,
238,130,166,0,0,0,207,196,103,23,38,62,139,66,253,140,190,36,78,75,85,213,12,183,220,150,0,0,192,50,144,187,210,4,247,97,26,201,98,181,46,206,123,188,150,177,170,106,83,244,47,23,133,10,0,0,192,62,78,
139,84,21,45,204,66,252,124,62,36,78,23,98,89,62,0,0,104,23,200,197,154,216,62,76,35,58,235,43,217,118,122,18,223,73,154,211,196,189,42,197,178,124,0,0,208,62,94,75,21,224,170,47,151,19,167,185,120,219,
13,0,0,8,228,124,145,173,214,197,89,15,215,46,22,213,166,125,91,138,101,249,0,0,160,155,216,237,74,1,109,175,228,98,226,180,20,111,187,1,0,0,129,156,143,58,175,58,61,61,137,31,196,129,95,125,41,36,157,
83,168,0,0,0,58,142,223,98,5,114,104,235,107,199,126,158,76,210,123,146,166,0,0,160,15,38,198,120,107,98,14,116,175,211,164,180,169,20,78,105,214,94,92,155,184,155,103,1,0,0,116,29,115,23,102,37,210,185,
170,2,73,111,185,82,113,90,170,122,219,189,228,246,2,0,0,67,56,61,137,231,170,246,63,141,104,141,78,117,86,117,74,181,105,47,114,19,119,231,52,5,0,0,24,32,230,142,228,241,225,81,46,84,156,46,37,189,37,
105,10,0,0,134,180,90,23,11,85,213,167,196,32,221,234,164,234,148,106,211,206,149,170,246,49,125,79,210,20,0,0,12,24,115,151,171,117,241,81,210,71,121,88,125,58,102,197,105,33,246,84,2,130,98,246,49,137,
247,252,175,67,19,223,19,185,113,88,75,46,233,231,129,254,170,216,247,61,171,117,81,114,229,129,32,250,175,153,170,234,211,152,214,232,196,209,85,167,84,155,118,42,51,113,119,65,83,0,193,140,91,137,246,
175,152,56,212,111,190,211,248,171,44,10,73,235,103,254,95,105,98,114,98,110,32,220,190,43,82,245,146,253,194,151,159,121,172,196,233,173,164,107,58,63,192,185,78,172,30,104,197,59,9,132,221,64,107,247,
255,227,105,176,87,74,250,107,39,80,252,53,105,229,197,17,64,32,23,176,204,236,107,117,204,120,244,64,51,118,50,46,93,175,214,197,45,77,1,56,55,222,36,181,255,148,236,196,217,31,118,190,133,184,123,207,
56,179,243,239,95,15,196,228,36,94,1,247,250,193,84,213,242,125,231,251,182,161,19,167,133,168,50,5,134,238,140,100,2,177,77,112,86,175,240,220,13,218,48,158,92,219,101,11,95,247,4,133,37,75,43,1,2,57,
207,180,174,58,61,61,137,239,36,205,105,194,163,147,10,84,153,2,195,140,27,113,109,204,72,180,77,130,214,11,15,234,255,29,227,41,180,45,100,40,181,45,114,40,181,77,182,22,244,157,192,32,125,103,164,106,
197,151,211,49,223,144,137,211,133,170,125,149,74,110,15,160,147,73,125,61,0,251,135,182,9,80,130,178,240,229,38,184,171,7,123,25,129,30,208,121,32,71,245,233,113,90,85,157,154,4,196,119,154,175,181,82,
84,153,2,93,142,5,155,24,123,19,127,215,139,16,82,90,105,146,113,247,230,191,17,119,3,221,244,181,51,85,69,11,145,139,63,223,16,137,211,82,213,219,238,37,183,3,96,61,97,172,255,218,4,103,245,192,13,176,
233,123,115,237,73,174,82,245,15,52,234,147,83,73,247,226,133,84,91,141,15,34,162,218,244,40,153,168,50,5,154,246,241,210,54,1,250,174,22,115,211,239,163,105,220,45,109,87,142,17,119,3,205,250,227,72,
85,242,116,230,218,207,214,119,226,116,105,130,183,146,219,0,120,212,33,36,181,160,108,147,24,221,252,2,134,156,96,111,2,188,77,192,199,150,0,128,71,129,156,7,22,171,117,113,222,176,173,127,208,108,173,
38,237,84,153,2,79,251,148,122,204,29,105,187,119,104,74,235,96,132,184,187,84,85,208,176,137,187,169,88,5,158,246,219,115,85,203,247,35,87,126,166,190,18,167,4,111,96,146,93,5,104,177,249,181,121,123,
77,144,6,95,20,230,87,46,233,231,38,216,35,169,138,137,247,237,51,57,188,140,200,97,111,109,39,134,167,39,241,149,170,45,18,96,47,87,85,168,64,255,140,169,246,205,73,45,206,254,199,78,12,14,248,210,143,
151,122,92,204,64,82,21,83,238,215,99,85,43,190,18,23,126,158,62,18,167,185,164,143,60,228,152,208,3,29,155,64,109,83,57,154,48,169,198,132,130,187,194,4,118,25,205,130,9,245,251,119,226,69,88,19,215,
171,117,113,101,217,190,223,69,178,163,151,182,5,60,239,123,35,61,78,136,126,16,219,88,97,26,50,109,43,85,115,85,133,12,196,221,152,74,223,127,37,7,94,168,119,157,56,37,120,67,200,19,229,88,143,19,164,
76,154,129,199,74,19,208,229,146,214,146,114,2,59,16,200,193,76,242,254,217,162,77,231,170,146,210,120,89,161,170,202,148,62,22,161,245,173,145,170,100,104,98,98,238,205,239,35,90,7,120,50,14,20,162,144,
1,225,143,11,169,137,15,227,177,126,134,174,18,167,165,170,42,83,30,84,132,20,172,189,19,9,82,160,235,192,46,55,129,93,78,179,32,128,49,35,81,181,140,40,166,53,94,116,190,90,23,139,23,218,243,129,49,215,
202,82,156,33,128,112,250,208,68,219,10,210,68,36,72,129,99,229,38,238,222,84,168,230,172,6,70,0,227,69,164,17,207,27,232,34,113,154,169,74,154,18,188,193,183,135,47,214,54,73,250,65,236,133,4,12,45,171,
7,118,188,124,131,199,129,220,141,56,5,254,197,137,220,106,93,188,63,208,142,137,164,111,52,211,65,165,56,67,0,254,246,147,155,152,251,93,237,247,0,134,141,187,243,90,220,157,211,36,240,112,60,185,48,
113,247,160,142,77,156,94,18,188,193,147,7,44,214,227,36,105,34,222,104,3,46,202,181,77,166,102,38,176,43,105,22,120,48,206,204,229,216,9,160,14,122,255,220,68,237,244,36,190,19,201,231,151,250,70,14,
128,130,15,125,97,100,226,236,84,219,36,105,76,203,0,206,142,45,185,40,98,128,95,227,76,162,129,87,124,181,77,156,22,170,170,76,9,222,224,106,192,150,138,36,41,64,80,7,12,31,200,221,137,74,170,231,44,
86,235,226,252,153,113,251,59,99,245,243,237,166,170,88,161,164,41,224,96,191,183,27,115,199,180,10,16,68,220,253,85,84,166,194,221,177,39,210,128,75,247,219,36,78,51,177,52,31,4,108,0,198,15,234,50,177,
220,8,110,6,114,44,221,223,175,148,244,118,55,134,228,80,168,131,237,117,249,210,222,176,192,128,253,91,178,19,115,39,180,10,48,9,153,182,103,21,176,103,42,92,26,151,46,52,192,210,253,166,137,211,235,
213,186,184,226,242,96,196,7,35,222,9,216,82,90,5,128,170,4,67,110,130,186,140,170,84,56,48,94,205,69,50,112,159,39,135,68,157,158,196,223,68,2,102,87,33,86,119,97,252,126,44,53,177,54,43,184,0,236,142,
81,245,184,155,177,10,99,142,85,137,164,135,62,199,40,219,196,105,105,130,55,38,162,24,227,33,72,76,192,150,138,106,82,0,246,114,213,222,144,243,118,28,35,141,97,131,238,193,228,129,229,106,93,124,172,
181,81,106,130,93,212,218,72,85,130,185,164,41,48,96,127,21,105,155,36,77,197,203,12,0,205,108,98,238,76,156,81,128,113,198,176,123,245,84,88,103,147,56,205,85,37,77,153,112,98,168,73,102,61,104,139,104,
21,0,29,41,234,65,29,227,26,66,8,228,60,245,118,243,252,113,40,212,19,28,188,138,161,250,166,120,39,230,142,105,21,0,29,202,119,226,238,146,38,193,0,99,219,141,164,139,174,255,220,151,18,167,11,177,25,
61,250,189,177,19,145,40,5,48,142,66,36,82,225,121,32,231,169,203,213,186,184,53,73,229,31,52,135,36,86,119,161,255,62,40,22,137,82,0,227,201,69,34,21,195,140,119,115,85,251,158,70,93,253,153,135,18,167,
188,241,70,159,65,219,111,34,81,10,192,45,133,72,164,194,179,64,206,83,217,106,93,156,13,181,161,191,39,147,73,86,119,161,235,254,38,210,54,81,58,19,137,82,0,238,141,125,153,164,175,171,117,177,164,57,
208,241,24,152,168,195,237,178,246,37,78,75,241,198,27,221,7,109,155,68,41,65,27,0,95,20,170,246,26,228,205,56,156,13,228,60,246,81,85,210,116,234,237,176,16,171,187,208,93,255,82,143,185,19,90,4,128,
71,50,19,115,47,57,108,10,29,141,137,145,170,125,244,143,30,15,119,19,167,185,170,205,232,185,81,113,108,208,182,9,220,8,218,0,132,34,151,244,167,170,36,106,70,115,192,133,64,14,94,187,94,173,139,43,154,
1,71,244,37,177,170,106,210,77,85,41,0,132,160,84,149,72,221,196,221,5,77,130,35,198,202,163,247,211,175,39,78,51,85,149,166,37,77,139,22,65,91,42,150,223,3,32,160,3,6,13,228,224,109,255,113,185,90,23,
11,154,2,45,250,141,153,88,126,15,96,90,242,77,220,77,241,2,90,142,157,23,58,98,123,168,77,226,116,177,90,23,231,52,39,26,220,120,137,164,223,197,82,32,0,32,160,195,104,129,28,188,83,74,58,99,117,23,26,
244,17,177,168,42,5,128,250,56,154,137,226,5,52,31,79,103,146,238,212,162,208,239,213,233,73,60,231,141,55,44,110,178,72,219,170,210,153,168,42,5,128,67,1,221,82,219,125,154,74,154,4,47,140,177,115,113,
104,212,20,228,170,146,166,244,9,120,169,79,72,68,129,2,0,216,142,173,127,138,189,81,97,63,190,62,52,141,185,95,209,116,56,112,83,197,226,13,55,0,28,43,171,5,116,5,205,129,46,3,57,120,99,169,234,28,129,
146,166,192,51,125,192,76,20,40,0,192,49,10,109,87,128,45,105,14,60,51,222,70,106,120,214,0,137,83,236,222,68,177,9,216,126,23,111,184,1,160,107,185,9,232,254,224,173,56,158,25,131,239,25,127,131,195,
150,88,120,110,226,54,211,54,89,10,0,232,78,41,86,128,225,240,24,124,175,106,101,199,139,72,156,162,190,28,104,38,54,153,7,128,161,20,38,160,35,137,138,221,64,174,209,91,112,56,237,114,181,46,110,105,
6,212,158,239,153,72,150,2,192,208,150,218,174,0,43,105,14,152,113,217,234,160,86,18,167,211,189,65,18,145,44,5,0,87,148,155,128,142,165,69,48,201,149,27,155,64,14,78,59,231,28,1,144,44,5,0,231,44,69,
18,21,219,113,250,74,210,231,67,95,67,226,116,90,55,68,34,146,165,0,224,186,82,36,81,33,251,183,224,112,242,25,254,184,90,23,25,77,49,217,103,55,18,201,82,0,240,193,82,36,81,25,183,171,131,90,239,158,
251,255,36,78,195,191,1,18,145,44,5,0,95,149,146,22,98,57,255,148,199,241,27,73,23,180,132,87,207,236,25,207,235,36,159,213,72,36,75,1,192,103,75,145,68,157,242,56,62,215,51,201,83,18,167,97,94,240,88,
28,240,4,0,161,41,196,158,168,4,114,112,89,41,146,166,83,124,62,55,49,247,140,214,0,128,96,44,196,234,175,41,142,233,137,170,179,6,162,250,127,39,113,26,206,5,142,76,192,246,73,36,75,1,32,116,133,164,
47,170,222,136,23,52,199,36,198,249,185,72,158,186,44,87,181,60,159,231,113,26,207,99,170,109,178,52,162,69,0,32,88,165,170,194,133,47,188,24,157,204,24,159,104,39,121,74,226,212,255,139,58,19,111,185,
1,96,202,50,73,127,136,101,69,83,24,243,231,34,121,234,162,92,85,165,41,207,95,216,207,95,172,106,207,225,223,197,246,87,0,48,69,133,137,185,23,188,40,13,126,204,79,84,75,158,146,56,245,247,34,126,18,
111,185,1,0,143,45,196,178,162,208,99,128,185,72,158,186,36,23,73,211,144,159,183,72,172,232,2,0,236,31,255,55,171,191,136,1,194,140,1,18,19,115,39,36,78,253,185,104,113,45,112,139,105,17,0,192,1,133,
182,203,138,10,154,35,184,152,96,46,146,167,174,76,154,72,154,134,249,140,165,98,41,62,0,192,206,66,20,46,132,26,15,68,146,30,72,156,186,127,161,102,98,41,62,0,160,189,76,44,229,15,49,62,72,180,103,243,
122,12,38,23,73,211,208,158,169,88,44,197,7,0,180,87,136,165,252,33,198,7,17,137,83,119,3,183,79,38,120,99,66,4,0,232,66,41,54,183,15,45,94,72,68,242,116,12,185,72,154,134,244,28,205,68,145,2,0,160,91,
153,164,63,86,235,98,65,83,248,143,196,169,91,129,219,220,4,110,41,173,1,0,232,81,46,246,101,10,37,118,72,85,37,79,49,220,179,67,210,212,255,231,38,22,213,165,0,128,254,149,170,150,242,179,125,150,199,
72,156,186,17,184,81,93,10,0,24,43,152,91,138,42,84,223,99,137,185,216,243,116,8,185,72,154,250,254,172,204,68,117,41,0,96,28,153,168,66,245,18,137,211,113,3,183,79,162,186,20,0,64,48,135,227,227,138,
185,72,158,246,41,23,73,83,95,159,141,72,85,129,2,7,172,2,0,92,80,170,90,249,197,94,168,158,32,113,58,124,224,118,33,150,5,1,0,8,230,208,125,156,49,23,201,211,62,228,34,105,234,227,243,144,104,187,170,
11,0,0,23,45,85,173,252,202,104,10,119,145,56,29,38,112,75,85,37,75,9,220,0,0,62,89,168,170,66,37,152,243,39,230,152,139,228,105,151,114,145,52,245,241,25,224,204,0,0,128,79,10,109,11,23,136,57,28,67,
226,180,255,192,237,147,164,132,214,0,0,120,44,87,245,54,124,65,83,120,19,127,144,60,61,94,41,233,61,149,215,94,220,243,145,88,213,5,0,8,35,246,88,74,186,38,254,112,7,137,83,2,55,0,0,154,4,115,95,36,221,
242,54,220,249,120,228,78,172,116,57,246,94,63,227,208,52,231,239,243,88,210,103,85,135,61,69,180,8,0,32,32,75,177,140,223,9,36,78,187,15,220,152,164,0,0,166,96,33,222,134,187,30,155,144,60,109,167,20,
73,83,215,239,237,84,213,170,174,25,173,1,0,8,92,97,98,238,5,77,49,14,18,167,4,110,0,0,28,99,41,222,134,187,28,167,220,19,163,52,246,113,181,46,150,52,131,147,247,243,92,108,131,5,0,152,166,82,172,252,
26,5,137,211,227,2,55,54,158,7,0,160,146,169,74,160,46,105,10,167,226,149,72,210,131,72,52,217,58,167,162,195,201,123,120,174,42,97,26,211,34,0,128,137,43,197,62,168,131,34,113,218,60,120,155,171,90,146,
79,224,6,0,192,83,133,88,78,228,90,236,18,73,250,70,236,242,162,235,213,186,184,162,25,156,186,111,47,84,37,76,35,90,4,0,128,39,22,34,129,218,59,18,167,4,110,0,0,244,161,144,116,45,105,201,114,34,39,98,
153,68,85,229,41,113,204,51,19,143,213,186,56,167,25,156,184,87,99,113,224,19,0,0,77,100,170,18,168,25,77,209,61,18,167,135,3,183,72,36,76,1,0,56,70,41,246,99,114,37,174,73,85,37,79,177,51,217,88,173,
139,51,154,97,244,251,51,22,7,173,2,0,112,84,76,35,18,168,157,35,113,186,63,112,139,68,194,20,0,128,46,149,34,129,234,66,140,51,151,116,71,75,252,146,75,58,227,158,28,245,158,140,69,194,20,0,128,46,101,
226,236,129,206,144,56,221,31,184,205,68,194,20,0,128,62,148,34,129,58,118,188,115,163,234,5,49,247,98,149,52,205,105,138,81,227,238,57,173,1,0,64,47,10,113,246,192,209,72,156,18,184,1,0,48,134,82,36,
80,199,140,125,30,36,165,19,111,134,51,150,178,17,119,3,0,48,1,133,72,160,182,54,233,196,105,109,73,254,103,110,5,0,0,70,81,138,4,234,88,49,208,131,164,100,162,77,112,185,90,23,183,220,9,131,222,115,177,
72,152,2,0,48,166,66,36,80,27,155,100,226,148,61,76,1,0,112,78,169,106,47,166,43,154,98,176,120,40,81,149,60,157,90,44,180,88,173,139,115,238,128,193,238,179,88,36,76,1,0,112,73,38,14,145,178,54,169,196,
41,9,83,0,0,156,87,136,55,225,67,198,70,51,73,247,19,250,200,185,56,12,106,168,123,43,22,9,83,0,0,92,150,137,4,234,139,38,147,56,61,61,137,175,68,194,20,0,0,95,20,34,129,58,84,140,52,149,195,162,74,73,
239,87,235,162,224,170,247,122,63,69,146,110,68,194,20,0,0,95,100,34,129,250,172,224,19,167,167,39,241,92,213,219,238,152,203,13,0,0,129,28,246,198,75,83,56,44,138,195,160,250,189,135,34,177,178,11,0,
0,159,45,76,220,93,208,20,91,193,38,78,79,79,226,84,210,157,72,152,2,0,16,130,76,210,57,129,92,111,113,83,36,233,187,194,77,120,93,179,127,110,175,247,207,133,170,66,133,136,214,0,0,192,123,11,85,7,105,
150,52,69,128,137,83,115,208,193,141,194,175,154,0,0,96,170,129,28,111,194,251,137,161,82,85,135,69,133,38,91,173,139,51,174,112,47,247,204,92,172,236,2,0,32,68,165,164,47,146,110,167,158,64,253,79,1,
5,110,241,155,40,186,145,244,95,9,222,0,0,8,86,34,105,254,38,138,254,63,111,162,40,255,241,179,252,15,154,164,27,63,126,150,197,155,40,122,165,176,94,62,151,146,254,191,220,39,157,199,221,233,155,40,186,
83,181,52,63,162,69,0,0,8,206,63,153,152,240,191,188,137,162,159,63,126,150,249,84,27,194,251,138,83,246,83,2,0,96,178,10,113,128,84,31,177,85,72,251,157,178,175,105,183,247,70,172,106,101,215,140,214,
0,0,96,82,114,85,203,247,39,23,87,121,157,56,101,121,16,0,0,16,7,72,117,29,95,197,146,190,201,255,23,210,183,171,117,113,201,21,237,228,158,136,84,21,42,124,166,53,0,0,152,180,165,170,4,106,49,149,15,
236,101,226,212,236,193,245,89,236,99,10,0,0,182,22,98,255,211,174,98,173,153,164,123,143,63,66,190,90,23,239,185,146,157,220,11,115,85,85,166,17,173,1,0,0,140,107,77,100,255,83,175,246,56,61,61,137,163,
55,81,244,191,73,186,21,85,166,0,0,224,177,68,102,255,211,31,63,203,140,230,104,239,199,207,242,255,126,19,69,177,105,83,223,148,146,62,254,248,89,254,59,87,242,168,184,59,125,19,69,247,146,254,77,213,
62,103,0,0,0,27,169,38,178,255,169,55,21,167,167,39,241,133,170,42,211,136,251,19,0,0,188,160,144,116,206,242,253,163,98,175,72,213,146,253,216,179,31,253,114,181,46,110,185,130,173,175,123,108,98,238,
57,173,1,0,0,44,100,38,254,202,67,252,112,206,39,78,205,178,252,27,249,89,241,0,0,0,198,181,212,196,246,97,234,33,14,123,240,41,112,95,173,139,51,174,92,235,235,125,37,14,92,5,0,0,237,220,170,218,54,171,
12,233,67,57,187,84,127,103,89,254,191,112,255,1,0,128,22,254,179,88,190,223,218,143,159,101,241,38,138,34,73,255,234,193,143,91,74,250,255,253,248,89,150,92,185,198,113,247,102,89,254,127,17,203,242,
1,0,64,59,255,170,106,249,254,250,199,207,242,255,14,229,67,57,89,113,202,38,244,0,0,160,7,133,88,190,223,38,46,139,228,199,146,125,150,232,183,187,182,55,98,89,62,0,0,232,86,102,226,238,194,247,15,226,
84,226,212,236,169,116,167,106,147,89,0,0,128,62,44,84,37,217,74,154,194,58,70,75,229,246,146,125,150,232,55,191,166,23,226,252,0,0,0,208,159,82,210,151,213,186,184,242,249,67,56,179,84,223,236,169,116,
47,255,14,32,0,0,0,126,73,36,253,219,155,40,250,127,67,63,5,180,43,142,47,217,47,197,18,253,38,49,119,108,150,229,255,155,88,150,15,0,0,250,243,79,146,210,55,81,52,123,19,69,255,207,143,159,101,225,227,
135,24,189,226,244,244,36,78,84,85,153,38,220,83,0,0,96,96,153,2,89,70,52,64,204,22,201,205,37,251,44,209,183,191,134,87,170,170,76,1,0,0,134,118,43,15,15,143,26,45,113,106,130,239,207,146,46,184,119,
0,0,192,136,74,19,196,221,210,20,47,198,111,169,220,90,178,207,18,125,251,235,118,35,10,21,0,0,192,184,10,121,118,230,192,40,137,83,19,188,221,137,101,249,0,0,192,29,185,9,228,114,154,226,96,28,119,47,
105,230,200,143,243,158,235,117,240,90,69,162,80,1,0,0,184,231,86,158,84,159,190,30,58,120,59,61,137,111,84,85,42,196,220,39,0,0,192,33,137,164,111,102,57,51,158,119,174,170,74,119,244,128,155,164,233,
193,184,59,85,181,181,194,5,173,1,0,0,28,115,97,226,238,212,245,31,116,176,195,161,76,99,252,55,73,255,19,247,7,0,0,112,216,102,19,251,255,235,199,207,242,223,105,142,199,126,252,44,255,227,77,20,253,
143,145,99,186,66,210,255,252,227,103,249,31,92,145,39,49,119,244,38,138,254,87,73,255,85,82,68,139,0,0,0,71,69,146,230,111,162,40,50,113,183,147,113,221,32,75,245,77,149,233,5,247,4,0,0,240,204,245,106,
93,92,209,12,123,227,187,111,26,111,207,204,143,171,117,177,228,42,60,185,38,169,216,14,11,0,0,248,167,144,163,123,159,246,154,56,61,61,137,19,19,188,37,220,3,0,0,192,83,153,9,228,10,154,226,81,156,151,
106,156,131,162,56,16,106,255,245,184,82,181,159,41,0,0,128,175,110,87,235,226,210,165,31,168,183,165,250,167,39,241,133,164,123,73,255,194,117,7,0,0,30,139,85,45,35,250,31,63,126,150,255,157,230,168,
252,248,89,22,111,162,40,145,244,159,7,254,171,63,178,133,194,163,152,59,121,19,69,255,77,210,127,161,53,0,0,128,231,254,213,181,45,179,58,175,56,61,61,137,99,85,85,166,41,215,27,0,0,4,102,169,170,250,
180,164,41,126,197,125,223,52,220,94,154,139,213,186,56,167,229,127,181,255,133,164,27,90,2,0,0,4,232,114,181,46,110,199,254,33,58,77,156,158,158,196,51,85,73,211,136,235,11,0,0,2,85,170,218,99,51,163,
41,6,93,34,94,74,122,75,210,186,58,0,74,213,202,174,148,59,16,0,0,4,44,51,113,247,104,241,223,235,174,130,55,115,0,212,189,72,154,2,0,128,176,69,146,30,76,236,3,233,86,85,82,179,111,95,72,154,254,42,84,
248,46,146,166,0,0,32,124,169,164,239,102,111,253,81,28,189,199,169,57,0,234,94,210,140,235,9,0,0,38,196,185,61,152,198,240,227,103,249,31,111,162,232,255,237,57,22,44,36,157,255,248,89,254,199,148,111,
56,147,172,191,149,244,79,60,126,0,0,96,34,254,73,213,121,3,209,143,159,229,255,57,244,95,126,212,82,253,211,147,120,174,106,95,165,136,235,8,0,0,38,170,84,181,7,211,98,202,141,112,122,18,127,87,117,144,
86,31,206,167,220,190,166,80,225,78,82,194,227,6,0,0,38,44,87,181,116,191,24,234,47,108,149,56,53,251,42,221,72,154,115,205,0,0,0,36,73,11,85,9,212,114,138,31,222,44,33,191,239,225,143,46,86,235,226,237,
84,111,42,10,21,0,0,0,30,41,85,189,84,95,14,241,151,53,222,227,212,188,241,126,16,73,83,0,0,128,186,185,170,189,79,147,41,126,120,19,188,102,61,252,209,215,83,108,79,115,134,192,157,56,120,21,0,0,160,
46,146,116,63,212,121,3,141,42,78,121,227,13,0,0,240,162,82,19,93,186,111,54,238,127,232,240,143,156,100,181,233,233,73,28,171,170,222,77,120,156,0,0,0,158,149,169,90,186,95,246,245,23,88,39,78,77,38,
247,130,107,2,160,65,7,182,207,215,23,190,47,215,48,167,51,75,213,75,160,67,147,210,127,60,243,255,99,245,183,143,31,128,112,44,86,235,226,124,106,31,250,244,36,126,80,119,39,190,127,28,106,25,150,67,
237,55,19,85,166,0,134,137,187,179,1,126,182,151,198,131,147,103,226,106,226,109,0,182,74,73,103,171,117,145,247,241,135,191,152,56,53,251,153,62,136,55,222,192,84,20,230,215,70,46,233,231,206,191,151,
245,78,170,175,14,202,179,137,110,178,51,201,221,13,246,118,131,194,148,91,13,152,132,220,4,114,229,132,250,195,84,221,84,157,230,171,117,241,126,98,99,201,149,164,207,60,54,192,100,100,59,19,255,191,
14,252,255,201,199,221,166,26,63,222,249,207,187,49,245,187,157,152,156,152,27,152,142,203,213,186,184,237,250,15,125,101,145,8,120,16,111,188,1,223,39,237,155,9,251,215,103,2,177,124,170,135,153,56,18,
4,38,181,126,182,30,16,214,147,173,9,125,49,224,173,82,85,229,100,54,161,126,173,139,170,211,243,169,108,119,96,10,21,238,153,224,3,94,43,180,45,62,40,36,173,247,253,247,33,79,130,198,147,190,182,30,103,
71,218,22,135,213,87,153,213,191,6,128,127,22,234,248,176,214,87,7,58,149,185,170,101,66,0,220,148,237,4,102,165,170,36,41,65,89,248,147,235,77,96,151,152,160,175,30,236,49,233,6,220,213,203,91,112,71,
251,170,84,199,85,157,78,102,111,83,243,242,236,158,137,58,224,172,66,219,196,231,215,221,255,54,165,151,98,19,140,187,55,177,118,61,254,126,183,231,191,1,112,75,174,14,87,124,189,122,166,131,184,83,117,
50,44,128,241,30,244,82,219,164,232,38,56,99,89,60,154,6,122,155,127,110,170,87,99,38,231,192,168,38,179,239,233,145,85,167,147,168,54,101,63,83,192,9,153,249,231,215,157,56,156,21,89,176,237,203,55,99,
221,230,159,239,118,226,112,0,195,43,213,209,190,167,175,118,30,248,72,44,19,2,134,80,212,126,173,9,208,48,66,128,23,171,74,160,110,2,186,77,128,71,255,15,244,47,215,4,246,61,61,98,245,210,36,170,77,217,
207,20,24,180,207,45,181,221,183,63,147,168,20,197,160,253,253,38,222,222,252,243,131,168,88,5,134,114,244,203,248,87,59,15,243,29,15,47,208,153,194,252,170,7,105,84,140,194,135,224,110,19,200,197,230,
23,73,85,160,123,165,122,60,253,211,161,254,228,187,154,87,185,7,93,109,106,250,216,27,177,186,11,232,82,110,250,213,175,218,38,73,217,186,10,62,140,9,155,120,59,17,73,85,160,47,183,171,117,113,217,246,
155,95,153,135,53,85,85,105,26,209,158,64,171,64,173,80,117,10,102,174,42,57,154,209,44,8,120,194,159,152,95,39,122,156,96,5,208,76,169,106,223,211,69,192,125,198,133,170,36,97,147,54,121,27,106,53,174,
233,67,31,152,16,3,173,101,218,174,216,202,68,81,2,194,142,187,19,109,139,23,54,219,110,165,180,12,208,202,66,45,15,141,122,197,33,80,128,181,92,219,4,41,129,26,240,52,184,75,181,77,162,126,16,9,85,192,
86,176,135,70,153,68,225,119,217,191,156,191,94,173,139,171,128,39,192,15,162,80,1,176,145,233,113,130,148,234,81,96,59,158,108,98,236,84,36,84,129,38,114,181,216,46,235,213,233,73,252,55,109,7,60,82,
152,95,95,181,93,230,147,211,44,64,235,224,46,213,227,10,85,2,59,224,169,96,15,141,106,120,232,232,219,16,147,35,172,238,2,14,78,98,11,109,11,19,72,144,2,237,199,154,88,219,36,234,59,109,183,0,0,176,85,
72,250,216,36,199,67,226,20,4,107,213,175,205,219,108,14,103,2,134,11,236,18,243,235,157,182,75,254,129,41,203,76,32,87,6,246,188,39,146,190,89,124,105,144,201,99,86,119,1,143,250,184,77,220,157,179,181,
21,48,216,56,148,138,34,6,160,174,84,131,179,6,72,156,98,74,114,243,235,47,130,53,192,201,160,46,170,5,115,36,83,49,229,177,234,44,192,228,233,55,189,92,245,114,22,218,216,124,122,18,95,73,250,204,109,
141,9,202,118,226,238,156,38,1,156,26,159,18,61,46,96,72,105,21,76,144,213,129,164,36,78,17,170,194,4,107,95,69,146,20,240,57,168,139,244,56,153,154,138,165,174,8,95,169,6,111,193,61,121,150,231,58,92,
117,89,172,214,197,219,192,250,175,38,91,20,0,62,203,85,37,74,73,146,2,126,143,91,137,72,166,98,122,94,76,158,146,56,69,40,50,109,247,36,205,88,110,15,4,29,212,197,38,152,251,64,80,135,128,149,10,40,121,
106,113,72,84,48,7,100,153,207,122,39,105,198,109,140,0,21,162,56,1,152,82,220,157,106,155,76,77,197,106,48,132,233,224,118,81,36,78,225,107,192,150,201,108,34,207,91,109,0,181,160,110,147,76,37,168,67,
8,74,85,9,197,69,32,207,233,161,10,204,127,14,225,165,167,73,154,62,136,195,56,16,142,76,143,19,165,5,77,2,76,58,230,142,84,37,80,55,113,119,74,171,32,16,207,38,79,73,156,194,7,185,30,39,74,9,216,0,188,
20,212,197,122,188,188,63,161,85,224,177,243,16,146,167,7,14,137,10,226,80,40,146,166,8,64,185,19,115,103,52,9,0,203,241,61,213,54,145,26,209,42,240,212,66,85,209,66,89,255,143,36,78,225,162,92,219,165,
247,44,187,7,208,69,64,23,237,4,116,9,173,2,207,132,146,60,221,119,72,212,199,213,186,88,122,254,185,98,73,247,244,45,240,76,185,19,115,231,52,9,128,142,198,196,122,220,29,211,42,240,72,174,157,131,90,
73,156,194,149,27,179,30,180,149,52,9,128,1,130,186,212,4,115,191,137,100,7,252,224,253,62,160,123,14,137,242,254,80,40,83,105,243,32,42,108,224,190,82,36,74,1,12,63,78,198,34,145,10,191,228,170,37,79,
73,156,98,12,133,9,218,254,20,137,82,0,110,4,116,145,168,72,133,31,188,94,214,190,231,144,168,235,213,186,184,242,248,243,36,34,105,10,119,149,34,81,10,192,189,177,51,22,137,84,184,47,151,73,158,146,56,
197,144,65,219,38,81,90,208,36,0,28,15,232,34,109,171,81,9,232,224,26,223,147,167,87,146,62,155,127,125,235,107,92,64,210,20,142,202,84,37,74,151,36,74,1,120,50,158,198,146,102,98,143,84,184,39,151,116,
70,226,20,125,6,109,155,68,41,65,27,0,2,58,160,91,222,38,79,205,243,116,39,233,79,95,183,30,32,105,10,199,38,117,153,164,175,190,239,21,12,0,181,49,118,38,182,211,130,35,227,44,137,83,116,165,16,203,239,
1,76,39,160,75,181,173,70,37,160,195,88,130,56,141,222,211,9,29,73,83,140,165,20,43,185,0,76,103,204,141,196,42,48,140,140,196,41,142,81,15,218,114,154,3,192,68,3,186,120,39,160,139,104,21,12,136,228,
233,176,207,123,34,146,166,24,94,190,137,187,87,235,34,163,57,0,76,124,28,174,199,221,64,239,72,156,162,137,82,210,82,84,149,2,192,161,128,110,166,106,73,255,76,188,21,199,48,72,158,14,55,89,35,105,138,
161,44,181,221,171,180,160,57,0,224,201,184,28,105,187,149,214,140,241,25,125,33,113,138,151,228,170,222,112,255,65,85,41,0,52,14,232,18,85,111,195,127,23,75,250,209,47,146,167,253,63,203,36,77,209,167,
82,20,40,0,192,49,99,117,170,170,18,117,38,138,23,208,33,18,167,216,39,151,244,135,120,195,13,0,93,6,115,177,182,75,139,102,180,8,122,64,242,180,159,103,55,17,73,83,244,163,144,73,150,178,4,31,0,58,31,
187,83,81,188,128,14,144,56,197,198,82,213,27,238,37,111,184,1,160,247,96,46,210,246,180,208,25,45,130,14,93,175,214,197,21,205,208,233,179,250,77,84,174,160,59,133,137,187,89,205,5,0,195,140,229,113,
45,238,78,105,17,52,69,226,116,218,150,34,89,10,0,46,4,116,155,96,110,38,170,218,112,188,243,213,186,88,208,12,71,63,151,145,170,74,211,132,214,192,145,114,177,154,11,0,92,25,219,235,113,55,240,34,18,
167,211,179,20,201,82,0,112,57,160,171,7,115,17,45,130,150,72,158,30,63,177,34,105,138,99,228,34,89,10,0,174,143,245,245,184,27,216,139,196,233,52,44,69,178,20,0,124,12,232,102,170,246,102,34,152,67,27,
36,79,219,63,123,223,68,210,20,205,21,146,190,136,100,41,0,248,54,238,71,38,222,254,93,44,231,199,14,18,167,225,90,138,100,41,0,132,22,204,241,70,28,77,148,146,206,216,71,177,241,243,118,39,105,78,75,
192,82,33,246,44,5,128,144,226,128,88,219,36,106,66,139,128,196,105,88,114,109,223,114,151,52,7,0,4,25,204,69,170,146,58,4,115,176,81,138,228,105,147,231,139,164,41,108,159,171,165,164,47,60,91,0,16,116,
92,16,215,226,238,152,22,153,38,18,167,254,43,196,146,32,0,32,152,35,152,195,225,88,225,61,47,85,95,124,158,230,146,238,104,9,28,176,84,85,89,186,164,41,0,96,114,113,66,34,233,147,56,135,96,114,72,156,
250,169,148,180,16,75,130,0,0,4,115,176,147,171,170,60,45,105,138,189,207,207,92,36,77,241,252,179,195,138,46,0,64,61,110,152,137,115,8,38,131,196,169,95,150,226,45,55,0,224,229,96,110,46,246,67,197,158,
56,98,181,46,62,210,12,79,158,151,68,210,131,120,225,128,173,66,219,165,248,5,205,1,0,120,38,134,136,196,22,90,193,35,113,234,71,224,246,69,210,130,183,220,0,128,134,193,92,44,150,242,227,177,197,106,
93,156,211,12,143,38,60,223,69,210,20,149,165,40,82,0,0,180,139,41,18,177,250,43,72,36,78,221,84,138,13,231,1,0,221,6,115,169,170,4,234,156,214,152,188,243,213,186,88,240,76,196,145,170,74,211,132,91,
98,210,10,81,164,0,0,232,54,190,152,153,184,59,165,69,252,71,226,212,45,185,216,67,9,0,208,127,48,55,87,245,70,60,166,69,38,235,108,181,46,178,137,63,11,119,226,69,194,148,45,84,85,151,102,52,5,0,160,
167,88,35,54,49,247,92,84,161,122,139,196,233,248,74,81,93,10,0,24,39,152,75,69,21,234,148,227,143,247,83,221,191,241,244,36,190,146,244,153,219,96,114,10,81,93,10,0,24,39,246,152,139,42,84,47,145,56,
29,79,46,170,75,1,0,110,4,114,145,164,11,177,23,234,20,99,145,179,169,197,33,230,36,220,123,46,255,164,44,68,117,41,0,192,141,56,36,17,123,161,122,133,196,41,129,27,0,0,245,96,110,102,130,185,148,214,
152,132,229,106,93,124,156,216,100,229,129,137,202,36,20,146,254,80,85,93,90,208,28,0,0,199,98,146,72,108,159,229,5,18,167,195,6,110,183,84,151,2,0,60,9,230,98,177,39,211,84,92,174,214,197,237,68,38,40,
28,6,21,190,76,85,145,194,130,166,0,0,120,18,163,164,218,86,161,194,49,36,78,9,220,0,0,56,20,200,69,226,109,248,20,4,127,88,20,135,65,5,111,33,206,12,0,0,248,29,171,196,170,246,96,159,137,194,5,103,144,
56,37,112,3,0,192,54,152,155,137,101,252,161,42,37,189,13,117,101,204,233,73,124,33,233,134,203,28,228,125,187,57,236,169,160,57,0,0,129,196,45,145,40,92,112,6,137,83,2,55,0,0,154,6,115,137,182,203,248,
17,142,124,181,46,222,7,122,191,126,227,242,6,165,144,116,205,170,46,0,192,4,226,238,185,170,3,92,83,90,99,28,36,78,59,10,220,84,29,174,80,210,28,0,128,9,5,114,177,182,111,195,35,90,36,8,183,171,117,113,
25,208,61,26,169,74,154,198,92,218,32,100,170,86,117,45,105,10,0,192,196,226,238,84,236,131,58,10,18,167,199,5,110,236,95,10,0,32,144,99,57,81,104,130,217,239,244,244,36,190,103,130,17,132,133,137,187,
51,154,2,0,48,241,184,59,86,181,15,234,156,214,24,6,137,211,230,50,85,75,131,8,220,0,0,120,26,204,205,77,48,23,211,26,222,42,21,192,126,167,236,107,26,132,133,137,187,11,154,2,0,128,71,113,78,172,237,
214,89,17,45,210,31,18,167,205,2,55,14,124,2,0,192,46,152,155,139,253,152,124,150,173,214,197,153,199,247,95,34,233,129,137,132,151,74,113,110,0,0,0,182,49,79,36,233,66,108,157,213,27,18,167,47,91,136,
55,221,0,224,107,32,145,214,254,53,217,9,38,78,212,109,85,228,215,157,127,47,204,47,73,42,167,250,226,205,92,131,207,34,129,234,163,203,213,186,184,245,244,190,251,102,158,121,248,163,84,149,48,189,157,
242,185,1,102,2,92,191,119,119,251,206,119,29,79,140,115,73,63,25,187,0,32,136,241,227,66,36,80,59,71,226,244,121,11,145,48,5,0,87,3,131,88,85,210,115,243,235,31,181,137,102,226,120,176,80,159,148,110,
146,173,153,36,133,188,13,12,9,84,111,189,247,45,113,114,122,18,95,153,123,13,126,40,53,145,132,233,11,99,151,235,125,99,110,174,85,41,233,175,169,140,93,0,224,225,88,19,137,179,7,58,69,226,244,169,133,
72,152,2,128,43,131,126,98,126,157,104,155,16,77,38,144,68,200,85,37,87,215,155,223,135,82,245,67,2,213,59,249,106,93,188,247,236,254,122,224,178,121,211,215,5,151,48,125,102,236,138,39,48,121,221,29,
187,50,51,118,49,167,2,128,241,198,164,185,56,123,224,104,36,78,183,22,34,97,10,0,99,13,234,233,206,36,51,17,75,76,246,201,205,175,205,164,52,247,53,225,64,2,213,43,215,171,117,113,229,193,61,21,73,250,
198,228,192,121,165,2,73,152,50,118,89,203,84,37,84,255,218,140,99,83,222,142,1,0,70,24,175,230,34,129,218,26,137,83,18,166,0,48,244,192,157,168,74,150,189,171,77,52,209,94,97,38,162,95,205,100,52,243,
236,126,72,69,2,213,7,103,174,223,91,167,39,241,141,170,189,189,224,166,82,30,39,76,205,216,149,72,250,192,216,197,216,5,0,158,206,195,174,196,30,168,141,77,57,113,186,16,9,83,0,24,98,128,78,85,37,197,
54,147,77,6,234,254,101,181,9,105,230,67,146,130,4,170,243,10,85,251,157,150,14,223,63,44,209,119,83,41,15,19,166,140,93,140,93,0,16,232,220,44,18,135,72,53,50,197,196,233,66,36,76,1,160,207,193,56,49,
147,205,223,68,18,204,21,185,153,144,58,63,25,37,129,234,52,39,151,236,179,68,223,89,165,60,74,152,238,36,74,233,127,24,187,0,32,244,57,91,36,18,168,86,166,148,56,205,76,192,159,113,217,1,160,243,65,119,
102,38,155,51,6,94,111,198,196,63,205,68,52,119,244,190,154,139,189,152,92,244,222,181,123,134,37,250,78,90,200,241,66,5,115,194,253,102,236,74,25,187,188,25,187,190,74,90,134,114,96,34,0,56,50,151,251,
76,44,245,188,41,36,78,115,73,151,36,76,1,160,211,1,54,49,19,206,223,196,62,111,190,43,204,100,244,207,213,186,88,58,120,175,205,69,2,213,169,184,106,181,46,222,59,214,23,125,227,178,56,99,105,226,238,
194,209,177,43,53,227,214,140,62,197,123,165,185,223,54,47,1,75,154,4,0,142,26,35,99,19,115,207,105,141,199,66,78,156,22,170,222,116,47,184,204,0,192,132,19,214,54,19,209,165,43,19,81,150,18,57,199,153,
37,251,167,39,241,55,241,242,198,5,153,28,92,217,101,250,142,250,216,69,255,193,216,5,0,56,60,118,38,146,110,196,182,53,191,132,152,56,45,37,125,113,113,15,46,0,240,112,224,156,49,225,100,34,234,202,68,
148,165,68,78,197,90,239,199,174,42,60,61,137,47,76,96,143,241,20,170,42,76,151,14,141,91,145,182,43,34,102,92,34,198,46,154,3,0,90,141,167,169,137,179,146,169,183,69,104,137,211,91,85,111,187,25,32,1,
160,253,32,153,72,250,93,213,50,141,136,22,65,125,34,234,194,74,14,179,148,232,78,188,9,31,83,182,90,23,103,35,223,3,223,232,163,70,83,154,152,251,214,161,177,107,102,198,174,25,151,7,187,99,151,72,162,
2,64,219,241,117,174,42,129,58,217,152,43,148,196,105,38,233,220,229,13,232,1,192,241,1,49,86,149,40,253,93,44,195,199,97,165,153,136,254,49,246,178,92,222,132,143,238,227,88,149,134,167,39,241,189,72,
144,141,229,86,142,20,42,152,62,96,147,44,141,184,52,120,193,66,142,238,231,13,0,142,207,21,35,77,120,219,44,223,19,167,133,170,132,105,198,173,12,0,173,6,192,153,153,116,166,180,8,90,142,195,127,72,90,
140,249,242,146,55,225,163,94,255,247,67,39,208,76,178,236,129,230,31,92,38,7,10,21,120,209,135,142,250,174,165,170,237,221,10,154,3,0,26,141,193,147,59,64,202,215,196,105,41,199,150,7,1,128,71,3,94,162,
234,109,225,76,36,154,208,157,165,170,42,212,229,72,247,117,36,246,63,29,195,224,7,69,157,158,196,223,69,194,108,72,133,28,40,84,48,47,72,216,183,20,93,203,204,216,181,160,41,0,192,122,76,78,53,161,85,
95,62,38,78,23,170,54,161,47,185,93,1,192,122,112,139,204,100,243,147,88,214,140,126,21,26,177,10,149,253,79,7,87,106,192,131,162,56,16,106,240,107,59,234,129,171,181,234,210,73,46,13,196,240,247,187,
70,94,65,1,0,158,205,49,231,154,192,170,47,159,18,167,185,170,132,105,198,237,9,0,141,38,157,159,196,65,79,24,199,66,35,237,133,106,14,138,185,17,149,137,131,92,231,213,186,56,31,224,154,70,146,190,211,
151,13,246,236,142,86,168,96,42,89,54,43,35,128,201,140,93,0,224,225,124,51,82,224,171,190,124,72,156,150,98,89,62,0,48,233,132,207,50,141,176,20,178,182,145,253,103,46,65,239,206,250,78,50,156,158,196,
55,98,43,134,190,229,26,177,80,193,84,174,124,22,47,60,224,206,243,240,133,101,252,0,96,53,134,39,170,138,22,210,208,62,155,235,137,211,165,170,61,149,74,110,67,0,96,210,9,239,21,146,174,37,45,135,28,
219,89,190,63,136,108,181,46,206,122,190,134,223,105,230,222,148,26,105,89,254,212,79,234,133,55,99,215,102,25,63,243,82,0,120,121,62,26,212,242,125,87,19,167,133,28,216,132,30,0,60,25,156,34,109,247,
128,139,105,17,120,160,52,147,208,219,129,19,168,51,85,9,212,136,75,208,139,243,190,42,179,78,79,226,123,81,65,223,151,165,170,42,211,98,224,177,43,22,91,201,128,177,11,0,66,157,159,222,152,49,222,123,
46,38,78,175,25,140,0,192,122,64,186,16,85,58,96,18,218,244,185,9,122,31,166,17,21,171,117,241,182,135,107,150,74,122,160,121,187,191,94,170,18,166,203,129,199,174,216,60,131,115,46,1,24,187,0,32,232,
249,106,170,170,104,33,246,249,115,184,148,56,205,85,85,42,228,220,94,0,112,112,0,138,68,194,20,76,66,9,228,220,212,121,213,233,233,73,252,32,182,89,232,218,173,170,51,4,202,161,254,66,18,166,96,236,2,
128,201,206,95,175,228,241,153,3,46,36,78,75,113,248,19,0,216,12,56,145,72,152,130,73,40,129,156,219,58,173,58,165,218,180,115,185,6,62,252,137,132,41,24,187,0,0,62,159,57,48,118,226,52,83,85,153,80,112,
27,1,192,179,131,76,36,18,166,96,18,218,231,51,150,152,64,46,161,233,59,113,221,213,33,67,84,155,186,121,93,26,140,93,193,236,111,6,184,54,118,1,128,167,115,219,11,85,47,84,189,153,215,142,149,56,45,69,
149,41,0,216,12,44,115,51,176,196,180,6,38,58,9,189,236,235,192,161,61,207,219,149,120,65,209,213,117,123,123,108,226,128,106,211,206,228,26,112,59,44,94,246,1,195,142,93,0,224,225,28,55,150,71,213,167,
99,36,78,51,81,101,10,0,47,13,38,51,85,149,58,49,173,1,12,119,136,141,207,203,136,28,115,116,117,35,213,166,110,92,135,134,215,108,110,198,174,136,166,7,198,57,128,13,0,60,154,243,94,200,131,234,211,33,
19,167,165,168,50,5,128,151,6,143,196,76,58,73,22,0,79,101,102,18,154,15,20,200,221,208,228,237,19,6,199,236,117,74,181,233,209,114,13,91,101,154,138,195,214,128,209,199,46,0,240,112,254,27,203,241,162,
133,161,18,167,185,164,143,84,153,2,192,179,3,70,36,246,130,3,108,45,204,36,180,236,249,185,76,196,222,167,199,56,111,187,84,149,106,211,163,12,86,101,74,133,54,224,222,216,5,0,158,206,135,47,228,104,
245,233,16,137,211,65,151,8,1,0,131,4,48,9,165,6,90,201,98,246,62,253,76,147,55,214,170,234,148,106,211,246,237,173,170,80,33,31,224,153,136,84,237,99,202,115,1,56,58,118,1,128,135,243,226,88,14,190,144,
237,51,113,58,88,240,6,0,158,14,12,169,170,42,211,132,214,0,90,203,85,85,240,100,61,63,175,137,164,123,177,20,185,169,198,85,167,84,155,182,114,171,42,25,83,14,48,118,205,196,30,220,128,23,99,23,0,120,
58,79,190,146,67,47,103,251,74,156,46,196,50,4,0,120,110,32,136,196,178,124,192,187,216,195,60,187,159,85,85,218,193,78,182,90,23,103,13,218,56,150,244,157,102,179,86,170,74,78,47,7,24,187,98,51,118,205,
104,118,160,51,183,26,232,165,7,0,120,54,103,78,228,200,150,89,175,123,8,222,62,174,214,197,57,157,63,0,236,29,0,230,38,41,48,167,53,128,78,205,37,125,55,213,112,189,88,173,139,114,181,46,46,37,125,52,
49,15,94,150,154,234,122,91,44,253,182,183,148,244,118,160,164,233,133,164,111,34,105,10,116,237,162,239,177,11,0,124,100,86,175,159,169,122,193,52,170,46,43,78,51,85,111,188,11,46,49,0,60,153,116,198,
226,0,13,96,40,189,199,36,166,250,244,158,103,218,202,98,181,46,206,45,219,244,187,216,239,217,198,229,64,251,251,38,170,170,76,185,207,129,254,45,205,179,205,124,26,0,30,199,35,51,51,151,30,37,70,236,
170,226,244,122,181,46,206,232,228,1,96,111,71,127,161,170,82,135,137,39,48,140,84,210,55,243,236,245,194,84,159,158,73,186,166,185,95,52,55,47,143,94,50,19,73,211,151,228,146,222,15,120,40,26,99,23,48,
156,89,223,99,23,0,248,200,172,174,121,171,170,56,98,112,199,86,156,150,170,150,230,103,92,74,0,120,50,233,140,69,149,41,48,182,76,253,87,159,166,230,89,143,105,238,103,93,175,214,197,213,11,237,248,157,
54,60,104,161,1,206,16,48,99,215,189,56,184,16,8,122,236,2,0,79,231,216,87,26,120,107,167,99,42,78,51,85,251,42,101,92,58,0,120,210,161,95,136,74,29,192,5,169,250,175,62,205,36,189,87,181,204,18,251,253,
254,66,159,153,138,164,233,115,74,85,9,148,243,1,146,166,155,177,43,161,217,1,39,198,174,57,77,1,0,143,226,238,43,85,123,159,150,67,253,157,109,43,78,95,172,26,0,128,41,50,123,244,221,137,3,52,0,23,45,
85,37,160,202,30,251,128,11,85,123,66,226,169,143,207,29,100,116,122,18,223,137,67,243,246,201,205,61,155,15,48,118,177,103,47,48,209,177,11,0,60,157,119,15,18,187,52,173,56,45,77,208,123,197,101,2,128,
39,157,119,170,234,96,147,25,173,1,56,105,166,158,79,47,54,123,79,14,250,22,220,35,191,31,8,124,233,55,159,90,72,58,27,32,105,58,51,99,87,74,147,3,78,143,93,60,163,0,176,141,185,7,59,111,160,73,226,52,
87,181,25,253,146,75,4,0,79,38,158,55,146,30,196,193,38,128,235,34,73,247,230,153,237,43,144,203,52,226,6,246,46,79,254,159,57,36,106,70,223,249,196,229,64,75,243,111,84,85,107,208,254,128,251,99,215,
67,159,99,23,0,248,200,20,118,126,84,143,69,11,182,75,245,23,26,96,51,122,0,240,13,135,104,0,94,203,213,243,50,104,51,201,189,160,169,127,185,220,61,17,254,244,36,102,79,205,173,82,195,84,153,50,118,1,
126,143,93,31,57,56,10,0,134,137,109,108,42,78,7,217,140,30,0,60,236,156,103,226,16,13,192,103,137,170,10,158,121,95,127,193,106,93,92,74,58,23,75,247,55,62,237,244,163,9,125,232,47,185,170,131,87,115,
198,46,0,47,140,93,223,250,220,118,6,0,124,99,94,38,157,169,42,252,236,212,161,196,105,169,106,105,254,130,75,0,0,79,38,158,44,111,4,194,16,73,186,51,135,19,245,21,200,45,76,32,87,208,220,138,77,178,116,
227,19,77,34,73,90,172,214,197,123,150,230,3,104,48,118,221,179,116,31,0,30,197,220,229,106,93,156,75,186,236,242,207,125,110,169,126,46,202,255,1,96,223,164,51,82,181,151,105,66,107,0,193,233,53,254,
225,228,242,95,110,87,235,226,210,180,199,119,145,196,59,239,187,80,129,177,11,96,236,2,128,137,205,219,83,117,244,178,120,95,197,233,66,213,222,74,116,188,0,240,180,243,253,206,196,19,8,86,162,106,249,
99,218,199,31,94,59,253,115,49,241,118,158,213,254,25,77,184,29,74,13,176,186,203,84,248,50,118,1,140,93,0,48,25,230,176,214,51,85,47,151,142,178,91,113,122,109,78,164,2,0,60,158,120,206,37,221,209,18,
192,100,244,26,19,209,167,40,147,20,155,95,83,148,107,128,10,49,238,51,96,114,158,28,192,7,0,19,159,199,71,38,22,154,181,253,51,54,137,211,210,116,178,11,154,21,0,158,116,182,119,146,230,180,4,48,57,11,
19,31,149,61,245,45,169,216,111,114,138,150,170,150,231,151,125,254,37,140,93,0,99,23,77,1,0,199,199,69,175,78,79,226,31,170,150,230,231,52,37,0,60,234,92,35,177,39,28,48,117,185,250,221,247,52,81,245,
22,156,126,102,26,22,230,208,130,190,199,46,246,210,5,24,187,206,72,158,2,192,163,24,105,174,22,43,113,94,171,218,91,41,167,9,1,224,81,167,154,72,250,38,146,25,192,212,37,170,246,142,235,165,47,48,49,
88,39,251,47,193,121,231,3,36,77,99,85,47,252,82,154,27,152,252,216,245,189,175,177,11,0,124,100,86,217,127,84,181,234,222,218,43,154,14,0,158,76,60,83,177,124,22,192,99,165,122,222,214,136,165,213,65,
223,59,231,171,117,177,236,121,236,74,84,37,77,25,187,0,12,218,255,0,128,103,243,253,70,49,211,127,162,201,0,224,81,39,58,87,149,52,253,39,90,3,64,205,63,73,154,189,137,162,159,63,126,150,255,189,143,
191,224,199,207,242,207,55,81,20,73,250,87,154,59,24,165,170,229,178,217,0,99,215,255,46,146,166,0,158,142,93,255,229,77,20,173,127,252,44,115,154,3,0,164,31,63,203,127,127,19,69,255,135,170,21,58,255,
242,210,215,83,113,10,0,219,137,231,133,164,27,90,2,192,11,122,221,167,146,147,208,131,145,171,170,244,202,123,30,187,184,95,0,140,62,118,1,128,135,243,255,72,22,103,154,80,113,10,0,250,181,68,246,127,
161,37,0,88,72,222,68,81,242,38,138,254,207,31,63,203,255,232,250,15,255,241,179,204,223,68,209,90,210,140,166,246,86,174,170,210,180,232,121,236,186,18,47,252,0,216,143,93,241,143,159,229,159,52,5,0,
72,63,126,150,255,97,42,79,255,69,7,146,167,84,156,2,152,60,246,21,4,208,82,174,30,79,45,102,207,74,111,101,146,62,246,125,154,53,99,23,0,23,199,46,0,8,45,39,64,226,20,192,148,59,199,72,213,126,166,41,
173,1,192,197,9,40,201,83,239,12,178,20,150,164,41,0,151,199,46,0,240,52,63,176,55,190,34,113,10,96,170,157,98,36,139,253,76,0,192,66,161,170,194,48,239,169,191,74,68,242,212,7,189,39,77,205,216,117,35,
146,166,0,142,151,139,228,41,0,236,198,90,23,218,217,6,137,196,41,128,41,118,134,145,72,154,2,232,86,105,38,160,57,253,214,36,13,149,52,229,30,0,224,205,216,5,0,158,230,11,230,170,29,188,249,58,240,15,
75,96,9,128,137,39,128,33,68,146,30,250,138,61,76,69,208,153,170,10,33,184,229,154,164,41,0,198,46,0,112,102,206,127,84,159,182,90,23,11,73,191,98,187,215,1,55,212,92,156,50,10,128,137,39,128,64,38,160,
36,79,157,116,190,90,23,87,140,93,0,24,187,0,192,137,57,255,92,29,228,2,235,201,211,215,1,55,212,29,183,12,0,38,158,0,66,154,128,146,60,117,202,185,9,170,25,187,0,48,118,1,192,248,115,254,185,58,204,5,
110,146,167,175,3,108,168,43,145,52,5,192,196,19,64,160,19,80,146,167,78,32,105,10,128,177,11,0,220,153,243,207,213,67,46,112,181,46,22,175,3,107,168,59,73,159,185,101,0,48,241,4,16,242,4,148,228,233,
168,72,154,2,96,236,2,0,119,230,252,115,245,88,64,249,42,160,134,186,147,52,223,249,207,217,106,93,156,113,27,1,147,237,64,153,120,194,87,133,249,37,73,95,235,227,218,206,215,229,38,129,214,228,185,136,
37,197,59,147,164,205,51,242,143,218,239,19,243,255,112,156,82,61,158,88,76,63,55,56,146,166,0,24,187,0,192,157,57,255,92,79,147,166,157,230,2,95,5,210,80,251,146,166,157,55,22,0,175,250,5,38,158,112,
93,102,38,38,127,105,155,40,109,156,8,29,224,89,74,180,77,174,70,146,62,168,74,188,198,92,66,55,38,160,244,119,131,233,61,105,106,174,231,55,174,229,104,54,125,177,141,136,235,4,198,46,0,24,117,158,50,
215,254,74,83,18,167,59,13,245,92,210,180,243,198,2,224,77,191,64,18,1,174,77,196,115,85,9,210,92,85,114,180,8,228,89,75,85,37,80,223,153,231,45,17,85,170,163,76,64,233,247,122,55,84,210,244,80,92,139,
230,207,220,230,121,251,90,235,143,55,253,111,217,245,243,184,83,209,95,255,253,59,61,126,1,5,248,244,28,189,15,37,110,1,16,212,156,255,70,210,197,51,255,155,196,105,131,224,146,196,41,48,205,78,148,137,
39,198,148,153,73,122,110,198,161,242,136,137,119,106,254,89,95,66,191,59,33,111,43,55,19,34,237,36,22,234,201,134,54,91,1,36,230,103,125,103,126,254,132,91,226,209,4,244,109,95,85,197,36,79,123,115,187,
90,23,151,140,93,78,247,185,133,164,181,249,125,233,122,133,92,173,146,63,173,245,239,155,255,6,184,38,87,245,226,175,164,41,0,120,50,223,39,113,218,32,184,36,113,10,208,137,2,67,76,218,255,84,149,100,
204,44,239,211,88,85,226,179,62,105,222,252,55,87,39,77,165,170,228,106,169,109,229,108,105,241,89,55,201,129,15,34,145,218,251,4,212,180,247,55,177,149,66,87,22,171,117,113,206,216,229,132,66,219,234,
253,76,82,209,85,21,156,169,158,63,234,185,238,226,153,54,207,111,98,250,202,119,181,177,1,8,122,236,2,128,142,99,38,18,167,13,130,75,18,167,192,180,58,209,67,229,250,64,151,147,135,76,210,159,54,137,
82,51,33,79,204,36,56,214,182,138,52,4,165,105,143,92,102,43,130,151,42,189,106,137,212,223,204,63,227,137,222,67,125,38,79,19,85,149,167,17,143,235,81,134,74,154,94,73,250,76,115,63,141,227,205,179,242,
85,45,182,56,169,37,67,55,255,60,169,245,55,73,207,207,71,86,235,35,255,170,255,55,219,23,108,123,250,204,68,219,23,80,192,40,99,215,106,93,188,167,25,0,140,56,223,31,37,23,248,42,224,134,234,188,177,
0,56,221,55,204,181,127,99,104,160,11,75,85,85,165,217,161,201,187,169,36,77,197,50,245,76,150,219,21,152,36,223,76,85,34,117,74,237,213,107,140,66,242,244,104,67,37,77,25,187,182,242,90,63,155,89,182,
95,172,237,11,169,77,98,52,241,228,190,207,180,221,98,32,87,131,228,176,73,10,167,34,145,138,64,251,70,0,216,51,246,141,150,11,124,21,112,67,245,62,41,1,224,76,223,192,196,19,125,88,154,73,252,242,185,
196,95,45,81,186,153,188,198,52,219,94,185,182,201,212,236,133,246,156,73,250,93,211,72,162,246,58,1,53,201,211,111,220,126,173,238,215,222,151,164,158,158,196,51,73,247,19,110,231,66,219,173,78,94,220,
15,122,231,197,84,162,112,247,4,205,212,160,138,191,118,47,125,48,253,39,227,16,188,30,187,0,96,207,56,55,106,46,240,85,192,13,213,121,99,1,112,178,111,72,68,85,21,186,179,212,203,201,82,38,168,199,203,
107,237,156,63,211,206,177,105,227,79,129,183,243,245,106,93,92,245,216,71,206,197,139,165,166,247,230,16,73,211,169,142,93,185,170,196,224,31,22,219,122,164,122,92,193,63,229,113,62,211,246,197,83,102,
113,111,165,154,206,11,40,140,227,124,181,46,22,52,3,128,1,230,251,163,231,2,95,121,208,72,145,9,248,103,109,130,12,18,167,64,208,157,104,172,170,154,42,162,53,112,132,66,210,23,85,73,188,226,153,113,
104,166,106,41,249,140,230,234,92,41,147,176,94,173,139,229,129,68,192,239,38,104,10,241,121,239,117,2,74,242,180,209,189,248,118,128,164,233,212,198,174,92,210,31,207,245,177,59,207,249,76,44,63,183,
154,227,200,34,145,58,193,42,126,4,52,118,1,192,17,135,103,78,39,113,106,38,171,15,71,12,244,36,78,129,112,59,209,99,251,7,76,91,169,42,89,247,101,95,213,19,201,210,209,175,203,161,36,234,220,36,1,210,
192,62,251,123,155,37,185,35,4,158,83,186,247,206,250,188,6,19,27,187,138,90,31,91,28,104,139,153,182,21,252,17,183,97,235,123,55,211,11,251,112,79,168,138,31,129,245,155,0,38,59,223,63,38,118,157,70,
226,180,163,192,146,196,41,16,110,71,122,47,18,90,104,55,153,255,162,106,127,174,242,153,73,60,201,82,119,38,100,75,85,75,122,179,103,146,0,159,20,78,21,106,239,19,80,146,167,7,157,53,61,237,188,229,53,
120,80,184,213,148,7,159,217,218,115,187,233,103,83,110,187,94,228,122,161,194,215,84,247,126,18,9,107,116,243,220,247,94,169,15,96,114,115,253,99,99,214,240,19,167,29,190,141,39,113,10,132,217,145,222,
72,186,160,37,208,100,60,80,181,151,100,182,231,126,74,85,85,48,50,129,116,87,97,18,1,139,221,68,64,45,225,253,89,254,87,81,229,234,113,127,77,42,245,159,53,200,114,211,128,19,215,185,182,219,157,148,
123,62,119,44,150,139,143,121,109,94,74,162,206,21,102,21,63,2,25,187,0,76,110,174,223,69,188,20,118,226,180,227,160,158,196,41,16,94,71,58,23,123,245,193,222,66,85,194,180,216,51,214,204,229,246,146,
197,204,252,179,144,180,174,77,78,234,19,147,226,208,158,129,207,60,67,187,147,227,68,219,132,241,59,243,251,216,241,118,249,99,95,162,203,28,220,245,201,243,4,192,114,181,46,62,246,28,103,125,19,75,117,
55,110,87,235,226,146,177,171,117,255,250,92,69,120,164,109,178,212,151,231,49,107,249,125,245,62,212,101,185,182,47,160,202,61,215,44,17,85,168,56,162,63,88,173,139,115,154,1,192,145,49,170,147,185,192,
87,1,55,84,231,141,5,96,244,62,34,209,52,79,33,70,51,165,153,208,127,217,147,48,117,109,98,152,105,155,24,205,36,105,136,229,194,13,158,185,88,219,36,106,172,42,177,26,203,141,170,177,66,207,87,161,166,
170,42,80,83,79,239,225,235,213,186,184,162,47,237,93,175,73,234,157,251,241,33,160,254,245,203,190,231,174,246,89,93,170,224,223,244,167,95,205,63,115,109,95,62,229,125,84,200,237,188,156,218,252,126,
243,82,42,113,164,93,150,170,146,222,203,103,230,99,23,230,58,198,132,20,104,224,114,181,46,110,105,6,0,45,198,206,72,14,231,2,95,5,220,80,157,55,22,128,209,251,8,170,164,96,51,161,191,221,179,127,233,
76,227,86,34,22,102,194,254,151,153,200,55,174,20,117,240,153,76,204,152,253,206,252,51,29,241,199,89,104,207,65,95,181,36,206,220,195,38,254,248,220,1,89,29,93,191,153,164,251,9,247,23,185,6,88,90,106,
94,62,124,147,255,73,234,66,210,181,246,44,199,119,160,130,191,48,191,190,214,126,159,187,188,108,216,244,77,81,173,15,141,53,206,11,169,66,207,188,128,50,63,231,92,97,108,131,130,225,156,185,244,2,24,
128,55,243,124,167,115,129,175,2,110,168,206,27,11,192,168,253,68,200,7,106,224,56,165,158,79,152,142,53,233,203,84,37,102,190,154,177,168,156,200,115,154,152,231,244,157,249,231,24,237,254,100,47,91,
79,43,80,75,245,127,88,212,149,105,151,41,246,25,239,251,126,121,17,200,158,178,133,121,166,22,123,62,95,108,238,159,153,134,75,12,23,122,252,18,42,15,169,127,53,125,85,162,237,11,169,33,239,157,133,158,
223,122,193,199,62,20,1,247,175,0,130,25,247,250,138,149,194,74,156,246,28,84,146,56,5,194,232,80,57,12,10,135,38,122,143,246,48,29,233,176,160,220,76,226,255,164,210,226,209,179,27,155,137,246,7,13,155,
92,201,20,70,2,53,87,207,85,145,167,39,241,189,185,54,83,50,72,69,148,231,135,65,21,122,62,97,58,228,115,180,233,91,191,170,74,146,22,19,236,71,211,90,63,58,68,155,103,122,126,31,105,223,250,80,140,52,
118,173,214,197,123,154,1,192,11,227,91,36,79,114,129,175,2,110,168,206,27,11,192,40,253,196,76,211,94,78,138,253,150,170,246,210,42,118,238,151,43,85,203,69,163,158,255,254,210,252,12,95,245,204,73,210,
216,251,60,39,170,146,116,191,105,152,74,170,66,213,137,233,217,158,201,255,157,252,88,126,218,235,129,27,129,84,69,54,49,200,30,124,30,31,6,85,232,249,132,233,92,253,191,144,42,100,94,66,105,66,213,250,
13,239,173,84,85,226,178,239,126,244,208,189,144,138,4,42,70,28,187,0,120,63,150,245,29,127,134,145,56,29,40,80,39,113,10,248,221,161,198,10,99,111,56,116,39,87,149,248,200,70,154,208,47,37,125,237,115,
239,201,137,5,76,51,51,249,159,245,252,215,101,218,95,129,122,97,238,27,215,251,152,94,147,125,19,58,44,106,168,195,160,18,51,118,249,164,208,120,9,211,92,213,62,155,89,159,91,83,76,160,31,77,123,122,
134,75,185,183,29,14,252,112,190,175,79,1,192,216,37,207,114,129,175,70,106,168,68,213,91,248,164,231,191,138,196,41,224,119,167,250,77,211,169,130,194,203,19,183,203,221,0,124,128,73,91,169,237,190,111,
76,232,135,153,252,207,250,140,11,180,147,64,53,127,247,103,185,191,29,200,251,158,247,59,157,203,207,10,73,91,185,134,57,12,42,146,95,7,25,150,26,39,41,182,84,85,85,74,197,126,183,247,95,189,31,141,6,
188,87,46,228,199,75,40,12,223,191,156,17,63,1,216,137,147,134,88,233,228,119,226,116,224,170,6,18,167,128,191,157,42,251,154,98,227,86,85,178,171,172,221,31,169,250,93,38,184,80,181,95,233,146,230,31,
252,217,143,205,164,255,247,30,131,170,133,158,238,141,155,72,186,145,187,75,79,11,85,201,211,146,126,215,221,201,187,103,123,198,46,84,189,144,42,119,62,195,92,253,36,76,115,85,137,55,146,165,195,244,
165,51,85,73,212,121,15,207,211,190,23,153,145,233,63,62,211,250,168,63,247,236,119,10,160,54,78,12,181,61,148,191,137,211,17,150,130,145,56,5,252,13,246,217,215,20,185,170,101,94,121,237,222,136,205,
164,108,222,211,223,199,164,222,173,190,32,81,181,103,237,76,3,85,79,153,164,209,141,220,172,156,234,125,207,184,64,43,253,7,89,46,106,170,238,110,60,104,143,76,85,226,43,223,249,249,83,243,243,119,121,
253,11,85,203,240,23,156,178,61,234,68,117,166,234,101,84,218,241,181,189,222,147,64,141,85,85,175,167,180,62,140,219,213,186,184,164,25,128,201,143,69,67,238,169,239,103,226,116,164,253,179,72,156,2,
126,118,170,223,197,114,175,41,43,205,100,236,118,231,222,184,82,63,7,63,45,84,45,197,207,104,122,231,39,254,159,122,8,184,10,85,73,164,229,206,223,119,39,55,43,7,63,246,89,9,29,224,222,210,131,28,80,
226,201,190,166,165,246,87,10,198,234,62,209,69,191,234,102,95,26,155,126,116,222,225,51,158,105,255,30,210,51,85,137,248,152,150,71,223,99,23,0,231,227,248,161,15,34,245,47,113,58,226,161,3,36,78,1,255,
58,214,7,81,165,48,101,153,170,234,176,162,118,79,164,234,254,4,244,82,207,236,213,6,231,251,136,84,219,42,84,31,239,189,46,238,221,247,125,86,239,5,84,245,159,107,184,125,77,135,158,16,52,181,208,206,
178,252,30,246,247,45,84,85,151,210,175,250,209,151,206,213,237,203,168,133,158,110,129,18,137,229,251,216,142,93,111,233,27,128,201,141,53,137,2,200,5,190,10,184,161,58,111,44,0,189,247,23,23,242,99,
153,35,250,9,168,31,85,153,154,9,215,141,186,93,150,95,232,153,147,163,225,93,127,17,171,159,109,27,174,87,235,226,106,231,62,116,237,240,168,222,227,155,211,147,248,78,253,108,137,49,164,247,3,237,107,
234,242,222,176,133,170,23,2,217,206,207,60,87,119,91,82,228,146,190,208,175,122,219,151,166,170,150,241,119,241,188,151,230,94,184,218,51,31,28,226,96,96,184,109,185,90,23,31,105,6,96,50,227,75,162,64,
114,129,175,2,110,168,65,38,22,0,58,237,47,190,209,18,147,148,233,105,165,223,204,76,178,162,14,255,142,63,152,216,7,217,119,68,170,146,86,93,110,227,144,235,233,254,186,93,223,147,199,186,222,77,78,244,
208,174,62,157,14,191,235,114,119,187,143,158,218,105,38,119,171,115,111,245,244,96,189,68,221,29,130,150,105,207,18,109,120,219,151,198,234,238,101,84,161,253,9,251,43,81,125,58,117,131,244,205,0,156,
152,219,7,147,11,124,21,112,67,117,222,88,0,122,237,92,67,60,144,4,47,219,87,221,215,229,222,146,76,236,167,211,135,68,234,62,129,218,247,253,121,172,94,43,42,61,126,161,53,72,252,231,240,158,220,133,
118,146,86,29,47,153,94,136,253,75,233,75,237,239,149,203,61,201,123,170,79,167,171,84,207,219,205,0,24,125,28,73,20,88,46,240,117,192,13,5,192,159,206,245,138,0,122,114,10,19,56,95,213,238,131,153,170,
36,196,172,163,63,255,108,181,46,206,152,220,79,195,106,93,148,230,126,122,43,233,218,76,206,142,245,249,244,36,254,102,226,154,205,223,241,81,210,101,71,127,254,177,238,122,110,211,220,180,165,111,147,
242,143,3,182,191,107,177,238,173,233,91,179,90,223,154,170,74,128,31,155,52,93,168,218,163,240,156,126,149,190,212,210,92,210,119,51,190,255,234,87,86,235,226,189,135,125,11,186,17,245,61,118,1,24,117,
94,159,40,192,92,224,171,192,27,138,138,83,192,143,206,149,37,250,211,178,80,173,2,165,227,42,190,66,236,97,10,245,178,7,234,110,245,105,34,55,170,166,122,93,178,111,62,171,79,43,2,6,57,185,217,193,37,
250,165,170,42,211,101,237,103,140,212,205,254,188,153,168,220,159,114,95,26,169,155,253,198,151,230,30,45,119,250,209,123,249,187,37,8,218,99,201,62,16,230,188,62,200,92,224,171,128,27,170,243,198,2,
208,75,7,251,157,128,121,50,74,19,40,47,122,152,52,149,218,115,32,5,96,18,168,119,234,110,79,199,95,251,241,246,116,128,89,27,44,217,175,12,114,240,136,131,75,244,51,85,9,227,178,246,51,166,230,190,63,
166,111,205,77,159,157,209,147,160,163,151,81,165,246,39,248,93,218,2,5,195,197,132,44,217,7,194,25,35,18,5,156,11,124,221,97,67,205,196,242,124,0,205,250,141,43,145,52,157,138,66,213,210,249,197,206,
245,239,226,240,153,133,170,229,163,87,52,51,118,173,214,69,97,2,167,51,115,31,30,35,149,244,109,179,236,212,44,105,61,151,116,62,242,199,100,201,190,73,200,12,216,222,174,196,187,215,102,75,146,114,167,
111,125,56,162,111,45,84,37,183,222,147,52,197,78,95,122,110,250,210,182,247,69,36,233,254,244,36,190,51,9,211,250,22,40,231,114,99,11,20,12,35,18,75,246,129,80,230,244,137,2,207,5,190,234,168,161,230,
142,118,124,84,156,2,110,119,176,44,209,159,134,76,181,106,40,51,89,186,215,241,21,128,153,170,106,168,156,38,70,131,190,231,74,221,28,122,114,187,90,23,151,14,5,141,189,47,123,116,124,201,254,212,150,
232,151,230,51,103,181,159,45,54,63,219,49,215,232,218,220,219,37,189,5,44,230,127,55,71,244,121,133,185,135,243,157,126,148,131,163,166,229,156,237,149,0,239,231,244,46,38,77,221,170,56,117,56,105,10,
192,109,244,27,211,112,91,175,134,170,37,204,211,35,19,6,151,230,207,205,105,98,52,97,42,147,223,171,218,111,239,24,23,230,224,168,200,252,185,185,170,195,84,198,186,39,63,155,196,89,175,19,92,71,47,235,
114,160,164,105,228,200,216,149,171,170,178,207,106,63,219,204,244,173,73,219,9,134,249,51,175,72,154,194,178,47,93,152,62,239,182,229,31,17,171,170,224,191,168,253,153,185,170,138,214,37,45,60,25,55,
155,113,116,12,127,255,253,119,227,95,0,126,197,30,137,38,178,234,252,245,145,13,53,23,201,15,0,205,251,142,43,81,77,16,186,82,85,21,193,229,206,152,113,236,210,252,165,153,220,223,210,196,56,98,194,95,
152,165,161,31,117,220,242,253,68,213,137,209,137,249,115,75,115,90,244,98,132,143,21,169,170,254,234,179,221,114,185,183,100,191,212,112,9,221,99,170,235,186,114,107,150,208,151,181,190,245,78,85,165,
105,212,178,253,62,154,23,81,5,189,3,26,246,9,165,25,231,223,171,253,242,253,155,211,147,248,126,207,210,253,107,90,120,18,122,31,187,0,244,50,159,79,52,161,173,58,95,31,209,80,115,145,52,5,208,188,239,
136,85,45,147,69,184,74,61,221,207,244,238,200,49,99,51,185,255,72,53,20,58,156,244,47,205,132,255,246,200,73,223,55,19,23,109,254,220,115,73,151,35,124,164,217,102,255,213,30,219,236,74,199,239,21,219,
165,235,33,250,4,115,216,210,124,228,207,186,251,50,42,54,219,39,180,253,185,110,85,189,136,90,210,27,224,200,126,33,55,75,34,47,213,110,159,210,153,233,71,147,157,190,230,163,216,247,116,10,230,166,143,
5,224,199,124,126,174,170,24,38,154,202,103,126,125,68,67,145,52,5,208,134,11,21,59,232,79,174,218,9,223,167,39,113,116,228,196,94,218,86,153,50,185,71,31,19,254,77,197,212,177,135,71,221,153,23,4,155,
63,247,118,164,73,255,16,203,30,93,89,178,159,13,88,125,62,102,220,91,154,126,117,81,139,197,83,181,95,154,95,168,122,185,117,201,139,40,116,220,159,222,170,125,245,105,172,167,47,161,150,234,230,96,63,
184,143,220,2,224,129,169,230,2,95,211,80,0,6,236,104,103,170,170,10,16,166,220,76,198,11,115,189,19,29,183,231,94,41,170,76,49,220,132,63,51,19,254,197,17,127,204,252,244,36,126,168,45,57,221,76,250,
135,188,127,99,73,23,3,180,213,194,129,203,54,72,85,175,217,94,38,30,177,95,125,191,115,128,206,133,218,47,143,187,53,127,94,198,83,143,158,250,135,226,200,234,211,221,151,80,185,233,155,115,90,55,104,
177,233,107,1,184,61,151,159,100,46,176,77,197,105,46,150,76,0,104,222,209,70,98,15,163,144,45,234,251,238,153,106,168,7,181,79,54,100,162,202,20,195,79,248,75,179,204,254,152,74,209,84,210,195,230,160,
166,218,97,39,67,78,250,135,56,40,234,82,227,198,131,183,67,28,14,55,242,246,50,153,106,47,163,204,207,115,215,114,44,45,69,149,41,134,237,79,111,213,62,225,185,251,18,106,204,253,163,49,156,79,3,140,
93,0,218,43,52,209,92,96,227,196,105,109,2,64,208,5,160,137,11,141,87,177,131,126,45,76,178,105,51,177,159,235,184,205,194,47,205,65,37,140,51,24,107,194,191,212,113,135,157,36,170,237,215,55,82,242,244,
174,231,54,42,53,222,225,45,67,254,221,99,109,47,179,168,247,131,71,110,123,178,84,245,34,42,227,233,198,192,125,105,97,18,158,109,158,215,84,213,75,168,164,246,231,157,139,228,105,200,34,73,159,105,6,
192,217,62,125,140,120,214,9,175,143,108,48,38,181,0,94,196,129,80,65,187,222,147,52,109,155,176,41,84,45,33,189,165,89,225,200,132,255,76,237,19,116,145,153,244,207,204,159,87,14,28,108,166,125,31,182,
97,158,213,98,132,203,115,57,224,129,80,179,17,62,223,238,203,168,68,237,183,61,185,100,187,19,56,208,159,94,181,156,59,38,218,159,60,61,167,85,131,197,65,81,128,219,253,121,174,9,38,79,95,119,208,96,
4,98,0,94,242,89,28,8,21,162,115,51,25,218,76,238,239,212,62,105,186,212,206,62,126,128,231,19,126,153,126,239,126,115,216,73,45,121,154,13,244,227,15,177,15,213,208,9,140,188,126,72,82,207,198,216,94,
230,124,79,210,180,205,182,39,133,120,17,5,183,250,210,76,210,219,22,253,95,164,167,135,70,45,68,242,52,244,121,3,0,119,251,243,77,60,59,153,121,219,235,35,27,44,23,201,83,0,7,152,183,198,115,90,34,56,
231,59,39,60,223,29,113,157,175,169,136,130,7,19,254,99,14,39,185,171,39,79,77,37,235,98,128,31,61,54,7,9,245,221,54,203,1,47,199,80,7,66,205,213,254,96,187,174,250,213,185,218,109,123,178,20,47,162,224,
232,100,251,136,74,254,59,146,167,147,145,214,175,53,0,55,251,115,77,40,121,250,186,131,6,203,85,189,61,36,56,3,176,15,111,141,195,211,85,210,180,148,244,177,94,181,10,56,28,32,22,38,64,92,180,252,35,
118,39,253,67,237,213,247,121,115,192,74,143,46,7,186,12,203,33,246,233,28,233,48,195,125,73,211,59,53,79,154,242,34,10,62,244,167,87,106,119,8,223,157,137,57,54,127,206,66,213,75,45,238,119,230,15,0,
134,239,203,75,77,36,121,250,154,6,3,208,227,228,115,174,106,115,127,132,163,171,164,105,161,234,132,231,37,77,10,159,2,68,147,240,108,155,40,188,59,61,137,111,106,127,222,16,201,211,72,213,225,124,125,
182,75,33,233,118,128,75,48,84,130,246,66,195,110,47,243,92,210,180,137,82,188,136,130,95,253,233,178,229,252,113,190,147,60,205,197,10,200,16,197,167,39,49,253,25,224,65,108,172,9,228,2,95,211,96,0,122,
196,219,226,176,116,149,52,205,197,50,82,248,29,36,222,170,93,181,148,36,93,236,76,250,135,72,158,126,50,135,244,245,233,90,253,38,46,110,77,130,182,87,166,218,116,200,195,12,247,245,171,77,147,166,133,
120,17,5,63,251,210,92,237,246,125,38,121,58,13,159,6,88,49,1,224,248,190,188,84,224,185,192,215,52,24,128,158,38,159,23,106,126,152,5,220,213,85,210,116,177,90,23,239,89,70,138,0,130,196,229,17,19,245,
249,158,228,105,159,177,83,164,158,95,100,153,103,250,75,79,127,124,169,118,123,34,182,113,163,225,170,77,187,232,87,115,241,34,10,158,79,184,91,238,251,76,242,52,124,145,122,94,49,1,160,211,56,48,216,
92,224,107,26,12,64,215,204,219,97,170,77,195,113,221,81,210,244,182,126,90,52,16,64,144,152,171,253,62,239,243,157,131,155,250,142,157,230,3,84,157,222,170,159,164,197,151,33,94,182,152,246,153,15,116,
251,116,145,52,229,69,20,66,234,79,207,213,252,176,39,146,167,225,163,234,20,240,167,31,47,21,104,46,240,53,13,6,160,7,23,26,118,127,56,244,103,81,223,51,239,136,164,233,249,106,93,92,210,156,32,72,124,
228,102,115,96,212,64,177,147,143,85,167,165,134,217,63,181,247,246,217,233,15,23,71,246,171,11,94,68,33,192,254,116,161,110,146,167,31,105,205,96,68,26,254,176,62,0,227,196,197,206,122,77,131,1,232,210,
8,251,195,161,63,143,38,230,71,38,77,23,52,39,38,16,36,182,185,207,239,246,36,79,139,158,126,212,161,170,78,187,252,249,67,171,54,237,34,105,122,78,210,20,1,247,167,11,73,239,213,172,106,116,55,121,154,
169,121,2,22,238,26,98,236,2,208,125,92,156,135,242,153,94,211,96,0,58,118,33,170,77,67,144,237,36,77,111,90,76,238,75,85,7,150,44,104,78,76,33,72,60,226,160,167,221,228,105,219,131,167,108,12,81,117,
218,213,126,164,165,194,170,54,221,221,246,228,74,237,146,166,244,169,8,189,63,205,213,124,201,253,110,242,116,33,146,167,33,97,11,48,192,179,184,216,244,227,203,16,62,207,235,1,27,44,231,246,1,194,70,
181,105,48,114,213,150,185,153,132,206,69,195,63,163,84,149,52,205,104,78,76,44,80,60,38,121,154,28,145,52,104,146,92,136,123,110,131,69,71,63,123,72,213,166,187,219,158,204,91,36,2,72,154,98,74,125,105,
155,126,112,95,242,244,154,214,12,2,85,167,128,127,253,120,185,90,23,31,91,198,197,78,121,53,212,95,100,18,42,15,146,146,1,63,95,102,78,105,4,48,204,115,126,37,222,8,251,174,148,244,118,147,172,48,147,
251,187,22,127,198,25,167,60,59,243,92,38,170,170,192,163,157,49,248,157,236,171,195,115,73,63,205,239,11,243,75,36,198,15,182,123,155,37,216,143,158,157,150,207,159,141,222,247,199,236,96,60,120,212,
23,57,120,173,154,88,154,137,131,90,94,215,82,210,37,73,83,76,120,12,123,80,179,213,76,93,109,53,4,183,116,62,118,253,253,247,223,141,191,231,213,171,87,92,9,192,189,88,107,87,167,185,192,87,3,55,86,164,
97,147,167,36,78,129,97,159,239,239,98,153,190,207,74,61,78,218,180,153,172,60,250,51,48,232,243,151,152,95,39,181,223,15,245,60,102,230,218,255,165,42,201,90,112,15,180,14,18,11,73,239,107,47,47,46,212,
207,193,24,111,87,235,162,112,120,76,184,174,87,104,246,248,115,198,230,231,236,75,110,250,196,205,245,156,73,186,167,79,5,26,63,167,247,13,231,144,187,251,9,223,75,154,209,154,222,251,231,46,95,168,145,
56,5,156,143,139,91,207,77,188,77,156,142,208,96,36,78,129,225,158,235,43,81,109,234,187,95,147,12,51,73,249,38,146,166,174,62,111,169,164,84,85,213,104,34,41,118,244,71,205,84,37,142,190,154,49,185,156,
224,181,106,19,243,228,122,156,108,235,35,110,114,189,234,180,215,196,238,64,49,105,161,199,73,240,68,205,94,70,209,167,54,187,150,137,182,149,245,145,164,127,232,113,162,45,182,236,43,179,157,127,255,
90,187,158,133,170,23,67,5,45,62,248,245,141,76,92,210,100,188,171,199,53,145,134,95,253,136,238,117,250,82,141,196,41,224,69,92,220,106,14,226,125,226,116,192,6,35,113,10,12,23,204,82,109,26,72,32,218,
114,114,193,4,191,255,132,192,76,210,7,85,9,83,95,229,170,146,18,147,74,164,182,140,121,126,37,54,123,156,240,187,90,117,186,24,226,212,248,158,171,77,31,245,137,45,95,70,177,167,233,243,253,97,162,42,
129,246,65,246,9,209,62,250,179,66,219,74,251,156,132,234,32,215,190,233,74,152,247,71,62,135,112,75,169,14,183,113,33,113,10,120,19,23,55,21,70,226,116,160,6,35,113,10,12,243,44,207,213,207,62,124,24,
198,238,254,123,109,150,179,125,92,173,139,37,77,217,217,51,21,169,74,144,254,102,174,69,168,147,188,76,210,159,230,30,44,2,191,166,109,98,158,221,23,26,93,191,160,234,125,57,124,203,207,61,84,181,233,
141,154,31,124,215,184,79,108,153,248,38,105,250,184,47,252,96,218,47,117,252,71,46,245,184,202,62,99,68,235,252,158,72,116,68,229,182,249,254,111,180,164,215,58,27,187,72,156,2,94,197,197,141,230,24,
193,36,78,7,104,48,18,167,192,48,207,241,119,185,187,84,24,135,229,122,188,36,184,77,34,129,9,126,119,207,210,92,219,100,233,20,239,197,63,20,112,18,245,244,36,126,80,243,196,79,61,1,151,154,132,65,87,
74,245,124,0,83,139,170,206,65,98,183,158,87,74,60,154,212,183,184,238,147,238,83,205,125,254,155,105,179,36,128,143,148,169,122,65,148,177,42,163,179,123,36,81,179,228,233,110,172,51,23,47,252,125,86,
174,214,197,63,119,241,7,145,56,5,70,237,203,189,201,5,190,30,187,177,204,82,44,38,220,128,191,29,222,92,36,77,189,13,60,205,4,125,51,145,152,137,164,233,40,19,192,211,147,248,238,244,36,254,97,38,114,
179,137,54,69,162,234,16,164,239,167,39,241,189,233,91,66,243,209,76,224,155,184,51,73,2,153,234,181,203,14,127,158,72,61,47,149,50,73,240,101,131,111,249,50,208,181,184,80,63,73,211,229,78,210,244,78,
36,77,95,234,3,163,211,147,120,110,158,251,31,170,18,98,23,10,103,47,202,212,244,109,223,78,79,226,239,166,191,159,106,63,223,85,191,146,75,58,51,113,140,237,248,114,95,251,254,5,243,79,175,69,129,198,
8,192,212,250,114,111,114,129,206,188,46,233,41,219,76,197,41,208,255,179,219,166,130,10,110,168,31,154,144,168,249,190,97,183,171,117,113,73,51,182,75,20,152,49,239,147,120,241,112,72,105,2,170,47,161,
84,161,182,92,182,157,235,113,181,84,151,167,67,23,171,117,241,182,231,207,156,202,174,82,182,247,159,165,246,51,245,177,82,98,247,58,205,213,172,170,109,82,125,234,196,43,236,55,253,219,82,210,31,44,
233,63,234,30,106,253,140,157,158,196,223,196,97,81,190,234,100,188,160,226,20,112,162,47,119,62,23,248,218,149,198,162,242,20,240,178,147,75,69,210,212,87,139,157,147,102,239,212,44,105,186,32,105,218,
234,153,137,77,112,240,93,85,5,82,76,171,28,20,169,170,60,251,126,122,18,63,152,62,199,107,38,169,118,46,251,74,41,153,137,125,61,57,112,174,234,80,154,46,196,125,87,238,152,164,144,205,207,251,101,160,
231,112,222,195,179,87,234,113,5,255,238,53,163,79,21,21,246,123,250,183,185,164,7,83,137,122,101,182,182,128,125,223,178,48,253,161,173,139,157,254,174,73,213,42,220,18,135,16,19,0,240,35,23,248,154,
6,3,112,132,223,105,2,47,229,122,188,220,247,70,13,171,223,134,56,241,58,176,100,65,90,75,152,206,197,137,190,109,164,181,4,195,220,243,0,49,55,19,246,38,102,167,39,241,133,249,254,82,213,178,127,159,
250,114,155,164,232,80,49,224,167,30,254,204,203,218,225,51,145,154,237,69,27,116,159,90,91,138,255,77,213,161,60,244,129,79,197,146,62,107,187,85,201,140,38,177,238,79,23,146,110,27,124,203,77,109,251,
147,174,251,82,12,235,19,77,0,4,211,151,159,75,186,118,245,231,123,237,104,131,45,184,117,0,231,39,66,177,122,222,27,15,189,57,223,89,74,218,228,58,22,106,158,240,153,242,115,146,154,237,44,30,120,94,
58,77,48,220,249,158,64,53,73,182,166,201,178,250,132,63,239,48,192,76,55,127,110,143,94,138,237,22,125,30,82,85,123,38,19,117,191,52,119,177,179,47,233,189,26,30,90,19,106,156,112,122,18,95,169,122,97,
116,39,150,68,219,154,73,186,223,244,113,38,17,143,195,253,233,101,131,249,99,100,218,55,50,223,155,185,60,89,199,225,103,133,42,109,32,168,190,252,170,69,108,60,136,215,142,54,24,201,83,192,125,115,154,
192,75,245,170,168,68,85,181,169,173,82,213,9,223,37,205,104,149,48,184,87,149,48,77,105,145,94,196,242,60,129,218,162,82,74,59,19,254,43,85,39,118,119,225,83,207,159,181,124,33,182,251,99,160,102,239,
250,115,230,170,85,240,155,68,161,237,51,95,170,246,34,43,176,254,111,83,97,255,89,84,151,30,213,199,169,170,66,189,34,129,250,114,124,35,251,195,247,54,109,171,30,250,82,12,139,170,83,32,32,45,182,96,
25,196,107,135,27,140,228,41,224,54,150,233,251,39,91,173,139,219,218,191,55,221,215,244,87,210,21,207,38,12,162,90,194,96,70,139,12,34,86,149,64,245,114,15,84,83,41,149,53,252,188,245,23,30,77,247,75,
125,206,108,128,196,204,115,201,209,98,136,195,113,106,135,178,117,169,94,193,159,170,74,20,218,250,24,82,159,186,147,48,157,11,93,137,180,93,198,79,2,245,249,190,180,84,181,236,222,182,63,252,181,253,
73,199,125,41,134,69,95,3,132,215,159,47,228,88,242,244,181,227,13,118,46,71,75,117,129,41,51,123,111,197,180,132,87,202,122,127,106,170,162,146,6,223,127,187,179,20,21,79,159,139,43,18,6,163,74,85,237,
129,122,239,225,210,189,143,106,118,216,211,124,179,7,226,106,93,20,29,197,74,81,223,247,238,129,67,162,190,12,212,206,93,127,190,221,125,77,239,27,126,111,22,72,223,71,194,116,24,145,72,160,190,212,199,
20,106,182,103,105,125,251,147,174,250,82,12,252,92,248,190,239,57,128,189,253,249,194,165,62,249,53,13,6,160,5,170,77,253,115,110,38,5,109,170,162,178,41,156,246,124,68,210,32,61,61,137,89,146,234,142,
153,164,111,38,145,237,75,112,88,170,249,1,37,119,181,37,251,75,73,203,14,126,148,33,150,60,238,171,58,93,12,212,212,93,126,190,99,42,248,151,59,223,235,107,223,23,153,231,108,115,224,19,134,17,153,241,
230,27,9,163,189,253,105,166,199,7,96,142,209,151,130,121,9,128,227,251,243,133,28,201,5,190,166,193,0,52,156,40,197,98,9,178,111,150,102,50,176,169,138,186,107,240,189,165,56,113,246,80,210,96,179,143,
105,76,139,184,151,88,56,61,137,191,249,178,124,191,197,97,81,187,207,114,23,203,76,227,1,218,107,177,251,239,3,30,10,213,213,115,90,234,113,5,255,69,131,113,177,233,117,118,181,255,155,169,74,152,242,
194,104,60,177,182,219,148,36,52,199,163,254,244,86,246,47,100,18,61,126,153,204,146,125,255,164,28,18,5,4,219,159,47,92,136,155,94,211,96,0,26,154,211,4,94,41,245,184,242,226,115,195,228,1,135,65,61,
159,52,96,31,83,247,37,170,150,239,223,248,176,172,213,196,58,139,6,223,50,171,45,217,47,59,138,147,126,239,249,51,22,122,124,128,203,159,3,53,111,151,213,166,215,181,10,254,88,246,21,252,165,60,63,12,
202,44,203,127,80,181,45,65,44,184,32,85,85,125,122,195,242,253,71,154,28,22,117,177,121,105,212,97,95,138,97,113,72,20,16,40,23,114,129,175,105,48,0,46,77,170,209,185,235,157,37,250,23,13,191,55,163,
9,31,37,13,54,85,166,247,162,202,202,39,23,38,177,144,120,50,217,47,26,124,253,238,50,211,99,159,217,33,14,137,218,236,105,90,108,170,225,251,126,110,213,221,75,142,221,37,250,77,250,2,175,15,216,171,
237,227,156,210,165,56,219,207,125,223,188,76,97,162,221,56,1,202,146,125,191,205,105,2,32,232,62,125,161,17,115,129,175,105,48,0,13,38,77,169,168,48,241,201,190,61,248,154,124,239,21,77,248,228,254,167,
202,212,95,177,60,216,251,180,197,126,167,145,186,93,178,31,13,112,143,103,170,146,18,67,29,10,53,83,55,47,58,74,181,63,100,111,233,235,1,123,167,39,113,114,122,18,111,150,229,195,109,145,164,123,115,
72,94,52,245,198,48,47,42,108,247,59,141,213,253,246,39,24,240,222,231,165,1,16,124,159,190,208,72,185,192,215,52,24,128,6,168,54,245,203,229,206,4,63,110,147,28,192,175,246,123,16,85,166,33,248,108,246,
4,116,246,90,154,201,254,117,131,111,169,47,217,47,116,124,66,178,247,229,250,171,117,241,113,192,3,146,126,235,232,207,249,178,179,68,223,118,105,104,225,107,159,90,59,252,41,161,235,240,202,76,84,159,
110,250,155,91,217,87,143,206,88,178,207,60,5,128,211,125,250,98,140,190,249,149,231,19,217,185,14,87,80,101,171,117,113,198,237,5,116,242,188,69,170,170,237,34,90,195,11,215,155,138,81,51,193,255,222,
224,123,63,14,177,124,214,163,251,254,94,44,77,13,81,105,238,245,204,225,251,239,161,193,189,87,72,122,191,217,63,243,244,36,254,174,227,86,8,188,221,36,9,61,127,134,155,246,127,207,201,87,235,226,125,
203,107,115,230,219,182,39,166,221,238,232,251,130,112,107,98,130,146,24,214,42,134,221,237,75,31,120,14,188,242,207,77,238,245,191,255,254,187,241,95,240,234,213,43,90,25,24,191,95,79,117,120,187,164,
78,115,129,175,125,110,44,42,79,129,65,205,68,210,212,23,133,153,40,109,52,89,162,191,36,105,250,107,64,78,196,126,126,33,139,84,29,28,117,229,240,207,216,100,169,104,172,199,123,24,31,27,31,205,2,26,
187,186,80,175,224,191,104,208,47,92,123,152,52,157,169,170,50,165,239,11,195,133,233,235,146,169,54,64,195,234,209,88,143,183,165,96,201,254,52,251,124,0,110,247,235,153,164,179,161,250,231,215,1,52,
216,66,36,79,129,33,252,70,19,120,227,186,86,41,49,111,48,249,109,50,177,8,154,105,183,111,226,101,193,20,124,62,61,137,239,92,92,186,111,42,62,175,27,126,150,184,22,80,46,143,248,235,67,89,242,216,197,
231,88,108,146,159,230,62,177,221,235,51,247,109,175,104,243,34,129,195,239,194,147,168,74,158,206,38,60,201,94,234,241,75,229,67,46,54,137,230,142,182,63,129,95,125,62,0,63,250,245,92,3,37,79,95,7,210,
96,11,38,251,64,175,19,169,72,188,193,245,69,182,57,128,164,225,4,95,146,206,167,188,148,175,118,191,223,168,89,149,46,252,55,55,73,133,200,193,24,231,86,213,97,74,182,234,247,238,229,17,193,100,226,123,
133,154,73,34,31,251,25,74,61,62,92,230,70,246,73,197,115,143,218,42,50,75,146,57,0,42,92,145,170,131,163,110,38,220,6,215,170,86,229,52,234,75,205,11,144,130,91,200,11,233,230,5,34,128,240,13,149,60,
125,29,80,131,45,36,189,23,75,41,128,62,204,104,2,175,38,5,27,23,178,223,227,112,242,75,244,77,226,224,78,143,151,59,99,58,18,85,135,169,36,14,254,108,77,18,112,105,135,7,69,249,94,185,211,197,216,85,
175,224,79,85,37,217,109,191,47,247,164,239,75,84,29,126,151,210,13,76,194,197,233,73,124,239,242,1,121,61,206,23,75,61,126,17,114,112,76,48,219,114,108,92,114,235,48,111,1,224,100,223,158,171,231,228,
233,107,26,12,128,5,150,233,251,161,190,156,52,150,125,229,80,147,137,68,144,204,4,242,65,246,73,17,132,41,146,131,123,1,182,88,178,95,175,40,187,61,34,46,242,125,242,121,108,226,183,48,21,191,251,218,
245,224,247,201,126,73,240,216,125,95,106,250,190,132,199,127,82,102,166,175,139,39,56,193,94,202,126,27,147,207,155,4,179,249,190,140,91,103,18,125,63,0,255,250,246,92,61,230,2,95,211,96,0,94,152,84,
69,226,205,173,47,234,137,149,38,203,45,175,67,56,61,251,200,123,156,196,1,54,34,147,80,152,59,22,223,92,201,126,169,104,188,57,244,170,97,133,213,190,63,39,241,244,185,142,59,120,166,207,107,127,222,
69,131,63,207,139,109,79,204,61,254,32,246,51,157,170,68,210,183,137,30,26,101,123,224,83,180,19,79,81,117,234,201,189,205,114,125,96,122,250,204,5,190,166,193,0,188,96,70,19,120,225,118,147,252,108,184,
156,52,223,169,168,154,20,146,166,56,48,89,190,115,45,121,170,102,75,246,63,213,42,165,22,106,191,63,159,175,99,192,177,63,119,214,242,64,168,95,149,255,142,247,125,115,177,151,51,28,173,178,31,96,174,
88,202,190,138,255,162,118,232,94,46,105,193,109,195,252,5,128,179,253,123,174,30,114,129,175,3,111,48,14,140,2,142,199,50,125,247,237,78,0,154,84,155,78,182,122,194,76,20,191,139,164,41,158,231,84,242,
212,36,228,150,150,95,30,233,241,126,189,215,45,255,90,95,199,128,15,71,126,127,189,111,188,144,93,85,102,233,67,159,106,246,114,38,105,138,122,95,241,205,193,23,69,125,247,167,183,178,95,122,127,183,
211,151,150,220,54,204,95,0,56,219,191,231,234,56,23,248,58,240,6,99,80,3,142,151,210,4,206,251,178,115,120,137,237,53,243,162,50,170,167,196,65,44,150,168,194,114,194,236,88,66,225,178,193,164,253,83,
173,82,106,161,118,85,167,222,45,121,236,96,139,153,197,230,96,167,134,251,69,95,187,30,123,154,164,233,156,199,26,30,244,117,67,176,125,161,148,154,248,170,139,67,247,48,208,252,101,138,7,160,1,168,116,
29,143,189,166,73,1,28,152,96,205,68,98,201,117,165,30,31,66,210,228,64,168,235,137,222,215,145,164,123,238,109,52,224,76,66,161,225,164,61,218,233,19,218,62,243,51,207,174,215,177,63,111,155,10,254,194,
245,109,79,72,154,194,167,190,110,160,254,52,147,253,210,251,122,95,112,43,170,78,167,48,22,0,128,36,18,167,0,14,251,64,19,56,175,109,181,233,151,41,30,8,197,158,166,56,194,157,121,153,228,130,91,217,
87,143,206,59,168,58,245,109,201,227,49,99,215,162,182,95,116,44,251,68,163,211,219,67,145,52,69,195,190,110,74,247,138,109,21,127,186,105,23,19,119,81,117,234,62,150,235,3,232,4,137,83,0,135,204,104,
2,167,149,106,95,109,122,59,181,198,34,105,138,14,220,185,112,136,74,195,131,77,118,251,134,54,85,167,190,45,121,60,102,236,170,183,143,237,62,160,153,203,219,158,144,52,69,203,190,110,18,247,76,195,36,
40,85,167,126,73,105,2,0,93,32,113,10,224,185,137,86,44,41,166,37,156,214,182,218,244,114,162,123,64,223,137,164,41,142,19,201,145,19,168,27,86,143,118,81,117,234,197,4,212,92,155,168,229,183,215,171,
77,155,244,169,231,14,183,199,133,72,154,162,229,152,233,66,95,55,144,91,203,126,49,166,234,212,175,49,123,179,55,45,0,28,131,196,41,128,231,204,104,2,47,2,253,141,38,251,240,45,166,214,80,166,226,138,
123,26,157,76,196,84,37,20,34,7,126,150,38,9,187,99,171,78,125,89,242,120,204,36,185,205,222,166,11,87,183,61,49,9,158,27,30,89,28,225,97,10,201,211,134,85,252,84,157,250,133,229,250,0,142,70,226,20,192,
115,216,223,212,109,139,150,213,166,147,59,16,202,36,15,230,220,50,232,80,162,106,219,135,177,39,251,153,164,204,242,203,103,155,100,111,203,170,211,212,147,107,211,118,146,220,182,218,212,201,62,213,
236,199,123,199,163,138,35,69,170,146,167,113,232,31,180,65,191,72,213,169,95,82,154,0,192,177,72,156,2,32,208,240,83,219,83,159,23,83,106,36,147,0,33,121,128,62,36,166,146,217,165,190,224,144,72,210,
69,237,223,155,78,246,99,79,42,207,210,14,218,241,119,203,239,113,178,218,212,92,39,250,61,116,37,146,116,239,217,62,199,125,247,167,187,85,167,112,123,172,142,104,6,0,199,32,113,10,96,223,164,43,85,251,
61,226,208,191,229,206,169,207,182,137,130,235,137,221,199,177,164,123,110,23,244,104,62,246,1,42,13,171,78,63,213,126,191,80,243,37,166,169,227,207,124,219,159,111,183,79,181,189,166,215,14,182,65,100,
250,61,198,112,116,41,209,4,146,241,13,171,78,103,230,123,74,211,159,194,93,51,154,0,192,49,72,156,2,240,110,114,140,71,149,98,84,155,62,143,228,1,134,224,194,1,42,214,85,167,59,75,76,155,246,9,174,111,
225,210,118,236,106,211,167,186,186,183,233,131,56,216,17,253,152,157,158,196,83,216,51,215,182,63,253,212,226,123,48,14,182,31,3,112,20,18,167,0,8,48,252,82,152,10,179,77,101,209,188,227,137,64,16,204,
228,46,225,118,193,64,70,93,198,218,176,234,180,158,24,108,186,92,63,13,112,236,202,107,125,106,44,191,171,77,233,247,208,183,139,77,165,101,168,26,84,157,166,155,42,119,243,18,101,201,237,225,172,148,
38,0,112,12,18,167,0,8,48,252,82,159,172,95,88,126,207,164,170,77,205,164,238,130,91,5,3,138,53,254,50,86,219,36,104,188,51,217,207,26,252,29,145,227,251,156,166,71,182,219,220,242,123,156,171,54,53,149,
196,244,123,24,194,157,39,251,29,119,21,107,29,242,123,139,62,24,35,140,209,83,56,224,12,64,127,72,156,2,216,157,124,165,180,130,179,74,61,174,104,176,61,192,228,122,66,247,111,44,14,69,193,56,102,99,
238,119,186,90,23,75,217,85,73,73,143,151,152,6,81,117,218,114,236,42,119,94,42,125,242,177,79,53,253,222,13,143,32,6,18,169,74,158,70,161,126,192,6,85,167,243,77,66,206,84,174,23,220,30,206,98,126,3,
160,53,18,167,0,118,37,52,129,179,150,102,95,194,77,85,101,108,147,24,208,180,150,143,221,137,125,77,49,158,155,145,171,90,108,19,122,179,218,100,127,217,112,178,239,234,86,46,109,38,197,139,205,111,76,
210,219,166,239,112,113,111,83,246,115,198,24,177,226,231,192,63,163,109,127,58,111,241,61,24,30,219,144,1,104,141,196,41,0,2,11,127,212,43,195,108,171,77,191,108,146,173,161,59,61,137,47,68,69,1,198,
21,105,196,138,103,83,37,101,251,188,215,39,251,127,52,248,107,92,125,198,222,29,217,167,218,86,155,254,225,210,135,62,61,137,175,196,11,79,140,35,244,253,78,151,150,253,233,167,22,223,131,225,209,79,
2,104,141,196,41,0,95,38,197,83,151,175,214,69,110,38,202,177,36,219,201,202,98,10,141,99,218,228,51,183,9,92,232,67,77,18,127,44,182,75,239,127,111,217,79,184,186,207,105,211,177,107,185,169,28,53,159,
199,230,51,101,155,131,164,28,233,247,82,250,61,140,44,216,37,251,230,165,179,77,127,26,109,182,105,49,223,179,228,182,112,82,18,242,246,18,0,250,69,226,20,64,125,18,22,139,229,126,174,170,87,57,205,45,
191,199,197,37,165,189,77,222,184,119,225,144,207,35,46,217,95,88,126,93,188,169,22,107,113,72,84,18,192,216,245,103,237,247,222,85,155,154,4,0,251,57,99,108,161,223,135,182,253,41,135,68,249,33,165,9,
0,180,65,226,20,128,179,147,97,60,27,188,219,46,211,255,99,10,13,99,42,61,8,134,225,146,72,35,37,19,76,18,116,105,249,229,191,181,236,47,92,219,210,165,233,243,255,235,80,40,147,128,156,89,124,79,177,
115,144,212,216,62,203,110,159,107,160,111,179,80,151,236,155,254,212,230,185,79,107,251,70,231,226,144,40,230,57,0,130,66,226,20,128,203,147,97,84,234,135,66,165,150,147,229,194,165,37,165,125,49,73,
15,78,147,134,139,210,17,147,9,182,73,208,121,109,233,226,210,227,201,103,211,253,77,23,181,223,207,100,87,173,234,82,181,105,34,233,130,71,12,14,185,11,120,25,180,237,179,95,175,92,167,234,148,121,14,
128,128,144,56,5,224,242,100,24,149,250,146,82,235,67,161,38,210,54,159,197,18,125,184,235,102,140,100,194,106,93,44,101,95,241,52,51,223,83,202,126,89,170,107,99,69,211,159,231,143,22,125,234,194,161,
207,203,18,125,184,38,82,160,251,237,154,151,208,54,253,233,172,246,251,37,183,4,243,28,0,225,32,113,10,160,46,165,9,156,180,124,38,48,247,101,146,223,11,179,44,238,130,219,3,14,27,243,30,181,173,146,
170,47,215,255,179,193,243,231,210,120,209,228,103,41,118,14,218,179,249,222,165,43,251,69,155,131,199,152,252,195,69,23,142,30,28,215,5,155,151,209,187,251,70,47,185,37,156,19,141,184,255,56,0,143,145,
56,5,160,218,4,18,238,169,47,211,159,201,174,186,242,215,247,4,142,170,43,248,224,211,72,253,235,194,242,235,102,155,170,88,83,169,106,219,119,36,158,142,93,245,4,200,220,242,123,254,116,228,179,70,10,
180,170,15,193,8,117,235,28,219,254,180,213,139,40,12,42,161,9,0,52,69,226,20,0,129,132,219,254,124,38,32,63,36,248,67,161,76,181,91,202,237,1,15,68,26,33,217,101,42,158,50,203,47,159,213,126,191,180,
252,158,119,142,180,111,211,177,171,254,249,108,150,233,151,14,29,10,117,35,182,38,129,219,82,115,96,99,80,204,203,104,155,190,177,77,95,10,230,59,0,28,71,226,20,0,129,132,219,150,207,4,228,135,38,249,
83,8,214,169,186,130,79,230,35,85,157,246,185,92,63,118,164,109,155,140,93,249,102,201,189,89,82,108,243,25,156,232,79,205,253,51,231,81,2,227,243,104,108,250,211,168,182,92,191,20,201,83,23,113,64,20,
128,198,72,156,2,216,120,71,19,56,167,213,50,253,208,27,197,84,179,164,220,30,240,204,24,201,4,219,254,96,86,59,196,42,179,252,30,87,158,193,38,99,87,155,67,161,92,57,104,143,173,73,224,139,248,244,36,
190,10,237,67,53,216,202,132,229,250,142,223,159,52,1,128,166,72,156,2,216,72,104,2,231,180,89,166,63,133,32,157,106,83,248,104,240,170,211,134,21,79,179,166,223,227,200,222,216,77,126,134,108,247,243,
190,224,215,65,82,99,98,107,18,120,232,83,237,101,76,72,108,250,198,89,195,175,135,187,99,6,0,72,34,113,10,128,64,194,101,77,39,249,193,47,211,55,149,183,220,171,240,213,24,73,127,219,151,41,31,90,124,
143,11,207,98,98,249,117,191,146,160,190,45,211,23,47,139,224,159,72,210,69,128,159,203,166,111,220,93,174,159,113,59,56,23,75,166,180,2,128,38,72,156,2,32,128,112,211,238,94,124,145,71,147,252,62,125,
226,214,128,199,198,216,235,212,182,95,152,213,126,111,59,209,31,117,236,48,125,99,155,118,176,253,185,71,63,104,143,106,83,248,60,94,135,86,117,202,114,253,96,196,52,1,128,38,72,156,2,144,56,165,215,
69,89,237,247,51,203,239,9,58,56,39,129,128,64,12,90,61,216,96,233,125,180,121,137,102,94,218,228,22,223,115,226,209,228,183,222,63,218,236,111,234,196,50,125,81,109,10,191,99,203,139,0,63,151,77,127,
58,107,248,245,112,119,236,0,0,18,167,0,36,177,191,169,139,154,238,111,26,252,50,125,81,109,138,48,204,70,168,194,178,125,169,82,239,107,50,15,38,159,182,99,87,185,90,23,153,36,153,182,183,249,190,209,
251,83,83,81,155,242,200,192,231,113,59,192,189,78,109,151,235,39,210,175,23,81,5,183,130,83,62,208,4,0,154,32,113,10,64,26,191,106,8,59,90,76,242,179,144,219,195,44,111,158,113,103,32,0,145,134,175,194,
178,237,31,210,218,239,191,90,124,125,50,114,91,158,180,248,252,182,253,136,11,21,252,188,44,66,8,253,93,80,99,119,131,229,250,245,207,189,228,86,112,238,190,4,0,107,36,78,1,72,44,89,113,77,125,146,159,
122,52,201,239,19,9,4,132,228,247,33,255,178,6,75,239,147,90,117,88,230,193,228,211,118,236,170,247,143,54,149,70,191,42,84,199,98,94,22,205,121,84,16,128,16,183,155,176,233,31,234,21,252,95,185,13,156,
146,208,4,0,154,32,113,10,128,0,194,61,95,27,78,242,165,240,171,25,230,220,22,8,72,188,57,117,217,177,137,190,100,94,214,216,158,6,221,240,128,166,206,219,177,197,103,159,117,216,86,244,121,128,155,253,
93,223,108,94,86,55,125,17,133,1,141,112,80,35,0,143,145,56,5,32,177,100,197,53,245,0,59,181,248,250,220,36,57,66,13,110,231,220,163,8,208,239,3,255,125,182,85,233,245,151,53,54,85,82,99,62,155,54,19,
223,194,84,220,110,146,188,81,135,109,213,39,170,236,65,127,231,71,156,118,72,42,217,191,136,130,115,227,7,0,72,34,113,10,76,222,230,20,101,184,131,253,77,131,159,112,1,210,192,135,68,53,88,122,94,31,
19,114,139,175,79,198,104,188,6,149,174,217,51,159,205,217,62,149,151,69,8,180,191,139,3,138,211,10,203,254,177,233,139,40,12,39,166,9,0,216,34,113,10,0,110,105,51,201,15,118,127,83,51,209,74,185,45,16,
168,249,192,127,223,210,226,107,124,217,231,212,246,239,109,186,245,73,190,169,80,29,17,47,139,64,127,231,87,188,246,156,180,225,215,99,56,49,77,0,192,22,137,83,0,9,77,224,148,198,251,155,142,125,136,
73,207,102,220,18,8,216,208,9,50,219,138,167,196,244,45,165,94,174,170,58,25,169,237,108,39,189,245,254,49,109,248,245,131,227,101,17,232,239,188,140,215,158,237,75,55,47,162,2,143,213,124,116,66,19,0,
176,69,226,20,64,68,19,56,37,175,7,220,174,79,242,153,104,1,71,73,6,94,190,154,91,126,93,218,224,123,226,145,218,206,230,239,45,91,236,111,58,246,114,218,25,143,5,2,21,7,182,61,148,109,252,149,180,232,
131,225,198,24,2,0,146,72,156,2,224,141,171,107,234,65,117,218,240,235,131,98,18,74,9,183,4,2,55,27,234,47,106,80,241,84,175,118,255,203,209,118,251,135,197,215,212,63,175,109,95,146,141,252,185,56,20,
10,33,11,230,101,168,101,69,254,110,44,151,113,11,0,128,127,72,156,2,136,105,2,103,236,86,71,217,8,249,176,129,25,183,4,38,96,232,68,130,205,196,189,222,255,188,148,24,72,71,106,55,155,62,178,158,244,
181,217,250,164,48,201,144,81,152,126,159,49,25,33,11,109,92,183,233,79,125,120,17,53,69,41,77,0,192,22,137,83,0,112,71,222,48,41,96,27,180,251,138,101,250,152,130,161,151,235,219,188,108,137,54,63,147,
231,251,242,101,13,251,212,177,63,43,125,30,66,23,157,158,196,179,128,62,143,213,62,167,207,196,121,0,0,79,144,56,5,144,210,4,78,6,224,239,44,190,126,212,234,168,62,153,195,20,18,110,9,208,15,119,206,
118,226,30,59,62,217,79,26,126,86,155,175,255,107,66,247,1,48,150,15,1,125,22,155,190,177,254,34,42,231,242,59,21,107,198,180,2,0,27,36,78,1,192,205,0,188,105,82,32,52,51,110,7,76,200,111,142,77,244,165,
6,7,68,141,116,224,75,244,194,255,255,245,98,169,193,207,151,141,60,129,79,120,20,48,1,193,140,239,102,123,165,210,226,75,19,23,250,25,60,17,211,4,0,108,144,56,5,38,204,84,245,193,29,69,237,247,54,19,
253,144,247,202,250,192,237,128,9,73,135,250,139,26,76,244,235,85,239,107,15,219,52,175,253,62,177,108,155,124,196,159,119,198,99,128,137,136,27,236,227,238,91,95,243,156,164,225,215,3,0,28,66,226,20,
152,182,132,38,112,199,102,210,222,96,233,80,22,112,115,164,220,17,152,144,104,224,68,130,205,196,61,110,208,215,68,67,54,150,101,91,213,95,44,217,108,125,50,118,127,202,203,34,76,73,72,99,252,215,134,
207,55,7,68,185,35,166,9,0,216,32,113,10,0,110,200,91,4,114,121,136,13,97,18,199,4,179,152,154,153,99,19,253,164,246,251,162,193,215,14,33,234,161,79,45,38,116,253,129,177,253,22,208,103,177,137,197,98,
135,250,26,52,143,183,1,76,28,137,83,0,112,67,89,251,125,106,243,245,161,30,12,37,170,77,49,77,239,6,252,187,172,38,238,155,202,78,179,188,223,55,69,195,62,101,180,42,176,145,246,136,5,24,231,187,145,
91,124,77,188,249,205,106,93,100,92,126,0,240,11,137,83,96,218,18,154,192,25,245,10,176,127,116,20,168,251,138,37,171,152,162,116,192,191,171,176,252,186,200,209,62,39,122,233,11,90,108,125,146,79,228,
218,3,78,8,229,133,129,237,139,165,157,207,91,112,7,56,225,31,52,1,0,27,36,78,129,105,139,104,2,103,148,181,223,39,142,79,242,251,150,112,59,96,138,253,241,80,251,156,54,168,120,74,159,233,163,118,13,
253,178,227,165,118,170,247,143,177,229,159,57,102,159,202,203,34,76,81,26,208,103,177,233,83,235,125,81,193,229,39,222,4,224,15,18,167,0,224,134,166,19,253,159,4,178,0,247,254,17,154,78,220,191,122,212,
142,101,195,54,29,123,235,19,250,60,76,209,187,128,62,139,77,127,26,63,19,243,1,0,28,71,226,20,0,220,155,232,199,22,95,159,133,216,8,236,245,135,137,139,7,252,187,108,38,250,31,158,233,163,92,87,79,242,
70,22,95,159,143,216,231,37,98,245,7,166,41,164,241,126,109,241,53,245,68,241,79,46,63,0,248,131,196,41,48,109,236,237,227,136,22,251,241,149,129,54,69,194,221,128,9,27,114,201,118,209,240,235,243,3,255,
47,245,188,77,139,17,127,62,250,60,76,85,212,32,230,113,93,110,243,121,107,191,207,184,252,0,224,15,18,167,192,180,49,97,115,67,89,251,189,213,36,98,147,104,13,208,9,183,3,232,147,7,97,83,33,149,58,218,
78,47,189,244,203,122,104,139,190,188,227,182,7,125,94,80,113,28,49,183,63,98,154,0,128,13,18,167,0,48,190,188,246,251,168,163,0,157,73,20,224,159,232,244,36,142,6,250,187,242,38,95,220,224,64,41,215,
250,137,212,226,107,10,250,60,128,251,191,45,203,254,49,114,180,63,157,178,152,38,0,96,131,196,41,0,248,55,137,200,9,98,129,73,247,1,93,40,109,190,200,236,193,217,217,215,13,161,69,82,162,152,192,245,
6,92,52,169,138,107,151,250,73,0,128,61,18,167,0,48,190,130,38,248,37,166,9,192,51,224,84,191,19,89,126,79,228,90,67,54,72,82,20,35,253,124,145,56,24,10,244,119,161,200,27,246,167,57,151,31,0,252,64,226,
20,0,198,87,223,95,207,102,143,207,175,33,54,2,149,24,128,164,129,18,9,171,117,81,180,248,182,194,131,246,171,255,140,81,143,109,209,5,250,60,76,93,72,207,64,105,241,53,81,195,175,7,0,56,128,196,41,0,
184,37,158,240,103,143,184,252,128,115,7,164,37,158,61,191,133,71,125,74,204,237,142,169,27,112,95,231,33,251,158,99,251,83,0,128,67,72,156,2,128,31,193,246,49,95,239,11,38,20,192,176,201,180,220,226,
107,162,218,239,75,207,158,95,155,159,41,155,200,181,6,24,251,251,181,110,248,245,95,185,244,0,224,7,18,167,0,48,190,162,231,175,247,69,196,173,0,12,170,108,248,245,127,5,216,159,142,233,31,220,130,192,
164,198,126,158,121,0,240,16,137,83,0,112,75,74,19,0,244,1,104,109,237,209,207,154,112,185,128,96,158,131,130,103,30,0,194,68,226,20,0,224,138,15,52,1,48,168,50,240,231,242,157,197,215,228,220,6,0,58,
80,52,252,122,250,30,0,240,4,137,83,0,240,15,193,54,128,46,116,185,244,126,200,37,168,137,229,215,69,22,95,243,115,196,246,79,184,5,1,171,23,28,33,42,185,244,0,224,7,18,167,0,48,190,188,201,23,175,214,
5,193,54,16,48,135,79,153,46,14,252,191,100,192,159,35,106,249,51,186,38,226,110,7,120,14,0,0,110,35,113,10,0,35,35,17,10,96,71,226,232,207,85,120,208,118,5,183,15,0,71,165,52,1,0,248,135,196,41,0,192,
21,17,77,0,0,0,124,179,90,23,25,173,0,0,97,34,113,10,0,112,69,66,19,0,24,88,62,198,95,122,122,18,211,223,1,211,30,251,75,46,61,0,248,129,196,41,0,56,226,244,36,142,105,5,0,232,76,106,241,53,229,72,63,
91,196,229,1,166,251,44,172,214,69,206,165,31,93,70,19,0,176,65,226,20,0,220,17,211,4,0,0,0,0,0,184,129,196,41,48,109,37,77,0,0,0,0,0,0,240,20,137,83,96,218,254,162,9,156,146,211,4,0,0,0,0,0,184,129,196,
41,0,56,98,181,46,74,90,1,0,0,0,0,0,55,144,56,5,0,184,34,163,9,0,208,87,0,0,6,240,149,38,0,96,131,196,41,0,0,0,0,0,0,0,236,32,113,10,76,91,78,19,140,239,244,36,142,105,5,0,27,171,117,145,57,250,163,249,
214,87,21,220,77,0,28,141,253,34,90,1,0,252,64,226,20,152,182,146,38,112,66,76,19,0,240,188,175,114,113,201,99,97,241,53,233,24,63,152,195,201,113,96,104,83,125,22,18,46,61,243,32,0,126,32,113,10,0,32,
128,5,192,115,9,0,45,157,158,196,9,173,224,157,156,38,0,96,131,196,41,48,109,5,77,224,156,210,34,56,143,3,253,236,127,113,249,1,231,250,101,223,158,203,136,91,8,128,163,125,15,113,55,0,120,136,196,41,
48,97,171,117,65,0,231,158,220,226,107,98,154,9,8,214,144,253,242,135,0,219,47,225,22,2,64,255,14,174,7,128,174,144,56,5,0,38,250,174,200,105,2,192,105,135,18,173,229,128,63,199,215,64,218,51,227,150,
2,130,121,158,225,25,10,72,0,216,34,113,10,32,167,9,70,23,209,4,146,216,75,17,144,220,75,34,216,78,44,93,28,75,108,126,166,15,220,114,0,70,136,229,82,154,12,0,252,64,226,20,64,73,19,120,55,209,79,2,253,
236,5,151,31,24,84,28,248,115,249,147,62,15,96,236,31,136,77,108,70,204,237,142,140,38,0,96,139,196,41,0,38,110,227,123,215,112,162,31,133,216,8,44,153,2,6,159,204,197,29,38,6,134,76,8,28,234,43,124,170,
32,93,115,187,3,147,138,67,57,4,19,0,60,68,226,20,0,19,183,241,69,13,191,254,31,1,183,69,206,237,128,137,43,29,251,121,10,155,190,106,181,46,242,145,126,166,99,191,46,229,90,3,206,244,49,62,59,233,249,
235,65,188,9,96,36,36,78,1,48,113,115,75,102,241,53,9,247,35,16,166,161,18,144,167,39,113,98,249,243,20,230,235,35,79,154,176,254,115,22,76,220,1,231,251,188,34,144,143,18,55,140,113,98,174,254,168,126,
210,4,0,108,145,56,5,192,196,109,124,41,77,240,11,167,235,98,202,138,1,255,174,168,225,36,63,113,228,231,126,233,239,75,154,254,97,167,39,113,60,129,235,13,76,189,207,35,230,6,253,47,128,86,72,156,2,40,
105,2,239,130,234,148,73,5,192,253,127,164,184,195,159,103,208,9,104,131,10,181,188,195,182,24,243,115,0,161,10,233,25,72,123,254,122,112,239,1,24,9,137,83,96,226,6,222,151,14,207,56,61,137,83,115,61,
74,2,89,96,178,134,60,56,36,238,112,146,63,198,115,91,30,232,79,147,134,253,105,52,226,53,207,184,237,49,97,147,90,101,178,90,23,60,239,238,96,254,3,192,26,137,83,0,99,77,122,113,68,48,183,73,180,6,56,
169,32,144,5,207,254,48,222,89,124,141,109,82,99,237,88,91,69,13,219,52,97,252,5,184,255,219,106,26,147,217,238,49,141,94,227,205,146,86,0,96,139,196,41,0,38,110,110,168,7,221,83,15,230,50,110,7,112,239,
247,46,178,248,154,122,95,244,193,177,49,228,80,63,25,55,236,79,199,60,221,250,47,110,123,76,88,62,209,207,26,113,233,137,51,1,248,131,196,41,128,169,5,174,174,250,71,237,247,54,85,94,105,192,109,193,
1,81,152,162,98,224,10,24,155,62,196,118,162,95,140,208,94,135,18,142,113,195,241,45,102,252,5,134,23,208,42,19,155,254,180,222,191,39,92,253,81,149,52,1,128,38,72,156,2,144,164,159,52,193,232,146,134,
1,221,73,192,109,145,115,59,96,130,178,161,254,162,211,147,56,178,252,210,194,114,162,63,198,51,123,168,159,124,215,112,124,75,198,186,232,236,121,8,250,188,32,216,196,100,245,126,50,226,242,143,138,74,
127,0,141,144,56,5,16,90,240,234,171,248,153,224,218,230,235,185,31,1,255,13,89,105,157,216,124,209,230,212,247,151,246,227,27,105,175,184,67,253,100,212,176,63,141,232,243,128,160,251,188,33,99,184,231,
212,247,130,254,192,229,31,85,78,19,0,104,130,196,41,0,137,61,78,93,11,186,109,2,186,52,212,134,48,73,24,130,90,76,77,54,224,223,149,52,252,121,98,71,126,110,219,113,43,109,58,190,141,124,224,30,253,29,
166,40,164,251,62,105,248,121,35,46,63,243,30,0,254,32,113,10,96,83,85,84,210,18,227,218,76,220,77,226,176,180,248,250,56,224,230,200,184,35,48,165,73,220,166,186,115,32,54,203,74,11,203,164,192,40,19,
208,151,218,107,179,29,65,131,61,20,199,236,79,217,215,25,83,20,196,56,111,98,177,168,195,62,21,253,143,31,57,173,0,160,9,18,167,0,54,8,34,198,23,55,188,30,33,7,222,36,18,48,37,217,192,127,159,77,223,
81,95,86,250,206,242,235,92,106,183,164,97,127,250,110,66,215,31,24,61,230,28,105,139,143,190,99,183,103,217,110,125,2,230,59,0,220,67,226,20,0,129,132,59,234,19,119,155,196,97,176,193,247,106,93,44,69,
21,52,166,227,207,129,255,190,212,226,107,50,203,196,64,54,98,187,21,150,253,99,225,114,127,202,246,36,152,160,44,160,207,210,101,127,138,113,199,13,0,216,139,196,41,128,13,78,152,28,95,125,226,110,51,
137,14,253,112,129,140,91,2,19,49,216,189,222,160,218,41,127,166,111,58,244,117,67,59,84,237,250,174,225,248,150,142,124,15,252,201,99,128,9,9,233,126,183,169,86,47,44,251,83,48,223,1,224,32,18,167,0,
246,5,117,24,71,125,226,158,91,124,125,232,193,55,137,4,76,193,114,224,37,171,54,253,70,177,249,153,94,56,52,169,28,121,185,109,118,224,255,197,150,95,247,203,200,75,104,151,60,10,152,136,114,181,46,178,
128,62,143,77,191,81,79,214,189,227,22,24,85,70,19,0,104,138,196,41,0,73,82,96,65,172,183,54,19,119,203,3,187,162,192,15,136,90,114,71,96,2,134,126,65,96,51,105,207,45,147,2,249,200,109,119,232,239,79,
107,191,47,44,255,188,100,196,49,56,23,47,48,49,13,193,140,237,230,16,58,155,56,204,182,79,197,184,227,6,0,236,69,226,20,0,193,132,91,146,134,215,35,13,181,33,76,37,219,146,91,2,129,27,250,30,183,233,
51,234,123,44,127,176,252,186,177,250,136,226,185,255,223,240,69,148,52,126,37,88,198,227,128,9,8,233,240,71,171,24,108,83,156,208,32,209,138,126,20,1,29,74,6,96,64,36,78,1,48,105,115,75,211,3,162,66,
95,242,197,114,125,132,108,208,101,250,102,210,158,88,124,105,94,251,125,226,248,152,145,31,248,127,73,195,159,53,165,191,3,250,239,247,2,250,44,93,246,167,24,119,188,0,128,103,145,56,5,80,199,134,233,
227,75,61,155,232,15,49,193,42,185,45,16,168,161,19,101,86,147,246,90,117,84,172,195,213,81,46,76,66,15,141,91,31,26,142,111,137,73,46,143,98,181,46,232,239,16,186,101,96,21,127,54,135,116,102,19,138,
217,152,231,0,8,18,137,83,0,174,77,130,167,238,215,196,221,114,223,217,81,39,250,125,99,185,62,2,86,174,214,197,98,224,191,211,102,210,94,239,119,146,3,95,231,202,146,199,67,253,100,98,249,117,77,219,
168,79,244,119,8,89,104,85,213,54,253,69,61,89,247,129,91,192,217,241,2,0,158,69,226,20,192,47,230,112,138,146,150,24,93,211,201,126,26,120,123,252,193,45,129,0,45,71,248,59,127,179,248,26,219,253,77,
93,153,128,230,135,250,210,134,47,162,94,250,204,67,248,194,163,129,64,141,241,178,168,55,167,39,177,109,236,149,61,19,223,97,248,121,78,70,43,0,104,131,196,41,0,87,39,195,83,86,15,198,109,246,57,253,
45,228,198,48,129,110,193,109,129,192,12,154,32,107,176,191,105,246,76,95,180,203,137,3,94,76,213,107,110,217,159,218,140,111,233,200,159,39,167,191,67,160,150,1,199,106,207,41,204,225,116,155,195,234,
34,110,131,209,228,52,1,128,182,72,156,2,112,114,50,60,113,191,249,52,209,31,8,85,88,8,73,102,18,100,174,77,242,119,79,127,78,14,125,6,151,218,243,192,255,251,208,112,124,115,97,251,19,250,59,48,142,251,
21,171,217,244,77,41,183,128,179,227,4,0,28,68,226,20,192,174,156,38,24,93,211,229,165,177,57,196,37,100,11,177,141,4,194,49,198,246,19,77,39,249,179,3,95,247,171,138,202,17,135,14,252,72,91,76,156,83,
7,250,59,32,168,216,114,132,151,69,189,105,80,193,111,187,245,9,250,71,97,8,128,214,72,156,2,120,132,253,127,156,81,159,184,47,45,190,126,22,248,125,89,138,67,83,16,134,98,164,125,254,82,139,175,249,211,
114,146,239,218,56,113,232,231,105,179,207,233,168,219,159,152,254,110,193,163,130,128,132,86,109,106,27,115,101,13,251,96,140,51,78,0,192,65,36,78,1,16,92,184,169,62,113,183,121,75,62,133,74,134,107,
110,11,4,96,240,106,83,179,183,94,220,225,36,223,169,147,177,77,245,107,113,224,75,210,134,227,91,58,197,251,4,232,73,169,240,94,124,218,196,92,236,111,234,142,220,188,144,2,128,86,72,156,2,112,126,82,
60,81,245,137,187,205,132,99,230,192,190,124,189,50,19,144,5,183,6,60,86,74,186,29,185,63,57,52,201,207,107,147,252,248,192,215,102,14,182,237,161,159,233,67,195,241,45,54,109,48,102,127,151,137,151,152,
8,195,151,0,147,86,179,134,125,82,202,109,224,236,248,0,0,47,34,113,10,128,0,195,77,191,38,238,22,213,84,77,2,121,223,81,117,10,159,141,149,64,248,189,195,73,190,171,149,59,127,90,246,141,182,227,155,
11,253,41,85,167,8,193,34,164,15,211,160,122,180,222,39,253,198,109,48,42,246,55,5,112,20,18,167,0,158,48,85,71,37,45,49,186,180,246,251,165,197,215,255,54,129,123,179,16,137,125,248,169,212,8,213,166,
230,224,184,164,225,36,255,119,203,175,115,201,161,126,225,215,1,122,102,124,43,124,232,79,205,94,184,5,143,14,60,182,112,236,32,185,46,252,110,249,117,153,233,131,35,81,113,234,242,248,0,0,47,34,113,
10,128,32,195,143,224,220,166,242,40,248,229,250,198,37,183,6,60,52,86,181,233,204,226,107,202,213,186,88,214,38,249,201,129,175,93,186,216,184,166,109,115,203,118,176,25,223,146,77,178,117,100,84,217,
195,103,33,222,191,54,125,234,178,214,223,167,220,6,163,98,127,83,0,71,35,113,10,224,57,236,115,58,190,164,69,149,212,44,244,70,49,109,177,224,246,128,71,74,141,179,183,169,100,87,29,181,180,236,67,126,
237,131,234,168,67,47,152,154,238,115,234,68,127,74,213,41,60,22,92,181,105,131,131,246,234,75,195,89,166,207,124,6,128,231,72,156,2,120,78,70,19,56,33,173,253,126,105,241,245,83,9,208,169,194,130,79,
70,169,54,109,185,76,255,80,31,178,116,188,157,15,141,91,191,42,242,77,117,173,205,245,248,221,145,207,69,127,7,198,105,55,216,246,9,245,190,114,198,173,48,170,37,77,0,224,88,36,78,1,236,101,170,4,114,
90,98,116,245,36,6,203,245,31,223,159,183,220,30,240,192,152,247,170,205,132,125,119,153,254,161,239,249,211,241,126,33,215,225,234,204,89,195,201,180,19,203,245,169,58,133,135,66,220,219,212,182,79,205,
55,159,253,244,36,158,201,238,32,41,244,163,116,124,149,4,0,79,144,56,5,112,72,70,19,140,31,164,179,92,255,89,215,226,16,51,120,112,159,142,184,191,218,39,139,175,89,90,246,29,229,106,93,248,48,38,44,
15,252,191,250,139,168,63,59,108,195,33,156,243,40,193,19,165,2,220,139,252,244,36,78,101,183,76,191,254,146,251,3,183,131,179,227,1,0,88,35,113,10,224,16,246,5,114,195,172,97,16,248,105,10,141,98,146,
81,44,97,133,203,50,83,45,56,198,36,63,177,156,228,135,178,76,127,227,235,161,190,180,197,114,253,153,35,253,93,38,94,102,194,15,95,2,61,140,135,101,250,254,249,74,19,0,232,2,137,83,0,47,77,212,74,90,
194,169,96,253,139,197,215,187,114,26,244,16,247,232,173,216,82,2,238,26,179,234,202,230,5,74,125,153,126,252,194,36,255,139,39,125,194,242,133,113,171,254,25,151,22,127,100,108,42,205,166,126,63,1,54,
10,5,184,141,142,197,54,38,27,187,203,244,99,110,137,81,45,105,2,0,93,32,113,10,128,160,195,125,73,109,185,126,33,187,68,225,167,9,181,15,201,4,184,232,118,172,189,213,26,76,242,23,181,223,31,250,250,
194,179,125,226,14,141,91,109,150,235,59,113,72,148,185,6,183,60,90,112,121,60,14,180,218,116,38,187,189,74,191,60,211,215,96,132,113,32,208,123,17,192,8,72,156,2,120,9,203,245,221,240,233,153,192,252,
57,243,169,52,140,169,140,190,229,22,129,67,10,141,187,141,132,237,36,191,190,23,223,161,228,224,50,160,113,107,119,185,126,97,211,159,58,116,232,30,123,59,195,85,217,166,130,61,240,24,76,150,125,229,
140,91,98,84,44,211,7,208,25,18,167,0,14,10,56,8,246,205,236,153,192,252,57,209,233,73,60,159,80,251,92,139,83,167,225,142,243,145,43,93,108,38,249,249,166,138,212,236,135,154,28,248,218,47,62,53,190,
197,114,253,121,195,254,116,247,123,198,252,108,165,56,40,10,142,246,123,33,126,40,139,254,113,99,177,233,247,205,50,253,136,91,98,84,204,95,0,116,134,196,41,0,130,15,63,196,38,16,223,76,156,23,22,223,
243,251,84,26,135,100,2,28,114,59,230,233,243,13,38,249,245,100,232,161,68,235,175,61,251,60,179,176,236,27,109,147,194,206,108,127,98,18,195,25,143,26,28,114,237,105,63,209,229,179,255,231,20,227,47,
71,229,1,223,143,0,70,64,226,20,64,211,96,16,227,169,7,226,127,88,124,125,106,146,40,147,192,146,125,56,160,208,184,75,244,109,39,249,165,204,11,49,139,253,80,191,120,122,45,14,245,145,201,166,111,52,
147,235,204,226,207,115,233,144,40,169,122,81,84,242,200,193,1,249,106,93,92,133,248,193,26,236,23,93,52,56,104,15,227,246,255,0,208,24,137,83,0,54,150,52,129,19,102,181,67,162,50,113,72,212,62,215,150,
237,2,244,97,212,37,250,102,146,63,183,233,211,107,63,231,76,135,151,148,122,217,255,155,109,8,14,245,5,77,95,68,57,213,159,154,132,239,53,143,28,92,232,247,2,254,108,115,53,223,47,122,198,45,193,188,
5,64,88,72,156,2,176,153,160,149,4,33,78,5,241,27,86,135,68,109,146,173,19,186,87,89,178,143,49,92,143,185,68,223,184,176,253,89,107,191,63,148,12,92,120,126,42,241,31,54,125,233,106,93,44,100,87,189,
57,115,169,63,93,173,139,91,198,102,56,208,239,229,1,127,62,219,151,37,139,22,223,131,126,176,76,31,64,231,72,156,2,232,98,2,138,225,252,222,98,178,63,159,82,3,153,73,220,37,183,10,6,148,141,189,84,213,
84,155,126,178,252,89,11,243,61,169,14,239,135,234,123,191,191,56,240,255,118,15,208,179,221,146,224,179,99,159,145,37,251,152,108,191,215,115,159,58,151,20,91,124,233,114,167,79,141,185,53,70,245,133,
38,0,208,53,18,167,0,172,88,156,82,140,97,196,45,38,251,159,76,82,101,74,247,235,173,236,14,208,2,142,85,74,250,232,192,207,49,147,221,146,210,122,159,113,232,0,147,220,129,10,218,99,251,129,242,133,126,
160,158,104,182,237,47,102,46,245,167,230,51,126,228,49,196,68,251,189,62,217,30,240,100,123,208,30,134,177,164,9,0,116,141,196,41,0,130,17,255,52,157,236,71,178,95,194,27,146,75,177,223,41,250,119,230,
200,114,118,155,74,200,221,3,76,230,150,201,0,159,29,250,28,187,135,68,121,217,159,154,4,55,251,157,98,72,231,158,111,227,113,144,169,28,77,45,251,212,172,214,167,206,184,53,198,157,167,132,124,95,2,24,
15,137,83,0,77,176,92,223,13,201,230,116,231,6,147,253,41,86,157,150,170,42,98,8,162,209,103,242,32,119,96,146,63,151,221,242,80,219,189,77,75,5,242,162,204,226,144,168,79,45,198,56,231,250,83,179,100,
58,227,145,196,0,174,55,47,96,2,102,187,37,71,189,79,157,115,107,48,79,1,16,38,18,167,0,154,76,204,50,73,5,45,225,132,79,207,4,238,207,137,52,193,170,83,147,88,102,25,43,250,176,48,251,12,251,50,201,47,
54,63,175,73,250,205,95,248,108,101,64,215,234,80,213,233,175,3,244,204,24,151,121,220,159,126,100,140,70,207,130,222,215,212,244,143,169,236,170,77,203,157,62,149,101,250,227,42,39,144,208,7,48,18,18,
167,0,154,226,109,174,27,102,181,201,126,33,170,78,159,101,146,33,231,220,50,232,56,121,224,196,61,213,160,218,180,222,119,95,232,240,126,168,95,2,235,3,22,58,92,121,62,111,49,198,185,88,117,90,138,42,
123,244,39,215,52,94,68,218,86,155,214,251,201,153,236,246,152,70,127,22,52,1,128,190,144,56,5,64,96,18,70,112,111,147,232,136,52,205,189,78,55,137,147,91,110,25,116,32,151,91,201,3,155,73,126,185,185,
255,45,42,163,22,155,19,162,3,115,168,143,252,149,4,53,125,133,205,231,119,178,63,53,91,19,92,242,152,162,99,165,2,223,215,212,244,143,169,44,171,77,119,98,138,207,220,34,163,163,176,3,64,111,72,156,2,
104,58,41,43,196,62,106,174,168,47,49,205,45,175,203,36,171,78,77,27,93,138,196,63,142,147,203,157,195,160,116,122,18,95,200,174,218,244,75,237,103,158,233,112,101,84,168,147,207,219,3,255,47,210,227,
36,168,237,65,75,78,246,167,38,249,75,242,20,93,250,232,194,126,206,3,176,174,54,221,244,169,13,170,254,209,227,216,60,145,251,19,192,72,72,156,2,104,131,183,186,110,6,249,236,117,250,2,179,188,122,193,
109,131,22,74,57,84,113,101,18,118,141,170,77,45,18,3,217,230,132,232,0,159,253,242,133,103,255,247,218,215,46,228,113,213,169,249,12,183,244,117,232,200,121,168,253,194,78,159,154,138,106,83,95,125,161,
9,0,244,137,196,41,128,54,19,178,133,216,67,205,21,187,7,155,216,76,148,63,109,190,103,162,247,239,185,14,159,178,13,236,155,40,159,57,86,209,114,33,187,61,245,154,84,70,133,62,249,60,244,114,41,54,237,
99,243,181,94,244,167,188,40,66,7,206,29,58,4,175,111,55,150,95,87,239,83,83,81,109,234,194,248,188,164,25,0,244,137,196,41,128,182,152,140,185,163,77,213,233,212,43,36,206,68,242,20,246,147,50,167,146,
166,38,81,103,115,130,115,161,199,123,155,30,122,238,139,208,79,36,54,91,205,44,109,250,210,134,85,167,159,29,254,204,188,40,66,235,56,111,42,73,83,243,210,36,177,28,15,110,159,137,191,48,142,101,232,
123,239,2,24,31,137,83,0,109,177,44,198,29,245,170,211,66,118,73,237,185,169,148,152,36,19,100,147,60,133,205,36,249,204,193,189,211,62,203,174,218,244,186,54,161,188,208,225,202,168,235,137,92,211,67,
99,87,219,170,211,249,233,73,156,56,252,153,233,235,208,212,194,36,221,131,215,96,219,19,233,105,181,105,202,173,50,186,107,154,0,64,223,72,156,2,104,197,162,114,7,195,186,217,9,34,75,139,239,249,60,241,
123,184,84,149,80,224,62,198,62,165,28,76,154,154,201,250,220,226,75,139,77,181,152,73,12,124,122,225,179,46,39,242,220,103,58,124,144,94,155,170,211,221,62,216,213,190,46,231,177,134,133,201,36,77,141,
11,217,45,183,47,245,184,218,244,134,91,101,116,153,153,143,0,64,175,72,156,2,56,6,135,68,185,99,182,169,32,53,65,164,77,69,112,186,83,93,53,57,171,117,81,174,214,197,71,177,245,4,30,43,228,102,165,105,
147,201,250,229,78,98,32,58,240,181,95,38,182,212,241,208,216,21,159,158,196,23,181,127,183,77,32,165,167,39,241,204,229,190,78,36,79,241,178,73,37,77,27,108,123,242,168,159,108,176,180,31,253,98,245,
27,128,65,188,162,9,0,28,25,116,126,23,27,227,187,34,91,173,139,51,115,93,34,73,223,245,242,114,222,82,210,91,246,135,146,78,79,226,59,217,85,242,33,108,185,170,164,105,233,224,61,122,33,187,196,105,189,
47,136,37,125,123,161,47,248,231,169,245,1,47,140,93,143,250,197,211,147,248,65,118,75,114,11,73,239,93,110,75,51,54,60,136,164,15,158,154,90,165,169,78,79,226,123,73,51,155,103,123,181,46,222,18,251,
58,229,209,53,105,235,239,191,255,110,252,61,175,94,145,66,1,166,134,138,83,0,199,98,111,33,119,252,170,120,50,19,247,75,139,239,137,196,225,6,50,109,118,110,217,102,8,87,38,119,147,166,77,158,213,250,
125,252,210,126,168,139,137,190,56,185,126,161,95,188,104,49,206,197,59,223,231,98,63,87,174,214,197,123,81,101,143,157,62,99,130,73,211,84,118,73,211,71,125,128,169,54,141,185,101,152,127,0,152,14,18,
167,0,142,181,148,221,126,154,24,198,77,109,130,188,208,225,189,252,54,46,166,124,80,84,221,106,93,220,170,90,154,203,61,61,61,139,213,186,56,115,56,137,120,39,187,3,161,110,55,91,12,88,238,135,58,213,
201,231,75,99,215,167,218,161,123,153,236,19,141,159,29,63,40,106,211,215,157,139,228,41,42,231,102,236,155,12,243,34,234,206,242,203,179,157,253,162,217,219,116,124,165,216,159,30,192,128,72,156,2,56,
118,242,85,138,61,134,92,18,159,158,196,87,181,127,183,77,138,48,17,216,222,211,11,85,123,1,150,180,198,100,56,93,109,213,160,50,170,220,121,230,95,170,80,93,78,245,96,13,139,177,43,218,105,191,203,6,
125,194,141,39,109,64,149,253,180,149,170,42,236,23,19,252,236,23,178,175,26,189,222,249,190,136,91,103,116,95,216,98,10,192,144,72,156,2,232,194,130,38,112,202,110,165,212,173,197,247,36,59,9,215,73,
51,21,123,111,101,87,177,11,255,19,7,183,174,254,128,13,43,163,46,119,14,47,73,95,154,124,78,252,250,223,234,112,50,116,190,169,30,109,248,146,48,221,57,96,202,229,190,238,86,84,217,79,81,97,250,190,201,
141,113,230,153,182,221,246,100,177,105,163,134,7,73,161,255,190,27,0,6,67,226,20,64,23,19,175,66,36,79,93,18,233,113,197,211,181,229,164,216,139,37,166,3,222,215,165,57,96,135,0,61,76,185,170,131,124,
92,79,28,124,150,93,101,84,211,229,164,217,20,147,38,187,207,184,94,94,238,89,223,254,228,74,85,194,201,234,186,109,94,96,121,208,14,11,85,85,246,5,221,194,36,100,166,239,203,39,250,249,109,95,68,149,
122,92,145,125,35,170,77,93,176,160,218,20,192,208,72,156,2,232,10,155,180,187,101,182,217,183,212,4,152,182,203,144,239,104,186,199,86,235,226,82,210,71,81,145,21,146,219,213,186,120,239,250,50,117,243,
12,95,88,126,121,147,3,161,156,232,179,79,79,226,185,73,242,186,60,118,165,166,122,119,195,182,47,141,124,234,79,77,18,237,189,168,178,159,66,223,119,54,213,196,147,89,89,147,216,246,13,181,10,254,84,
246,7,73,129,249,6,128,192,144,56,5,208,213,164,171,16,85,167,174,185,219,36,37,86,235,98,105,57,33,102,201,254,254,251,123,41,146,10,33,40,85,45,79,117,126,95,199,134,75,244,175,119,14,132,186,120,225,
235,71,175,54,61,61,137,239,204,231,123,24,51,121,106,57,118,221,212,250,210,172,193,88,231,205,146,125,243,217,54,85,246,36,38,194,236,251,62,250,208,247,245,216,231,36,178,95,162,159,239,108,225,194,
75,101,55,44,166,186,47,55,128,113,145,56,5,208,37,38,91,110,137,119,38,9,182,251,216,125,222,84,171,98,107,181,46,10,147,84,104,114,72,12,220,177,148,244,214,163,229,233,119,178,91,162,159,155,37,228,
27,54,7,19,141,218,87,155,164,233,220,252,107,162,145,147,167,22,237,17,169,253,65,81,222,44,217,175,245,117,87,226,128,188,144,228,170,150,230,47,39,222,14,77,146,159,231,181,254,234,74,246,7,73,129,
121,6,128,0,145,56,5,208,229,100,171,16,85,167,174,185,168,29,110,82,52,8,58,239,28,88,66,235,234,125,126,43,170,79,125,82,170,170,180,250,232,203,242,84,179,52,124,214,114,130,159,188,240,245,163,86,
155,238,36,77,55,18,141,152,60,181,28,187,46,90,110,127,18,73,186,247,176,159,203,84,29,144,183,164,11,241,218,181,15,219,146,12,208,239,220,168,217,18,253,220,124,95,44,14,132,114,5,213,166,0,70,67,226,
20,64,231,65,58,77,224,156,187,218,100,248,86,118,9,191,88,44,77,123,22,213,167,254,76,180,84,85,153,46,61,154,224,199,178,171,26,221,157,224,39,178,91,134,122,61,226,103,219,151,52,221,72,52,110,229,
169,77,187,212,15,138,90,202,254,229,137,151,91,160,152,165,251,31,233,231,188,84,168,218,150,228,106,234,13,209,112,175,232,98,167,205,238,196,129,80,204,47,0,76,30,137,83,0,93,79,180,10,81,117,234,154,
221,73,187,237,146,253,217,206,161,40,120,122,191,223,138,170,44,151,147,6,231,30,30,130,114,111,57,81,207,247,76,240,95,50,90,181,233,11,73,211,95,125,149,70,74,158,90,142,93,109,251,82,201,227,45,80,
168,178,247,206,173,170,165,249,147,191,94,166,47,105,82,241,93,175,224,159,75,74,185,157,156,64,181,41,128,81,145,56,5,208,7,222,10,187,231,243,206,146,125,219,101,166,55,155,239,195,126,181,170,172,
51,85,123,201,97,60,165,164,203,213,186,120,235,99,210,160,225,114,210,166,75,244,71,235,155,45,147,166,27,137,198,171,60,181,105,159,182,125,169,36,221,251,186,5,74,173,202,254,163,168,62,117,85,174,
42,97,122,233,225,11,163,190,216,190,136,146,170,10,254,204,244,89,145,236,43,255,193,188,2,64,224,72,156,2,232,101,130,37,170,78,157,156,64,212,78,134,94,90,94,163,200,231,201,254,192,247,125,182,90,
23,239,85,37,82,10,90,100,112,183,170,150,229,223,250,248,195,155,234,166,11,203,47,191,108,177,68,127,148,106,211,134,73,211,141,68,35,36,79,205,216,101,115,255,212,183,63,89,202,190,226,60,146,135,251,
157,238,180,209,82,85,149,253,173,224,138,210,244,9,239,55,253,2,126,189,80,74,45,191,60,103,137,190,179,168,54,5,48,58,18,167,0,250,194,219,97,247,196,122,122,50,116,97,249,125,236,119,106,105,181,46,
22,170,150,181,94,139,202,172,65,38,85,170,18,166,222,86,89,153,228,167,109,117,211,114,147,28,110,184,12,245,122,132,207,213,38,105,186,145,104,156,202,83,155,231,246,152,37,251,169,143,251,157,238,244,
113,229,106,93,92,138,229,251,46,245,127,183,52,197,163,190,103,38,187,23,74,245,103,120,243,189,115,217,31,206,135,126,149,204,39,0,184,224,21,77,0,192,209,73,51,250,243,113,115,88,142,73,216,124,179,
77,40,112,208,68,227,103,32,82,85,69,248,73,84,175,244,145,48,184,246,189,18,197,220,35,223,84,189,160,176,153,68,190,221,36,136,27,244,177,75,179,157,132,143,253,127,174,106,191,218,114,192,159,253,74,
118,73,151,247,181,202,223,84,210,67,155,126,56,128,126,46,85,245,114,45,22,134,146,73,58,167,18,111,239,253,24,155,62,213,118,204,189,172,189,140,106,250,189,232,87,239,113,231,223,127,255,221,248,123,
94,189,34,133,2,76,13,21,167,0,250,196,73,188,110,186,51,147,3,153,73,255,165,229,247,125,230,176,168,102,76,101,214,149,170,165,173,44,225,63,94,169,109,133,85,40,73,131,123,217,39,156,62,214,146,166,
115,217,39,38,47,135,252,64,29,191,52,75,52,124,229,233,173,229,179,122,87,219,254,36,83,179,202,168,187,80,246,143,54,219,148,208,199,13,35,83,245,34,225,140,164,233,222,190,39,82,179,125,77,151,59,213,
186,44,209,119,107,188,191,165,25,0,184,128,196,41,128,62,39,83,165,164,47,180,132,115,54,19,139,205,117,186,149,253,30,125,28,22,213,242,89,88,173,139,69,45,185,144,209,42,141,20,170,146,82,33,37,76,
55,9,198,212,242,203,47,107,7,151,36,178,95,218,127,59,100,123,245,180,210,32,209,128,201,83,51,118,93,91,254,92,159,107,223,119,37,251,3,226,34,213,18,175,129,244,115,11,18,168,189,201,180,77,152,50,
126,60,239,78,246,7,236,21,122,122,200,94,74,19,58,227,154,67,206,0,184,130,58,115,0,125,79,162,35,217,47,67,197,176,110,205,62,117,155,235,244,96,57,225,40,85,91,46,140,214,207,70,162,106,9,255,76,84,
184,60,103,41,233,143,80,150,52,239,92,255,185,236,247,14,254,181,212,222,229,103,117,128,237,89,114,13,184,108,255,244,36,254,102,217,206,245,237,79,98,53,91,234,155,153,211,234,21,232,61,254,187,72,
70,29,99,97,250,192,140,166,120,241,126,187,145,253,1,123,210,113,91,109,160,95,133,121,9,211,59,150,234,3,176,122,238,105,2,0,142,37,8,48,172,221,253,78,31,44,39,252,185,6,222,119,112,2,207,200,111,226,
64,10,169,170,2,250,162,42,89,88,4,122,189,103,178,63,212,233,209,179,214,48,57,121,57,212,161,49,3,238,105,61,88,223,211,32,153,82,170,74,194,20,13,191,111,99,177,90,23,231,1,247,111,169,170,4,234,92,
144,229,253,180,144,244,133,229,248,189,197,153,151,59,135,236,241,130,223,45,131,85,86,147,56,5,96,245,220,211,4,0,6,10,106,31,68,213,137,171,19,180,179,90,213,197,76,246,9,157,193,15,156,153,192,115,
18,169,74,46,252,54,177,231,165,208,182,186,52,15,252,26,39,178,127,65,177,251,124,54,73,14,12,86,177,51,194,65,128,185,134,75,158,222,203,238,133,70,190,90,23,239,107,223,119,165,102,167,122,95,134,126,
50,122,173,127,251,36,146,84,251,100,166,15,92,208,20,141,238,171,84,71,188,168,104,240,140,99,160,231,96,200,42,124,18,167,0,172,158,123,154,0,128,163,129,45,134,147,235,113,69,91,147,9,127,208,149,82,
35,63,51,145,153,204,109,146,168,81,128,73,130,63,205,36,41,159,200,53,77,100,159,52,149,158,86,132,127,107,240,215,13,82,177,51,66,210,116,111,191,213,227,231,139,101,191,244,254,216,132,204,249,84,146,
102,108,85,242,75,33,233,15,115,239,20,140,124,189,247,169,199,196,59,24,198,219,33,159,5,18,167,0,172,158,123,154,0,192,128,1,238,88,19,108,188,236,81,245,104,195,107,69,242,116,184,9,226,76,210,7,85,
251,46,70,158,125,132,92,85,178,244,171,170,100,105,57,177,235,23,169,217,114,208,221,165,164,223,213,236,164,232,143,3,124,166,177,251,244,92,195,36,79,175,100,159,92,249,149,252,108,184,31,237,198,199,
16,247,244,125,161,125,103,218,110,85,18,77,224,35,23,154,72,133,125,207,247,77,172,102,251,9,151,58,110,75,13,244,239,218,28,178,55,24,18,167,0,172,158,123,154,0,192,192,137,131,38,147,127,12,235,215,
97,81,230,122,217,30,140,242,40,89,128,193,158,167,196,92,159,15,170,146,113,169,99,137,129,92,210,95,170,146,164,25,125,95,163,4,218,175,151,17,45,190,247,81,114,160,199,207,228,202,139,176,92,61,39,
79,27,38,189,75,61,222,94,33,81,179,138,184,71,223,63,209,126,109,115,160,84,18,208,71,203,84,85,216,47,169,44,29,165,79,149,106,85,248,45,146,174,24,38,110,120,63,244,75,85,18,167,0,172,158,123,154,0,
192,192,193,238,133,164,27,90,194,89,199,84,75,145,60,29,255,249,74,204,68,48,149,244,15,109,43,83,147,30,254,186,194,252,42,85,37,72,11,85,251,106,102,92,137,163,38,248,199,84,127,75,3,84,236,56,184,
122,32,87,255,201,211,84,246,213,105,143,18,0,45,182,89,40,53,225,228,233,206,179,147,170,122,57,148,202,175,68,106,166,109,117,61,125,226,184,125,234,177,177,13,134,49,74,181,61,137,83,0,86,207,61,77,
0,96,132,160,183,73,37,35,134,247,254,136,106,41,146,167,110,63,123,177,30,87,205,237,254,251,174,82,85,82,234,23,146,0,189,78,240,115,61,222,127,239,70,210,69,131,191,178,247,3,161,28,222,114,229,81,
219,245,244,217,155,236,89,186,123,88,212,92,205,78,253,46,69,242,116,223,53,72,205,243,244,206,252,211,133,88,34,211,182,194,62,231,154,57,213,167,74,79,87,211,112,24,148,123,6,61,16,170,142,196,41,0,
171,231,158,38,0,48,66,224,155,168,89,245,13,134,245,104,194,78,242,20,24,100,130,159,235,113,210,116,174,102,137,54,169,231,3,161,60,216,167,250,81,27,246,240,249,99,53,91,222,187,123,88,212,149,154,
29,68,243,168,47,198,193,235,18,107,187,93,201,7,243,207,205,127,239,226,190,42,181,173,174,47,205,127,43,88,118,239,116,159,186,239,25,108,250,50,10,195,196,156,239,199,122,150,72,156,2,176,122,238,105,
2,0,35,5,192,4,175,110,43,244,120,169,105,170,102,135,40,144,60,5,19,252,102,251,146,214,95,86,204,213,60,105,250,168,170,170,135,207,228,203,225,126,185,250,77,158,94,168,217,118,51,143,182,78,104,209,
142,143,238,13,28,117,237,82,219,54,167,189,189,239,83,159,244,5,45,251,85,244,111,240,3,161,234,72,156,2,176,122,238,105,2,0,35,6,193,77,78,152,198,240,142,157,116,144,60,5,19,252,151,149,58,174,194,
123,243,103,188,237,49,89,232,75,210,116,111,223,213,67,123,60,168,217,97,108,143,250,194,22,75,133,31,221,35,0,125,106,227,248,37,85,179,151,191,24,168,175,174,111,105,50,6,18,167,0,108,188,166,9,0,140,
193,4,179,231,180,132,211,18,73,15,102,210,34,51,241,111,114,205,238,76,117,22,192,4,127,191,82,199,39,77,165,42,49,87,246,244,153,124,75,154,62,233,187,122,208,180,178,247,206,92,219,95,215,75,59,123,
7,191,32,50,159,39,225,41,3,125,234,139,10,61,78,154,38,146,238,105,77,39,49,15,0,224,5,18,167,0,70,99,246,226,187,165,37,156,150,168,86,101,218,34,121,122,99,18,47,64,232,19,252,88,227,36,77,151,125,
157,68,236,105,210,180,222,119,245,146,60,53,215,236,186,225,183,253,74,124,154,132,206,153,72,158,2,135,250,159,72,205,147,166,165,170,211,217,203,157,126,57,162,69,157,115,77,21,61,0,95,80,103,14,192,
133,192,152,37,251,238,219,61,96,97,174,102,203,246,31,125,63,16,88,63,150,52,156,156,151,122,156,52,109,219,15,150,234,105,137,190,231,73,211,186,92,61,45,219,63,61,137,191,169,121,82,103,247,186,183,
77,12,101,60,121,8,184,79,141,85,85,137,14,253,124,97,160,126,121,236,37,250,27,44,213,7,96,131,138,83,0,163,98,201,190,55,230,245,202,209,22,149,167,243,211,147,184,207,165,179,192,88,19,252,84,199,39,
77,31,212,238,229,209,57,73,211,23,37,234,111,217,126,211,177,43,146,116,95,219,254,164,84,251,202,211,57,79,31,2,237,83,19,85,47,146,146,6,223,246,92,191,154,208,162,78,34,238,7,224,21,18,167,0,70,199,
146,125,111,28,155,60,77,213,239,190,131,192,208,19,252,185,186,73,154,182,153,220,247,178,68,63,176,164,233,70,210,71,223,99,174,99,211,253,78,99,61,222,59,186,84,243,228,169,196,30,210,8,179,79,77,213,
238,112,60,146,166,254,96,137,62,0,239,144,56,5,224,76,32,213,98,226,136,225,29,155,60,77,36,125,103,159,62,4,48,193,191,81,179,237,42,186,156,220,23,234,161,98,39,208,164,105,189,239,233,35,121,122,43,
41,59,230,103,57,34,121,202,30,210,8,169,79,157,139,164,105,232,242,213,186,184,162,25,0,248,134,196,41,0,39,176,100,223,43,199,38,79,35,177,212,20,254,78,238,163,211,147,248,94,210,197,136,147,251,206,
151,232,7,158,52,221,72,76,187,119,237,220,92,227,198,63,75,7,201,83,182,65,65,8,253,106,211,23,81,125,244,171,232,23,113,62,0,111,145,56,5,224,140,150,39,21,99,28,251,146,167,103,13,146,7,145,170,165,
166,87,52,37,60,154,220,199,102,98,62,107,240,109,197,206,228,62,145,244,253,136,201,253,109,215,7,3,77,36,105,186,145,116,93,165,185,90,23,69,203,132,64,162,110,146,167,169,249,115,18,158,82,120,214,
167,182,121,17,37,145,52,245,17,75,244,1,120,139,35,225,0,184,24,72,63,152,137,32,220,151,171,118,98,117,139,211,197,165,106,153,235,199,62,14,185,1,58,236,151,102,170,42,162,162,129,159,143,71,127,94,
215,39,17,79,44,105,90,183,88,173,139,115,71,218,114,247,62,137,212,46,9,84,170,170,70,94,242,196,194,131,62,53,49,125,106,210,226,121,249,104,94,88,144,52,245,195,114,181,46,62,186,248,131,253,253,247,
223,141,191,231,213,43,82,40,192,212,80,113,10,192,69,31,213,124,217,35,198,145,232,113,197,84,174,230,21,83,169,164,111,84,75,193,225,9,254,149,164,123,53,127,33,208,101,210,180,52,125,99,151,159,107,
170,73,83,105,167,106,190,35,151,170,42,140,143,237,71,75,211,143,46,26,254,57,145,164,123,42,249,225,65,159,58,83,187,100,103,110,250,213,194,252,57,145,72,154,186,174,16,75,244,1,120,142,215,37,0,92,
13,170,83,245,179,23,29,250,145,171,155,10,144,75,115,216,10,224,66,63,20,169,74,152,166,13,191,245,81,53,163,217,207,247,70,237,147,166,82,85,73,184,232,240,179,77,57,105,250,236,181,234,160,93,19,73,
223,90,126,123,97,250,209,188,131,235,148,137,74,126,184,217,175,222,168,249,210,252,39,247,52,73,83,111,156,117,189,189,76,151,168,56,5,96,245,220,211,4,0,28,14,174,175,36,125,166,37,188,81,170,182,231,
216,17,147,254,165,122,56,252,6,104,216,255,164,106,94,101,42,237,36,255,77,210,244,216,202,198,174,147,123,36,77,251,109,223,11,85,137,242,174,250,209,182,99,97,169,42,209,148,113,137,225,64,159,26,155,
62,53,57,246,25,61,98,153,63,134,117,189,90,23,87,46,255,128,36,78,1,216,96,169,62,0,103,153,96,139,9,159,63,34,85,203,77,103,181,107,120,174,230,7,126,205,84,45,221,79,105,82,140,52,193,191,81,243,101,
245,165,170,36,213,237,206,159,115,108,210,52,87,181,4,188,171,207,70,210,244,169,78,151,237,155,123,96,121,100,63,154,236,140,133,231,71,252,89,87,92,98,140,220,167,206,84,85,98,39,45,190,253,122,79,
210,148,74,83,247,101,174,39,77,1,192,22,175,75,0,184,30,108,71,170,78,160,142,104,13,175,236,86,221,205,212,252,96,29,169,58,65,252,146,230,196,64,253,77,162,246,135,149,156,239,156,240,124,167,234,37,
192,49,74,237,84,31,30,249,249,72,154,30,214,89,229,105,71,203,136,31,109,207,112,228,62,185,185,106,219,169,0,3,198,112,159,213,110,105,126,105,98,137,250,51,144,170,221,74,0,12,171,144,244,222,135,149,
67,84,156,2,176,122,238,105,2,0,30,4,222,137,218,239,25,135,241,116,181,180,46,87,45,41,5,244,212,207,92,169,221,114,232,165,106,91,75,28,185,28,117,215,199,174,78,72,39,105,218,174,223,234,96,236,58,
230,64,48,233,233,75,168,99,238,175,82,85,245,222,45,151,25,3,244,169,169,25,243,227,150,247,234,238,150,21,115,29,95,193,143,97,188,247,37,102,35,113,10,192,234,185,167,9,0,120,18,128,19,48,251,41,215,
227,147,197,35,85,123,255,205,91,252,89,215,170,42,80,75,154,21,29,246,45,137,218,239,149,247,104,255,182,142,171,161,58,171,182,38,105,218,88,151,201,211,46,198,174,221,151,80,199,244,163,82,181,5,206,
57,213,167,232,169,79,141,212,190,202,244,73,220,96,254,204,155,35,254,60,12,171,211,131,12,251,70,226,20,128,213,115,79,19,0,240,40,24,103,242,239,167,82,79,43,71,46,212,238,240,148,194,4,229,25,205,
138,14,38,247,23,234,232,208,157,35,15,4,218,149,173,214,197,25,253,230,168,186,76,158,118,145,244,201,245,52,153,116,204,61,87,138,234,83,116,223,175,166,106,95,101,42,237,188,48,234,112,219,19,120,214,
111,14,133,196,41,0,171,231,158,38,0,224,89,80,222,246,112,1,140,111,119,201,105,162,170,58,175,205,4,107,97,254,188,146,102,197,192,147,251,76,85,210,180,172,77,236,143,169,254,219,85,168,163,189,225,
72,154,186,147,4,56,61,137,31,36,165,29,220,27,31,119,94,66,165,58,174,202,57,19,213,167,56,254,254,142,116,92,149,105,169,167,251,153,38,106,191,26,0,195,203,87,235,226,189,111,63,52,137,83,0,54,94,211,
4,0,60,115,102,38,143,240,207,205,233,73,124,103,38,88,50,147,255,247,170,146,160,77,205,37,125,55,21,87,128,237,228,62,62,61,137,239,85,237,59,25,183,248,35,174,87,235,162,190,245,68,98,254,172,121,71,
63,98,169,90,82,246,200,207,74,210,244,120,115,211,142,93,248,168,170,106,244,24,177,164,7,179,252,95,166,31,205,36,189,85,149,0,109,35,53,125,233,213,166,111,6,26,246,53,115,85,135,120,182,29,143,115,
85,213,212,139,218,159,57,211,241,135,171,97,56,165,137,207,1,32,72,188,46,1,224,99,144,158,232,248,3,55,48,158,92,59,135,61,153,73,210,157,218,159,22,125,201,242,125,28,232,51,34,181,95,150,255,220,61,
59,87,85,105,218,101,63,212,201,97,80,36,77,59,215,73,229,105,199,99,215,147,159,233,136,3,206,54,10,211,151,46,185,228,176,188,159,111,116,92,37,245,173,170,23,82,101,135,247,49,134,85,106,103,59,38,
159,80,113,10,192,234,185,167,9,0,120,26,176,207,84,45,79,132,191,118,151,238,71,230,154,182,157,132,45,205,159,89,208,180,168,221,87,115,51,9,143,187,152,216,247,184,231,222,101,23,251,77,146,52,237,
77,87,201,211,84,85,242,180,11,185,170,100,123,81,251,243,19,181,223,2,101,35,51,247,99,206,101,199,158,123,56,210,241,219,147,148,170,94,70,45,59,140,1,48,14,175,14,131,218,69,226,20,128,213,115,79,19,
0,240,56,120,159,235,248,211,138,49,174,76,59,75,147,205,242,251,207,106,95,149,181,80,149,232,42,104,222,73,247,15,169,142,59,164,164,208,206,65,100,29,252,153,207,222,179,29,37,229,72,154,246,171,171,
235,212,229,216,85,106,127,2,234,152,253,38,233,75,177,239,190,141,204,61,245,73,199,85,77,239,27,247,83,29,183,87,47,198,113,233,251,1,115,36,78,1,88,61,247,52,1,0,207,3,121,18,5,254,219,55,241,143,85,
85,180,204,142,248,51,191,168,58,161,183,164,137,39,213,39,164,170,146,70,233,17,127,204,173,158,46,31,237,226,100,244,189,73,132,213,186,56,235,224,115,211,23,14,163,171,228,105,215,247,211,190,123,118,
166,246,91,160,208,151,162,126,191,206,117,92,229,254,230,94,186,222,77,180,177,52,127,218,125,225,216,72,156,2,176,122,238,105,2,0,1,4,244,36,12,194,176,84,149,64,237,114,226,207,164,127,58,253,64,170,
227,19,166,185,158,238,101,154,168,191,147,157,115,85,123,195,149,71,126,118,250,64,15,19,6,61,92,183,125,247,111,164,110,182,150,160,47,157,102,191,58,215,241,9,83,169,170,50,61,223,217,86,34,86,85,101,
154,208,210,254,197,107,171,117,241,49,132,15,66,226,20,128,213,115,79,19,0,8,36,184,255,70,240,29,132,82,253,44,59,221,76,250,23,44,59,13,238,217,79,117,124,194,180,212,78,37,84,7,7,74,189,164,144,244,
158,164,169,183,186,74,158,246,49,118,93,175,214,197,213,158,231,164,139,109,38,54,125,41,9,212,176,251,213,185,186,73,152,150,170,150,115,47,118,254,252,77,223,26,209,218,222,201,213,193,11,63,87,144,
56,5,96,245,220,211,4,0,2,9,242,35,85,7,110,36,180,70,16,150,218,57,232,169,163,19,124,37,246,237,99,98,255,244,126,184,220,179,223,94,31,123,153,214,147,9,71,159,66,76,210,116,116,71,39,79,123,28,187,
114,237,175,62,237,98,239,211,205,61,204,203,40,250,213,151,198,241,221,85,36,177,233,91,83,90,219,75,185,2,74,154,74,36,78,1,88,62,247,52,1,128,128,2,254,190,38,160,24,71,169,253,251,161,117,53,177,203,
36,125,169,87,183,194,139,103,252,66,210,239,29,93,255,235,157,195,159,34,29,127,90,180,205,125,77,210,52,28,93,37,79,191,169,159,68,253,190,234,211,68,221,188,132,250,213,6,226,101,84,8,253,234,177,135,
62,109,20,218,57,88,207,252,61,23,162,202,212,247,152,236,232,177,203,53,36,78,1,88,61,247,52,1,128,192,38,0,177,153,128,18,152,135,35,87,85,17,152,245,52,209,43,180,173,156,42,105,110,39,159,235,84,85,
178,116,222,209,164,254,122,196,165,163,103,187,9,133,22,237,65,210,212,45,93,36,79,19,85,47,254,250,184,255,158,244,161,230,239,156,171,74,160,118,245,119,102,226,101,148,79,253,106,98,198,208,174,250,
146,210,92,255,171,61,127,79,151,137,122,12,175,84,128,73,83,137,196,41,0,203,231,158,38,0,16,232,100,160,175,9,40,198,179,208,78,85,83,15,21,130,11,73,127,50,241,119,226,57,142,204,117,253,164,110,42,
241,158,155,212,167,230,30,74,6,248,88,231,187,9,219,22,237,66,210,212,209,254,201,241,228,169,36,221,154,62,180,220,121,206,46,212,237,94,190,133,164,63,196,50,126,87,251,214,185,170,23,81,105,199,227,
243,229,0,247,22,134,87,42,208,164,169,68,226,20,128,229,115,79,19,0,8,116,98,208,247,4,20,227,5,240,79,14,38,49,149,198,159,213,93,66,169,80,181,63,219,23,38,254,163,76,234,127,211,241,167,128,219,220,
51,55,29,254,61,47,33,105,26,62,31,146,167,165,246,31,214,211,117,31,186,177,148,244,7,47,163,156,136,137,62,153,254,174,203,123,43,51,247,83,190,243,247,205,76,255,26,211,250,222,59,122,149,132,203,72,
156,2,176,122,238,105,2,0,129,79,20,72,158,134,169,208,254,229,214,125,76,254,115,85,213,83,75,146,168,189,61,171,51,109,147,165,93,61,175,165,246,39,76,35,13,95,5,69,210,116,58,124,72,158,74,123,246,
248,53,127,119,106,158,141,180,227,191,175,84,85,149,248,71,168,149,107,14,246,171,177,233,83,187,170,218,183,185,127,98,113,248,83,72,142,30,187,92,71,226,20,128,213,115,79,19,0,8,124,226,48,196,4,20,
227,41,84,85,187,44,247,76,222,250,168,158,202,37,253,169,42,137,202,228,191,253,115,25,153,137,117,215,201,82,233,229,132,233,167,129,251,3,146,166,211,211,85,242,244,219,16,63,171,246,28,236,212,99,
2,117,211,111,47,69,18,181,143,190,53,54,125,234,239,234,103,251,145,66,251,95,90,70,230,126,185,224,42,4,35,248,164,169,68,226,20,128,229,115,79,19,0,152,192,68,34,17,201,211,208,101,122,190,250,229,
179,186,79,206,109,38,144,153,170,68,106,198,193,82,86,207,97,42,233,131,250,89,30,95,168,170,12,190,221,189,22,35,158,230,76,210,116,186,186,72,158,206,85,85,239,245,173,212,158,151,13,230,103,72,213,
95,2,117,243,220,46,37,125,101,57,255,81,125,235,76,213,139,168,164,199,235,244,92,194,244,66,195,191,144,130,227,99,151,47,72,156,2,176,122,238,105,2,0,19,154,88,144,60,13,95,166,253,9,212,205,228,238,
119,245,183,231,90,38,233,171,170,36,106,198,51,23,199,218,38,74,211,30,219,61,87,181,23,237,190,9,253,92,253,44,83,29,100,226,73,210,212,123,62,37,79,165,113,19,168,27,75,211,143,178,53,202,243,247,68,
164,42,81,218,119,223,186,25,215,254,216,215,151,153,123,243,179,216,199,52,52,147,73,154,74,36,78,1,88,62,247,52,1,128,9,77,54,18,145,60,157,138,92,123,146,105,181,201,94,215,39,10,63,247,51,100,38,9,
144,135,158,4,48,137,149,196,76,230,147,1,38,211,11,51,161,207,246,36,21,46,52,110,5,20,73,83,252,186,79,59,72,158,206,84,37,79,135,186,159,11,237,169,46,172,61,231,191,15,116,111,22,122,252,66,170,152,
226,13,84,219,218,100,147,40,77,6,248,107,51,237,121,9,89,27,67,73,152,134,105,82,73,83,137,196,41,0,203,231,158,38,0,48,177,9,72,34,146,167,83,82,72,186,86,85,189,84,238,220,11,177,170,228,218,124,160,
251,161,84,149,76,253,106,126,174,194,199,202,84,51,137,79,204,4,254,196,252,62,25,240,122,126,81,149,140,26,251,122,246,54,241,36,105,26,28,95,14,140,114,185,255,220,244,161,153,164,191,204,63,243,16,
183,72,169,189,132,122,167,254,43,74,119,219,119,169,61,123,222,154,159,107,46,18,166,33,155,92,210,84,34,113,10,192,242,185,167,9,0,76,13,201,211,73,42,181,77,184,61,55,33,220,28,84,52,180,194,252,202,
37,253,52,9,1,141,153,84,53,73,145,250,175,19,243,207,116,164,107,183,212,158,234,210,90,146,97,168,10,184,222,39,158,36,77,131,229,107,242,180,222,127,238,91,194,31,105,123,114,123,50,98,255,233,221,
11,41,115,61,99,109,147,164,241,136,109,248,220,11,169,72,227,110,121,130,97,158,239,243,169,238,49,76,226,20,128,213,115,79,19,0,152,34,147,24,186,31,105,146,130,113,45,244,124,18,46,86,191,39,18,31,
147,24,216,252,126,189,51,225,201,27,254,121,233,206,191,191,211,54,17,147,58,116,157,150,170,14,222,90,58,152,172,217,135,164,41,94,236,123,60,78,158,110,250,155,133,170,109,80,138,103,126,182,79,234,
231,48,190,54,63,107,94,235,51,235,125,229,32,149,170,230,165,142,180,125,1,245,15,109,183,49,137,61,24,11,231,226,208,167,208,149,146,206,86,235,34,159,106,3,144,56,5,96,245,220,211,4,0,166,202,36,95,
30,68,242,116,170,10,61,83,101,83,155,56,206,228,86,18,53,116,75,61,147,44,53,215,36,145,59,137,153,250,196,243,232,106,29,146,166,147,225,123,242,244,215,231,208,243,73,183,168,214,119,166,142,95,143,
220,60,195,245,231,249,47,203,239,221,84,226,215,249,240,121,255,56,48,238,109,250,88,250,162,240,149,154,120,210,84,34,113,10,192,242,185,167,9,0,76,25,201,83,24,75,147,4,88,62,115,159,196,38,17,240,
155,7,19,99,223,38,110,153,14,39,75,35,51,137,119,49,129,221,201,196,147,164,233,228,116,145,60,117,101,236,42,244,204,62,168,59,125,39,47,160,198,189,70,75,61,95,41,28,201,189,10,126,244,127,79,124,156,
122,210,84,34,113,10,192,242,185,167,9,0,128,196,5,126,41,205,4,243,207,3,73,212,72,85,242,116,147,68,141,105,182,70,114,153,100,233,115,123,17,214,38,242,99,237,59,107,123,175,144,52,69,91,33,37,79,235,
125,231,31,7,158,235,88,36,81,135,82,212,174,71,254,204,245,72,228,94,5,63,134,25,131,207,66,60,88,173,13,18,167,0,172,158,123,154,0,0,126,77,34,72,96,96,95,34,224,207,67,203,176,77,50,32,149,244,65,36,
82,159,155,164,101,170,14,111,201,158,155,172,121,146,44,237,116,226,73,159,51,121,93,37,79,239,28,123,102,10,109,151,131,23,7,250,205,153,233,55,103,220,10,157,200,180,173,222,127,169,221,73,94,79,119,
60,38,105,90,67,226,20,128,213,115,79,19,0,192,163,73,197,220,76,66,129,186,82,85,18,245,171,158,89,146,186,51,49,77,85,29,186,148,104,90,75,251,75,51,49,251,106,254,153,89,180,213,76,126,37,79,50,85,
75,28,143,154,120,146,52,133,113,116,242,212,241,251,41,87,149,68,61,148,204,139,180,125,249,52,19,47,159,108,21,218,38,75,67,121,41,5,199,251,154,208,144,56,5,96,245,220,211,4,0,240,100,146,49,83,149,
60,141,104,13,60,35,211,54,137,154,91,220,83,137,170,36,234,38,153,154,4,112,127,21,230,215,38,73,154,63,151,24,217,243,124,249,154,32,9,61,201,5,191,239,171,11,73,55,14,127,206,92,47,36,81,205,231,136,
181,77,164,110,250,75,108,19,165,155,234,125,155,54,36,89,10,73,186,94,173,139,43,154,225,41,18,167,0,172,158,123,154,0,0,246,78,58,18,141,127,106,49,252,80,238,76,102,115,203,123,44,50,9,129,216,252,
122,103,238,183,196,161,251,174,168,253,90,203,156,64,253,220,30,134,207,124,206,84,143,183,50,240,213,229,106,93,220,118,208,183,144,52,197,62,93,37,79,103,242,227,197,95,110,250,205,63,94,234,51,107,
125,229,166,31,73,20,254,216,92,170,65,245,126,45,110,153,169,74,150,38,60,82,48,206,87,235,98,65,51,236,71,226,20,128,213,115,79,19,0,192,193,201,154,43,7,111,192,47,153,26,86,98,238,185,255,98,109,43,
50,235,137,130,127,28,184,39,211,3,19,240,125,114,73,63,205,239,11,243,75,230,103,46,91,252,204,137,182,149,181,105,32,207,78,105,38,158,203,14,250,20,146,166,56,164,171,228,105,34,191,94,252,149,122,
188,228,188,176,248,140,155,254,49,149,116,82,251,189,143,114,211,247,254,165,102,213,251,155,207,188,169,224,143,120,132,176,243,92,29,125,128,97,232,72,156,2,176,122,238,105,2,0,56,56,49,137,84,45,125,
156,211,26,56,114,2,147,171,74,166,22,146,138,38,85,155,142,62,23,137,249,117,162,112,247,114,45,84,237,103,154,119,208,102,36,77,97,163,171,228,105,36,127,95,252,21,170,18,169,127,169,65,21,191,249,220,
177,170,36,106,162,42,145,184,169,228,223,252,247,177,62,79,97,198,129,191,106,227,65,209,228,165,26,7,17,162,129,220,140,93,5,77,113,24,137,83,0,86,207,61,77,0,0,86,19,150,11,185,189,119,28,252,180,153,
80,231,170,42,63,179,205,164,103,236,83,111,107,9,136,72,219,4,105,172,105,44,147,149,58,58,4,202,180,37,73,83,52,209,217,33,46,129,220,123,165,30,47,91,207,143,73,8,153,138,220,77,31,182,233,231,118,
125,120,225,143,249,122,224,231,148,36,29,243,114,204,244,191,137,249,53,149,237,9,208,81,255,161,106,107,153,146,166,120,25,137,83,0,86,207,61,77,0,0,214,19,153,84,210,61,147,23,12,168,80,109,249,188,
182,203,234,55,255,222,118,98,180,155,44,120,87,187,175,153,160,75,183,171,117,113,217,81,191,65,210,20,109,116,153,60,157,171,218,247,52,36,165,233,3,115,109,247,95,206,125,75,22,61,83,189,79,31,140,
182,58,217,139,123,74,72,156,2,176,122,238,105,2,0,104,52,201,137,85,37,79,19,90,3,8,78,105,38,158,139,142,250,11,146,166,56,70,151,201,211,68,211,57,240,48,51,255,252,186,243,239,197,208,75,151,107,137,
81,105,187,157,201,230,69,85,202,45,142,14,199,174,143,62,111,1,52,22,18,167,0,172,158,123,154,0,0,90,77,132,216,247,20,8,75,174,234,16,168,188,163,126,130,164,41,186,208,101,242,52,82,245,226,47,165,
89,159,84,236,127,61,242,207,171,47,237,143,196,203,85,12,123,47,179,159,105,75,36,78,1,88,196,79,115,158,122,0,56,162,19,85,149,64,141,104,13,192,107,11,117,184,39,28,73,83,116,125,127,118,149,60,53,
247,231,149,164,207,52,43,224,189,206,182,149,153,42,18,167,0,44,230,251,119,60,245,0,112,92,103,154,168,218,59,46,161,53,0,239,148,234,112,105,190,233,19,82,85,75,162,129,46,117,157,60,77,197,158,221,
128,207,99,215,249,106,93,44,105,138,227,144,56,5,112,32,86,186,145,116,33,73,175,105,14,0,104,207,44,235,61,83,85,177,6,192,31,185,164,179,46,147,166,181,63,55,167,121,209,177,178,227,177,43,147,244,
86,219,253,63,1,248,33,147,244,158,164,41,0,244,199,172,30,187,216,252,59,175,75,0,160,187,14,118,46,150,238,3,62,184,149,116,221,215,9,220,230,16,185,111,244,5,232,72,167,213,166,123,238,215,11,51,118,
1,112,219,245,106,93,92,209,12,221,161,226,20,192,158,184,232,201,150,91,60,245,0,208,109,71,27,171,90,186,159,210,26,128,115,74,13,116,242,240,196,78,49,71,127,122,77,154,238,220,175,108,59,3,184,169,
80,181,52,63,163,41,186,69,226,20,64,45,22,138,76,236,254,36,22,98,169,62,0,116,104,181,46,138,213,186,56,147,116,77,107,0,78,89,74,122,59,212,196,179,182,141,71,73,211,163,165,65,146,166,59,247,235,45,
205,14,56,229,86,213,210,252,140,166,0,128,126,152,226,167,189,73,83,137,138,83,0,232,179,3,78,68,5,15,48,182,82,35,30,162,65,229,41,90,26,44,105,186,231,158,77,205,216,21,115,25,128,105,142,93,83,65,
197,41,0,155,88,157,138,83,0,232,201,106,93,228,171,117,241,94,84,159,2,99,89,170,170,50,93,142,217,15,136,202,83,52,51,90,210,212,220,179,153,164,247,162,250,20,152,236,216,5,0,83,112,122,18,207,100,
81,224,192,235,18,0,24,166,83,78,68,245,41,48,148,82,142,85,234,80,121,10,75,163,38,77,247,220,183,169,168,62,5,134,82,72,186,36,97,58,28,42,78,129,73,207,207,47,100,121,56,38,79,61,0,12,219,65,95,73,
250,76,75,0,189,89,170,74,154,150,14,62,255,137,72,158,226,121,78,37,77,107,247,109,36,233,130,177,11,232,213,173,164,107,23,199,174,144,145,56,5,38,59,39,191,147,52,183,126,238,105,50,0,24,188,163,78,
84,189,221,74,105,13,160,51,133,60,56,117,152,228,41,158,225,100,210,116,207,189,203,202,9,160,91,185,170,42,211,140,166,24,30,137,83,96,114,243,240,72,7,14,129,122,246,185,167,233,0,96,180,142,251,66,
85,5,79,68,107,0,71,185,150,116,235,75,165,14,201,83,236,112,62,105,202,216,5,116,174,148,244,101,181,46,174,104,138,241,144,56,5,38,53,247,78,36,221,171,197,246,67,60,245,0,48,110,7,30,169,170,62,157,
211,26,64,99,153,170,42,211,194,211,224,141,228,41,188,74,154,50,118,1,157,88,170,170,50,45,104,138,113,145,56,5,38,51,231,158,155,184,165,85,220,205,83,15,0,110,116,230,169,233,204,19,90,3,120,81,161,
0,14,208,32,121,58,121,94,38,77,25,187,128,163,198,174,115,150,229,187,131,196,41,48,137,121,246,141,170,189,218,91,123,117,122,18,207,87,235,98,65,115,2,128,19,29,251,133,88,2,9,60,167,84,96,75,27,73,
158,78,150,247,73,211,157,251,120,174,35,42,57,128,9,140,93,215,171,117,113,75,83,184,133,196,41,16,244,188,58,82,139,253,76,247,121,253,255,103,239,222,174,219,182,214,118,1,191,201,200,253,226,95,1,
225,193,125,111,186,2,75,21,68,174,32,82,5,177,42,176,93,65,228,10,66,87,176,232,10,126,186,130,141,20,192,177,129,14,184,42,200,190,0,180,68,35,178,173,3,15,0,248,60,99,104,248,36,83,212,4,32,124,243,
197,60,36,249,179,221,81,10,128,35,107,139,234,23,105,118,87,5,238,44,146,188,24,219,122,112,235,186,42,147,156,183,29,107,78,195,114,76,161,105,123,30,47,218,123,215,7,135,23,190,114,211,222,187,212,
117,0,7,210,206,136,249,127,217,209,140,152,159,102,211,226,246,49,75,153,228,141,181,86,0,122,243,3,191,72,51,130,231,66,107,112,194,86,25,232,58,166,143,188,222,231,49,242,244,20,148,73,206,135,178,
145,217,51,238,93,239,98,253,83,78,219,50,214,49,237,61,35,78,97,148,117,200,251,182,14,217,153,237,224,52,105,70,59,92,13,125,205,48,128,145,253,240,63,107,127,248,159,105,13,78,200,42,205,212,198,213,
9,93,235,243,8,79,199,172,204,200,67,211,206,249,92,36,249,211,189,11,247,46,250,74,112,10,163,170,59,38,73,254,189,143,186,163,27,156,222,186,89,215,213,181,166,7,232,213,205,224,44,54,225,96,252,202,
52,163,116,86,39,122,157,207,35,60,29,235,121,125,50,161,233,61,247,46,15,255,24,187,85,4,166,131,35,56,133,81,213,26,255,222,87,253,252,173,224,244,182,192,187,106,215,222,2,160,63,55,134,203,182,19,
90,104,13,70,164,106,59,157,11,215,184,240,116,100,202,156,104,104,122,79,167,70,128,202,216,172,34,48,29,44,193,41,140,162,190,120,159,29,79,205,255,199,117,255,157,224,52,105,166,238,95,235,196,0,244,
242,38,113,25,1,42,195,87,69,96,122,223,245,61,143,240,116,12,202,8,77,187,231,246,89,4,168,12,223,42,2,211,193,19,156,194,160,235,137,34,205,40,211,249,190,191,214,143,130,211,91,203,52,163,79,21,125,
0,253,187,105,92,38,249,61,166,240,163,211,57,182,107,123,30,225,233,144,149,17,154,126,239,252,62,139,0,21,247,46,142,72,112,10,131,238,255,254,113,168,26,249,161,193,105,210,140,8,185,114,147,0,208,
9,5,157,206,131,93,215,243,8,79,135,168,140,208,244,49,231,248,239,73,46,181,6,61,182,76,242,209,189,107,92,4,167,48,184,154,97,146,102,227,201,139,67,126,221,199,4,167,183,110,218,14,143,66,16,160,159,
55,148,179,36,191,233,132,210,51,139,182,126,168,52,197,163,175,233,121,132,167,67,82,70,104,250,148,243,188,200,93,128,234,92,199,189,139,189,19,156,194,224,250,184,123,219,0,234,187,215,253,19,130,211,
219,130,208,198,81,0,58,161,240,61,155,36,31,147,220,8,145,158,125,61,207,35,60,29,130,50,66,211,231,158,235,147,246,190,245,123,172,225,205,113,84,73,62,185,119,141,159,224,20,6,83,23,188,75,242,246,
88,239,225,169,193,233,173,15,235,186,122,239,80,2,244,254,102,115,17,235,160,114,56,171,36,159,108,248,180,243,107,121,30,225,105,159,149,17,154,238,250,156,191,189,119,157,105,13,220,187,216,53,193,
41,244,190,14,56,75,51,53,191,56,230,251,120,110,112,122,91,36,26,125,10,48,156,155,143,105,252,236,195,38,119,107,192,169,9,246,119,13,207,35,60,237,163,50,66,211,125,158,247,69,204,160,192,189,139,29,
19,156,66,111,239,251,147,28,121,148,233,87,215,253,14,130,211,91,70,159,2,12,235,102,116,153,38,68,157,107,17,158,161,76,51,29,127,41,52,58,216,245,59,143,240,180,111,215,128,208,244,112,231,255,101,
146,95,115,224,141,33,112,239,98,124,4,167,208,203,251,252,89,122,48,202,244,171,235,126,135,193,233,237,13,232,218,110,131,0,131,186,57,205,115,55,10,117,162,69,120,128,42,119,35,116,42,205,113,180,235,
86,120,122,124,101,132,166,199,186,6,138,220,45,67,83,104,17,220,187,120,44,193,41,244,234,190,62,73,143,70,153,126,117,221,239,56,56,189,117,147,102,4,170,34,18,96,88,55,172,139,220,141,228,153,104,17,
182,108,218,14,231,39,15,72,123,115,189,206,35,60,61,166,50,66,211,62,93,11,191,181,247,174,66,139,112,207,189,235,243,186,174,150,154,131,109,130,83,232,85,31,244,207,190,214,180,251,10,78,147,230,137,
222,181,27,20,192,32,111,94,147,182,3,106,58,164,14,167,14,103,191,175,213,121,132,167,199,80,70,104,218,231,206,151,7,128,238,93,238,93,252,144,224,20,142,126,207,46,146,252,209,247,254,230,62,131,211,
91,203,52,1,106,229,180,0,24,228,13,109,210,222,204,94,235,136,234,112,210,203,107,116,30,225,233,33,149,17,154,14,229,218,184,72,19,162,158,197,72,84,247,46,232,16,156,194,81,239,209,111,211,76,205,239,
125,253,122,136,224,244,246,70,246,97,93,87,55,78,15,128,81,116,68,111,67,84,29,209,113,168,218,14,231,23,29,206,193,94,151,243,8,79,15,161,140,208,116,200,215,200,111,105,66,212,185,22,113,239,2,193,
41,28,229,126,124,150,102,148,233,96,238,197,135,10,78,183,139,77,155,71,1,140,171,35,122,150,187,32,149,225,88,37,249,156,100,181,174,171,82,115,140,230,122,20,158,238,183,142,21,154,142,227,90,41,218,
123,215,237,104,84,215,140,123,23,39,72,112,10,7,189,247,78,210,4,166,151,67,123,239,135,14,78,111,45,210,4,168,10,79,128,113,221,16,207,182,58,163,115,45,210,43,101,219,225,52,50,231,251,231,111,145,
100,57,212,26,69,120,186,215,235,167,183,161,105,219,25,153,183,31,11,53,246,147,239,93,175,219,95,233,225,189,43,77,88,234,220,102,103,4,167,112,176,251,236,219,12,100,90,254,189,215,253,145,130,211,
196,244,125,128,177,223,32,111,59,242,58,163,58,155,125,63,87,139,252,115,97,250,69,91,167,84,3,252,126,230,17,158,238,250,90,234,115,104,250,62,201,239,91,199,123,147,102,128,194,194,161,123,114,155,
158,185,119,185,119,49,126,130,83,56,200,253,116,80,211,242,239,189,238,143,24,156,222,170,146,92,153,190,15,112,18,55,207,121,219,9,125,153,187,209,81,60,223,166,237,108,126,105,59,156,165,206,230,131,
206,199,73,126,60,101,232,67,146,155,161,181,167,240,116,103,202,244,52,52,157,77,139,203,52,163,55,138,239,188,119,75,100,237,254,222,117,22,235,123,187,119,49,10,130,83,216,219,125,179,104,107,148,203,
49,124,63,125,8,78,111,45,219,226,174,114,154,1,156,212,141,245,44,77,128,250,178,237,140,158,105,149,239,170,218,143,47,109,135,179,116,239,124,210,121,247,62,95,143,210,251,81,231,254,99,6,22,160,10,
79,159,173,76,15,67,211,246,103,230,159,121,120,120,167,198,222,253,49,152,228,110,70,197,237,189,107,174,101,126,248,115,180,116,239,162,79,4,167,176,151,251,227,219,71,212,216,131,208,167,224,244,214,
32,71,118,0,176,211,155,238,124,171,35,58,205,105,6,170,85,251,81,38,169,183,58,154,238,143,207,59,183,46,210,140,50,45,158,120,76,62,12,105,10,180,240,244,201,202,244,44,52,109,3,211,119,207,248,89,120,
211,158,191,126,134,236,247,24,21,237,199,235,246,186,155,187,119,185,119,209,79,130,83,216,233,61,240,50,223,159,9,51,88,125,12,78,19,235,159,2,112,255,13,249,182,19,122,251,235,191,58,127,30,98,231,
114,147,228,175,220,141,198,217,216,41,120,47,231,206,89,158,23,58,117,143,221,245,80,54,217,18,158,62,90,153,30,133,166,237,116,183,63,119,116,238,170,177,143,119,12,139,173,251,213,235,246,159,230,3,
189,46,87,237,175,95,182,255,108,89,8,134,70,112,10,189,171,177,123,169,175,193,233,32,59,38,0,244,226,230,189,221,17,221,190,129,191,238,124,234,174,111,238,101,154,80,34,157,14,229,118,39,83,199,242,
240,231,67,145,253,173,177,180,74,19,66,173,6,114,93,8,79,31,118,29,247,34,52,221,243,185,91,101,96,163,167,79,224,231,84,241,131,251,214,36,251,123,64,184,253,51,108,147,230,97,94,247,223,42,83,235,25,
27,193,41,60,251,222,213,221,92,117,148,250,30,156,14,174,99,2,192,224,139,128,179,31,125,142,251,209,32,142,227,36,77,232,244,246,64,117,202,117,223,71,10,11,79,127,168,76,15,66,211,35,156,187,106,236,
225,119,92,139,135,158,227,166,204,195,29,193,41,60,249,190,51,154,141,159,30,116,221,15,36,56,221,46,238,174,60,237,4,0,190,81,204,77,114,188,69,233,23,105,66,168,170,199,237,51,143,240,244,62,101,142,
28,154,30,249,220,93,101,0,225,63,192,46,9,78,97,48,117,202,81,13,45,56,29,76,199,4,0,56,120,65,247,54,205,19,240,99,23,115,139,52,33,212,166,167,237,52,143,240,116,91,153,227,135,166,151,105,166,187,
245,225,220,85,99,3,39,65,112,10,15,170,81,38,57,209,192,244,191,215,253,64,131,83,197,29,0,112,91,208,93,166,127,187,120,110,146,124,76,114,211,199,0,85,120,250,95,101,142,24,154,246,120,7,90,53,54,48,
122,130,83,120,80,157,210,135,7,187,71,53,244,224,244,214,77,91,220,109,156,218,0,112,82,197,92,31,67,167,109,155,244,116,23,115,225,233,241,66,211,118,45,229,63,178,191,205,126,118,101,17,1,42,48,82,
130,83,24,116,141,125,48,99,9,78,111,59,38,189,29,217,1,0,156,116,49,87,165,135,187,152,159,112,120,90,230,8,161,105,27,152,190,203,215,59,167,171,177,1,142,64,112,10,163,168,177,247,110,76,193,169,226,
14,0,20,115,125,87,165,217,232,114,213,163,118,157,231,180,194,211,50,7,14,77,219,29,104,255,72,114,161,198,6,232,7,193,41,140,170,198,222,155,49,6,167,219,197,221,50,166,23,1,128,98,174,127,86,109,141,
178,234,73,27,207,115,26,225,105,153,3,134,166,109,96,250,46,201,165,26,27,160,95,4,167,168,177,5,166,15,186,238,71,28,156,110,91,40,238,0,64,49,215,67,171,52,35,80,171,30,180,247,60,227,14,79,203,28,
40,52,61,161,29,104,213,216,192,96,9,78,57,209,250,122,146,230,129,238,239,17,152,62,236,186,63,145,224,84,113,7,0,138,57,53,202,143,219,127,158,113,134,167,101,14,16,154,158,80,96,170,198,6,6,79,112,
202,9,214,216,167,88,163,60,219,169,5,167,183,86,233,209,244,56,0,80,204,41,230,90,31,114,228,53,36,71,24,158,150,57,76,104,122,25,211,221,150,73,62,170,177,129,33,16,156,114,34,53,118,145,187,65,9,19,
45,242,120,167,26,156,222,90,181,197,221,210,169,0,0,71,43,230,126,111,11,58,197,92,99,147,35,111,194,51,162,240,180,204,158,67,211,217,180,184,72,179,241,83,225,212,85,99,3,195,33,56,229,4,106,236,177,
173,179,126,20,167,30,156,222,170,210,140,240,88,218,37,20,0,14,82,204,205,115,23,152,114,191,77,146,235,117,93,45,142,120,140,134,28,158,150,217,99,104,58,155,22,103,109,135,228,204,169,250,253,26,251,
88,231,48,192,247,8,78,25,105,141,125,214,214,216,23,90,99,55,4,167,255,236,160,124,76,178,176,70,19,0,236,165,152,187,104,139,185,51,173,241,96,85,142,20,62,13,56,60,45,179,167,208,180,109,147,63,156,
195,79,170,177,111,12,82,0,250,66,112,202,200,106,236,203,182,198,158,107,141,221,18,156,126,219,34,205,20,163,82,83,0,192,179,10,185,73,154,167,222,167,190,254,227,115,149,105,70,160,174,14,124,252,230,
25,86,120,90,102,15,161,169,41,111,59,173,177,109,36,5,28,157,224,148,145,212,216,111,147,252,166,198,222,31,193,233,143,173,146,124,50,197,8,0,30,93,204,21,177,126,233,190,106,147,131,110,114,57,160,
240,180,204,142,67,211,182,83,242,71,4,166,251,56,143,173,131,10,28,141,224,148,129,215,216,239,210,12,76,80,99,239,153,224,244,225,170,36,159,98,138,17,0,252,168,152,59,139,181,149,14,97,145,3,142,220,
27,64,120,90,102,135,161,233,214,40,14,187,208,238,191,198,190,93,42,75,141,13,28,140,224,148,1,214,216,23,177,228,213,193,9,78,159,222,81,249,116,232,169,114,0,208,227,66,110,18,211,241,143,89,151,28,
36,64,237,113,120,90,102,183,161,233,219,246,92,158,56,189,14,102,147,100,25,75,101,1,7,34,56,101,64,53,246,219,152,142,127,52,130,211,231,23,233,31,147,44,61,33,7,224,68,139,185,121,238,70,151,78,180,
200,209,108,114,160,205,119,122,24,158,150,217,81,104,218,110,172,32,252,63,190,85,44,149,5,236,153,224,148,158,215,216,103,105,194,210,75,173,113,92,130,211,221,117,86,150,241,132,28,128,211,41,230,46,
99,231,206,190,214,36,123,15,80,123,20,158,150,217,65,104,218,118,78,254,140,192,180,143,231,243,162,173,177,43,205,1,236,146,224,148,30,214,215,147,152,193,213,59,130,211,253,20,240,70,161,2,48,198,98,
110,30,163,75,135,162,74,51,125,127,177,231,243,225,152,225,105,153,103,134,166,109,96,250,46,214,10,27,130,85,140,66,5,118,72,112,138,26,155,7,93,247,130,211,189,217,196,40,84,0,134,95,200,77,218,34,
206,232,210,97,170,146,92,239,107,231,242,35,134,167,101,158,17,154,182,187,209,254,17,27,152,13,181,198,94,164,9,81,213,216,192,147,9,78,233,65,141,125,217,214,216,133,22,233,47,193,233,225,58,45,183,
163,80,43,205,1,192,0,138,185,179,52,235,42,93,196,147,239,49,88,165,25,129,186,218,195,185,50,207,97,195,211,50,79,12,77,219,192,244,93,172,23,54,22,101,204,244,2,158,72,112,202,145,106,236,139,36,191,
170,69,134,67,112,122,120,203,52,79,200,151,154,2,128,158,21,114,69,91,196,217,181,115,188,86,105,70,160,150,59,62,119,230,57,76,120,90,230,9,161,233,214,142,180,239,156,2,163,181,72,242,89,141,13,60,
148,224,148,3,215,216,183,83,241,213,216,3,35,56,61,158,77,76,229,7,224,248,133,220,164,45,226,126,139,117,30,79,201,34,205,8,212,106,135,231,210,60,251,13,79,203,60,50,52,221,10,76,127,143,145,211,167,
162,218,170,177,43,205,1,124,139,224,148,3,213,216,150,187,26,56,193,105,127,10,188,79,73,22,10,60,0,14,84,204,93,164,153,38,116,17,129,210,41,187,73,19,160,110,118,116,94,205,179,159,240,180,204,227,
67,211,203,216,149,246,212,149,109,141,109,185,44,224,31,4,167,236,177,198,190,93,238,138,17,16,156,246,183,192,91,88,171,9,128,29,23,114,243,182,144,187,140,176,148,59,155,52,235,68,222,236,162,246,216,
67,120,90,230,17,161,169,192,148,111,88,38,249,28,235,161,2,45,193,41,59,172,177,207,98,111,128,209,18,156,42,240,0,24,119,33,55,223,42,228,10,45,194,119,108,210,140,62,189,217,209,121,183,139,240,180,
204,3,67,211,182,211,242,46,150,156,224,97,53,182,61,7,224,196,9,78,81,99,243,160,235,94,112,58,168,2,79,136,10,192,67,10,185,34,119,107,42,41,228,120,172,42,77,128,186,216,65,135,226,57,225,233,42,201,
155,31,213,61,237,215,249,35,2,83,30,111,115,91,99,11,81,225,244,8,78,121,98,109,35,44,61,49,130,83,5,30,0,227,40,228,138,220,109,242,52,215,34,236,64,149,228,106,93,87,171,103,118,48,158,18,158,46,214,
117,117,245,128,115,254,93,154,165,39,64,141,13,60,138,224,148,71,212,50,194,210,19,38,56,29,190,101,140,68,5,56,229,66,238,44,194,82,246,107,149,102,4,234,234,25,231,233,99,194,211,239,134,166,237,46,
181,127,68,96,202,254,108,34,68,133,209,19,156,242,131,218,69,88,74,115,221,11,78,71,101,25,33,42,128,66,14,246,87,103,92,63,101,119,242,71,132,167,223,12,77,219,192,244,109,154,37,40,38,14,7,7,178,73,
243,240,64,141,13,35,35,56,69,141,205,131,174,123,193,233,168,59,55,95,218,2,175,210,28,0,131,46,228,46,146,188,86,200,209,19,139,52,35,80,171,71,158,199,243,124,63,60,253,94,104,250,54,205,180,252,137,
230,167,7,53,246,231,36,43,53,54,12,155,224,148,182,198,254,53,205,12,46,53,54,247,95,247,130,211,147,80,230,238,41,121,169,57,0,122,95,196,77,210,132,164,183,97,233,68,171,208,67,31,146,220,60,102,4,
222,119,194,211,123,67,211,217,180,184,76,19,152,234,204,208,215,26,251,83,154,16,85,141,13,3,35,56,85,99,171,177,121,208,117,47,56,61,57,85,218,233,70,214,108,2,232,85,33,87,116,10,57,24,130,77,146,143,
121,68,128,122,79,120,250,143,208,116,54,45,206,146,252,25,129,41,195,170,177,151,73,190,168,177,97,24,4,167,39,87,99,223,142,44,133,199,93,247,130,211,147,183,140,233,70,0,199,42,228,206,218,34,238,34,
2,34,134,109,147,102,253,211,197,3,207,253,73,154,96,116,179,29,154,182,215,196,59,29,27,70,112,61,172,212,216,208,111,130,211,81,215,216,23,177,204,21,59,34,56,101,91,153,187,209,168,43,205,1,176,243,
34,174,72,19,8,221,62,241,158,104,21,70,166,74,179,254,233,226,9,215,198,31,49,218,26,53,54,112,32,130,211,209,213,216,23,49,115,139,61,16,156,242,45,155,182,192,179,193,20,192,243,10,185,237,34,174,208,
34,156,136,85,154,0,117,245,128,142,206,187,36,151,154,12,53,54,112,72,130,211,65,215,215,147,52,131,16,212,216,236,157,224,148,135,170,242,245,148,163,141,38,1,184,183,144,155,231,235,81,165,112,202,
86,73,174,186,225,80,219,225,121,155,38,52,5,53,182,26,27,14,78,112,58,184,26,251,44,119,97,169,26,155,131,17,156,242,84,101,76,57,2,216,14,74,111,139,184,137,86,129,127,88,164,217,125,188,76,19,152,254,
238,90,1,53,54,28,147,224,84,141,13,15,186,238,5,167,236,200,42,205,148,163,149,34,15,24,121,17,87,116,138,184,66,171,0,160,198,134,97,17,156,246,174,198,158,71,80,74,15,9,78,81,228,1,124,191,136,43,34,
40,5,64,141,13,163,34,56,61,122,141,61,143,160,148,1,16,156,114,232,34,175,140,245,155,0,69,28,0,168,177,225,136,4,167,7,175,177,207,146,204,213,216,12,141,224,148,99,41,219,66,239,175,182,200,171,52,
9,112,132,2,110,210,22,112,103,177,208,60,0,227,168,177,203,220,141,74,85,99,195,55,8,78,247,94,99,159,229,235,160,20,6,73,112,74,95,108,242,117,144,186,210,36,192,30,138,184,249,86,1,119,251,123,0,80,
99,195,137,17,156,238,188,198,62,75,242,82,141,205,216,8,78,233,179,114,171,208,43,215,117,85,106,18,224,17,5,220,36,95,63,233,158,199,148,32,0,80,99,67,4,167,207,168,177,139,220,133,163,70,147,50,122,
130,83,134,102,149,187,117,156,74,211,143,128,182,128,155,228,110,202,253,237,147,238,66,203,0,192,131,107,236,242,182,206,86,99,115,10,4,167,143,174,177,13,68,224,36,9,78,25,186,205,118,145,151,164,242,
212,28,78,170,128,19,146,2,192,126,107,236,42,70,166,50,66,130,211,127,212,216,69,190,30,73,90,168,177,65,112,202,120,173,218,98,175,110,11,189,149,38,129,65,22,112,243,182,96,187,45,224,230,241,148,27,
0,212,216,240,76,167,28,156,110,173,251,95,168,177,225,7,215,189,224,148,19,82,181,133,222,95,49,58,21,250,86,188,77,114,55,138,116,218,22,113,103,90,6,0,212,216,176,15,167,16,156,182,163,72,139,173,26,
123,30,27,55,193,227,174,123,193,41,100,213,22,124,245,237,239,173,235,4,123,43,222,38,91,5,219,118,241,54,209,58,0,48,42,101,238,70,167,174,146,108,4,170,244,201,152,130,211,123,2,210,219,223,3,207,36,
56,133,239,23,123,85,238,158,158,111,76,71,130,7,23,111,243,52,97,168,226,13,0,248,86,141,93,165,25,180,160,198,230,224,134,24,156,118,150,177,82,99,195,1,8,78,225,241,54,185,123,130,254,159,120,130,206,
137,218,122,178,61,79,19,146,90,68,30,0,80,99,51,8,125,13,78,59,3,16,254,149,187,181,72,213,216,112,4,130,83,216,79,193,87,165,93,52,255,246,239,214,117,181,209,60,12,205,108,90,156,181,191,221,46,220,
38,177,54,18,0,160,198,102,192,142,25,156,182,53,246,109,77,45,28,133,30,19,156,194,97,149,91,133,223,127,182,254,108,93,85,14,110,107,189,209,228,110,138,207,235,206,159,1,0,212,216,140,206,62,131,211,
206,224,3,53,54,12,152,224,20,250,229,182,224,75,146,47,157,66,208,84,37,30,108,107,26,253,118,129,246,50,205,147,237,237,127,3,0,80,99,115,114,158,18,156,254,159,226,197,36,119,3,15,230,109,109,125,187,
214,232,246,191,1,35,33,56,133,97,250,111,161,151,102,97,253,164,93,92,255,246,247,158,174,143,211,214,211,235,237,194,236,182,88,75,60,197,6,0,216,87,141,109,105,128,241,214,216,197,86,61,61,111,107,
237,127,109,213,219,219,255,14,156,16,193,41,140,223,118,177,87,165,89,23,234,214,106,251,243,132,173,7,45,206,38,249,250,137,244,109,129,150,78,145,150,8,67,1,0,250,166,76,19,176,118,107,236,77,238,70,
183,170,177,143,83,103,111,215,213,221,90,250,229,214,191,21,17,134,2,63,32,56,5,190,165,202,93,224,122,91,4,254,245,131,207,249,111,33,57,214,167,241,91,35,62,183,221,87,116,189,236,20,108,147,152,186,
3,0,112,234,202,220,5,174,183,245,116,253,131,207,73,146,172,235,106,53,230,134,121,70,157,125,223,231,0,236,132,224,20,56,180,135,22,124,95,246,240,181,95,63,240,243,206,28,38,0,0,6,98,147,175,71,185,
126,75,153,102,243,172,125,232,206,152,250,150,34,66,78,96,64,4,167,0,0,0,0,0,29,63,107,2,0,0,0,0,128,175,9,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,
0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,
0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,
0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,
0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,
224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,
208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,
0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,199,47,154,0,0,128,17,216,36,41,183,254,60,73,50,215,44,0,0,60,149,224,20,0,128,161,170,146,124,76,178,92,215,85,117,
223,39,204,166,197,89,146,95,147,92,166,9,83,1,0,224,65,126,154,77,139,191,53,3,0,0,3,115,189,174,171,155,135,126,242,108,90,76,146,252,153,228,66,211,1,0,240,16,130,83,0,0,134,230,81,161,233,182,217,
180,248,191,49,133,31,0,128,7,176,57,20,0,0,67,82,61,53,52,109,125,212,132,0,0,60,132,224,20,0,128,33,169,142,252,255,1,0,56,17,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,
0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,252,162,9,0,0,70,105,147,164,76,242,165,253,243,170,253,181,104,63,166,73,230,237,7,0,0,208,33,56,5,0,24,151,85,146,143,235,186,90,62,228,147,103,211,
162,72,114,153,228,247,36,19,205,7,0,0,13,83,245,1,0,198,97,147,228,124,93,87,231,15,13,77,147,100,93,87,213,186,174,222,39,121,145,228,70,51,2,0,64,67,112,10,0,48,124,155,52,161,233,234,169,47,176,174,
171,205,186,174,174,147,92,105,78,0,0,16,156,2,0,140,193,245,186,174,202,93,188,208,186,174,22,185,91,15,21,0,0,78,150,224,20,0,96,224,218,176,115,151,62,107,85,0,0,78,157,224,20,0,96,216,54,123,120,205,
82,179,2,0,112,234,126,209,4,0,0,131,86,106,130,94,216,36,89,38,249,146,164,74,82,173,235,170,154,77,139,121,146,73,146,121,146,215,73,46,52,21,0,192,48,8,78,1,0,224,121,62,36,185,89,215,213,166,251,15,
91,107,207,174,146,220,204,166,69,145,228,143,8,80,1,0,122,79,112,10,0,0,79,247,234,49,27,115,173,235,170,74,242,102,54,45,222,166,9,80,1,0,232,41,107,156,2,0,192,211,124,120,76,104,186,109,93,87,55,105,
70,161,2,0,208,83,130,83,0,0,120,154,213,51,255,255,23,77,8,0,208,95,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,
1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,191,104,
2,0,128,71,91,125,231,223,206,52,15,0,0,12,159,224,20,0,224,219,170,52,33,233,95,73,202,36,229,186,174,54,15,249,143,179,105,113,150,100,158,228,101,154,48,181,208,156,0,0,48,28,130,83,0,128,175,85,73,
150,73,62,173,235,170,124,234,139,172,235,106,149,173,145,169,179,105,49,79,242,91,146,139,8,81,1,0,160,247,4,167,0,0,141,85,146,143,235,186,90,238,227,197,219,16,182,76,114,61,155,22,23,73,126,143,105,
253,0,0,208,91,125,10,78,87,73,190,180,191,110,186,35,60,102,211,98,146,102,186,91,145,102,202,219,69,140,214,0,0,158,111,147,228,106,95,129,233,125,218,175,181,156,77,139,203,36,127,36,153,56,12,0,0,
208,47,199,14,78,171,36,31,146,44,127,180,94,88,251,239,171,173,191,186,110,167,188,253,158,38,68,213,225,0,0,30,107,153,38,52,221,28,227,139,175,235,106,49,155,22,203,36,255,142,209,167,0,0,208,43,199,
10,78,55,73,62,172,235,234,230,153,157,141,50,201,213,108,90,124,72,51,90,227,194,33,5,0,30,104,177,174,171,171,99,191,137,54,180,61,159,77,139,63,147,92,58,44,0,0,208,15,63,31,225,107,110,146,156,63,
55,52,237,116,56,170,117,93,189,73,114,237,144,2,0,15,176,234,67,104,218,169,103,174,210,172,129,10,0,0,244,192,49,130,211,243,231,236,80,251,131,14,199,77,146,27,135,21,0,248,129,171,158,190,175,55,14,
13,0,0,244,195,161,131,211,155,125,133,166,183,214,117,117,157,102,237,84,0,128,251,44,214,117,213,203,90,161,125,95,11,135,8,0,0,142,239,208,193,233,231,3,125,157,165,67,11,0,124,195,151,158,191,191,
207,14,209,96,148,154,0,0,96,188,126,30,233,247,245,31,135,22,0,248,134,170,231,239,111,227,16,13,67,187,177,23,0,0,35,245,179,38,0,0,0,0,0,248,154,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,224,
148,148,217,205,58,178,43,77,9,0,48,110,130,83,0,0,78,70,187,161,211,245,51,95,102,23,175,1,0,64,207,9,78,1,0,56,41,235,186,90,36,121,147,167,141,60,173,146,156,175,235,170,212,146,0,0,227,246,139,38,
0,128,189,168,218,143,47,91,191,223,252,40,108,153,77,139,121,146,73,146,162,253,120,157,228,246,239,128,29,89,215,213,114,54,45,86,73,46,147,252,214,94,103,223,179,74,242,169,13,93,1,0,56,1,130,83,0,
216,141,77,146,101,154,160,116,181,174,171,234,41,47,242,173,96,117,54,45,138,36,103,73,126,109,127,157,104,114,120,158,118,218,254,77,146,155,217,180,152,228,46,60,61,107,175,233,178,253,188,149,214,
2,0,56,61,130,83,0,120,158,69,146,207,235,186,90,238,243,139,180,65,236,162,253,200,108,90,92,166,9,81,47,28,2,216,201,53,182,201,221,134,79,43,45,2,0,128,224,148,251,108,210,140,176,168,146,212,223,248,
156,105,154,41,164,243,24,245,4,156,230,207,201,143,73,22,79,29,89,250,92,237,116,225,69,59,18,245,93,154,233,198,0,0,0,236,136,224,148,164,9,72,87,73,62,167,153,94,186,121,204,127,222,154,62,250,58,205,
200,167,137,38,5,70,108,145,228,195,177,2,211,174,246,125,92,205,166,197,135,36,127,196,8,84,0,0,128,157,16,156,158,182,85,146,143,207,157,94,218,153,62,122,213,78,31,125,151,102,68,42,192,88,108,146,
188,233,235,90,135,237,207,226,55,179,105,113,145,228,207,120,136,5,0,0,240,44,63,107,130,147,84,38,57,95,215,213,249,62,214,228,91,215,213,98,93,87,47,146,92,165,9,26,0,198,240,115,243,197,16,54,136,
105,127,174,191,106,223,51,0,0,0,79,36,56,61,61,55,235,186,122,117,136,206,127,187,254,222,11,157,119,96,224,202,52,15,155,54,67,121,195,237,232,211,115,63,127,1,0,0,158,78,112,122,90,174,214,117,117,
125,224,206,251,70,231,29,24,176,42,3,11,77,239,249,249,187,113,24,1,0,0,30,79,112,122,58,22,237,8,208,99,118,222,43,135,1,24,152,171,33,134,166,157,159,191,111,28,70,128,222,88,125,227,67,157,12,0,61,
100,115,168,211,176,73,114,125,204,55,176,174,171,77,187,227,243,159,14,7,48,16,139,33,172,105,250,128,159,191,171,217,180,88,37,57,115,72,1,14,106,153,228,75,146,242,161,247,147,217,180,152,39,153,39,
121,153,228,34,54,91,5,128,163,18,156,158,72,209,214,135,17,83,235,186,90,204,166,197,31,177,211,51,48,12,159,71,244,189,124,140,224,20,224,16,86,73,62,61,181,254,94,215,85,153,187,37,174,174,103,211,
162,72,242,123,146,75,53,52,0,28,158,224,244,52,212,61,122,47,165,206,59,48,4,237,238,244,99,234,200,3,176,223,159,179,31,118,61,83,161,221,236,239,58,77,136,250,54,201,187,8,80,1,224,96,4,167,167,83,
200,113,90,199,181,136,169,93,240,28,229,152,190,153,118,185,20,71,21,96,63,174,215,117,117,115,128,159,229,55,179,105,177,72,179,244,213,133,102,7,128,253,19,156,114,104,115,77,240,36,101,154,105,195,
171,52,235,100,109,30,242,159,182,214,201,122,157,102,164,111,161,41,225,65,92,43,208,95,149,38,160,39,54,73,206,219,233,245,7,113,187,233,223,108,90,252,153,102,250,62,0,176,71,130,83,14,109,162,9,30,
213,49,252,148,102,131,154,39,117,18,183,214,201,90,36,255,13,82,127,87,104,195,143,127,86,205,166,69,241,212,107,175,111,218,107,31,198,162,214,4,244,196,155,67,134,166,157,26,239,170,157,73,160,166,
3,128,61,18,156,66,255,108,210,172,145,117,179,135,34,187,76,114,53,155,22,31,210,172,145,165,216,238,191,42,77,248,253,87,251,251,42,201,230,123,29,181,54,36,155,228,110,201,134,151,105,70,30,23,154,
243,81,206,210,62,116,24,129,137,195,201,136,44,52,1,125,56,15,119,189,158,233,19,92,167,153,178,239,103,60,0,236,137,224,20,250,165,76,51,122,161,218,231,23,105,95,255,106,54,45,62,37,249,183,130,187,
87,170,52,75,50,124,78,178,122,198,142,188,255,48,155,22,147,52,97,224,235,182,163,85,104,238,239,26,83,251,156,57,156,140,196,245,88,70,130,51,120,31,142,253,6,218,245,171,23,73,222,58,28,0,176,31,130,
83,14,166,13,109,248,182,50,205,58,89,155,3,22,220,171,217,180,56,79,242,191,17,158,30,211,38,201,50,201,199,125,78,249,107,207,173,101,251,113,221,142,76,253,45,205,200,99,199,255,159,94,106,2,232,149,
15,135,216,128,7,30,120,79,173,122,242,86,190,68,112,10,0,123,243,179,38,224,128,230,154,224,155,170,28,56,52,221,42,252,203,36,231,14,193,209,142,251,85,146,23,235,186,186,58,244,58,105,235,186,42,215,
117,117,189,174,171,255,105,223,71,229,144,124,101,162,9,160,23,54,105,102,99,188,215,20,112,239,245,1,0,236,137,17,167,208,15,31,142,17,154,222,90,215,85,57,155,22,55,49,98,225,144,157,156,94,141,156,
90,215,213,34,201,98,54,45,46,211,172,127,91,56,76,64,15,126,86,126,76,114,115,204,123,36,0,64,79,234,162,101,154,153,6,213,125,235,108,207,166,197,89,219,143,187,93,154,109,162,217,158,79,112,10,253,
176,236,193,123,248,20,193,233,161,142,245,85,95,67,128,117,93,45,102,211,98,153,38,60,117,62,0,135,86,182,31,159,215,117,181,212,28,244,213,108,90,156,245,96,115,40,0,126,108,147,102,15,137,191,218,63,
223,254,236,158,167,9,22,167,237,239,231,61,125,255,85,154,65,55,139,7,244,229,110,191,183,69,154,61,77,46,99,80,204,179,9,78,161,7,157,196,62,132,104,237,168,83,71,99,191,174,135,176,62,95,123,62,94,
207,166,197,95,73,254,116,216,128,29,249,112,59,221,190,29,17,209,187,123,33,0,48,10,155,252,120,15,137,213,246,31,218,61,89,46,210,236,1,113,214,147,239,99,209,246,33,159,84,35,109,13,138,249,35,205,
190,22,60,129,224,20,250,241,67,157,241,187,122,200,83,194,62,105,111,180,101,108,30,6,236,198,106,235,231,203,74,115,0,0,123,176,76,19,54,86,143,236,251,108,210,4,149,139,217,180,184,72,51,128,228,152,
125,160,213,186,174,174,118,208,167,219,164,25,125,58,73,19,12,243,72,54,135,2,216,191,235,161,133,166,91,55,218,50,201,181,67,8,0,0,244,220,98,93,87,111,30,27,154,222,211,7,90,38,121,145,227,110,158,
123,221,243,215,59,25,130,83,128,253,90,13,97,122,254,15,10,135,69,154,167,175,0,0,0,125,84,237,98,132,230,86,31,104,147,228,234,88,223,204,119,150,24,120,234,235,85,233,44,79,192,195,152,170,15,176,95,
31,70,244,125,92,58,156,60,211,38,205,198,63,95,218,63,127,171,120,155,164,89,160,255,95,237,175,103,154,14,0,128,67,246,187,214,117,181,106,151,46,155,31,248,123,169,28,206,254,16,156,2,236,79,57,150,
117,252,214,117,85,181,11,139,95,56,172,60,246,58,72,242,41,201,242,145,211,166,150,219,127,152,77,139,121,123,254,253,154,254,238,122,10,0,192,113,84,123,122,221,141,166,61,109,130,83,128,253,89,141,
236,251,249,18,193,41,15,47,48,23,105,118,50,221,73,17,219,78,87,42,147,188,111,67,212,223,99,20,52,0,0,25,221,198,147,133,35,218,31,214,56,5,216,159,191,70,246,253,148,14,41,15,176,76,242,106,93,87,215,
187,10,77,239,41,140,203,118,13,171,87,177,86,19,0,0,176,39,70,156,62,92,213,126,148,73,254,179,245,119,155,124,61,101,240,101,154,181,217,206,52,25,248,185,49,166,111,166,93,227,199,81,229,91,54,73,174,
219,205,196,14,117,78,150,73,206,103,211,226,125,146,119,14,1,0,61,184,23,174,210,204,210,41,211,44,219,180,185,239,19,103,211,162,72,51,170,236,44,201,107,253,71,96,172,253,200,161,19,156,126,255,166,
183,76,242,57,205,174,216,155,239,124,238,242,27,55,195,121,123,3,252,45,214,99,3,96,220,206,119,189,251,231,67,173,235,234,253,108,90,84,73,254,116,24,0,56,130,69,146,207,235,186,90,62,226,222,85,165,
9,71,86,109,223,113,146,102,73,164,223,34,68,133,83,87,105,130,254,16,156,254,211,42,205,154,108,203,231,190,208,214,122,108,55,237,19,197,203,52,107,178,77,52,243,206,108,114,255,244,225,185,118,6,56,
152,235,99,133,166,91,247,220,197,108,90,188,76,242,214,225,128,71,215,80,95,190,241,57,255,202,221,195,255,51,77,6,247,246,29,175,118,177,52,77,59,80,103,145,100,49,155,22,103,73,254,136,193,55,0,71,
39,56,253,250,166,247,97,95,11,10,183,55,211,247,179,105,113,211,118,234,4,168,79,183,204,221,72,224,111,22,41,109,88,125,150,102,7,230,11,205,6,176,159,251,231,186,174,110,122,242,94,62,164,121,72,233,
254,10,255,84,182,245,83,153,31,207,166,250,86,109,53,73,19,228,156,197,212,98,184,222,215,253,175,237,147,190,178,20,13,192,241,9,78,219,142,214,186,174,222,31,226,11,181,69,234,251,217,180,88,36,249,
119,60,69,124,140,155,60,98,135,230,246,243,22,105,158,218,22,109,209,113,169,25,1,118,234,83,95,222,200,186,174,54,237,253,245,237,192,219,180,124,228,231,111,156,134,124,231,92,250,152,100,249,148,160,
244,27,117,236,42,166,22,195,213,33,214,244,182,20,13,192,241,253,172,9,114,117,168,208,180,115,19,172,146,156,199,110,192,15,237,16,158,63,103,135,230,117,93,85,237,14,204,111,116,48,1,118,170,234,217,
251,249,50,244,6,109,195,169,155,71,252,151,15,78,67,58,22,109,237,244,106,93,87,139,93,132,166,223,58,87,219,215,63,79,242,162,253,186,48,118,55,7,222,8,113,161,207,8,112,60,167,30,156,94,29,242,166,
247,141,142,209,155,60,126,100,201,169,57,223,213,18,10,237,218,181,111,52,41,192,104,109,198,240,77,172,235,234,58,77,32,250,189,239,167,202,17,55,229,162,151,202,246,156,184,218,215,242,83,223,57,103,
111,31,82,191,136,144,135,113,59,198,195,170,143,154,29,224,56,78,57,56,93,29,51,52,221,42,50,55,73,174,157,138,223,180,216,117,135,176,237,72,44,53,45,0,125,182,174,171,247,235,186,250,159,52,51,84,62,
108,125,92,37,121,181,174,171,23,135,14,199,232,181,15,237,8,211,213,145,207,219,170,29,129,170,190,101,140,202,125,141,224,254,193,117,165,239,2,112,36,167,188,198,105,111,158,218,173,235,106,53,155,
22,101,172,119,122,159,125,77,185,252,43,54,140,2,96,0,218,32,108,165,37,248,142,171,62,12,8,232,156,183,55,109,125,251,239,216,176,141,241,216,28,241,107,175,98,45,97,128,131,59,217,17,167,61,124,106,
247,217,233,120,175,74,19,0,0,124,83,239,66,211,173,122,123,149,102,132,52,140,197,23,77,0,112,90,126,209,4,0,0,48,72,55,125,13,77,111,173,235,106,57,155,22,55,73,222,58,92,0,71,83,166,25,49,93,38,249,
79,251,119,85,190,30,168,52,207,221,12,129,215,237,239,231,154,142,83,39,56,5,0,128,225,217,228,56,155,212,60,197,135,36,151,49,101,31,224,80,247,135,101,154,17,210,229,35,246,12,89,221,247,151,179,105,
113,150,38,64,125,29,203,221,113,130,4,167,0,0,48,60,203,99,108,82,243,20,235,186,218,204,166,197,34,70,157,2,236,203,38,201,34,201,167,61,109,174,188,74,114,51,155,22,147,52,225,233,175,17,162,114,34,
4,167,0,0,48,60,159,7,248,126,223,58,108,0,59,85,37,249,112,168,101,91,218,7,118,139,36,139,217,180,40,146,188,75,51,163,0,70,235,103,77,0,0,0,131,179,209,4,0,39,125,15,184,94,215,213,139,99,173,117,189,
174,171,106,93,87,87,73,94,164,89,26,0,70,73,112,10,0,192,161,58,121,104,79,0,158,167,76,242,106,93,87,55,125,120,51,109,128,250,38,201,149,123,19,99,36,56,5,0,160,219,9,90,229,235,157,118,159,171,218,
245,154,107,142,145,246,4,56,65,139,117,93,189,90,215,85,213,183,55,214,142,124,61,143,240,148,145,17,156,194,241,85,154,0,216,179,205,64,95,155,227,186,218,225,107,93,107,78,0,120,150,69,59,53,190,183,
218,135,122,194,83,70,69,112,10,199,87,107,2,96,223,133,246,158,10,88,163,8,71,172,29,117,250,42,207,123,192,183,73,242,102,93,87,75,45,186,91,179,105,113,166,21,0,78,70,149,129,60,132,108,107,195,55,
14,25,99,33,56,5,128,145,107,119,64,221,245,8,133,141,162,248,36,206,157,114,93,87,47,218,243,167,124,100,7,239,67,146,23,66,83,128,209,216,36,89,125,227,163,210,60,123,117,213,214,115,67,169,31,86,105,
30,220,195,224,253,162,9,0,96,252,214,117,181,156,77,139,243,36,127,38,41,158,249,114,171,182,128,215,73,58,157,243,103,145,100,49,155,22,69,146,121,251,145,36,175,219,95,203,36,255,105,59,206,43,231,
6,192,40,44,147,124,73,82,182,65,216,15,181,163,225,231,237,253,225,66,19,238,196,131,219,191,103,62,38,185,116,248,24,58,193,41,0,156,136,182,232,126,49,155,22,151,73,126,207,93,248,245,152,14,212,199,
129,22,239,236,230,28,170,210,132,163,75,173,1,48,74,85,154,192,107,241,148,17,142,109,141,176,74,114,51,155,22,147,52,225,233,187,60,255,161,237,41,251,60,208,154,161,156,77,139,77,146,137,67,200,144,
9,78,1,224,196,116,70,15,158,37,121,153,111,135,168,101,146,191,146,44,135,52,69,12,128,193,91,165,9,241,238,219,15,224,117,154,32,174,208,76,59,179,73,242,97,93,87,55,59,172,55,54,105,166,107,47,218,
135,182,127,68,136,246,20,229,192,223,251,153,67,200,144,9,78,1,224,68,181,163,7,23,90,2,128,30,168,210,140,102,255,244,208,141,7,183,70,52,190,142,41,193,207,81,166,217,200,175,218,99,205,177,152,77,
139,101,146,255,205,227,103,188,156,186,141,38,128,227,177,57,20,0,0,0,199,82,165,89,55,251,197,186,174,174,31,26,154,38,205,136,198,117,93,45,214,117,117,149,228,127,210,108,74,199,227,148,73,206,15,
177,54,117,59,2,245,60,195,30,65,121,12,115,77,0,199,35,56,5,0,0,224,24,22,73,94,181,75,200,60,75,27,162,190,79,242,42,130,185,199,184,62,228,82,60,237,215,122,163,217,31,101,162,9,224,120,4,167,0,0,0,
28,218,98,93,87,87,187,14,237,218,17,171,231,105,70,178,242,125,171,99,108,248,104,169,32,96,72,4,167,0,0,0,28,82,213,78,175,223,139,54,140,189,210,204,63,244,229,136,95,251,47,205,15,12,129,224,20,0,
0,128,67,250,184,239,47,208,142,164,44,53,117,111,57,54,167,225,211,129,190,206,82,83,179,47,130,83,0,0,0,14,169,28,217,215,1,238,209,174,95,124,136,235,240,227,200,154,174,112,246,244,135,224,20,0,0,
128,131,57,224,186,154,181,214,134,163,187,74,178,217,231,235,31,99,173,222,61,219,56,109,250,99,172,193,169,147,12,0,0,0,224,136,246,184,97,219,38,77,104,186,24,97,179,85,206,156,254,24,107,112,186,200,
247,135,131,223,56,244,0,0,0,156,176,151,154,128,67,104,195,211,87,217,93,22,179,74,242,106,164,161,105,114,184,181,97,121,128,95,70,122,81,110,102,211,226,60,201,69,146,95,147,76,218,127,170,146,124,
26,225,48,238,49,59,107,127,40,2,0,0,176,59,19,77,192,161,172,235,106,147,228,122,54,45,62,38,185,76,242,91,30,183,150,231,38,205,38,80,99,205,116,54,105,178,143,143,50,171,126,249,101,228,23,229,162,
253,0,0,0,0,224,136,214,117,85,37,121,159,228,253,108,90,20,105,6,75,21,73,94,223,243,233,101,154,181,138,203,145,174,99,250,177,253,30,171,118,84,46,61,244,139,38,0,0,0,0,224,144,218,16,117,113,162,223,
126,185,174,171,247,206,130,254,251,89,19,0,0,0,0,0,124,205,136,83,224,216,54,105,214,114,249,43,205,52,133,77,154,169,10,213,183,254,195,108,90,204,211,172,201,52,79,50,77,51,189,99,174,41,1,0,0,128,
93,17,156,2,199,80,166,217,41,112,245,148,181,92,182,254,207,234,246,239,102,211,98,146,38,64,253,53,205,198,112,19,205,12,0,0,0,60,149,224,20,56,148,77,154,93,16,63,124,111,52,233,83,181,27,194,45,147,
44,103,211,226,58,77,120,250,46,143,219,169,17,0,0,0,32,137,224,20,56,140,69,246,20,152,222,167,13,81,23,73,22,179,105,241,54,77,128,58,113,24,0,0,0,128,135,178,57,20,176,79,155,36,231,235,186,186,58,
84,104,218,181,174,171,155,36,47,178,53,173,31,0,0,0,224,71,4,167,192,190,148,73,94,173,235,106,117,236,55,178,174,171,205,186,174,206,211,140,66,5,0,0,0,248,33,193,41,176,15,155,36,111,142,53,202,244,
91,214,117,117,21,225,41,0,48,174,154,107,104,74,135,13,128,161,16,156,2,251,208,187,208,244,86,27,158,42,216,1,128,193,91,215,85,153,225,133,167,234,48,0,6,67,112,10,236,218,170,15,211,243,127,224,218,
97,2,0,70,98,57,176,247,251,201,33,3,96,40,4,167,112,124,47,71,246,253,124,236,251,27,108,131,221,210,169,247,36,171,19,250,94,191,56,220,0,59,189,247,142,73,213,163,247,114,157,225,140,58,93,141,240,
92,0,96,196,126,209,4,112,116,147,145,125,63,67,41,134,63,39,153,59,253,6,221,81,220,183,141,195,13,176,83,229,72,238,189,85,159,150,36,90,215,213,102,54,45,174,146,252,123,0,247,213,43,151,1,192,224,
251,72,171,52,131,76,202,173,62,98,209,254,126,158,102,112,216,69,70,146,117,8,78,57,85,85,143,222,203,152,70,181,85,235,186,218,56,189,70,237,115,146,203,19,249,94,151,14,55,192,78,125,202,56,130,211,
222,77,53,95,215,213,178,13,79,255,236,113,71,251,188,175,107,224,3,240,160,159,227,31,146,44,190,209,231,191,253,249,190,106,127,189,154,77,139,203,36,127,100,224,1,170,169,250,156,170,82,19,236,133,
98,120,228,214,117,181,60,145,227,188,208,185,3,216,253,207,214,17,220,67,54,73,110,122,122,143,94,36,57,79,255,102,76,148,73,94,181,27,89,1,48,60,101,146,23,235,186,186,121,204,64,169,246,190,244,34,
3,207,95,4,167,156,164,182,112,235,75,225,190,116,68,24,152,177,79,179,219,164,121,154,10,192,110,235,175,205,8,238,33,87,125,158,93,211,174,31,250,34,77,72,221,139,251,233,186,174,94,121,24,9,48,104,
111,158,122,239,107,255,223,155,33,127,243,130,83,78,89,31,54,49,90,121,250,206,0,59,190,171,244,116,180,205,142,92,235,224,1,236,245,30,50,212,240,244,170,157,121,209,247,54,222,172,235,234,42,199,11,
80,55,237,215,125,181,174,171,247,206,250,94,211,15,1,126,100,245,220,190,81,251,255,87,67,109,0,193,41,125,183,217,99,81,121,115,228,139,119,147,129,63,121,225,164,59,190,215,233,199,104,150,93,187,105,
167,148,0,176,191,123,200,34,195,11,79,175,134,118,127,88,215,85,181,21,160,94,103,255,33,89,217,126,157,23,235,186,186,242,16,114,16,254,163,9,0,190,207,230,80,28,210,230,137,5,216,62,189,73,179,3,233,
217,129,219,162,76,207,167,122,193,3,58,100,87,179,105,145,140,103,179,168,43,161,41,192,193,238,33,139,217,180,40,219,58,172,232,241,91,173,218,251,195,106,192,109,93,165,153,41,114,51,155,22,69,154,
157,142,95,167,217,168,171,120,102,219,148,105,54,142,92,9,74,15,114,46,2,112,96,130,83,14,89,180,149,109,129,60,127,224,127,217,100,207,193,105,27,92,158,207,166,197,251,36,191,231,48,187,189,221,164,
89,239,105,227,172,96,4,215,245,213,108,90,252,149,228,93,134,187,91,226,38,205,186,61,43,71,20,224,224,181,225,171,36,111,219,251,72,223,140,174,102,219,14,81,111,255,110,54,45,206,218,223,158,61,224,
37,202,36,27,247,204,163,248,146,221,63,172,46,53,43,192,247,9,78,57,180,243,60,108,132,103,153,3,142,200,92,215,213,251,217,180,88,180,69,251,229,158,190,204,50,201,71,133,38,35,236,248,222,204,166,197,
50,201,159,57,252,232,237,231,90,164,89,211,116,227,72,2,28,229,30,178,73,178,93,135,93,228,248,15,226,22,105,2,211,234,68,142,193,109,109,170,70,237,247,113,90,204,166,197,239,121,248,32,148,31,89,13,
97,205,94,128,99,19,156,114,140,226,248,124,54,45,230,109,97,252,178,83,28,127,73,82,30,227,38,222,22,199,87,179,105,113,221,190,183,95,219,95,159,163,76,51,125,105,97,250,18,35,191,182,171,246,218,190,
108,59,190,69,207,223,242,170,237,20,235,36,2,244,231,62,178,93,135,237,50,32,122,136,42,201,39,53,27,61,247,208,65,40,15,169,131,236,181,0,240,0,130,83,142,85,28,151,233,233,212,144,54,220,93,180,31,
183,211,151,230,105,2,222,215,91,159,122,251,119,101,238,214,111,173,146,212,237,223,173,140,98,227,4,175,237,69,146,69,27,160,254,150,254,141,64,93,198,200,111,128,62,223,71,254,91,135,181,235,113,158,
165,121,152,61,207,238,31,202,173,114,183,62,103,169,245,25,200,245,241,156,7,213,85,154,7,199,11,173,9,240,48,130,83,248,113,129,178,138,169,75,240,216,235,230,182,211,59,79,19,160,94,228,120,163,80,
203,52,163,136,150,70,17,1,12,234,94,82,229,235,135,217,69,123,47,57,75,242,175,220,141,72,157,231,219,211,251,203,52,15,184,55,73,254,74,187,161,145,160,148,17,213,89,23,185,155,197,119,214,249,212,85,
123,238,127,137,7,4,0,79,34,56,5,96,159,133,125,217,118,90,175,219,226,254,44,205,200,161,179,61,126,217,77,219,81,248,18,97,41,192,152,238,41,85,154,224,115,165,53,160,223,179,248,128,31,114,237,14,132,
224,20,128,67,23,247,55,73,210,6,169,243,52,163,135,110,151,193,56,123,228,203,174,114,55,138,168,76,82,25,77,1,0,0,236,72,181,167,215,253,162,105,135,65,112,10,192,81,252,104,148,196,214,148,204,109,
27,193,40,0,0,112,32,31,210,44,137,49,217,225,107,30,101,67,108,158,70,112,10,64,47,109,77,201,4,0,0,56,74,159,100,54,45,206,147,252,111,118,19,158,150,73,206,181,236,112,252,172,9,0,0,0,0,224,159,218,
25,111,47,210,110,86,248,68,155,52,163,87,207,215,117,181,209,170,195,97,196,41,0,0,0,0,124,67,27,118,94,205,166,197,237,212,253,223,210,236,215,240,35,171,36,159,147,44,4,166,195,36,56,5,0,0,0,128,31,
104,151,19,187,201,215,27,222,78,210,236,205,80,164,89,106,172,138,189,25,70,67,112,10,0,0,0,0,143,36,28,29,63,107,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,
0,0,0,64,135,224,20,0,0,134,167,212,4,0,0,251,37,56,5,0,128,227,88,62,241,255,85,235,186,218,104,62,0,128,253,18,156,2,0,192,17,172,235,170,76,114,245,200,255,182,73,242,70,235,1,0,236,159,224,20,0,0,
142,100,93,87,139,36,231,73,86,15,248,244,69,146,87,109,224,10,0,192,158,253,162,9,0,0,224,120,214,117,181,74,178,154,77,139,73,146,121,146,179,173,127,222,36,41,219,207,1,0,224,128,4,167,0,0,208,3,237,
186,165,171,60,108,244,41,0,0,123,102,170,62,0,0,0,0,64,135,224,20,0,0,0,0,160,195,84,125,0,0,0,96,108,86,73,202,36,117,251,107,146,84,235,186,170,146,100,54,45,230,73,38,237,223,159,37,153,166,89,103,
122,174,233,224,191,190,156,122,3,8,78,129,83,245,90,19,0,0,192,104,84,73,150,73,62,63,100,67,189,117,93,149,91,127,252,239,231,183,27,245,157,37,249,53,201,69,238,194,85,224,4,9,78,1,0,0,128,161,90,37,
249,184,174,171,229,46,94,172,221,168,111,217,126,92,205,166,197,69,146,223,211,132,169,192,137,17,156,2,0,0,0,67,83,38,185,126,200,232,210,231,104,3,217,229,108,90,156,37,249,35,166,242,51,92,213,19,
175,179,147,102,115,40,0,0,0,96,72,62,172,235,234,213,190,67,211,109,235,186,90,173,235,234,85,146,27,205,207,80,175,155,36,155,71,124,254,106,87,35,185,135,76,112,10,0,0,0,12,197,213,186,174,222,31,235,
139,175,235,234,58,201,149,195,192,208,180,27,163,189,72,178,200,247,3,212,77,154,135,19,231,90,205,84,125,0,0,0,96,24,110,214,117,181,56,246,155,88,215,213,98,54,45,110,55,143,130,193,104,215,240,189,
74,179,126,239,89,251,215,183,191,174,146,108,58,27,167,157,60,193,105,127,84,154,0,0,0,0,238,181,73,51,213,184,47,174,34,56,101,192,182,150,186,88,105,141,111,51,85,191,63,150,121,220,90,19,15,190,185,
28,114,221,23,0,0,0,216,131,69,59,90,174,23,218,247,178,116,88,96,220,140,56,237,209,15,221,217,180,184,74,242,239,29,190,236,38,201,27,173,11,0,0,192,192,125,238,225,123,250,43,70,157,66,31,149,105,70,
210,126,73,147,141,149,221,7,47,179,105,81,36,185,253,120,153,102,201,130,121,247,133,4,167,61,178,174,171,229,108,90,156,167,9,79,39,207,124,185,42,201,27,107,83,0,0,0,192,94,172,146,188,211,12,208,11,
85,146,143,73,150,237,70,88,223,213,126,206,87,159,55,155,22,147,52,15,67,222,165,9,84,5,167,125,179,174,171,213,108,90,188,72,242,54,201,111,183,7,234,145,39,202,135,62,44,152,13,0,0,0,0,123,84,37,185,
94,215,213,242,185,47,212,142,74,93,36,89,204,166,197,69,146,63,5,167,61,212,30,168,247,73,222,207,166,197,60,77,218,253,50,205,40,212,73,238,134,14,87,237,199,38,205,240,227,149,17,166,0,0,0,112,16,115,
77,0,71,181,72,19,154,110,118,253,194,237,172,240,149,224,180,231,218,32,180,212,18,0,0,0,208,43,19,77,0,71,179,88,215,213,213,62,191,192,186,174,54,63,107,103,0,0,0,0,96,32,86,251,14,77,111,9,78,129,
109,229,51,255,255,70,19,2,0,0,39,162,210,4,112,20,31,15,245,133,4,167,192,46,127,248,124,210,132,0,0,192,137,168,14,240,53,54,154,25,190,182,139,141,160,30,74,112,10,108,255,240,89,36,249,240,196,155,
249,213,33,127,120,1,0,0,28,185,255,180,202,254,131,77,125,44,56,34,193,41,208,189,249,191,79,242,34,205,238,116,63,42,2,54,73,110,146,188,106,67,87,0,0,128,83,178,207,41,195,139,117,93,85,154,24,142,
231,23,77,0,116,181,55,231,171,36,87,179,105,49,79,82,36,153,111,125,74,153,164,90,215,85,169,181,0,0,128,19,238,59,189,159,77,139,105,146,203,29,191,244,42,201,181,22,134,227,18,156,2,63,42,4,202,52,
65,233,82,107,0,0,0,252,163,207,116,53,155,22,127,37,121,151,100,242,204,151,219,36,249,216,206,4,4,142,204,84,125,0,0,0,128,103,88,215,213,77,154,37,207,174,211,12,60,121,172,42,205,126,19,47,132,166,
208,31,70,156,2,0,0,0,60,211,186,174,54,105,246,128,184,153,77,139,34,205,114,103,243,36,47,115,255,72,212,47,105,2,211,149,181,76,161,159,4,167,0,0,0,0,59,212,6,161,85,44,121,6,131,102,170,62,0,48,166,
78,202,170,237,164,124,75,213,126,14,0,0,192,119,9,78,129,83,245,229,0,95,163,210,204,112,20,175,146,44,58,215,96,213,254,221,185,230,1,0,0,30,194,84,125,224,84,173,210,236,122,185,47,229,190,215,41,250,
251,239,191,29,69,184,223,38,201,149,102,160,175,126,250,233,39,141,0,0,48,0,70,156,2,39,169,157,170,187,216,227,151,16,218,0,0,0,192,128,9,78,129,147,181,174,171,171,236,62,60,221,36,121,179,174,171,
82,11,3,0,0,192,112,9,78,129,147,214,134,167,231,217,205,122,164,139,36,175,214,117,181,212,178,0,0,0,48,108,214,56,5,78,94,59,109,255,197,108,90,156,37,249,45,201,89,146,226,129,255,189,76,242,41,201,
114,223,107,154,2,0,192,72,76,52,1,48,4,130,83,128,86,27,160,174,146,100,54,45,138,52,225,233,252,158,194,174,74,82,181,159,15,0,0,0,140,144,224,20,224,30,237,232,209,42,109,144,10,0,0,236,204,230,9,245,
185,186,28,56,56,107,156,2,0,0,0,7,211,134,160,229,35,254,203,74,171,1,199,32,56,5,0,0,0,14,237,60,201,205,3,62,239,38,201,27,205,5,28,131,169,250,0,0,0,192,65,173,235,106,147,228,122,54,45,62,164,217,
156,117,222,249,148,85,146,178,253,60,128,163,16,156,2,0,0,0,71,209,6,163,203,246,3,160,87,76,213,7,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,
0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,198,168,220,241,235,173,52,41,192,105,17,156,2,0,0,48,58,
235,186,90,38,169,118,244,114,229,186,174,86,90,21,224,180,8,78,1,0,0,24,171,55,73,54,207,124,141,77,146,43,77,9,112,122,4,167,0,0,0,140,210,186,174,202,36,47,146,44,158,248,18,139,36,47,218,215,1,224,
196,252,162,9,0,0,0,24,171,117,93,109,146,92,205,166,197,135,36,23,73,94,39,153,39,41,238,249,244,50,205,244,254,47,73,150,235,186,170,180,32,192,233,18,156,2,0,192,1,253,253,247,223,26,1,142,163,74,114,
211,126,192,163,253,244,211,79,26,1,78,140,169,250,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,116,8,78,1,0,0,
0,0,58,4,167,0,0,0,0,0,29,130,83,0,0,0,0,128,14,193,41,0,0,0,0,64,135,224,20,0,0,0,0,160,67,112,10,0,0,0,0,208,33,56,5,0,0,0,0,232,16,156,2,0,0,0,0,251,50,25,234,27,23,156,2,0,0,0,0,251,50,31,234,27,23,
156,2,0,0,0,0,251,82,14,245,141,11,78,1,0,0,0,128,125,41,119,248,90,171,67,190,113,193,41,0,0,0,0,176,47,31,146,108,118,244,90,215,135,124,227,130,83,0,0,0,0,96,47,214,117,85,37,57,79,82,61,227,101,54,
73,174,214,117,85,30,242,189,11,78,1,0,0,0,128,189,105,3,207,87,105,70,159,86,143,252,239,139,36,175,214,117,181,56,244,251,254,105,54,45,254,62,224,215,59,95,215,213,202,233,2,240,124,127,255,253,183,
70,0,0,128,3,249,233,167,159,52,2,236,200,108,90,156,37,57,75,242,50,201,228,158,79,41,147,252,149,100,185,174,171,205,177,222,231,47,14,21,0,0,0,192,247,25,184,0,59,181,202,129,55,122,122,138,67,78,213,
223,24,109,10,0,0,0,0,12,193,33,131,211,15,154,27,0,0,0,0,24,130,67,5,167,139,117,93,221,104,110,0,0,0,0,96,8,14,17,156,126,88,215,213,149,166,6,0,0,0,0,134,98,159,155,67,149,73,174,173,107,10,0,0,0,0,
12,205,62,130,211,50,201,199,117,93,45,52,47,0,0,0,0,48,68,187,10,78,171,36,171,52,129,105,169,89,1,0,0,0,128,33,123,106,112,186,73,19,148,126,73,178,18,150,2,0,0,0,0,99,242,75,154,0,244,123,54,73,254,
106,127,45,147,148,235,186,218,104,58,0,0,0,0,96,172,254,255,0,68,192,233,207,84,106,78,76,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* StompGui::owlFaceplate_png = (const char*) resource_StompGui_owlFaceplate_png;
const int StompGui::owlFaceplate_pngSize = 63100;


//[EndFile] You can add extra defines here...
//[/EndFile]
