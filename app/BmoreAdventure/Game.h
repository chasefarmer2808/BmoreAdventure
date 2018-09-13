#include "CommandProcessor.h"
#include "Player.h"

#pragma once
class Game
{
public:
	Game();
	~Game();

	void start();

private:
	CommandProcessor* commandProcessor;
	Player* player;
};

