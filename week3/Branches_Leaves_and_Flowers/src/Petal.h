//
//  Petal.h
//  Branches
//
//  Created by Sofia Aronov on 22/09/2015.
//
//

#pragma once
#include "ofApp.h"
#include "Branch.h"

class Petal : public ofBaseApp {
    
    typedef struct {
        
        float 	x;
        float 	y;
        bool 	bBeingDragged;
        bool 	bOver;
        float 	radius;
        
    }draggableVertex;
    
    
public:
    
    void setup();
    void update();
    void draw();
    
    // stuff pertaining to each instance of the Leaf class
private:
    
    ofColor petalGreenColor;
    ofColor petalPurpleColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    float petalPurpleLength, petalPurpleWidth;
    float petalGreenLength, petalGreenWidth;
    float petalCurvature;
    
    int nCurveVertices;
    
    draggableVertex curveVertices[5];
    
    
};

