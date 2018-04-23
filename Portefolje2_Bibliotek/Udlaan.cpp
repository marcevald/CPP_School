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

			// HUSK LAV NOGET KODE DER BEREGNER EN DATO 1 MÅNED FRA UDLEVERING.
	datoForAflevering = enDato.addMaaned();
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