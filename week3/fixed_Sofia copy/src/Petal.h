//
//  Particle.h
//  myParticleSystem
//
//  Created by Regina Flores on 9/4/15.
//
//

#pragma once
#include "ofMain.h"

class Petal{
    
public:
    
    void setup();
    void update();
    void draw(float _xPos, float _yPos);
    
    // stuff pertaining to each instance of the Leaf class
private:
    
 
    ofColor petalColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    
    float petalLength, petalWidth;
    float petalCurvature;
    
};
    
