//
//  Ball.cpp
//  Dynamics_1
//
//  Created by Conor Russomanno on 10/8/15.
//
//

#include "Particle.h"

//--------------------------------------------------------------
void Particle::setup(){
    a = ofRandom(0,TWO_PI);
    r = 1;
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
//    vel.x = r * cos(ofRandom(0, TWO_PI)); //initial speed in the horizontal direction
//    vel.y = r * sin(ofRandom(0, TWO_PI)); //initial speed in the vertical direction
    vel.x = ofRandom(-0.5,0.5); //initial speed in the horizontal direction
    vel.y = ofRandom(-0.5,0.5);
    acc.x = 0; //initial horizontal acceleration
    acc.y = 0; //initial vertical acceleration
    diameter = 7; //initial Ball diameter
    bounciness = .9;
    particleColor = ofColor(255, 255,ofRandom(235,255),alpha);
    alpha = 255;
}

//void Particle::setup(float _r, float _xPos, float _yPos, float _xVel, float _yVel, float _xAcc, float _yAcc, float _diameter, float _bounciness, ofColor _particleColor){
//void Particle::setup(float _r, float _xPos, float _yPos, float _xVel, float _yVel, float _xAcc, float _yAcc, float _diameter, float _bounciness, ofColor _particleColor){
//    
//    r = _r;
//    pos.x = _xPos;
//    pos.y = _yPos;
//    vel.x = _xVel; //initial speed in the horizontal direction
//    vel.y = _yVel; //initial speed in the vertical direction
//    acc.x = _xAcc; //initial horizontal acceleration
//    acc.y = _yAcc; //initial vertical acceleration
//    diameter = _diameter; //initial Ball diameter
//    bounciness = _bounciness;
//    particleColor = _particleColor;
//    
//}

//--------------------------------------------------------------
void Particle::update(){
    
    // update speed by acceleration
    
    
    pos.x += vel.x;
    pos.y += vel.y;
    
    r += 0.01;
    
    vel.x += 0.01;
    vel.y += 0.01;
    
    vel.x += r * cos(a); //initial speed in the horizontal direction
    vel.y += r * sin(a) + acc.y;
    
    cout<<r<<endl;
    
    diameter -= 0.2;
    if (diameter<=0){
        diameter = 0;
    }
 
   
//    
   if( r >= 1.07){
       acc.y += 0.5;
       r -= 3;
       vel.x -= 3;
       vel.y -= 3;
    
     
       if (r<=0) {
           r = 0;
       }
       
     alpha -= 20;
     particleColor = ofColor(255, 255,ofRandom(235,255),alpha);
   
   }
//
   
//    vel.x += r;
//    vel.y += r;
//    vel.x += acc.x;
//    vel.y += acc.y;
//
    // update position by speed
   

    
//    //    // BOUNCE OFF WALLS
//    if ((pos.x + diameter/2) > ofGetWidth()) { //if the ball hits the right edge
//        pos.x = ofGetWidth() - diameter/2; //reset the position to the right edge minus the radius
//        //        vel.x *= -1; //flip the horizontal speed (aka bounce!)
//        vel.x *= -bounciness;
//    }
//    if ((pos.x - diameter/2) < 0) { //if the ball hits the left edge
//        pos.x = 0 + diameter/2; //reset the position to the left edge plus the radius
//        //        vel.x *= -1; //flip the horizontal speed (aka bounce!)
//        vel.x *= -bounciness;
//    }
//    if ((pos.y + diameter/2) > ofGetHeight()) { //if the ball hits the bottom edge
//        pos.y = ofGetHeight() - diameter/2; //set the y position to the bottom edge minus the radius
//        //        vel.y *= -1; //flip the vertical speed (aka bounce!)
//        vel.y *= -bounciness; // bounce with
//        vel.x *= bounciness; // slow the horizontal speed down each time the ball touches the bottom edge ... but don't reverse the direction
//    }
//    if ((pos.y - diameter/2) < 0) {  //if the ball hits the top edge
//        pos.y = 0 + diameter/2; //set the ball to the top edge + the radius
//        vel.y *= -1; //flip the vertical speed (aka bounce!)
//        //        vel.y *= -bounciness;
//        vel.x *= bounciness; //slow the horizontal speed down each time the ball touches the top wall ... but don't reverse the direction
//    }
    
    
}

//--------------------------------------------------------------
void Particle::draw(){
    
    
    ofSetColor(particleColor);
    ofEllipse(pos.x, pos.y, diameter, diameter);
     //ofEllipse(ofGetWidth()/2,ofGetHeight()/2, 200,200);

    
}

//--------------------------------------------------------------
void Particle::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Particle::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Particle::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Particle::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Particle::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Particle::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Particle::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Particle::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Particle::dragEvent(ofDragInfo dragInfo){
}