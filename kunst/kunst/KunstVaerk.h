#pragma once
#include <string>
#include "Person.h"
#include <vector>

using namespace std;

class KunstVaerk
{
public:
	KunstVaerk();
	virtual ~KunstVaerk();

	virtual void addOM(Person); // Add ophavsmand
	string getOphavsMaend(); // Get ophavsmaend ----EKSTRA----

protected:
	vector<Person> ophavsMaend;
	//Person ophavsMaend[4];
	int count = 0;
	string titel;
	int aar;
};