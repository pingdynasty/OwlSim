#ifndef __SampleBasedPatch_hpp__
#define __SampleBasedPatch_hpp__

/**
 * Abstract base class for simple patch implementations.
 * Subclass and implement your own prepare() and processSample() methods.
 * prepare() is called at the start of a process block.
 * processSample() is called once for each sample.
 */
class SampleBasedPatch : public Patch {
public:
  virtual void prepare() = 0;
  virtual float processSample(float sample) = 0;
  void processAudio(AudioBuffer &buffer){
    prepare();
    int size = buffer.getSize();
      
    for (int ch = 0; ch<buffer.getChannels(); ++ch) {
        float* buf = buffer.getSamples(ch);
        for(int i = 0; i < size; ++i) buf[i] = processSample(buf[i]);
    }
  }
};

#endif /* __SampleBasedPatch_hpp__ */

