#pragma once
#include "Forfatter.h"
#include <string>

class Bog
{
public:
	Bog();
	~Bog();

	Bog(const string&, const Forfatter&, const int&);
protected:
	string titel;
	Forfatter forfatter;
	int udgivelsesAar;
};

