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

#define REGISTER_PATCH(T, STR) registerPatch(STR, Register<T>::construct)

PatchRegistry::PatchRegistry(){
#include "OwlPatches/patches.cpp"
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
