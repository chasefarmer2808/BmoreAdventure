#include "CommandFactory.h"

#pragma once
class CommandProcessor
{
public:
	CommandProcessor();
	~CommandProcessor();

	Command* next();
	void promptedNext(string prompt);

private:
	vector<string> tokenize(string& input);
	Command* createCommand(vector<string>& tokens);
};

