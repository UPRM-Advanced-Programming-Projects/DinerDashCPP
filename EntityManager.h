#pragma once

#include "Entity.h"

class EntityManager {

public:

	std::vector<Entity> entities;

	EntityManager();

	void tick();
	void render();

};