#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    bool hasDrawn = false;
    ofRectMode(RECT_MODE_CENTER);
    season = 0;
    /*
     0 = SUMMER
     1 = FALL
     2 = WINTER
     3 = SPRING
     
     */


    bgColor2.set(64, 64, 64);
    bgColor1.set(96, 96, 96);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

//    if(ofGetElapsedTimeMillis() > 500 && ofGetElapsedTimeMillis() < 1000 && hasDrawn == false){
//    }
//    
//    ofSetColor(255,0,0);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    ofBackground(125, 125, 125);
    
    if(key == OF_KEY_RIGHT){
        season = 0;
        
        myBranch.setup(ofGetWidth()/2,      //float _xPos
                       3*(ofGetHeight()/4),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       40,                  //float _width
                       70,                  //float _length
                       0.50,                //float _splitPercentage
                       PI/4,                //float _maxSplitAngle
                       2,                   //int _maxSubdivisions
                       10,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(51, 0, 25),//ofColor _color
                       season,
                       5);                  //int numberOfBobs
        
        
        
        
    }
    if(key == OF_KEY_LEFT){
        season = 1;
        
        myBranch.setup(ofGetWidth()/2,      //float _xPos
                       3*(ofGetHeight()/4),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       40,                  //float _width
                       80,                  //float _length
                       0.50,                //float _splitPercentage
                       PI/4,                //float _maxSplitAngle
                       3,                   //int _maxSubdivisions
                       10,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(51, 0, 25),//ofColor _color
                       season,
                       5);                  //int numberOfBobs
    }
    
    
    if(key == OF_KEY_UP){
        season = 2;
        
        myBranch.setup(ofGetWidth()/2,      //float _xPos
                       3*(ofGetHeight()/4),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       40,                  //float _width
                       80,                  //float _length
                       0.50,                //float _splitPercentage
                       PI/4,                //float _maxSplitAngle
                       3,                   //int _maxSubdivisions
                       10,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(51, 0, 25),//ofColor _color
                       season,
                       5);                  //int numberOfBobs
    }
    if(key == OF_KEY_DOWN){
        season = 3;
        
        myBranch.setup(ofGetWidth()/2,      //float _xPos
                       3*(ofGetHeight()/4),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       40,                  //float _width
                       70,                  //float _length
                       0.50,                //float _splitPercentage
                       PI/4,                //float _maxSplitAngle
                       3,                   //int _maxSubdivisions
                       10,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(51, 0, 25),//ofColor _color
                       season,
                       5);                  //int numberOfBobs
    }
    

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    ofBackground(125, 125, 125);
    
    //This is where your Tree begins!
    myBranch.setup(ofGetWidth()/2,      //float _xPos
                   3*(ofGetHeight()/4),     //float _yPos
                   //                   ofGetHeight()/2,     //float _yPos
                   40,                  //float _width
                   70,                  //float _length
                   0.50,                //float _splitPercentage
                   PI/4,                //float _maxSplitAngle
                   3,                   //int _maxSubdivisions
                   10,                   //int _maxSegments
                   0,                   //int _segmentsSinceStart
                   -PI/2,                //float _angle
                   0,                   //float _curvature
                   ofColor(51, 0, 25),//ofColor _color
                   false,
                   5);                  //int numberOfBobs
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
