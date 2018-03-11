#pragma once
#include <string>

using namespace std;

class Date
{
public:
	Date();
	Date(int);	//Format YYYYMMDD

	int getDate();
	int getYear();
	int getMonth();
	int getDay();
	int getQuater();
	bool leapYear();
	bool validate();
	int dayInYear();
	int restDaysInYear();
	int diffInDays(Date enD);
	int getWeekDay();
	string getWeekDayText();


	~Date();
private:
	void setDatePlusOne();
	void setDateMinusOne();
	int datoen;
	int enD;
};
