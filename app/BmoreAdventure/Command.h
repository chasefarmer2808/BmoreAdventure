#include "Player.h"

#pragma once
class Command
{
public:
	Command();
	Command(string action, string entity);
	~Command();

	virtual void execute(Player* player) = 0;

	string getAction();
	string getEntity();

private:
	string action;
	string entity;
};

