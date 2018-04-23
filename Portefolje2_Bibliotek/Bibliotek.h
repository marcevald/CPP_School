#pragma once

#include "Person.h"
#include "Eksemplar.h"
#include "Udlaan.h"
#include <vector>
#include <string>

using namespace std;

class Bibliotek
{
public:
	Bibliotek();
	~Bibliotek();
	
	void tilfoejEks(Eksemplar&);
	void tilfoejUdl(Udlaan&);

	int tjekOmBogErTilgaengelig(const string&);
	void listLaanersLaan(const string&);
	bool titelIEksemplarer();

protected:
	vector<Udlaan> udlaan;
	vector<Eksemplar> eksemplarer;
};

