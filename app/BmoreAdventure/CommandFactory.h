#include "Command.h"
#include "MoveCommand.h"
#include "UseCommand.h"
#include <vector>

#pragma once
class CommandFactory
{
public:
	CommandFactory();
	~CommandFactory();

	static Command* create(string & commAction, string & entity);
};

