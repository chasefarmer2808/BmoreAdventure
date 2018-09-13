#include "stdafx.h"
#include "MoveCommand.h"


MoveCommand::MoveCommand(string& entity) : Command(string("move"), entity)
{

}


MoveCommand::~MoveCommand()
{
}

void MoveCommand::execute(Player* player) {
	cout << "Moving " << this->getEntity() << endl;
	
	if (this->getEntity() == "up") {
		player->moveUp();
	}
	else if (this->getEntity() == "down") {
		player->moveDown();
	}

	cout << "Player location: " << player->getLocation() << endl;
}
