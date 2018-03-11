#include <iostream>
#include "Date.h"
#include "Person.h"

using namespace std;

int main()
{
	int datein;
	string namein;
	string platein;

	cout << "Input your birthday(YYYYMMDD): " << endl << endl;
	cin >> datein;
	cout << "Input your name: " << endl;
	cin >> namein;
	cout << "Input numberplate of your car: " << endl;
	cin >> platein;


	Date newDate(datein);
	Car newCar(platein);
	Person newPerson(namein, newDate);
		
	newPerson.addCar(newCar);
	

	
	if (newDate.validate())
	{
		cout << "Your name is: " << newPerson.getName() << endl;
		cout << "Registration of your car: " << newPerson.getCar().getPlate() << endl;
		cout << "Your birthday is: " << newPerson.getBirthday().getDate() << endl;
		cout << "Your where born in: " << newDate.getYear() << endl;
		cout << "Month: " << newDate.getMonth() << endl;
		cout << "Day: " << newDate.getDay() << endl;
		cout << "Quater: " << newDate.getQuater() << endl;
		cout << "You where born on day " << newDate.dayInYear() << endl;
		cout << "with " << newDate.restDaysInYear() << " days remaining." << endl;
		cout << "You where born on a: ";
		cout << newDate.getWeekDayText() << endl;
		
		if (newDate.leapYear())
		{
			cout << "your where born in a leapyear." << endl;
		}
	}

	else
	{
		cout << "You did not input a valid date!" << endl;
	}
}