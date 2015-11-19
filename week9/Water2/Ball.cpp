//
//  Ball.cpp
//  Dynamics_1
//
//  Created by Conor Russomanno on 10/8/15.
//
//

#include "Ball.h"

//--------------------------------------------------------------
void Ball::setup(){
    
    pos.x = 60;
    pos.y = 100;
    vel.x = 10; //initial speed in the horizontal direction
    vel.y = 5; //initial speed in the vertical direction
    acc.x = 0; //initial horizontal acceleration
    acc.y = .5; //initial vertical acceleration
    diameter = 100; //initial Ball diameter
    bounciness = .9;
    ballColor = ofColor(31, 69, 110);
    directionHasChanged = false;
    raiseWeight = false;
    backDown = false;
    
}

void Ball::setup(float _xPos, float _yPos, float _xVel, float _yVel, float _xAcc, float _yAcc, float _diameter, float _bounciness, ofColor _ballColor, bool _directionHasChanged, bool _raiseWeight, bool _backDown){
    
    pos.x = _xPos;
    pos.y = _yPos;
    vel.x = _xVel; //initial speed in the horizontal direction
    vel.y = _yVel; //initial speed in the vertical direction
    acc.x = _xAcc; //initial horizontal acceleration
    acc.y = _yAcc; //initial vertical acceleration
    diameter = _diameter; //initial Ball diameter
    bounciness = _bounciness;
    ballColor = _ballColor;
    directionHasChanged = _directionHasChanged;
    raiseWeight = _raiseWeight;
    backDown = _backDown;
}

//--------------------------------------------------------------
void Ball::update(){
    
    if (directionHasChanged == false){
    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;
    
    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;
    
    //    // BOUNCE OFF WALLS
    if ((pos.x + diameter/2) > ofGetWidth()) { //if the ball hits the right edge
        pos.x = ofGetWidth() - diameter/2; //reset the position to the right edge minus the radius
        //        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        vel.x *= -bounciness;
    }
    if ((pos.x - diameter/2) < 0) { //if the ball hits the left edge
        pos.x = 0 + diameter/2; //reset the position to the left edge plus the radius
        //        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        vel.x *= -bounciness;
    }
    if ((pos.y + diameter/2) > ofGetHeight()) { //if the ball hits the bottom edge
        pos.y = ofGetHeight() - diameter/2; //set the y position to the bottom edge minus the radius
        //        vel.y *= -1; //flip the vertical speed (aka bounce!)
        vel.y *= -bounciness; // bounce with
        vel.x *= bounciness; // slow the horizontal speed down each time the ball touches the bottom edge ... but don't reverse the direction
        
    }
    if ((pos.y - diameter/2) < 0) {  //if the ball hits the top edge
        pos.y = 0 + diameter/2; //set the ball to the top edge + the radius
        vel.y *= -1; //flip the vertical speed (aka bounce!)
        //        vel.y *= -bounciness;
        vel.x *= bounciness; //slow the horizontal speed down each time the ball touches the top wall ... but don't reverse the direction
        
    }
    
        diameter -= 0.02;
    }
    //    if(vel.y==0){
    //        directionHasChanged = true;
    //    }
    
    
    
    if (diameter <= 5 && directionHasChanged == false){
        directionHasChanged = true;
    }
    //        diameter += 0.1;
    // vel.y = - 3;
    
    if(directionHasChanged == true){
        //acc.y =  -.5;
        //diameter += .001
        acc.y -=  .005;
        vel.y  = -.005;
        raiseWeight = true;
        if (pos.y <= ofRandom(ofGetHeight()/2,400) && diameter < 25 ) {
            diameter += 0.08;
            acc.y = acc.y * .99;
            
        } else if(pos.y <= ofRandom(ofGetHeight()/2,400) && diameter >= 25) {
            backDown = true;
        }
        if (backDown == true) {
            
            //            directionHasChanged == false;
            //            vel.x = -vel.x;
            //            vel.y = -vel.y;
            
            
            diameter -= .005;
            vel.y =  + 0.8;
            acc.y +=  .05;
            
            
            
            if(pos.y > ofGetHeight() - 30){
                directionHasChanged = false;
            }
            
            
            
            
            
            
            
            //acc.y = acc.y * -1.2;
            
        }
        
        
        //vel.y = vel.y * 0.8;
        
    }
    //
    //        diameter += 0.1;
    
    //        if (diameter >= 8){
    //            vel.y = -vel.y;
    //            acc.y = -acc.y;
    //
    //        }
    
    //        update2();
    //}
    
    //    if (acc.y -=  .001){
    //        diameter += .001;
    //
    //    }
    
    //    if (  directionHasChanged == true && raiseWeight == false){
    //       vel.y = -vel.y;
    //        acc.y = .1;
    //        if(diameter >= 20){
    //            acc.y = -acc.y;
    //            vel.y = vel.y * 0.8;
    //        }
    //    }
    
    
}

//--------------------------------------------------------------
//void Ball::update2(){
//    diameter -= 0;
//    vel.y = - 1;
//    acc.y -=  0.01;
//    diameter += 0.05;
//}



//--------------------------------------------------------------
void Ball::draw(){
    
    ofPushStyle();
    ofSetColor(ballColor);
    ofEllipse(pos.x, pos.y, diameter, diameter);
    ofPopStyle();
    
}


//--------------------------------------------------------------
void Ball::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Ball::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Ball::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Ball::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Ball::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Ball::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Ball::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Ball::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Ball::dragEvent(ofDragInfo dragInfo){
    
}