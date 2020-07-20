#include "GameState.h"

GameState::GameState() {
}
void GameState::tick() {
}
void GameState::render() {
	ofSetBackgroundColor(0, 256, 0);
}

void GameState::keyPressed(int key){
	if(key == 'm'){
        setFinished(true);
        setNextState("Menu");
    }
}

void GameState::mousePressed(int x, int y, int button){
}

void GameState::reset(){
	setFinished(false);
	setNextState("");
}