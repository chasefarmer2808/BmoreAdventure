#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	this->commandProcessor = new CommandProcessor();
	this->player = new Player();
}


Game::~Game()
{
}

void Game::start()
{
	while (true) {
		Command* nextComm = this->commandProcessor->next();
		nextComm->execute(this->player);
	}
}
