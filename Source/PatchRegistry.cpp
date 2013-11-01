#include "PatchRegistry.h"

#define _USE_MATH_DEFINES
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif /* min */
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif /* max */
#ifndef abs
#define abs(x) ((x)>0?(x):-(x))
#endif /* abs */

#include "Patches/GainPatch.hpp"
#include "Patches/TemplatePatch.hpp"
#include "Patches/SimpleDelayPatch.hpp"
#include "Patches/ParametricEqPatch.hpp"
#include "Patches/OverdrivePatch.hpp"
#include "Patches/PhaserPatch.hpp"
#include "Patches/StateVariableFilterPatch.hpp"
#include "Patches/ResonantFilterPatch.hpp"
#include "Patches/FlangerPatch.hpp"
#include "Patches/LeakyIntegratorPatch.hpp"
#include "Patches/LpfDelayPatch.hpp"
#include "Patches/LpfDelayPhaserPatch.hpp"
// #include "Patches/WaveshaperPatch.hpp"
// #include "Patches/FreeVerbPatch.hpp"
// #include "Patches/EnvelopeFilterPatch.hpp"
// #include "Patches/OctaveDownPatch.hpp"

// #include "Patches/contest/BiasPatch.hpp"
// #include "Patches/contest/BiasedDelayPatch.hpp" 
// #include "Patches/contest/BitH8rPatch.hpp"
// #include "Patches/contest/ConnyPatch.hpp"
// #include "Patches/contest/DroneBox.hpp"
// #include "Patches/contest/DualTremoloPatch.hpp"
// #include "Patches/contest/JumpDelay.hpp"
// #include "Patches/contest/SampleJitterPatch.hpp"
// #include "Patches/contest/SirenPatch.hpp"
// #include "Patches/contest/blo_bleep.hpp"

#define REGISTER_PATCH(T, STR) registerPatch(STR, Register<T>::construct)

PatchRegistry::PatchRegistry(){
  REGISTER_PATCH(GainPatch, "Gain");
  REGISTER_PATCH(TemplatePatch, "Template");
  REGISTER_PATCH(SimpleDelayPatch, "Simple Delay");
  REGISTER_PATCH(ParametricEqPatch, "Parametric EQ");
  REGISTER_PATCH(OverdrivePatch, "Overdrive");
  REGISTER_PATCH(PhaserPatch, "Phaser");
  REGISTER_PATCH(StateVariableFilterPatch, "State Variable Filter");
  REGISTER_PATCH(ResonantFilterPatch, "Resonant Low Pass Filter");
  REGISTER_PATCH(FlangerPatch<1024>, "Flanger");
  REGISTER_PATCH(LeakyIntegratorPatch, "Leaky Integrator");
  REGISTER_PATCH(LpfDelayPatch<32768>, "Low Pass Filtered Delay");
  REGISTER_PATCH(LpfDelayPhaserPatch<32768>, "Low Pass Filtered Delay with Phaser");
//   REGISTER_PATCH(WaveshaperPatch, "Waveshaper");
//   REGISTER_PATCH(FreeVerbPatch, "FreeVerb");
//   REGISTER_PATCH(EnvelopeFilterPatch, "Envelope Filter");
//   REGISTER_PATCH(OctaveDownPatch, "Octave Pitch Shifter");

//   REGISTER_PATCH(BiasPatch, "contest/BiasPatch");
//   REGISTER_PATCH(BiasedDelayPatch, "contest/BiasedDelayPatch");
//   REGISTER_PATCH(BitH8rPatch, "contest/BitH8rPatch");
//   REGISTER_PATCH(ConnyPatch, "contest/ConnyPatch");
//   REGISTER_PATCH(DroneBoxPatch, "contest/DroneBox");
//   REGISTER_PATCH(DualTremoloPatch, "contest/DualTremoloPatch");
//   REGISTER_PATCH(JumpDelay, "contest/JumpDelay");
//   REGISTER_PATCH(SampleJitterPatch, "contest/SampleJitterPatch");
//   REGISTER_PATCH(SirenPatch, "contest/SirenPatch");
//   REGISTER_PATCH(little_blo_bleep, "contest/blo_bleep");
}

StringArray PatchRegistry::getNames(){
  Creators::iterator iterator = getCreators().begin();
  Creators::iterator last = getCreators().end();
  StringArray result;
  for(; iterator != last; ++iterator){
    result.add((const char*)(iterator->first).c_str());
  }
  return result;
}

Patch* PatchRegistry::create(const std::string& name) {
  // creates an object from a string
  const Creators::const_iterator iter = getCreators().find(name);
  return iter == getCreators().end() ? NULL : (*iter->second)();
  // if found, execute the creator function pointer
}

void PatchRegistry::registerPatch(const std::string& name, PatchCreator creator){
  getCreators()[name] = creator;
}
