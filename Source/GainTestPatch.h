//
//  gainTest.h
//  stompBox
//
//  Created by Tom on 11/04/2013.
//
//

#ifndef __stompBox__gainTest__
#define __stompBox__gainTest__

#include <iostream>
#include "StompBox.h"


class GainTestPatch : public Patch {
    
    
public:
    
    gainTest();
    ~gainTest();
    
    void processAudio(AudioInputBuffer &input, AudioOutputBuffer &output);
private:
    float gainCtrl;
};




#endif /* defined(__stompBox__gainTest__) */
