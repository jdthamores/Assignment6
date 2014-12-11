//
//  main.cpp
//  OFApp
//
//  Created by Judith Amores on 12/10/14.
//
//  Art visualization - Inspired by Megan Duncanson.
//  When the mouse button is pressed, random colored swirls will be created in that position. You can also press and drag to paint.

#include "testApp.h"

int main(){
	ofSetupOpenGL(1280, 720, OF_WINDOW);
	ofRunApp(new testApp()); // start the app
}
