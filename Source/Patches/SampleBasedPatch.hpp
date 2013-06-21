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
  void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output){
    prepare();
    int size = input.getSize();
    float* in = input.getSamples();
    float* out = output.getSamples();
    for(int i=0; i<size; ++i)
      out[i] = processSample(in[i]);
  }
};

#endif /* __SampleBasedPatch_hpp__ */

