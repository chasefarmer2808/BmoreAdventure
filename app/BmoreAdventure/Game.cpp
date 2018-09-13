#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	this->commandProcessor = new CommandProcessor();
}


Game::~Game()
{
}

void Game::start()
{
	while (true) {
		this->commandProcessor->next();
	}
}
