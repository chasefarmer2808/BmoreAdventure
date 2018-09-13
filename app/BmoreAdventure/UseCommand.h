#pragma once
#include "Command.h"
#include "Player.h"

class UseCommand :
	public Command
{
public:
	UseCommand(string& entity);
	~UseCommand();
	void execute(Player* player);
};

