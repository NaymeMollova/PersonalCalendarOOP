#include "Date.hpp"
#include <string>

using namespace std;
Date::Date(int year, int month, int date)
{
	m_year = year;
	m_month = month;
	m_date = date;

}

bool Date::operator==(const Date& other)
{
	return this->m_date == other.m_date && this->m_month == other.m_month && this->m_year == other.m_year;
}


void Date::setYear(int year)
{
	m_year = year;
}

void Date::setMonth(int month)
{
	if (month < 1 && month >12)
	{
		cout << "The Month is invalid" << endl;
	}
	else
		m_month = month;
}

void Date::setDate(int date)
{
	if (date < 1 && date > 31)
	{
		cout << "The date is invalid" << endl;

	}
	else
		m_date = date;
}

void Date::showDate()
{
	cout << m_year << ". " << m_month << "." << m_date << endl;
}

istream& operator>>(istream& in, Date& obj)
{

	in >> obj.m_year;
	in >> obj.m_month;
	in >> obj.m_date;
	return in;
}
ostream& operator<<(ostream& out, const Date& obj)
{
	out << obj.getYear() << ". " << obj.getMonth() << ". " << obj.getDate();
	return out;
}