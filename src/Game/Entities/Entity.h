#pragma once
#include "ofImage.h"
#include "ofRectangle.h"
#include "Handler.h"

class Entity {
	private:
		int x, y, width, height, health;
		ofImage* sprite;
		ofRectangle bounds;
		Handler* handler;
		bool remove;
	public:
		Entity(int x, int y, int width, int height, ofImage* sprite);
		void tick();
		void render();
		void damage(Entity* damageSource);
		bool collides(Entity* entity);
		ofRectangle getBounds();
};