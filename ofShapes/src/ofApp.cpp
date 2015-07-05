#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw Line
    ofSetColor(255, 255, 255);
    ofLine(0, 0, 300, 300);
    
    // draw Rect
    ofSetColor(255, 0, 0);
    ofRect(50, 50, 200, 200);
    
    // draw Circle
    ofSetColor(0, 0, 255);
    ofCircle(150, 150, 100);
    
    // draw Ellipse
    ofSetColor(255, 0, 255);
    ofEllipse(150, 150, 200, 50);
    
    // draw Triangle
    ofSetColor(100, 255, 100);
    ofTriangle(150, 10, 50, 250, 250, 250);
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
