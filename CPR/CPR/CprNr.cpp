#include "CprNr.h"
#include <sstream>

using namespace std;

//Default Constructor and destructor.

CprNr::CprNr()
{
}

CprNr::~CprNr()
{
}


CprNr::CprNr(string etCprNr)
{
	nummeret = etCprNr;
}

string CprNr::getCprNr()
{
	return nummeret;
}

void CprNr::setCprNr(string nytNummer)
{
	nummeret = nytNummer;
}

int CprNr::getDag()
{
	string str = nummeret;
	int num;

	stringstream toint(str); // Convert to integer
	toint >> num;

	return num / 100000000;
}

int CprNr::getMaaned()
{
	string str = nummeret;
	int num;
	
	stringstream toint(str); // Convert to integer
	toint >> num;

	return (num / 1000000) % 100;
}

int CprNr::getAar()
{
	string str = nummeret;
	int num;
	
	stringstream toint(str); // Convert to integer
	toint >> num;

	int aar = (num / 10000) % 100;
	
	int syv = (num / 1000) % 10;


	if (syv == 4 || syv == 5)
		return 1800 + aar;
	
	if (syv == 0 || syv == 1 || syv == 3)
		return 1900 + aar;
	
	if (syv == 6 || syv == 7 || syv == 8 || syv == 9)
		return 2000 + aar;

}

int CprNr::getDato() //Returns date in format YYYYMMDD
{
	return (getAar() * 10000) + ((getMaaned() * 100) + getDag());
}

int CprNr::getAlder()
{

}