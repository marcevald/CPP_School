#pragma once

#include "Bog.h"

class Eksemplar
{
public:
	Eksemplar();
	~Eksemplar();

	Eksemplar(const int&, Bog&);
protected:
	int bogNummer;
	Bog bog;

};

