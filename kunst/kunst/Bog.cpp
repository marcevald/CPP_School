#pragma once
#include "Bog.h"

using namespace std;

Bog::Bog()
{
}

Bog::~Bog()
{
}

Bog::Bog(string enTitel, int etAar, string enGenre, int etAntalSider)
	: KunstVaerk()
{
	titel = enTitel;
	aar = etAar;
	genre = enGenre;
	antalSider = etAntalSider;
}