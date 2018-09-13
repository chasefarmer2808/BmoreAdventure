#include "stdafx.h"
#include "CommandFactory.h"


CommandFactory::CommandFactory()
{
}


CommandFactory::~CommandFactory()
{
}

Command* CommandFactory::create(string& commAction, string& entity)
{
	if (commAction == "move") {
		return new MoveCommand(entity);
	}
	else if (commAction == "use") {
		return new UseCommand(entity);
	}
	else {
		cout << "Invalid command type." << endl;
		return NULL;
	}
}
