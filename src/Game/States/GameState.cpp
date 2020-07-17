#include "GameState.h"

GameState::GameState() {
}
void GameState::tick() {
}
void GameState::render() {
	ofSetBackgroundColor(ofRandom(256), ofRandom(256), ofRandom(256));
}

void GameState::keyPressed(int key){
	if(key == 'm'){
        finished = true;
        nextState = "Menu";
    }
}

void GameState::mousePressed(int x, int y, int button){
}

void GameState::reset(){
	finished = false;
	nextState = "";
}