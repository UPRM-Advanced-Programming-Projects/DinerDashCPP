#include "Entity.h"

Entity::Entity(int x, int y, int width, int height, ofImage sprite){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->sprite = sprite;
}

void Entity::tick(){
    ticks++;
    if(ticks % 100 == 0){
    x = ofRandom(ofGetWidth());
    y = ofRandom(ofGetHeight());
    }
    
}
void Entity::render(){
    sprite.draw(x, y, width, height);
    // ofDrawRectangle(getBounds());
}

bool Entity::collides(Entity* entity){
    return this->getBounds().intersects(entity->getBounds());
}

ofRectangle Entity::getBounds(){
    return ofRectangle(x, y, width, height);
}