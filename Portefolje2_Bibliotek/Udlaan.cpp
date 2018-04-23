#include "Udlaan.h"
#include "Dato.h"

Udlaan::Udlaan()
{
}


Udlaan::~Udlaan()
{
}

Udlaan::Udlaan(Dato enDato, Laaner& enLaaner, Eksemplar& etEksemplar)
{
	datoForUdlaan = enDato;
	laaner = enLaaner;
	eksemplar = etEksemplar;

	datoForAflevering = datoForUdlaan;
	datoForAflevering.addMaaned();
}

Laaner Udlaan::getLaaner()
{
	return laaner;
}

Eksemplar Udlaan::getEksemplar()
{
	return eksemplar;
}

int Udlaan::getDato()
{
	return datoForUdlaan.getDate();
}
int Udlaan::getAflDato()
{
	return datoForAflevering.getDate();
}