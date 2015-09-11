//
//  Leaves.cpp
//  Leaves
//
//  Created by Sofia Aronov on 10/09/2015.
//
//

#include "Leaves.h"
#include "ofMain.h"


void Leaves::setup(){
   
    yPos = ofGetWidth/2;
    xPos = width/2
    leafLenght = ofRandom(82,120);
    leafWidth = ofRandom(40,60);
    stemWidth = ofRandom(5,10);
    stemLenght = ofRandom(82,120);
    leafColor = ofColor(ofRandom(0,20),ofRandom(220,255),ofRandom(0,20));
    rotation = ofRandom(0,360);
   
}

//--------------------------------------------------------------
void Leaves::update(){
    
}

//--------------------------------------------------------------
void Leaves::draw(){
    
}