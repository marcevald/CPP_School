#pragma once
#include <string>

using namespace std;

class EAN
{
public: 
	EAN(string etNummer);
	bool isValid();

	EAN();
	~EAN();
protected:
	string nummer;
};