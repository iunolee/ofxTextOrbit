//
//  orbit.hpp
//  textVisualizationTest
//
//  Created by Youn ho Lee on 10/21/17.
//

#ifndef orbit_hpp
#define orbit_hpp

#include "ofMain.h"
#include "ofxTrueTypeFontUC.h"

class Orbit {
   
    public :
    void setup(int _number);
    void update(float _speed);
    void draw(float _vecX, float _vecY, float _vecZ, float _pvecX, float _pvecY, float _pvecZ);
    
    float distance;
    float angle;
    float orbitspeed;

    vector<int> planets;
    ofVec3f v;
    ofxTrueTypeFontUC myfont;
    vector<string> texts;
};

#endif /* orbit_hpp */
