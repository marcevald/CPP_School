#include "Dato.h"
#include <string>


using namespace std;


Dato::Dato()
{
}

Dato::Dato(int aDate)	// Sets date in format YYYYMMDD
{
	datoen = aDate;
}

int Dato::getDate()	//Returns Date in format YYYYMMDD
{
	return datoen;
}

int Dato::getYear()	//Returns Year in format YYYY
{
	return datoen / 10000;
}

int Dato::getMonth()	//Returns month in format MM
{
	return (datoen % 10000) / 100;
}

int Dato::getDay()	//Returns day in format DD
{
	return datoen % 100;
}

int Dato::getQuater()
{
	return (getMonth() - 1) / 3 + 1;
}

bool Dato::leapYear()
{
	if ((getYear() % 4 == 0 && getYear() % 100 != 0) || getYear() % 400 == 0)
		return true;
	else
		return false;
}

bool Dato::validate()
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

int Dato::dayInYear()
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

int Dato::restDaysInYear()
{
	if (leapYear())
		return 366 - dayInYear();
	else
		return 365 - dayInYear();
}

int Dato::diffInDays(Dato enD)
{
	int count = 0;

	Dato kopiDato(datoen);

	if (kopiDato.datoen < enD.datoen)
	{
		while (kopiDato.datoen != enD.datoen)
		{
			kopiDato.setDatePlusOne();
			count++;
		}
		
	}

	else 
		if (kopiDato.datoen > enD.datoen)
		{
			while (kopiDato.datoen != enD.datoen)
				{
			kopiDato.setDateMinusOne();
			count++;
				}
		
		}

	return count;
}

void Dato::setDatePlusOne()
{
	
	datoen++;

	while (!validate())
	{
		datoen++;
	}
}

void Dato::setDateMinusOne()
{
	datoen--;

	while (!validate())
	{
		datoen--;
	}
}

int Dato::getWeekDay()
{
	int diff;

	diff = diffInDays(17030101);
	return diff % 7;
}

string Dato::getWeekDayText()
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

void Dato::addMaaned()
{
	
	bool start = true;
	int count = 0;

	while (start)
	{
		datoen++;

		if (validate())
		{
			count++;
		}
		if (count == 31)
			start = false;
	}
}

Dato::~Dato()
{
}
