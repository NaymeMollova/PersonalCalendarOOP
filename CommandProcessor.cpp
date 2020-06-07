#include "CommandProcessor.h"

void CommandProcessor::registerCommand(Command* m_command)
{
	commands.push_back(m_command);
}

void CommandProcessor::execute(const string& command_name, Calendar& cals)
{

}
