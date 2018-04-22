#include "Bog.h"



Bog::Bog()
{
}


Bog::~Bog()
{
}

Bog::Bog(const string& enTitel, const Forfatter& enForfatter, const int& etUdgivelsesAar)
{
	titel = enTitel;
	forfatter = enForfatter;
	udgivelsesAar = etUdgivelsesAar;
}