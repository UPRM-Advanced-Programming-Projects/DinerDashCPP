#pragma once

#include "GameSetUp.h"
#include "State.h"


class Handler {
private:
	GameSetUp* game;
	bool fullScren, mute;
	State* lastState;


public:
	static bool DEBUG;

	Handler(GameSetUp* game);
	int getWidth();
	int getHeight();
	GameSetUp getGameProperties();
	void changeState(State* state);
	State* getState();



};