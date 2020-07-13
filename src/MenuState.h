#pragma once

#include "State.h"

class MenuState : public State {
private:
	ofImage img1;

public:
	MenuState();
	void tick();
	void render();


};
