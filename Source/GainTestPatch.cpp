//
//  GainTestPatch.cpp
//  stompBox
//
//  Created by Tom on 11/04/2013.
//
//

#include "GainTestPatch.h"


GainTestPatch::GainTestPatch(){}
GainTestPatch::~GainTestPatch(){}


void GainTestPatch::processAudio(AudioInputBuffer &input, AudioOutputBuffer &output) {
    
    int size = input.getSize();
    float x[size];
    float y[size];
    float gainPot = 0.f;
    
    for (int ch = 0; ch < input.getChannels(); ++ch) {
        input.getSamples(ch, 0, size, x);
        
        getParameterValue(PARAMETER_A, gainPot);
        
        for (int n = 0; n < size; n++) {
            y[n] = x[n] * gainPot;
        }
        
        output.setSamples(ch, 0, size, y);
    }
    
    
}

