#include "Player.h"

Player::Player(int x, int y, int width, int height, ofImage sprite) : Entity(x, y, width, height, sprite){
    down.cropFrom(sprite, 25, 100, 355, 450);
    up.cropFrom(sprite, 25, 700, 355, 450);
    left.cropFrom(sprite, 50, 1300, 300, 425);
    right.cropFrom(sprite, 448, 1900, 300, 425);
    
    vector<ofImage> downAnimframes;
    vector<ofImage> upAnimframes;
    vector<ofImage> leftAnimframes;
    vector<ofImage> rightAnimframes;
    ofImage temp;
    for(int i=0; i<4; i++){
        temp.cropFrom(sprite, 25+(i*(50+355)), 100, 355, 450);
        downAnimframes.push_back(temp);
    }
    for(int i=0; i<4; i++){
        temp.cropFrom(sprite, 25+(i*(50+355)), 700, 355, 450);
        upAnimframes.push_back(temp);
    }
    for(int i=0; i<4; i++){
        temp.cropFrom(sprite, 50+(i*(100+300)), 1300, 300, 425);
        leftAnimframes.push_back(temp);
    }
    for(int i=0; i<4; i++){
        temp.cropFrom(sprite, 50+(i*(100+300)), 1900, 300, 425);
        rightAnimframes.push_back(temp);
    }
    walkDown = new Animation(10,downAnimframes);
    walkUp = new Animation(10,upAnimframes);
    walkLeft = new Animation(10,leftAnimframes);
    walkRight = new Animation(10,rightAnimframes);
    
}
void Player::tick(){
    if(walking){
        if(facing == "up"){
            y-= speed;
            walkUp->tick();
        }else if(facing == "down"){
            y+=speed;
            walkDown->tick();
        }else if(facing == "left"){
            x-=speed;
            walkLeft->tick();
        }else if(facing == "right"){
            x+=speed;
            walkRight->tick();
        }
    }
}

void Player::render(){
    ofSetColor(256,256,256);
    if(facing == "up"){
        if(walking){
            walkUp->getCurrentFrame().draw(x, y, width, height);
        }else{
            up.draw(x, y, width, height);
        }
        
    }else if(facing == "down"){
        if(walking){
            walkDown->getCurrentFrame().draw(x, y, width, height);
        }else{
            down.draw(x, y, width, height);
        }
    }else if(facing == "left"){
        if(walking){
            walkLeft->getCurrentFrame().draw(x, y, width, height);
        }else{
            left.draw(x, y, width, height);
        }
    }else if(facing == "right"){
        if(walking){
            walkRight->getCurrentFrame().draw(x, y, width, height);
        }else{
            right.draw(x, y, width, height);
        }
    }
}

void Player::keyPressed(int key){
    switch(key){
        case 'w':
            walking = true;
            setFacing("up");
            break;
        case 's':
            walking = true;
            setFacing("down");
            break;
        case 'a':
            walking = true;
            setFacing("left");
            break;
        case 'd':
            walking = true;
            setFacing("right");
            break;
    }
}

void Player::keyReleased(int key){
    if(key == 'w' || key =='s' || key == 'a' || key == 'd'){
        walking = false;
    }
}
void Player::mousePressed(int x, int y, int button){

}

void Player::setFacing(string facing){
    this->facing = facing;
}