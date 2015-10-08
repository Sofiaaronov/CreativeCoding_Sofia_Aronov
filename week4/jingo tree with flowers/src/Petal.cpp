//
//  Petal.cpp
//  fixed_Sofia
//
//  Created by Regina Flores on 9/22/15.
//
//

#include "Petal.h"
//
//  Particle.cpp
//  myParticleSystem
//
//  Created by Regina Flores on 9/4/15.
//
//

#include "Petal.h"


void Petal::setup(){
    xPos = ofGetWidth()/2; //set to middle of screen in the horizontal
    yPos = ofGetHeight()/2; //set to 3/4 of the way from the top of the screen in the vertical
//    petalColor = ofColor(ofRandom(102,153),ofRandom(0,153),ofRandom(102,255), ofRandom(70,120)); //set to random green color
    petalColor = ofColor(ofRandom(255,255),ofRandom(255,251),ofRandom(255,222), ofRandom(70,120));
    scaleFactor = ofRandom(.1,.3);
    ofSetRectMode(OF_RECTMODE_CENTER);
    petalLength = ofRandom(50,80);
    petalWidth = ofRandom(15,30);
    petalCurvature = ofRandom(1,5);
    rotation = ofRandom(0, 360);
    
}

void Petal::update(){
    
}

void Petal::draw(float _xPos, float _yPos){

//    ofSetHexColor(0xb5de10);
    xPos= _xPos;
    yPos= _yPos;
    
    ofPushMatrix();
    ofSetLineWidth(1);
    ofTranslate(xPos, yPos);
    ofScale(scaleFactor, scaleFactor);
    ofRotateZ(rotation);
    
    ofSetColor(petalColor);
    ofBeginShape();
    
    float x0 = 0;
    float x1 = x0 - petalWidth;
    float x2 = x0 - petalWidth/petalCurvature;
    float x3 = x0;
    
    float y0 = 0;
    float y1 = y0 - petalLength/5;
    float y2 = y1 - petalLength + petalLength/5 ;
    float y3 = y0 - petalLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();
    
    ofBeginShape();
    
     x0 = 0;
     x1 = x0 + petalWidth;
     x2 = x0 + petalWidth/petalCurvature;
     x3 = x0;
    
     y0 = 0;
     y1 = y0 - petalLength/5;
     y2 = y1 - petalLength + petalLength/5 ;
     y3 = y0 - petalLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    
    ofEndShape();

    ofPopMatrix();
}



