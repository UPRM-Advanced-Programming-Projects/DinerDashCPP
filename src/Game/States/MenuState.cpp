#include "MenuState.h"

int x, y;
MenuState::MenuState() {
	img1.load("test.png");
	x = y = 0;
}
void MenuState::tick() {
	x += 1;
	y += 1;
}
void MenuState::render() {
	img1.draw(x, y);
}