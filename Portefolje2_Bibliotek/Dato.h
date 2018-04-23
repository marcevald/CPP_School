#pragma once
#include <string>

using namespace std;

class Dato
{
public:
	Dato();
	Dato(int);	//Format YYYYMMDD

	int getDate();
	int getYear();
	int getMonth();
	int getDay();
	int getQuater();
	bool leapYear();
	bool validate();
	int dayInYear();
	int restDaysInYear();
	int diffInDays(int);
	int getWeekDay();
	string getWeekDayText();
	int addMaaned();


	~Dato();
private:
	void setDatePlusOne();
	void setDateMinusOne();
	int datoen;
	int enD;

};
