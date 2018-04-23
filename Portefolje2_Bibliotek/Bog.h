#pragma once
#include "Forfatter.h"
#include <string>

class Bog
{
public:
	Bog();
	~Bog();

	Bog(const string&, const Forfatter&, const int&);

	string getTitel();
protected:
	string titel;
	Forfatter forfatter;
	int udgivelsesAar;
};

