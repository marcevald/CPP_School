#pragma once
#include <string>
#include "KunstVaerk.h"


using namespace std;

class Bog: public KunstVaerk
{
public:
	Bog();
	~Bog();

	Bog(string, int, string, int);
protected:
	string genre;
	int antalSider;
};