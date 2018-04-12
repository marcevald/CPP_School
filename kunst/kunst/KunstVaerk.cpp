#pragma once
#include "KunstVaerk.h"
#include <iostream>

using namespace std;

KunstVaerk::KunstVaerk()
{
}
KunstVaerk::~KunstVaerk()
{
}

void KunstVaerk::addOM(Person p)
{
	if (count < 5) //Only possible to store 5 ophavsMaend. (0-4)
	{
		ophavsMaend.push_back(p);//Increment count varibale everytime an ophavsMaend is added.
		count++;
	}
	else
	{
		throw exception(); //Only 5 ophavsMaend can be added.
	}
}

/*
string KunstVaerk::getOphavsMaend() // -----EKSTRA-----
{
	return ophavsMaend.getNavn();
}
*/