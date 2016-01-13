#ifndef __PatchRegistry_h__
#define __PatchRegistry_h__
#include <map>
#include <string>

#include "StompBox.h"
#define DONT_SET_USING_JUCE_NAMESPACE 1
#include "JuceHeader.h"

class PatchRegistry {
  typedef Patch* PatchCreator(); // function pointer to create Patch
public:
  PatchRegistry();
  ~PatchRegistry();
  juce::StringArray getNames();
  int getNumberInputChannels(const std::string& name);
  int getNumberOutputChannels(const std::string& name);
  Patch* create(const std::string& name);
  void registerPatch(const std::string& name, PatchCreator creator, const int nbInputCh, const int nbOutputCh);
  template<class T> struct Register {
    static Patch* construct() {
      return new T();
    };
    static PatchCreator* init_creator(std::string& name) {
      return getInfos()[name]->ctor = construct;
    }
    static PatchCreator* creator;
  };
private:
  struct PatchInfo {
        int nbInputChannels;
        int nbOutputChannels;
        PatchCreator* ctor;
    };
  typedef std::map<std::string, PatchInfo*> PatchInfos; // map from id to creator
  
  static PatchInfos& getInfos() {
    static PatchInfos infos;
    return infos;
  }
};

#endif // __PatchRegistry_h__
