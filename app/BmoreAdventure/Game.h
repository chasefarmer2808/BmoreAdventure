#include "CommandProcessor.h"

#pragma once
class Game
{
public:
	Game();
	~Game();

	void start();

private:
	CommandProcessor* commandProcessor;
};

