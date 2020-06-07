#pragma once
#include <vector>
#include "Command.h"


class CommandProcessor
{
private:

	vector<Command*> commands;

public:
	CommandProcessor() = default;
	~CommandProcessor() = default;

	void registerCommand(Command*);
	void execute(const string& command_name, Calendar& cals);

	const vector<Command*> getCommands()
	{
		return commands;
	}
};