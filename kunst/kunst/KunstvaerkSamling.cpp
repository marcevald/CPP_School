#pragma once
#include <iostream>
#include "KunstvaerkSamling.h"

using namespace std;

KunstvaerkSamling::KunstvaerkSamling(string etNavn)
{
	navn = etNavn;
	antal = 0;
}

void KunstvaerkSamling::addKunstvaerk(KunstVaerk kunst)
{
	kunstvaerker.push_back(&kunst);
	antal++;
}

void KunstvaerkSamling::findSangeMedFlereKomponister()
{
	
	for (int i = 0; i < antal; i++)
	{
		KunstVaerk* kp = kunstvaerker[i];

		Komposition* komp = dynamic_cast<Komposition *>(kp);

		if (komp != 0)
		{
			if (komp->getAntalOM() > 1)
			{
				cout << komp->getTitel() << endl;
			}
		}
	}
}

void KunstvaerkSamling::findMalerierPaaMuseum(string etMaleri)
{
}

void KunstvaerkSamling::beregnAntalLaesteSider()
{
}


KunstvaerkSamling::KunstvaerkSamling()
{
}

KunstvaerkSamling::~KunstvaerkSamling()
{
}

