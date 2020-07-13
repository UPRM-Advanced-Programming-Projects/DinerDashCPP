#pragma once
#include "ofImage.h"
#include "ofRectangle.h"
#include "Handler.h"

class Entity {
public:
	int x, y, width, height;
	ofImage* sprite;
	ofRectangle bounds;
	Handler* handler;
	bool remove;

	Entity(int x, int y, int width, int height, ofImage* sprite, Handler* handler);
	void tick();
	void render();
	void damage(Entity* damageSource);

};