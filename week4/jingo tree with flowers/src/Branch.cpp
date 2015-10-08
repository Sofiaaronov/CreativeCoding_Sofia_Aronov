//
//  Branch.cpp
//  Branches
//
//  Created by Conor Russomanno on 9/17/15.
//
//

#include "Branch.h"

//--------------------------------------------------------------
void Branch::setup(float _xPos,
                   float _yPos,
                   float _width,
                   float _length,
                   float _splitPercentage,
                   float _maxSplitAngle,
                   int _maxSubdivisions,
                   int _maxSegments,
                   int _segmentsSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color,
                   int _season,
                   int numberOfBobs){
    
    // set incoming values based on what was passed in from previous instance of branch
    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    splitPercentage = _splitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivsions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    season = _season;
    
    
    
    ofSetColor(color);
    ofSetLineWidth((int)width);
    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle)); //draw the branch segnment
    
    
    

    if(ofRandom(0, 1) > splitPercentage && segmentsSinceStart != maxSegments){ //if random number between 0-1 is greater than split %, then split ... and never split on last branch
        split = true;
    } else{
        split = false;
    }
    
    numLeaves = (int)ofRandom(0,2);
    numPetals = (int)ofRandom(5,10);
    if(segmentsSinceStart == maxSegments){ // make sure there are leaves at the end of the final branch
        numLeaves = (int)ofRandom(2,3);
        
    }
    if(segmentsSinceStart == 0){ // no leaves at the end of the first branch (aka the Trunk!)
        numLeaves = 0;
    }
    if(segmentsSinceStart == 0){ // no leaves at the end of the first branch (aka the Trunk!)
        numPetals = 0;
    }
    //if(season != 2){
    
    
        for(int i = 0; i < numLeaves; i++){
            Leaf tempLeaf;
            tempLeaf.setup(angle, season);
            myLeaf.push_back(tempLeaf);
        //}
    }
        for(int i = 0; i < numPetals; i++){
        Petal tempPetal;
        tempPetal.setup();
        myPetal.push_back(tempPetal);
        //}
    }
    

    // if(_season != 2){
    
    
    
    
     if (segmentsSinceStart != maxSegments) {
        for(int i = 0; i < numLeaves; i++){
            float randomLeafPos = ofRandom(1);
            myLeaf[i].draw(xPos + (randomLeafPos*length)*cos(angle), yPos + (randomLeafPos*length)*sin(angle)); //drawing leaves at the end of this branch...based on length and angle
        //}
    }
     }
    if (segmentsSinceStart == maxSegments) {
        
        for(int i = 0; i < numLeaves; i++){
            LeafSmaller tempLeafSmaller;
            tempLeafSmaller.setup(angle, season);
            myLeafSmaller.push_back(tempLeafSmaller);
            //}
        }
     
    for(int i = 0; i < numLeaves; i++){
        myLeafSmaller[i].draw(xPos + length*cos(angle), yPos + length*sin(angle)); //drawing leaves at the end of this branch...based on length and angle
        //}
    }
    }
    
    if (season == 2) {
         numPetals = 0;
    }
    float randomLeafPos2 = ofRandom(1);
        for (int i = 0; i < numPetals; i++){
            
        myPetal[i].draw(xPos + (randomLeafPos2*length)*cos(angle), yPos + (randomLeafPos2*length)*sin(angle));
    }

    
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = width*(ofRandom(0.5,0.8));
    length = length*(ofRandom(0.8, 0.9));
    angle += curvature;
    curvature += ofRandom(0, (float)(4*PI)/360.0);

     segmentsSinceStart += 1;
    
    if (segmentsSinceStart <= maxSegments) {
        if(!split){ //if the branch does not split... just create one more branch to keep going (in roughly the same direction)
            Branch subBranch;
            subBranch.setup(xPos, yPos, width, length, splitPercentage, maxSplitAngle, maxSubdivsions, maxSegments, segmentsSinceStart, angle, curvature, color, season, 5);
        } else { //if the branch does split!! create two sub-branches
            cout << "split" << endl; //some feedback
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, maxSplitAngle);
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, maxSplitAngle);
            
            subBranch1.setup(xPos, yPos, width, length, splitPercentage, maxSplitAngle, maxSubdivsions, maxSegments, segmentsSinceStart, angle1, curvature, color, season, 5);
            
            subBranch2.setup(xPos, yPos, width, length, splitPercentage, maxSplitAngle, maxSubdivsions, maxSegments, segmentsSinceStart, angle2, curvature, color, season, 5);
        }
    }

}
    
    //myLeaf.setup();
    //myPetal.setup();
//    numPetals = (int)ofRandom(10,20);
//    for (int i = 0; i < numPetals; i++){
//        Petal tempPetal;
//        tempPetal.setup();
//        myPetal.push_back(tempPetal);
//    }
    
    // store branch in MAIN vector<> of branches...
    
//    cout << "New Branch" << endl;
//    cout << "Segment Count = ";
//    cout << segmentsSinceStart << endl;
//    
//    //    //draw current branch instance
//    ofSetColor(color);
//    ofSetLineWidth((int)width);
//    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle)); //draw the branch segnment
//    
//    //update variables to pass to next sub branch
//    xPos += length*cos(angle);
//    yPos += length*sin(angle);
//    width = width*(ofRandom(0.5,0.8));
//    segmentsSinceStart += 1;
//    angle += curvature;
//    curvature += ofRandom(0, (float)(2*PI)/360.0);
//    
//    myLeaf.draw(xPos, yPos);
//    //myPetal.draw(xPos,yPos);
//        
//        for (int i = 0; i < numPetals; i++){
//            myPetal[i].draw(xPos,yPos);
//        }
//    
// 
//    
//    //RECURSION!
//    if (segmentsSinceStart <= maxSegments) {
//        //roll the dice... will the branch split into sub-branches???
//        if(ofRandom(0, 1) > splitPercentage){ //NO
//            Branch subBranch;
//            subBranch.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle, curvature, color, 5);
//        } else { //YES!!!
//            cout << "split" << endl;
//            Branch subBranch1;
//            float angle1 = angle + ofRandom(0, 3*(PI/8));
//            Branch subBranch2;
//            float angle2 = angle - ofRandom(0, 3*(PI/8));
//            
//            subBranch1.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle1, curvature, color, 5);
//            
//            subBranch2.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle2, curvature, color, 5);
//        }
//    
//    }
//    


//--------------------------------------------------------------
void Branch::update(){
    
}

//--------------------------------------------------------------
void Branch::draw(){
    
    
}