//
//  CompressorPatch.hpp
//  OwlSim
//
//  Created by Tom on 30/09/2013.
//
//

#ifndef OwlSim_CompressorPatch_hpp
#define OwlSim_CompressorPatch_hpp

#include "StompBox.h"


class CompressorPatch : public Patch {

    private:
        float SR,
              threshold,                            //percent (%)
              slope,
              attack, release, window, lookahead;   //millseconds (ms)

    public:
        CompressorPatch()
                          : threshold (0.f),
                            slope     (0.f),               // slope to unity
                            attack    (0.f),               // lookahead time to seconds
                            release   (0.f),               // window time to seconds
                            window    (0.f),               // attack time to seconds
                            lookahead (0.f)                // release time to seconds)
            {
                registerParameter(PARAMETER_A, "Threshold");
                registerParameter(PARAMETER_B, "Slope");
                registerParameter(PARAMETER_C, "Attack");
                registerParameter(PARAMETER_D, "Release");
                registerParameter(PARAMETER_E, "Window");
            }
    
        ~CompressorPatch(){}

    
    void processAudio(AudioBuffer &buffer){
        
//        threshold = getParameterValue(PARAMETER_A);
//        slope     = getParameterValue(PARAMETER_B);
//        attack    = getParameterValue(PARAMETER_C);
//        release   = getParameterValue(PARAMETER_D);

        threshold = 50;
        slope = 50;
        lookahead = 3;
        window = 1;
        attack = 0.1;
        release = 300.f;
        
        threshold *= 0.01;          // threshold to unity (0...1)
        slope     *= 0.01;              // slope to unity
        lookahead *= 1e-3;                // lookahead time to seconds
        window    *= 1e-3;               // window time to seconds
        attack    *= 1e-3;               // attack time to seconds
        release   *= 1e-3;               // release time to seconds
        
        SR = getSampleRate();
        
        // attack and release "per sample decay"
        double  att = (attack == 0.0) ? (0.0) : exp (-1.0 / (SR * attack));
        double  rel = (release == 0.0) ? (0.0) : exp (-1.0 / (SR * release));
        
        // envelope
        double  env = 0.0;

        // sample offset to lookahead wnd start
        int     lhsmp = (int) (SR * lookahead);
        
        // samples count in lookahead window
        int     nrms = (int) (SR * window);
        
        int size = buffer.getSize();
        
        
        for (int ch = 0; ch<buffer.getChannels(); ++ch) {
            
            float* buf = buffer.getSamples(ch);
            
            for (int i = 0; i < size; ++i) {
                
                // now compute RMS
                double  summ = 0;
                
                // for each sample in window
                for (int j = 0; j < nrms; ++j)
                {
                    int     lki = i + j + lhsmp;
                    double  smp;
                    
                    // if we in bounds of signal?
                    if (lki < i)
                        smp = buf[lki];
                    else
                        smp = 0.0;      // if we out of bounds we just get zero in smp
                    
                    summ += smp * smp;  // square em..
                }
                
                double  rms = sqrt (summ / nrms);   // root-mean-square
                
                // dynamic selection: attack or release?
                double  theta = rms > env ? att : rel;
                
                // smoothing with capacitor, envelope extraction...
                // here be aware of pIV denormal numbers glitch
                env = (1.0 - theta) * rms + theta * env;
                
                // the very easy hard knee 1:N compressor
                double  gain = 1.0;
                if (env > threshold)
                    gain = gain - (env - threshold) * slope;
                
                buf[i] *= gain;
            }
        }
        
    }
    
    
};

#endif
