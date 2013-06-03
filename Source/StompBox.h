#ifndef __StompBox_h__
#define __StompBox_h__

#include <map>
#include <string>

#if defined (_MSC_VER) && _MSC_VER < 1600
// Visual Studio 2008 and under
typedef signed char  int8_t;
typedef signed short int16_t;
typedef signed int   int32_t;
typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;
typedef signed long long   int64_t;
typedef unsigned long long uint64_t;
#else // Visual Studio 2010 and after, Mac OS X, etc
#include <inttypes.h>
#endif

class AudioInputBuffer {
public:
  virtual void getSamples(int from, int length, float* data) = 0;
  virtual float* getSamples() = 0;
  virtual int getSize() = 0;
};

class AudioOutputBuffer {
public:    
  virtual void setSamples(int from, int length, float* data) = 0;
  virtual void setSamples(float* data) = 0;
  virtual int getSize() = 0;
};

enum PatchParameterId {
  PARAMETER_A,
  PARAMETER_B,
  PARAMETER_C,
  PARAMETER_D
};

class Patch {
protected:
  uint16_t blocksize;
  uint16_t samplerate;
//   Patch();
public:
  virtual ~Patch(){}
  /** sets @param value to a value between 0 and 4096 */
  float getParameterValue(PatchParameterId pid);
  void getParameterValue(PatchParameterId pid, int &value);
  /** sets @param value to a value between 0.0 and 1.0 */
  void getParameterValue(PatchParameterId pid, float &value);
//   void setParameterValue(int pid, int value);
//   void setParameterValue(int pid, float value);
  int getBlockSize();
  double getSampleRate();
public:
  virtual void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output) = 0;
};

#endif // __StompBox_h__
