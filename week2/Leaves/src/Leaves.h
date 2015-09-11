//
//  Leaves.h
//  Leaves
//
//  Created by Sofia Aronov on 10/09/2015.
//
//

#ifndef __Leaves__Leaves__
#define __Leaves__Leaves__

#include <stdio.h>
#include "ofMain.h"

class Leaves : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    float xPos;
    float yPos;
    float leafLenght, leafWidth;
    float stemWidth, stemLenght;
    float leafColor;
    float leafScale;
    float rotation;
};


#endif /* defined(__Leaves__Leaves__) */


