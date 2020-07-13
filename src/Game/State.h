#pragma once

#include "Handler.h"

class State {

private:
	Handler* handler;
	State* currentState;

public:
	virtual void tick() = 0;
	virtual void render() = 0;
	static void setHandler(Handler* handler);
	static void setState(State* state);
	static State* getState();
};