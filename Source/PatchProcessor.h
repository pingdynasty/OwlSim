#ifndef __PatchProcessor_h__
#define __PatchProcessor_h__

#include "StompBox.h"

class PatchProcessor {
public:  
  virtual ~PatchProcessor(){};
  virtual void registerParameter(PatchParameterId pid, const std::string& name, const std::string& description = "") = 0;
  virtual float getParameterValue(PatchParameterId pid) = 0;
  virtual int getBlockSize() = 0;
  virtual double getSampleRate() = 0;
};

#endif // __PatchProcessor_h__
