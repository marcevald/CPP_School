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
		ophavsMaend.push_back(p);
}


int KunstVaerk::getAntalOM()
{
	return ophavsMaend.size();
}

string KunstVaerk::getTitel()
{
	return titel;
}