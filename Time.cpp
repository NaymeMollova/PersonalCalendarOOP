#include "Time.hpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
void Time::setTime(int hour, int minute)
{
	m_hour = hour;
	m_minute = minute;

}

Time Time::sum(Time s)
{
	Time t;
	t.m_minute = m_minute + s.m_minute;
	t.m_hour = t.m_minute / 60;
	t.m_minute = t.m_minute % 60;
	t.m_hour += m_hour + s.m_minute;

	return t;
}

void Time::showTime()
{
	cout << m_hour << ":" << m_minute << endl;

}

bool Time::operator==(const Time& other)
{
	return this->m_hour == other.m_hour && this->m_minute == other.m_minute;
}
ostream& operator<<(ostream& out, const Time& obj)
{
	out << "Time: " << obj.getHour() << ": " << obj.getMinute();
	return out;
}
