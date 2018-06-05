#include <string>
#include "Forbruger.h"

using namespace std;

Forbruger::Forbruger(string etNavn, int etMaalerNr,int etMaalerMax)
{
    navn = etNavn;
    maalerNr = etMaalerNr;
    maalerMax = etMaalerMax;
    nyAflaesning = 0;
    glAflaesning = 0;
}

int Forbruger::getMaalerNr()
{
    return maalerNr;
}

string Forbruger::getNavn()
{
    return navn;
}

void Forbruger::setNavn(string etNavn)
{
    navn = etNavn;
}

int Forbruger::aflaesMaaler(int enAflaesning)
{
    glAflaesning = nyAflaesning;

    nyAflaesning = enAflaesning;
}

int Forbruger::beregnForbrug()
{
    if (nyAflaesning < glAflaesning)
        {
            return (maalerMax-glAflaesning) + nyAflaesning;
        }
    else
    return nyAflaesning - glAflaesning;
}


Forbruger::Forbruger()
{   
}

Forbruger::~Forbruger()
{   
}


