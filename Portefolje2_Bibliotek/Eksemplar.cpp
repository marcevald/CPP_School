#include "Eksemplar.h"

Eksemplar::Eksemplar()
{
}


Eksemplar::~Eksemplar()
{
}

Eksemplar::Eksemplar(const int& etBogNummer, Bog& enBog)
{
	bogNummer = etBogNummer;
	bog = enBog;

}
