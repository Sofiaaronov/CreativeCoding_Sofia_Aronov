//
//  Petal.cpp
//  Branches
//
//  Created by Sofia Aronov on 22/09/2015.
//
//

#include "Petal.h"


void Petal::setup(){
    
    xPos = ofGetWidth()/2; //set to middle of screen in the horizontal
    yPos = ofGetHeight()/2; //set to 3/4 of the way from the top of the screen in the vertical
    petalPurpleColor = ofColor(ofRandom(76,153),ofRandom(0,153),ofRandom(153,255), ofRandom(180,240));
    scaleFactor = ofRandom(.1,.2);
    petalPurpleLength = ofRandom(200,400);
    petalPurpleWidth = ofRandom(50,200);
    petalCurvature = ofRandom(1, 5);
    rotation = ofRandom(0,80);
    rotation = ofRandom(60,-60);
}


void Petal::draw(){
    
    ofPushMatrix();
    ofSetLineWidth(1);
    ofTranslate(xPos, yPos);
    ofScale(scaleFactor, scaleFactor);
    ofRotateZ(rotation);
    
    //draw leaf
    
    ofSetColor(petalPurpleColor);
    
    nCurveVertices = 5;
    
    curveVertices[0].x = 0;
    curveVertices[0].y = 0;
    curveVertices[1].x = 0-petalPurpleWidth/2;
    curveVertices[1].y = 0+petalPurpleLength/7;
    curveVertices[2].x = 0-petalPurpleWidth/4;
    curveVertices[2].y = 0+petalPurpleLength;
    curveVertices[3].x = 0+petalPurpleWidth/4;
    curveVertices[3].y = 0+petalPurpleLength;
    curveVertices[4].x = 0+petalPurpleWidth/2;
    curveVertices[4].y = 0+petalPurpleLength/7;
    
    
    
    ofBeginShape();
    
    for (int i = 0; i < nCurveVertices; i++){
        
        
        // sorry about all the if/states here, but to do catmull rom curves
        // we need to duplicate the start and end points so the curve acutally
        // goes through them.
        
        // for i == 0, we just call the vertex twice
        // for i == nCurveVertices-1 (last point) we call vertex 0 twice
        // otherwise just normal ofCurveVertex call
        
        if (i == 0){
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // we need to duplicate 0 for the curve to start at point 0
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // we need to duplicate 0 for the curve to start at point 0
        } else if (i == nCurveVertices-1){
            ofCurveVertex(curveVertices[i].x, curveVertices[i].y);
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y);	// to draw a curve from pt 6 to pt 0
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y);	// we duplicate the first point twice
        } else {
            ofCurveVertex(curveVertices[i].x, curveVertices[i].y);
        }
    }
    
    ofEndShape();
    
    ofPopMatrix();
    
    
}


