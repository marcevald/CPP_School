#include "Person.h"

using namespace std;

Person::Person(string etNavn, string enNationalitet, int etFoedeaar, int etDoedsaar)
{
	navn = etNavn;
	nationalitet = enNationalitet;
	foedeaar = etFoedeaar;
	doedsaar = etDoedsaar;
}

string Person::getNavn()
{
	return navn;
}

Person::Person()
{
}
Person::~Person()
{
}
