#include "KunstvaerkSamling.h"
#include "KunstVaerk.h"
using namespace std;

KunstvaerkSamling::KunstvaerkSamling(string etNavn)
{
	navn = etNavn;
}

void KunstvaerkSamling::addKunstvaerk(KunstVaerk k)
{
	kunstvaerker.push_back(k);
}

KunstvaerkSamling::KunstvaerkSamling()
{
}

KunstvaerkSamling::~KunstvaerkSamling()
{
}