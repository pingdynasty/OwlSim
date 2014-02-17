#include "PatchRegistry.h"

#define _USE_MATH_DEFINES
#include <math.h>

#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif /* min */
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif /* max */
#ifndef abs
#define abs(x) ((x)>0?(x):-(x))
#endif /* abs */

#include "OwlPatches/includes.h"

#define REGISTER_PATCH(T, STR, NB_IN_CH, NB_OUT_CH) registerPatch(STR, Register<T>::construct, NB_IN_CH, NB_OUT_CH)

PatchRegistry::PatchRegistry(){
    #include "OwlPatches/patches.cpp"
}

PatchRegistry::~PatchRegistry(){
    PatchInfos::iterator iterator = getInfos().begin();
    PatchInfos::iterator last = getInfos().end();
    for(; iterator != last; ++iterator){
        delete(iterator->second);
    }
}

StringArray PatchRegistry::getNames(){
  PatchInfos::iterator iterator = getInfos().begin();
  PatchInfos::iterator last = getInfos().end();
  StringArray result;
  for(; iterator != last; ++iterator){
    result.add((const char*)(iterator->first).c_str());
  }
  return result;
}

int PatchRegistry::getNumberInputChannels(const std::string& name){
    return getInfos().find(name)->second->nbInputChannels;
}

int PatchRegistry::getNumberOutputChannels(const std::string& name){
    return getInfos().find(name)->second->nbOutputChannels;
}

Patch* PatchRegistry::create(const std::string& name) {
  // creates an object from a string
    const PatchInfos::const_iterator iter = PatchRegistry::getInfos().find(name);
    PatchInfos::iterator last = getInfos().end();
    return (iter == last  ? NULL : (iter->second->ctor)());
  // if found, execute the creator function pointer
}

void PatchRegistry::registerPatch(const std::string& name, PatchCreator creator, const int nbInputCh, const int nbOutputCh){
    PatchInfo* pi = new PatchInfo;
    getInfos()[name] = pi;
    pi->nbInputChannels = nbInputCh;
    pi->nbOutputChannels = nbOutputCh;
    pi->ctor = creator;
}
