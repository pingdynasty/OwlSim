# OWL Simulator #

Simulator for the [OWL](http://hoxtonowl.com/), a programmable audio effects
pedal. All code and documentation published under the Gnu GPL unless otherwise
stated: http://www.gnu.org/licenses/gpl-3.0.txt


#### 1. Compilation and SDKs
You need to compile the source code to use the OwlSim. for MAC OSX users: XCode 
project in /Builds/MacOSX for Windows users: Visual Studio solutions(2008, 2010 
or 2012) available in /Builds for Linux users: Makefile in /Builds/Linux

To build VSTs, you need the VST SDK 2.4, available here :
https://code.google.com/p/juced/source/browse/trunk/vst/?r=8 Take time to sign
the license agreement on www.steinberg.net/en/company/developer.html‎ if you
haven’t done it already.

(Mac only) The project can build in the AU format as well. You can enable it by
setting the variable JucePlugin_Build_AU to 0 in /JuceLibraryCode/AppConfig.h.
(Mac only) If you encounter problems of Rez errors due to AUresources.r, Please
follow the Readme.rtf file located in the /CoreAudioUtilityClasses folder.

(Mac only) In addition to the instructions in the Readme.rtf, you may also need
to set a Rez Search Path in XCode - click on the project title, select the Build
Settings tab and set a Rez Search Path to point at the directory you have
created and make it recursive (e.g. /Library/Developer/CoreAudio/**).

#### 2. Write your patch
To write your patch, please use the template TemplatePatch.hpp (in Source/Patches).
You can write your code directly into it, or create a new file.

If you create a new file (say, “MyPatch.hpp”) you will need to register it in
the PatchRegistry.cpp: - adding the relevant include: 
	#include "Patches/MyPatch.hpp"
	#
- add the following line in Patchregistry::PatchRegistry()
REGISTER_PATCH(MyPatch, "MyPatch");

In the patch, to get a value (float between 0 and 1) from the knobs, do as
follow: float valueA = getParameterValue(PARAMETER_A); float valueB =
getParameterValue(PARAMETER_B); float valueC = getParameterValue(PARAMETER_C);
float valueD = getParameterValue(PARAMETER_D);

The Switch button is acting as a standard Bypass button.


#### 3. Test 
The OwlSim will run as a mono plugin. For the moment it is limited to one instance 
at a time (so don’t try to put the OwlSim into more than 1 track at a time :) We 
will change that later of course!
