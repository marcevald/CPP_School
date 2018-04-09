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
		ophavsMaend[count] = p;
	}
	else
	{
		count = 0; //If array already contains 5 ophavsMaend overwrite the first one.
		ophavsMaend[count] = p;
	}
	
	count++; //Increment count varibale everytime an ophavsMaend is added.
}

/*
string KunstVaerk::getOphavsMaend() // -----EKSTRA-----
{
	return ophavsMaend.getNavn();
}
*/