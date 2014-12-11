//
//  swirl.cpp
//  OFApp
//
//  Created by Judith Amores on 12/10/14.
//
//  The swirls are made from the ofSignedNoise that calculates a two dimensional Perlin noise value between -1.0...1.0.

#include "swirl.h"

void Swirl::setup() {
    vel.x = 2*ofRandomf();
    vel.y = 2*ofRandomf();
    angle = ofRandomf()*TWO_PI;
    age = 0;
}

void Swirl::draw() {
    ofSetColor(color,ofMap(age,0,700,255,0,true));
    ofLine(oldpos,pos);
}

void Swirl::update() {
    angle += ofSignedNoise(pos.x, pos.y)*TWO_PI;
    vel.rotate(angle);
    oldpos = pos;
    pos += vel;
    age++;
}
