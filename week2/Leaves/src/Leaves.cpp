//
//  Leaves.cpp
//  Leaves
//
//  Created by Sofia Aronov on 10/09/2015.
//
//

#include "Leaves.h"
#include "ofMain.h"


void Leaf::setup(){
   
    yPos = ofGetHeight()/2;
    xPos = ofGetWidth()/2;
    leafLength = ofRandom(82,120);
    leafWidth = ofRandom(40,60);
    stemWidth = ofRandom(5,10);
    stemLength = ofRandom(82,120);
    leafColor = ofColor(ofRandom(0,20),ofRandom(100,200),ofRandom(0,20), ofRandom(150,255));
    stemColor = ofColor(ofRandom(60,80),ofRandom(60,80),ofRandom(60,80), ofRandom(150,255));
    rotation = ofRandom(0,360);
    scaleFactor = ofRandom(.5, 1);
   
}

//--------------------------------------------------------------
void Leaf::update(){
    
}

//--------------------------------------------------------------
void Leaf::draw(){
    
    ofColor(stemColor);
    ofRect(xPos-20, yPos, stemWidth, stemLength);
    
    ofPushMatrix();
    ofTranslate(xPos, yPos);
    ofRotateZ(rotation);
    ofScale(scaleFactor, scaleFactor);
    
    ofSetColor(leafColor);
    ofBeginShape();
    
    float x0 = 0;
    float x1 = x0 - leafWidth/2;
    float x2 = x0 - leafWidth/4;
    float x3 = 0;
    
    float y0 = 0 + stemLength;
    float y1 = y0 + leafLength/3;
    float y2 = y1 + leafLength/3;
    float y3 = y0 + leafLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();
    
    ofBeginShape();
    
    x0 = 0;
    x1 = x0 + leafWidth/2;
    x2 = x0 + leafWidth/4;
    x3 = 0;
    
    y0 = 0 + stemLength;
    y1 = y0 + leafLength/3;
    y2 = y1 + leafLength/3;
    y3 = y0 + leafLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();

    //draw stem
    ofSetColor(stemColor);
    ofRect(0, 0 + stemLength/2, stemWidth, stemLength);
    
    //triangular stem through leaf
    ofTriangle(0 - stemWidth/2, 0 + stemLength, 0 + stemWidth/2, 0 + stemLength, 0, 0 + stemLength + 2*(leafLength/3));

    ofPopMatrix();
}