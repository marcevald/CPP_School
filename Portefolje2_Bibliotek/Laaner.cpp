#include "Laaner.h"



Laaner::Laaner()
{
}


Laaner::~Laaner()
{
}

Laaner::Laaner(const string& etNavn, const int& etNummer)
	: Person()
{
	navn = etNavn;
	nummer = etNummer;
}