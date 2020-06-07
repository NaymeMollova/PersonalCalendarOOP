#pragma once
#include <iostream>
#include "Date.hpp"
#include "Time.hpp"

using namespace std;

class Meet
{
 private:
	string m_name;
	string m_note;
	Date m_date;
	Time m_start;
	Time m_end;

	void copy(const Meet& other);
	void clear();
	bool workday;
	
public:
	Meet( Date date, Time start, Time end, string name, string note);
	Meet(const Meet& other);
	Meet operator=(const Meet& other);
	~Meet();
	bool operator==(const Meet&);
	void setName(string newName);
	void setNote(string newNote);
	void setDate(Date newDate);
	void setTimeStart(Time newStart);
	void setTimeEnd(Time newEnd);
	void print();

	 string getName() const
	{
		return m_name;
	}
     string getNote() const
	{
		return m_note;
	}
	Date getDate() const
	{
		return m_date;
	}
	Time getTimeStart() const
	{
		return m_start;
	}
	Time getTimeEnd() const
	{
		return m_end;
	}
};

ostream& operator<<(ostream& out, const Meet& obj);