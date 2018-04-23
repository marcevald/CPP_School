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

protected:
	Dato datoForUdlaan;
	int datoForAflevering;
	Laaner laaner;
	Eksemplar eksemplar;
};

