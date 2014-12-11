//
//  swirl.h
//  OFApp
//
//  Created by Judith Amores on 12/10/14.
//
//

#ifndef __OFApp__swirl__
#define __OFApp__swirl__

#include <stdio.h>

#endif /* defined(__OFApp__swirl__) */

#include "ofMain.h"

class Swirl {
public:
    
    void setup();
    void draw();
    void update();
    
    ofVec2f pos,vel,acc,oldpos;
    float angle;
    ofColor color;
    int age;
};
