#include <string>
#include "Car.h"

Car::Car()
{
}

Car::Car(string newplate)
{
	plate = newplate;
}

string Car::getPlate()
{
	return plate;
}

Car::~Car()
{
}