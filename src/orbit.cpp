//
//  orbit.cpp
//  textVisualizationTest
//
//  Created by Youn ho Lee on 10/21/17.
//

#include "orbit.hpp"
//Orbit::Orbit() {
//};

void Orbit::setup(int _number) {
    planets.resize(_number);
    v.set(1,0,0);
    orbitspeed = ofRandom(0.05, 0.1);
    angle = 0;
    myfont.loadFont("Vollkorn-Black.ttf", 30, true, true);
    texts = {"sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful", "sad", "mad", "scared", "peaceful", "powerful", "joyful"};
    cout << texts[0] << endl;
}

void Orbit::update(float _speed) {
    angle = angle + orbitspeed;
    orbitspeed = _speed;
}

void Orbit::draw(float _vecX, float _vecY, float _vecZ, float _pvecX, float _pvecY, float _pvecZ) {
    for (int i=0; i < planets.size(); i++) {
        ofPushMatrix();
        ofVec3f v1;
        ofVec3f v2;
        v2.set(_pvecX, _pvecY, _pvecZ);
        ofVec3f p = v.getPerpendicular(v2);
        ofRotate(angle+i*(360/planets.size()), p.x, p.y, p.z);
        ofTranslate(_vecX, _vecY, _vecZ);
        ofSetColor(0);
        ofFill();
        myfont.drawStringAsShapes(texts[i], 0, 0);
//        ofDrawBitmapString("hello", 0,0);
//        ofDrawCircle(0,0, 10);
        ofPopMatrix();
    }
}

