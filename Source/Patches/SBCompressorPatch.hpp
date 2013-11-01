//
//  SBCompressorPatch.hpp
//  OwlSim
//
//  Created by Tom on 30/09/2013.
//  Using code from Maximilian audio library for Opemframeworks
//

#ifndef OwlSim_SBCompressorPatch_hpp
#define OwlSim_SBCompressorPatch_hpp

class SBCompressorPatch : public SampleBasedPatch {
    
    private:
    float output, currentRatio, thresh, ratio, attack, release, buf0, buf1;
	int attackphase,holdphase,releasephase;
    long holdtime, holdcount;
    
    public:
    
    SBCompressorPatch(): buf0(0), buf1(0) {
        
        registerParameter(PARAMETER_A, "Threshold");
        registerParameter(PARAMETER_B, "Ratio");
        registerParameter(PARAMETER_C, "Attack");
        registerParameter(PARAMETER_D, "Release");
    }
    
    void prepare() {
        
        thresh   = getParameterValue(PARAMETER_A);
        ratio    = getParameterValue(PARAMETER_B);
        //attack   = getParameterValue(PARAMETER_C);
        //release  = getParameterValue(PARAMETER_D);
        
        attack  = 1;
        release = 0.9995;
        
    }
    
    float processSample(float input){
        
        if (fabs(input)>thresh && attackphase!=1){
            holdcount=0;
            releasephase=0;
            attackphase=1;
            if(currentRatio==0) currentRatio=ratio;
        }
        
        if (attackphase==1 && currentRatio<ratio-1) {
            currentRatio*=(1+attack);
        }
        
        if (currentRatio>=ratio-1) {
            attackphase=0;
            releasephase=1;
        }
        
        if (releasephase==1 && currentRatio>0.) {
            currentRatio*=release;
        }
        
        if (input>0.) {
            output = input/(1.+currentRatio);
        } else {
            output = input/(1.+currentRatio);
        }
        
        return output*(1+log(ratio));
        
    }
};



#endif
