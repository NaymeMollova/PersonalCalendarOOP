#pragma once
#include "Calendar.h"


class Command
{
private:
	string name;

public:
	Command(const string& name)
		:name(name)
	{

	}
	virtual ~Command() = default;

	const string getName()
	{
		return name;
	}
	virtual void execute(Calendar&) = 0;
	virtual void help() = 0;
};

