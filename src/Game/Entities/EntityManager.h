#pragma once

#include "Entity.h"

class EntityManager {

public:

	std::vector<Entity> entities;
	void tick();
	void render();

};