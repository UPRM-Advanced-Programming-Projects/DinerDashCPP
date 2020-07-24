#include "Player.h"

void Player::tick(){

}

void Player::keyPressed(int key){
    switch(key){
        case 'w':
            y-= speed;
            break;
        case 's':
            y+=speed;
            break;
        case 'a':
            x-=speed;
            break;
        case 'd':
            x+=speed;
            break;
    }
}
void Player::mousePressed(int x, int y, int button){

}