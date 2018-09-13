#pragma once
#include "Command.h"
class UseCommand :
	public Command
{
public:
	UseCommand(string& entity);
	~UseCommand();
	void execute();
};

