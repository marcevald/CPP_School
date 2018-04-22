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

	virtual void addOM(Person); // Add ophavsmand
	virtual int getAntalOM();
	virtual string getTitel();


protected:
	vector<Person> ophavsMaend;
	int count = 0;
	string titel;
	int aar;
};