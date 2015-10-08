#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    bool hasDrawn = false;
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(ofGetElapsedTimeMillis() > 500 && ofGetElapsedTimeMillis() < 1000 && hasDrawn == false){
    }
    
    ofSetColor(255,0,0);
    
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
    myBranch.setup(ofGetWidth()/2, ofGetHeight()/2, 40, 40, 0.35, 2, 6, 0, PI/2, 0, ofColor(51, 0, 51), 5);
    
    
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
