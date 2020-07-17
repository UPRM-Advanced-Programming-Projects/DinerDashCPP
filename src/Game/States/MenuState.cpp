#include "MenuState.h"

MenuState::MenuState() {
	startButton = new Button(ofGetWidth()/2, ofGetHeight()/2, 64, 20);
}
void MenuState::tick() {
	startButton->tick();
	if(startButton->wasPressed()){
		nextState = "Game";
		finished = true;

	}
}
void MenuState::render() {
	startButton->render();
}

void MenuState::keyPressed(int key){
	
}

void MenuState::mousePressed(int x, int y, int button){
	startButton->mousePressed(x, y);
}

void MenuState::reset(){
	finished = false;
	nextState = nullptr;
}