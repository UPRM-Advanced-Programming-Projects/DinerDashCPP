#pragma once
#include "Animation.h"

#include "Entity.h"
class Player: public Entity{

    private:
        int health;
        int score;
        int speed = 5;
        bool walking = false;
        string facing = "down";
        ofImage up, down, left, right;
        Animation *walkUp;
        Animation *walkDown;
        Animation *walkLeft;
        Animation *walkRight;

    public:
        Player(int x, int y, int width, int height, ofImage sprite);
        int getHealth();
        int getScore();
        void tick();
        void render();
        void keyPressed(int);
        void keyReleased(int);
        void damage(Entity* damageSource);
        void mousePressed(int, int, int);
        void reset();
        void setFacing(string);
};