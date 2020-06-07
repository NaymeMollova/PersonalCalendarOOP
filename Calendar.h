#pragma once
#include <vector>
#include "Meet.hpp"
class Calendar
{
private:
	string filePath;
	vector<Meet> meetings;
public:
	Calendar() = default;
	~Calendar()=default ;

	void save();
	void addMeeting(const Meet&);
	void deleteMeet(const Meet&);
	void deleteMeet(const Date&, const Time&);
  const	vector<Meet>& getMeet() const
	{
		return meetings;
	}
  const Calendar& operator<<(const Meet&);
};

