#pragma once
#include <iostream>
#include "KunstvaerkSamling.h"

using namespace std;

KunstvaerkSamling::KunstvaerkSamling(string etNavn)
{
	navn = etNavn;
}

void KunstvaerkSamling::addKunstvaerk(KunstVaerk kunst)
{
	kunstvaerker.push_back(kunst);
}

void KunstvaerkSamling::findSangeMedFlereKomponister()
{
	KunstVaerk& komp = dynamic_cast<Komposition&>();
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