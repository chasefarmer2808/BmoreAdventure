#include "stdafx.h"
#include "UseCommand.h"


UseCommand::UseCommand(string& entity) : Command(string("use"), entity)
{
}


UseCommand::~UseCommand()
{
}

void UseCommand::execute(Player* player) {
	cout << "Using " << this->getEntity() << endl;
}