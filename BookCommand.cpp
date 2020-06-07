#include "BookCommand.h"
#include "Meet.hpp"
#include "Date.hpp"
#include "Time.hpp"
#include "Command.h"

void BookCommand::execute(Calendar& calendar, vector<string> data)
{
	const string command = data[0];
	const string dateS = data[1];
	const string startS = data[2];
	const string endS = data[3];
	const string nameS = data[4];
	const string note = data[5];

	//const Meet m(nameS, note, startS, endS, note);
	//calendar.addMeeting(m);
}
void BookCommand::help()
{

}