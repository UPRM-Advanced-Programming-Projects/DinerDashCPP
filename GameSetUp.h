#pragma once

class GameSetUp {

private:
	int width, height;
	char* title;
	bool running = false;
	Handler handler;
	void init();
	void tick();
	void render();

public:
	GameSetUp(char* title, int width, int height);
	void start();

};