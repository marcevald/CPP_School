#include "Forfatter.h"

Forfatter::Forfatter()
{
}


Forfatter::~Forfatter()
{
}

Forfatter::Forfatter(const string& etNavn, const string& enNationalitet, const int& etFoedselsaar, const int& etDoedsaar)
	: Person()
{
	navn = etNavn;
	nationalitet = enNationalitet;
	foedselsaar = etFoedselsaar;
	doedsaar = etDoedsaar;

}