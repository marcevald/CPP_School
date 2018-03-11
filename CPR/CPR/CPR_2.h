#pragma once
#include <string>
#include <sstream>

using namespace std;

class CprNr
{
public:
	// Default constructor and destructor
	CprNr();
	~CprNr();

	CprNr(string);
	string getCprNr();
	void setCprNr(string);
	int getDag();
	int getMaaned();
	int getAar();
	int getDato();
	int getAlder();
	bool erMand();
	bool erKvinde();
	bool isValid();

private:
	string nummeret;
};