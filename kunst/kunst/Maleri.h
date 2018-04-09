#pragma once
#include <string>
#include "KunstVaerk.h"
#include "Museum.h"



using namespace std;

class Maleri: public KunstVaerk
{
public:
	Maleri(string, int, int, int, Museum);
	~Maleri();
	Maleri();

protected:
	int laengde;
	int bredde;
	Museum etMuseum;

};