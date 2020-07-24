#pragma once
#include "ofMain.h"

class Entity {
	protected:
		int x, y, width, height, health;
		ofImage sprite;
		bool remove;
		int ticks = 0;
	public:
		explicit Entity(int x, int y, int width, int height, ofImage sprite);
		void tick();
		void render();
		void damage(Entity* damageSource);
		bool collides(Entity* entity);
		ofRectangle getBounds();
};