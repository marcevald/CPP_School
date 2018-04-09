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