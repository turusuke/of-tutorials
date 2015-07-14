#include "ofApp.h"

float loc_x,loc_y;
float rad;
float speed_x = 30;
float speed_y = 30;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0); //背景色
    ofSetFrameRate(60); //フレームレート
    ofSetCircleResolution(64); //円の解像度
}

//--------------------------------------------------------------
void ofApp::update(){
    loc_x += sin(rad) * speed_x;
    loc_y += cos(rad) * speed_y;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(loc_x, loc_y, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    rad = atan2(x - loc_x, y - loc_y);
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
