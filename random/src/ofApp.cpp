#include "ofApp.h"

float x;
float y;
float speedX;
float speedY;

//--------------------------------------------------------------
void ofApp::setup(){
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    speedX = 1;
    speedY = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    if(ofRandom(1) > 0.4){
        speedX = 1;
    }else{
        speedX = -1;
    }
    
    if(ofRandom(1) > 0.4){
        speedY = 1;
    }else{
        speedY = -1;
    }
    
    x += speedX;
    y += speedY;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(x, y, ofRandom(10, 12));
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
