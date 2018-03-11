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
	string newstr = str.substr(0, 2);
	int num;

	stringstream toint(newstr); // Convert to integer
	toint >> num;

	return num;	
}

int CprNr::getMaaned()
{
	string str = nummeret;
	string newstr = str.substr(2, 2);
	int num;

	stringstream toint(newstr); // Convert to integer
	toint >> num;

	return num;
}

int CprNr::getAar()
{
	string str = nummeret;
	string newstr = str.substr(4, 2); // Get position 4 and 5 - The year.
	string numsyv = str.substr(6, 1); // Get position 7 - Decide if 18, 19 or 20
	int num;
	int syv;
	

	stringstream toint(newstr); // Convert year string to integer
	toint >> num;

	stringstream toint1(numsyv); // Convert year factor to integer
	toint1 >> syv;

	if (syv == 4 || syv == 5)
		return 1800 + num;
	
	if (syv == 0 || syv == 1 || syv == 3)
		return 1900 + num;
	
	if (syv == 6 || syv == 7 || syv == 8 || syv == 9)
		return 2000 + num;

}

int CprNr::getDato() //Returns date in format YYYYMMDD
{

	return (getAar() * 10000) + ((getMaaned() * 100) + getDag());
}

int CprNr::getAlder()
{
	return 0;
}