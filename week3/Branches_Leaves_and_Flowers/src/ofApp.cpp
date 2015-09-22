#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    bool hasDrawn = false;
    
    /*myBranch.setup(;, <#float _yPos#>, <#float _width#>, <#float _length#>, <#float _splitPercentage#>, <#int _maxSubdivisions#>, <#int _maxSegments#>, <#int _segmentsSinceStart#>, <#float _angle#>, <#float _curvature#>, <#ofColor _color#>);*/
    
    //onePetal.setup();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //onePetal.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
    myBranch.setup(ofGetWidth()/2, ofGetHeight()/2, 40, 40, 0.35, 2, 6, 0, PI/2, 0, ofColor(51, 0, 20), 5);
    
    //FOR REFERENCE
    
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

