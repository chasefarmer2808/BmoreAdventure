#pragma once
#include "Command.h"

class MoveCommand :
	public Command
{
public:
	MoveCommand(string& entity);
	~MoveCommand();
	void execute(Player* player);
};

