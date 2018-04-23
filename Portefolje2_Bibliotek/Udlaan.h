#pragma once
#include "Dato.h"
#include "Laaner.h"
#include "Eksemplar.h"

class Udlaan
{
public:
	Udlaan();
	~Udlaan();

	Udlaan(Dato, Laaner&, Eksemplar&);
	
	Laaner getLaaner();
	Eksemplar getEksemplar();
	int getDato();
	int getAflDato();

protected:
	Dato datoForUdlaan;
	Dato datoForAflevering;
	Laaner laaner;
	Eksemplar eksemplar;
};

