#include "stdafx.h"
#include "Command.h"


Command::Command()
{
}

Command::Command(string action, string entity)
{
	this->action = action;
	this->entity = entity;
}


Command::~Command()
{
}


string Command::getAction() {
	return this->action;
}

string Command::getEntity()
{
	return this->entity;
}
