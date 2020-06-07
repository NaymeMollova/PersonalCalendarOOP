#include "Calendar.h"
#include <iostream>




void Calendar::save()
{

}

void Calendar::addMeeting(const Meet& meeting)
{
	cout << "Adding meeting" << endl;
	cout << "Name: " << meeting.getName() << endl;
	cout << "Note: " << meeting.getNote() << endl;
	cout << "Date: " << meeting.getDate() << endl;
	cout << "Start: " << meeting.getTimeStart() << endl;
	cout << "End: " << meeting.getTimeEnd() << endl;
	meetings.push_back(meeting);
}

void Calendar::deleteMeet(const Meet& meeting)
{
	for (size_t i = 0; i < meetings.size(); i++)
	{
		if (meetings[i] == meeting)
		{
			meetings.erase(meetings.begin() + i);
		}
	}
}
void Calendar::deleteMeet(const Date& date, const Time& start)
{
	for (size_t i = 0; i < meetings.size(); i++)
	{
		if (meetings[i].getDate() == date && meetings[i].getTimeStart() == start)
		{
			meetings.erase(meetings.begin() + i);
		}
	}
}

const Calendar& Calendar::operator<<(const Meet& meeting)
{
	addMeeting(meeting);
	return *this;
}
