//
//  testApp.cpp
//  OFApp
//
//  Created by Judith Amores on 12/10/14.

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetFrameRate(30);
    ofEnableAlphaBlending();
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    ofSetWindowTitle(ofToString(ofGetFrameRate(),0));
    for (int i=0; i<swirls.size(); i++) {
        swirls[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
    
    //Creating Particles
    for (int i=0; i<swirls.size(); i++) {
        Swirl &p = swirls[i];
        p.draw();
    }
    
    //If the user press the button, start drawing the swirls
    if (ofGetMousePressed()) {
        
        //Draw Swirls
        for (int i=0; i<50; i++) {
            createSwirl();
        }

    }
    
    //
    while (swirls.size()>1000) {
        swirls.erase(swirls.begin());
    }
    
}

//  The swirls appear in the mouse position and the color is randomized to seem nicer.
void testApp::createSwirl() {
    Swirl p;
    p.setup();
    p.pos.set(ofGetMouseX(), ofGetMouseY());
    p.color.set(ofRandom(0, 200), ofRandom(0, 200), ofRandom(0, 200));
    swirls.push_back(p);
}

