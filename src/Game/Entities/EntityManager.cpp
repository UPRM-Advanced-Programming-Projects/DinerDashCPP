#include "EntityManager.h"

void EntityManager::tick(){
    for(int i=0; i<entities.size(); i++){
        entities[0].tick();
    }
}

void EntityManager::render(){
    for(int i=0; i<entities.size(); i++){
        entities[i].render();
    }
}