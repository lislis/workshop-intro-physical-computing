#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
    
        ofxOscReceiver receiver;
        ofxOscMessage m;
        int current_msg_string;
        static const int PORT = 9999;
        static const int NUM_MSG_STRINGS = 20;
        float r = 0.0;
        float g = 0.0;
    
        string msg_strings[NUM_MSG_STRINGS];
        float timers[NUM_MSG_STRINGS];
};
