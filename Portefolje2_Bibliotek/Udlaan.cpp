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

	Dato aflevering;  // HUSK LAV NOGET KODE DER BEREGNER EN DATO 1 MÅNED FRA UDLEVERING.
	datoForAflevering = aflevering;
}
