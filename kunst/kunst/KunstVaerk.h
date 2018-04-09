#pragma once
#include <string>
#include "Person.h"
#include <vector>

using namespace std;

class KunstVaerk
{
public:
	KunstVaerk();
	~KunstVaerk();

	void addOM(Person); // Add ophavsmand
	string getOphavsMaend(); // Get ophavsmaend ----EKSTRA----

protected:
	Person ophavsMaend[4];
	int count = 0;
	string titel;
	int aar;
};