#pragma once


#include "ofImage.h"
#include "ofRectangle.h"

class Entity {
public:
	int x, y, width, height;
	ofImage* sprite;
	ofRectangle bounds;
	bool remove;

	Entity(int x, int y, int width, int height, ofImage* sprite);
	void tick();
	void render();
	void damage(Entity* damageSource);

};