#pragma once
#include <iostream>


using namespace std;
class Time
{
private:
	int m_hour;
	int m_minute;

public:
	void setTime(int hour, int minute);
	Time sum(Time);
	void showTime();
	bool operator==(const Time& other);
	
	int getHour() const
	{
		return m_hour;
	}
	int getMinute() const
	{
		return m_minute;
	}
};

ostream& operator<<(ostream& out, const Time& obj);