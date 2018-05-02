#pragma once
#include <string>

using namespace std;

class EAN
{
public: 
	EAN(string etNummer);
	bool isValid();
	bool isValid(string);
	string convertISBNToEAN(string);

	EAN();
	~EAN();
protected:
	string nummer;
};