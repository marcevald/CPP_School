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
protected:
	Dato datoForUdlaan;
	Dato datoForAflevering;
	Laaner laaner;
	Eksemplar eksemplar;
};

