#include "stdafx.h"
#include "CommandProcessor.h"


CommandProcessor::CommandProcessor()
{
}


CommandProcessor::~CommandProcessor()
{
}

Command* CommandProcessor::next()
{
	string input;
	getline(cin, input);
	vector<string> commTokens = this->tokenize(input);
	Command* comm = this->createCommand(commTokens);
	return comm;
}

vector<string> CommandProcessor::tokenize(string& input) {
	vector<string> tokens;
	string token;
	istringstream tokenStream(input);

	while (getline(tokenStream, token, ' ')) {
		tokens.push_back(token);
	}

	return tokens;
}

Command* CommandProcessor::createCommand(vector<string>& tokens)
{
	switch (tokens.size()) {
		case 0: {
			cout << "No command given." << endl;
			return NULL;
		}
		case 1: {
			cout << "No support for single token commands." << endl;
			return NULL;
		}
		case 2: {
			string action = tokens[0];
			string entity = tokens[1];

			return CommandFactory::create(action, entity);
		}
		default: {
			cout << "Invalid number of command tokens." << endl;
			return NULL;
		}
	}
}
