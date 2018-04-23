#pragma once
#include "Person.h"

class Laaner: public Person
{
public:
	Laaner();
	~Laaner();

	Laaner(const string&, const int&);

	string getNavn();

protected:
	int nummer;

};

