//
//  Leaf.cpp
//  Leaves
//
//  Created by Conor Russomanno on 9/10/15.
//
//

#include "Leaf.h"

void Leaf::setup(){
    xPos = ofGetWidth()/2; //set to middle of screen in the horizontal
    yPos = ofGetHeight()/2; //set to 3/4 of the way from the top of the screen in the vertical
    stemColor = ofColor(ofRandom(100,150),69,19); //brown
    leafColor = ofColor(ofRandom(230,243),ofRandom(255,200),ofRandom(102,50), ofRandom(210,255)); //set to random green color
    scaleFactor = ofRandom(.1,.2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    stemLength = ofRandom(50,100);
    stemWidth = ofRandom(2,4);
    leafLength = ofRandom(200,300);
    leafWidth = ofRandom(200,400);
    leafCurvature = ofRandom(1, 5);
    rotation = ofRandom(0,80);
    rotation = ofRandom(60,-60);
}

void Leaf::update(){
    
}

void Leaf::draw(float _xPos, float _yPos){
    
    ofPushMatrix();
    ofSetLineWidth(1);
    ofTranslate(_xPos, _yPos);
    ofScale(scaleFactor, scaleFactor);
    ofRotateZ(rotation);
    
    //draw leaf
    
    ofSetColor(leafColor);
    
    nCurveVertices = 7;
    
    curveVertices[0].x = 0;
    curveVertices[0].y = 0;
    curveVertices[1].x = 0-leafWidth/6;
    curveVertices[1].y = 0+leafLength/3;
    curveVertices[2].x = 0-leafWidth/2;
    curveVertices[2].y = 0+leafLength/2;
    curveVertices[3].x = 0-leafWidth/4;
    curveVertices[3].y = 0+leafLength-leafLength/6;
    curveVertices[4].x = 0+leafWidth/4;
    curveVertices[4].y = 0+leafLength-leafLength/6;
    curveVertices[5].x = 0+leafWidth/2;
    curveVertices[5].y = 0+leafLength/2;
    curveVertices[6].x = 0+leafWidth/6;
    curveVertices[6].y = 0+leafLength/3;
    
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
    
    //draw left half of leaf
    
    //        ofBeginShape();
    //
    //        float x0 = 0;
    //        float x1 = x0 - leafWidth;
    //        float x2 = x0 - leafWidth/leafCurvature;
    //        float x3 = x0;
    //
    //        float y0 = 0 - stemLength;
    //        float y1 = y0 - leafLength/3;
    //        float y2 = y1 - leafLength/3;
    //        float y3 = y0 - leafLength;
    //
    //        ofVertex(x0,y0);
    //        ofBezierVertex(x1,y1,x2,y2,x3,y3);
    //
    //        ofEndShape();
    //
    //    draw right half of leaf
    //
    //        ofBeginShape();
    //
    //        x0 = 0; //don't need to redefine as float, because we are just reusing the variables created above
    //        x1 = x0 + leafWidth;
    //        x2 = x0 + leafWidth/leafCurvature;
    //        x3 = x0;
    //
    //        y0 = 0 - stemLength;
    //        y1 = y0 - leafLength/3;
    //        y2 = y1 - leafLength/3;
    //        y3 = y0 - leafLength;
    //
    //        ofVertex(x0,y0);
    //        ofBezierVertex(x1,y1,x2,y2,x3,y3);
    //
    //        ofEndShape();
    
    //draw stem and veins of leaf
    
    
    
    
    
    //    cout << "x1 = ";
    //    cout << x1 << endl;
    //    cout << "x2 = ";
    //    cout << x2 << endl;
    
    ofPopMatrix();
    
}










