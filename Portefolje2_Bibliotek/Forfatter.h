#pragma once

#include "Person.h"
#include <string>

using namespace std;

class Forfatter: public Person
{
public:
	Forfatter();
	~Forfatter();

	Forfatter(const string&, const string&, const int&, const int&);

protected:
	int foedselsaar;
	int doedsaar;
	string nationalitet;
};

