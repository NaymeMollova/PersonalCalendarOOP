#include "Meet.hpp"
#include <string.h>
#include <iostream>
#include <fstream>


using namespace std;
void Meet::copy(const Meet& other)
{
	m_name = other.m_name;
	m_note = other.m_note;
	m_date = other.m_date;
	m_start = other.m_start;
}

void Meet::clear()
{ 

}



Meet::Meet( Date date, Time start, Time end, string name, string note) 
	: m_name(name)
	, m_note(note)
	, m_date(date)
	, m_start(start)
	, m_end(end)
{
}

Meet::Meet(const Meet& other)
{
	copy(other);
}

Meet Meet::operator=(const Meet& other)
{
	if (this != &other)
	{
		clear();
		copy(other);
	}
	return *this;
}

Meet::~Meet()
{
	clear();
}

bool Meet::operator==(const Meet& other)
{
	return this->m_name == other.m_name
		&& this->m_note == other.m_note
		&& this->workday == other.workday
		&& this->m_date == other.m_date
		&& this->m_start == other.m_start
		&& this->m_end == other.m_end;
}

void Meet::setName(string newName)
{
	m_name = newName;
}

void Meet::setNote(string newNote)
{
	m_note = newNote;
}

void Meet::setDate(Date newDate)
{
	 m_date = newDate;
}

void Meet::setTimeStart(Time newStart)
{
	 m_start = newStart;
}
void Meet::setTimeEnd(Time newEnd)
{
	m_end = newEnd;
}

void Meet::print()
{ 
	cout << "Name: " << m_name << endl;
	cout << "Note: " << m_note << endl;
	cout << "Date: " << m_date << endl;
	cout << "Starts: " << m_start << endl;
	cout << "End: " << m_end << endl;
	cout << "Is workday: " << (workday ? "true" : "false") << endl;

}


ostream& operator<<(ostream& out, const Meet& obj)
{
	out << obj.getName() << ", " << obj.getDate() << ", " << obj.getTimeStart() << ", " << obj.getTimeEnd()<<", " << obj.getNote();
	return out;
}
