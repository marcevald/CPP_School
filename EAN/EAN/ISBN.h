#pragma once

using namespace std;

class ISBN
{
public:
	ISBN();
	~ISBN();

	ISBN(string);
	//string convertISBNtoEAN();

protected:
	string iNummer;
};

