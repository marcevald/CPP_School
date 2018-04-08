#include "KunstvaerkSamling.h"
//#include "KunstVaerk.h"
using namespace std;

KunstvaerkSamling::KunstvaerkSamling(string etNavn)
{
	navn = etNavn;
}

void KunstvaerkSamling::addKunstvaerk(KunstVaerk kunst)
{
	kunstvaerker.push_back(kunst);
}


KunstvaerkSamling::KunstvaerkSamling()
{
}

KunstvaerkSamling::~KunstvaerkSamling()
{
}