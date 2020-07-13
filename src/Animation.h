#pragma once

#include "ofImage.h"

class Animation {

private:
	int speed, index;
	long lastTime, timer;
	ofImage* frames;
	bool end = false;

public:
	Animation(int speed, ofImage* frames);
	Animation(int speed, ofImage* frames, int index);
	void tick();
	ofImage getCurrentFrame();
	void reset();

};