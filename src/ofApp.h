#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "orbit.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxPanel gui;
    
    ofxFloatSlider vecX1;
    ofxFloatSlider vecY1;
    ofxFloatSlider vecZ1;
    ofxFloatSlider pvecX1;
    ofxFloatSlider pvecY1;
    ofxFloatSlider pvecZ1;
    ofxFloatSlider speed1;

    ofxFloatSlider vecX2;
    ofxFloatSlider vecY2;
    ofxFloatSlider vecZ2;
    ofxFloatSlider pvecX2;
    ofxFloatSlider pvecY2;
    ofxFloatSlider pvecZ2;
    ofxFloatSlider speed2;
    
    ofxFloatSlider vecX3;
    ofxFloatSlider vecY3;
    ofxFloatSlider vecZ3;
    ofxFloatSlider pvecX3;
    ofxFloatSlider pvecY3;
    ofxFloatSlider pvecZ3;
    ofxFloatSlider speed3;

    Orbit tempOrbit;
    Orbit tempOrbit2;
    Orbit tempOrbit3;

    ofEasyCam easyCam;
};
