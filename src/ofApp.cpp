#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    gui.add(vecX1.setup("1_vecX", 30, -5000, 5000));
    gui.add(vecY1.setup("1_vecY", 30, -5000, 5000));
    gui.add(vecZ1.setup("1_vecZ", 0, -5000, 5000));
    gui.add(pvecX1.setup("1_cross_vecX", 0, -1000, 1000));
    gui.add(pvecY1.setup("1_cross_vecY", 1, -1000, 1000));
    gui.add(pvecZ1.setup("1_cross_vecZ", 0, -1000, 1000));
    gui.add(speed1.setup("1_speed", 0.05, -10, 10));

    gui.add(vecX2.setup("2_vecX", 200, -5000, 5000));
    gui.add(vecY2.setup("2_vecY", 200,  -5000, 5000));
    gui.add(vecZ2.setup("2_vecZ", 100,  -5000, 5000));
    gui.add(pvecX2.setup("2_cross_vecX", 0, -1000, 1000));
    gui.add(pvecY2.setup("2_cross_vecY", 1, -1000, 1000));
    gui.add(pvecZ2.setup("2_cross_vecZ", 0, -1000, 1000));
    gui.add(speed2.setup("2_speed", -0.03, -10, 10));

    gui.add(vecX3.setup("3_vecX", 500, -1000, 1000));
    gui.add(vecY3.setup("3_vecY", 500, -1000, 1000));
    gui.add(vecZ3.setup("3_vecZ", 200, -1000, 1000));
    gui.add(pvecX3.setup("3_cross_vecX", 0, -1000, 1000));
    gui.add(pvecY3.setup("3_cross_vecY", 1, -1000, 1000));
    gui.add(pvecZ3.setup("3_cross_vecZ", 0, -1000, 1000));
    gui.add(speed3.setup("3_speed", 0.2, -10, 10));

    ofNoFill();
    ofSetFrameRate(60);
    ofBackground(255);
    
    tempOrbit.setup(5);
    tempOrbit2.setup(20);
    tempOrbit3.setup(50);

}

//--------------------------------------------------------------
void ofApp::update(){

    tempOrbit.update(speed1);
    tempOrbit2.update(speed2);
    tempOrbit3.update(speed3);


}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    easyCam.begin();
    tempOrbit.draw(vecX1, vecY1, vecZ1, pvecX1, pvecY1, pvecZ1);
    tempOrbit2.draw(vecX2, vecY2, vecZ2, pvecX2, pvecY2, pvecZ2);
    tempOrbit3.draw(vecX3, vecY3, vecZ3, pvecX3, pvecY3, pvecZ3);
    easyCam.end();
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

    //    cout << orbits.size() << endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
