#include "stdafx.h"
#include "UseCommand.h"


UseCommand::UseCommand(string& entity) : Command(string("use"), entity)
{
}


UseCommand::~UseCommand()
{
}

void UseCommand::execute() {
	cout << "Using " << this->getEntity() << endl;
}