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
	int taellerUdlaan = 0;
	int taellerEksemplarer = 0;

	for (int i = 0; i < udlaan.size(); i++)
	{
		if (udlaan[i].getEksemplar().getBog().getTitel() == enTitel)
			taellerUdlaan++;
	}

	for (int i = 0; i < eksemplarer.size(); i++)
	{
		if (eksemplarer[i].getBog().getTitel() == enTitel)
			taellerEksemplarer++;
	}
	
	if (taellerUdlaan == taellerEksemplarer)
		return 1;
	else
		return 0;
}


void Bibliotek::listLaanersLaan(const string& enLaaner)
{
	cout << "Laaner: " << enLaaner << endl << endl;
	
	for (int i = 0; i < udlaan.size(); i++)
	{
		if (udlaan[i].getLaaner().getNavn() == enLaaner)
		{
			cout << "Eksemplar: " << udlaan[i].getEksemplar().getBog().getTitel() << " -- " << "Dato for laan: " << udlaan[i].getDato() << endl;	
		}
	}
}
