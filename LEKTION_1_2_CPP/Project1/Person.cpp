#include "Person.h"

using namespace std;

Person::Person()
{
}

Person::Person(string n, Date b)
{
	name = n;
	birthday = b;
}

string Person::getName()
{
	return name;
}

Date Person::getBirthday()
{
	return birthday;
}

void Person::addCar(Car reg)
{
	newreg = reg;
}

Car Person::getCar()
{
	return newreg;
}

Person::~Person()
{

}