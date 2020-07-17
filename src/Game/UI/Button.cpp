#include "Button.h"
Button::Button(){
   this->xPos = ofGetWidth()/2;
    this->yPos = ofGetHeight()/2;
    this->width = 64;
    this->height = 20; 
}
Button::Button(int xPos, int yPos, int width, int height){
    this->xPos = xPos;
    this->yPos = yPos;
    this->width = width;
    this->height = height;
}

void Button::tick(){
    pressedCounter--;
    if(pressedCounter == 0){
        pressed = false;
        pressedCounter = -1;
    }

}

void Button::mousePressed(int x, int y){
    if(xPos + width >= x && x >= xPos &&  yPos + height >= y && y >= yPos){
        pressed = true;
    }
}

void Button::render(){
    if(pressed){
        ofSetColor(0, 256, 0);
    }else{
        ofSetColor(256, 0, 0);
    }
    ofDrawPlane(xPos, yPos, width, height);
    
}

bool Button::wasPressed(){
    return pressed;
}