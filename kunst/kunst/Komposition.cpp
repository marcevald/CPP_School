#include "Komposition.h"

using namespace std;

Komposition::Komposition()
{
}

Komposition::~Komposition()
{
}

Komposition::Komposition(string enTitel, int etAar, string enGenre, int enSpilleTid)
{
	titel = enTitel;
	aar = etAar;
	genre = enGenre;
	spilletid = enSpilleTid;
}