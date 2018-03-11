#pragma once
#include "Date.h"
#include "Car.h"
#include <string>

using namespace std;

class Person
{
public:
	Person();
	Person(string, Date);
	string getName();
	Date getBirthday();
	void addCar(Car reg);
	Car getCar();

	~Person();
private:
	string name;
	Date birthday;
	Car newreg;
};
