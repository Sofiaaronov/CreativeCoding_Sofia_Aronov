//
//  Leaves.h
//  Leaves
//
//  Created by Sofia Aronov on 10/09/2015.
//
//

#ifndef __Leaves__Leaves__
#define __Leaves__Leaves__

//#include <stdio.h>
#include "ofMain.h"

class Leaf : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
private:
    float xPos;
    float yPos;
    float leafLength, leafWidth;
    float stemWidth, stemLength;
    ofColor leafColor;
    ofColor stemColor;
    float leafScale;
    float rotation;
    float scaleFactor;


};


#endif /* defined(__Leaves__Leaves__) */


