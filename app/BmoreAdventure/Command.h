#pragma once
class Command
{
public:
	Command();
	Command(string action, string entity);
	~Command();

	virtual void execute() = 0;

	string getAction();
	string getEntity();

private:
	string action;
	string entity;
};

