#pragma once
#include <iostream>

using namespace std;
class Date
{
private:
	int m_year;
	int m_month;
	int m_date;

	

public:
	Date(int year = 0, int month = 0, int date = 0);
	bool operator==(const Date& other);
	
	int getYear() const
	{
		return m_year;
	}
	int getMonth() const
	{
		return m_month;
	}
	int getDate() const
	{
		return m_date;
	}

	void setYear(int m_year);
	void setMonth(int m_month);
	void setDate(int m_date);
	void showDate();
	friend istream& operator>>(istream& in, Date& obj);
};

ostream& operator<<(ostream& out, const Date& obj);
