#include "Bibliotek.h"
#include <iostream>



Bibliotek::Bibliotek()
{
}


Bibliotek::~Bibliotek()
{
}

void Bibliotek::tilfoejEks(Eksemplar& etEksemplar)
{
	eksemplarer.push_back(etEksemplar);
}

void Bibliotek::tilfoejUdl(Udlaan& etUdlaan)
{
	udlaan.push_back(etUdlaan);
}

int Bibliotek::tjekOmBogErTilgaengelig(const string& enTitel)
{
	return 0;
}

void Bibliotek::listLaanersLaan(const string& enLaaner)
{
	cout << enLaaner << endl;
	for (int i = 0; i <= udlaan.size(); i++)
	{
		if (getUdlaan().getNavn() = enLaaner)
			cout << getUdlaan().getEksemplar().getTitel() << "  ---  " << getUdlaan().getDatoForUdlaan() << endl;	
	}
}