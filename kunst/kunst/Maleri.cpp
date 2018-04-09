#pragma once
#include <string>
#include "Maleri.h"

using namespace std;

Maleri::Maleri()
{
}
Maleri::~Maleri()
{
}

Maleri::Maleri(string enTitel, int etAar, int enLaengde, int enBredde, Museum m)
{
	titel = enTitel;
	aar = etAar;
	laengde = enLaengde;
	bredde = enBredde;
	etMuseum = m;
}


