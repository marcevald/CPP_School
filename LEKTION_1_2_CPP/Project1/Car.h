#pragma once
#include <string>

using namespace std;

class Car
{
public:
	Car();
	Car(string newplate);
	string getPlate();

	~Car();
private:
	string plate;

};