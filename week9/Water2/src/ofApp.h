#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "ofxBox2d.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key, int x, int y);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    Ball myBall;
    
    int numBalls;
    vector <Ball> balls;
    int counter;
    ofPolyline    drawing;		  //	we draw with this first
    ofxBox2d      box2d;
    ofxBox2dEdge  edgeLine;	//	the box2d world
			
};
