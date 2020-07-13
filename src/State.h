#pragma once

#include "ofImage.h"

class State {
public:
	State() {}
	virtual void tick() = 0;
	virtual void render() = 0;
};