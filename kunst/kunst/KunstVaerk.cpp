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
	ophavsMaend = p;
}
string KunstVaerk::getOphavsMaend()
{
	return ophavsMaend.getNavn();
}