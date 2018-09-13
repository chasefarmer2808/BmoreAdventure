#include "stdafx.h"
#include "MoveCommand.h"


MoveCommand::MoveCommand(string& entity) : Command(string("move"), entity)
{

}


MoveCommand::~MoveCommand()
{
}

void MoveCommand::execute() {
	cout << "Moving " << this->getEntity() << endl;
}
