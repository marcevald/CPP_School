#include "Date.h"
#include <string>


using namespace std;


Date::Date()
{
}

Date::Date(int aDate)	// Sets date in format YYYYMMDD
{
	datoen = aDate;
}

int Date::getDate()	//Returns Date in format YYYYMMDD
{
	return datoen;
}

int Date::getYear()	//Returns Year in format YYYY
{
	return datoen / 10000;
}

int Date::getMonth()	//Returns month in format MM
{
	return (datoen % 10000) / 100;
}

int Date::getDay()	//Returns day in format DD
{
	return datoen % 100;
}

int Date::getQuater()
{
	return (getMonth() - 1) / 3 + 1;
}

bool Date::leapYear()
{
	if ((getYear() % 4 == 0 && getYear() % 100 != 0) || getYear() % 400 == 0)
		return true;
	else
		return false;
}

bool Date::validate()
{
	if (getYear() < 1703 || getYear() > 2100)
		return false;
	if (getMonth() < 1 || getMonth() > 12)
		return false;
	if (getDay() < 1 || getDay() > 31)
		return false;
	if (getMonth() == 2 && leapYear() && getDay() > 29)
		return false;
	if (getMonth() == 2 && !leapYear() && getDay() > 28)
		return false;
	if (getMonth() == 4 && getDay() > 30)
		return false;
	if (getMonth() == 6 && getDay() > 30)
		return false;
	if (getMonth() == 9 && getDay() > 30)
		return false;
	if (getMonth() == 11 && getDay() > 30)
		return false;
	return true;
}

int Date::dayInYear()
{
	int leap;

	if (leapYear())
		leap = 1;
	else
		leap = 0;

	switch (getMonth())
	{
	case 1:
		return getDay();
	case 2:
		return getDay() + 31;
	case 3:
		return getDay() + 59 + leap;
	case 4:
		return getDay() + 90 + leap;
	case 5:
		return getDay() + 120 + leap;
	case 6:
		return getDay() + 151 + leap;
	case 7:
		return getDay() + 181 + leap;
	case 8:
		return getDay() + 212 + leap;
	case 9:
		return getDay() + 243 + leap;
	case 10:
		return getDay() + 273 + leap;
	case 11:
		return getDay() + 304 + leap;
	case 12:
		return getDay() + 334 + leap;
	default:
		return 0;
		break;
	}
}

int Date::restDaysInYear()
{
	if (leapYear())
		return 366 - dayInYear();
	else
		return 365 - dayInYear();
}

int Date::diffInDays(Date enD)
{
	int count = 0;

	if (datoen > enD.getDate())
	{
		while (datoen != enD.getDate())
		{
			setDateMinusOne();
			count++;
		}
		return count;
	}

	if (datoen < enD.getDate())
	{
		while (datoen != enD.getDate())
		{
			setDatePlusOne();
			count++;
		}
		return count;
	}

	if (datoen == enD.getDate())
	{
		return 0;
	}
}

void Date::setDatePlusOne()
{
	datoen++;

	while (!validate())
	{
		datoen++;
	}
}

void Date::setDateMinusOne()
{
	datoen--;

	while (!validate())
	{
		datoen--;
	}
}

int Date::getWeekDay()
{
	int diff;

	diff = diffInDays(17030101);
	return diff % 7;
}

string Date::getWeekDayText()
{

	switch (getWeekDay())
	{
	case 0:
		return "Monday";
	case 1:
		return "Tuesday";
	case 2:
		return "Wednesday";
	case 3:
		return "Thursday";
	case 4:
		return "Friday";
	case 5:
		return "Saturday";
	case 6:
		return "Sunday";
	default:
		return 0;
		break;
	}

}

Date::~Date()
{
}
