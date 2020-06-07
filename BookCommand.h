#pragma once
#include "Command.h"


class BookCommand : public Command
{
public:
	BookCommand()
		:Command("book")
	{

	}

	~BookCommand() = default;
	void execute(Calendar&, vector<string>) ;
	void help() ;
};

