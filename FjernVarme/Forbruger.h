#pragma once
#include <string>

using namespace std;

class Forbruger
{
public:
    Forbruger(string etNavn, int etMaalerNr, int etMaalerMax);
    Forbruger();
    ~Forbruger();

    int getMaalerNr();
    string getNavn();
    void setNavn(string etNavn);
    int aflaesMaaler(int enAflaesning);
    int beregnForbrug();


private:
    string navn;
    int maalerNr;
    int nyAflaesning;
    int glAflaesning;
    int maalerMax;
};

