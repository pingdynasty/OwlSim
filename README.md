# OWL Simulator #

Simulator for the [OWL](http://hoxtonowl.com/), a programmable effects pedal. All code and documentation published under the [Gnu GPL](http://www.gnu.org/licenses/gpl-3.0.txt), unless otherwise stated.


1. Compilation and SDKs
-----------------------

### 1.1. VST SDK (All platforms)
To build the OwlSim as a VST, you need the VST SDK 2.4, available on the [Steinberg website](http://www.steinberg.net/en/company/developer.html).
Please check your project settings to ensure the path to the VST SDK is correct. By default it is set to: ~/SDKs/vstsdk2.4

### 1.2. Windows 
For Windows users, Visual Studio solutions (2008, 2010 or 2012) are available in Builds/VisualStudio20xx

### 1.3. Linux
For Linux users, a Makefile is available in Builds/Linux

### 1.4. Mac OS X
There is an Xcode project in Builds/MacOSX.
If you are using Xcode version 4.3 or later, you may need to download and install the [Core Audio Utility classes from Apple](https://developer.apple.com/library/mac/#samplecode/CoreAudioUtilityClasses/Introduction/Intro.html). For more details, please see the instructions [here](http://rawmaterialsoftware.com/viewtopic.php?f=8&t=9546&p=56679#p56677).

You may also need to set a Rez Search Path in Xcode: click on the project title, select the Build Settings tab and set a Rez Search Path to point at the directory you have created and make it recursive (e.g. /Library/Developer/CoreAudio/**).

The project can build in the AU format as well. You can enable it by setting the variable `JucePlugin_Build_AU` to 1 in JuceLibraryCode/AppConfig.h.
You will find addtional support on the [Juce Forum](http://rawmaterialsoftware.com/juce.php)


2. Write your patch
-------------------

To write your patch, please use the template provided in Source/Patches/TemplatePatch.hpp.
You can write your code directly into it, or create a new file.

If you create a new file (say, “MyPatch.hpp”) you will need to register it in Source/PatchRegistry.cpp: 
- add the relevant #include:

```#include "Patches/MyPatch.hpp"```

- add the following line to the constructor, Patchregistry::PatchRegistry():

```REGISTER_PATCH(MyPatch, "My Patch");```

In the patch, to get a value (float between 0 and 1) from the knobs, do as follows: 

```float valueA = getParameterValue(PARAMETER_A);```

```float valueB = getParameterValue(PARAMETER_B);```

```float valueC = getParameterValue(PARAMETER_C);```

```float valueD = getParameterValue(PARAMETER_D);```

The footswitch is currently not tied to the API, but acts as a standard True Bypass switch.


3. Test 
-------

Start up your favourite DAW, create a track, and load the OwlSim VST plugin. The build script should have copied the compiled files to the right location, but if it does not appear, you may have to tell the DAW to scan or reload the VST directory.

In the OwlSim plugin you can use the drop-down box to select the patch: Template (if you have put your code into TemplatePatch.hpp) or your own patch if you have registered it in the PatchRegistry.

Please note that currently, OwlSim is a mono plugin. For the moment it is limited to one instance at a time (so don’t try to put the OwlSim into more than 1 track at a time). We will change that later of course!


#### Compiling for Audio Units - tips

Please follow the link below for some tips on building Audio Units plugins with OWLSim:

[AU_tips](http://hoxtonowl.com/forums/topic/audiounits-compilation-tips/)

