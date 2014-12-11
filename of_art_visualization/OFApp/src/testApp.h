//
//  testApp.h
//  OFApp
//
//  Created by Judith Amores on 12/10/14.
//
//

#ifndef __OFApp__testApp__
#define __OFApp__testApp__

#include <stdio.h>

#endif /* defined(__OFApp__testApp__) */

#pragma once
#include "ofMain.h"
#include "swirl.h"

class testApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    void createSwirl();
    
    ofImage img;
    
    vector<Swirl> swirls;
};

