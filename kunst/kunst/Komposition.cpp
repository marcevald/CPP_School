#pragma once
#include "Komposition.h"

using namespace std;

Komposition::Komposition()
{
}

Komposition::~Komposition()
{
}

Komposition::Komposition(string enTitel, int etAar, string enGenre, int enSpilleTid)
	: KunstVaerk()
{
	titel = enTitel;
	aar = etAar;
	genre = enGenre;
	spilletid = enSpilleTid;
}
