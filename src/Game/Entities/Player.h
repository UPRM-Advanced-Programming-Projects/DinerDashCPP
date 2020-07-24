#pragma once
#include "Entity.h"

class Player: public Entity{

    private:
        int health;
        int score;
        int speed = 5;
    public:
        Player(int x, int y, int width, int height, ofImage sprite) : Entity(x, y, width, height, sprite){}
        int getHealth();
        int getScore();
        void tick();
        void keyPressed(int);
        void damage(Entity* damageSource);
        void mousePressed(int, int, int);
        void reset();
};