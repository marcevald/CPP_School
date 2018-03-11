#include "CPR_2.h"
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
/*
	string dag = nummeret.substr(0, 1);
	int num;

	stringstream toint(dag); // Convert to integer
	toint >> num;

	return num;

	*/
	return 0;
}

int CprNr::getMaaned()
{
	return 0;
}

int CprNr::getAar()
{
	return 0;
}

int CprNr::getDato() //Returns date in format YYYYMMDD
{
	return 0;
}

int CprNr::getAlder()
{
	return 0;
}