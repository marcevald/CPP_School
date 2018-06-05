#include "Distrikt.h"
#include <iostream>

#include <string>

using namespace std;

Distrikt::Distrikt(int enPrisM3)
{
    prisM3 = enPrisM3;
    antalForbrugere = 0; //Start med nul forbrugere.
}

void Distrikt::addForbruger(Forbruger enForbruger)
{
    forbrugere[antalForbrugere] = enForbruger;
    antalForbrugere++;
}

int Distrikt::afregnForbruger(int etMaalerNr)
{
    int forbrug = 10;

    for (int i = 0; i < antalForbrugere; i++)
    {
        
        if (forbrugere[i].getMaalerNr() == etMaalerNr) 
            forbrug = forbrugere[i].beregnForbrug(); 

    }   
    cout << forbrug << endl;
    if(forbrug > 0)
        return forbrug;
    else
        return -1;
        
}

Distrikt::Distrikt()
{
}
Distrikt::~Distrikt()
{
}

