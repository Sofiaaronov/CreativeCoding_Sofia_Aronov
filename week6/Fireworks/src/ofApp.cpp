#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //System Setup Stuff
    
    ofBackground(41,46,68); //white background
    ofSetFrameRate(60); //default is 60, but you can adjust this
    ofEnableAlphaBlending(); //allow for transparency, bc why not?
    ofSetBackgroundAuto(true); //maybe we don't want to autodraw the background... if we don't set this to false
    //    ofEnableSmoothing(); //this makes shapes much smoother... similar to anti-aliasing in Photoshop, Maya, etc.
    
}

void ofApp::systemStart(){
    
    particles.clear(); //clear vector of balls if there is anything in there...
    
    //setup one ball
    //    myBall.setup();
    
    //setup many balls
    
    numParticles = 20;
    for(int i = 0; i < numParticles; i++){
    Particle temp;
   
//    temp.setup(0,                 //r
//               ofGetWidth()/2,       //xPos
//               ofGetHeight()/2,  //yPos
//               cos(ofRandom(0, 360)),//xVel
//               sin(ofRandom(0, 360)),    //yVel
//               0,           //xAcc
//               0.1,        //yAcc
//               ofRandom (3, 5),   //diameter
//               ofRandom (.85, .95),   //bounciness
//               ofColor(ofRandom(252,255), ofRandom(251,253), ofRandom(223,218))); //ballColor
        temp.setup();
        particles.push_back(temp);
        
       
        
        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //update one ball
//    myParticle.update();
    
    
    //update many balls
    for(int i = 0; i < numParticles; i++){
        particles[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofPushStyle();
    ofSetColor(255, 255, 255, 25);
    ofRect(0,0, ofGetWidth(), ofGetHeight());
//    ofPopStyle();
    
    //draw one ball
//    myParticle.draw();
    
    //draw many balls
    for(int i = 0; i < numParticles; i++){
        particles[i].draw();
    }
    
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
    systemStart();
    
    
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

