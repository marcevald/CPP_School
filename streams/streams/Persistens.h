#include <string>
#include "c:\Users\od\Documents\Visual Studio 2015\Projects\PF2Books\PF2Books\Person.h"
#pragma once
using namespace std;
class Persistens
{
public:
	Persistens();
	void write(string text);
	void writePerson(Person p);
	string read();
	Person readPerson();
	~Persistens();
};

