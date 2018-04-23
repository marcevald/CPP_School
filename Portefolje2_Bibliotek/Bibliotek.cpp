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

	int aflDatoFoer = 99999999;
	int aflDato = 99999999;

	//Først findes antallet af udlaan der matcher titlen.
	for (int i = 0; i < udlaan.size(); i++)
	{
		if (udlaan[i].getEksemplar().getBog().getTitel() == enTitel)
			taellerUdlaan++;
	}

	//Herefter findes antallet af eksemplarer der matcher titlen.
	for (int i = 0; i < eksemplarer.size(); i++)
	{
		if (eksemplarer[i].getBog().getTitel() == enTitel)
			taellerEksemplarer++;
	}
	
	//Hvis antallene er lige, er alle bøger lånt ud.
	if (taellerUdlaan == taellerEksemplarer)
	{
		for (int i = 0; i < udlaan.size(); i++)
		{
			//Her findes det mindste tal, og dermed datoen for hvornår der tidligst er en bog ledig.
			if (udlaan[i].getEksemplar().getBog().getTitel() == enTitel)
			{
				aflDato = udlaan[i].getAflDato();

				if (aflDato > aflDatoFoer)
				{
					aflDato = aflDatoFoer;
				}
			}

			aflDatoFoer = aflDato;
		}
		return aflDatoFoer;
	}
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
			cout << "-------------------------------------------------------------------" << endl;
			cout << "Eksemplar: " << udlaan[i].getEksemplar().getBog().getTitel() << " | " << "Dato for laan: " << udlaan[i].getDato() << endl;
			cout << "-------------------------------------------------------------------" << endl;
		}
	}
}
