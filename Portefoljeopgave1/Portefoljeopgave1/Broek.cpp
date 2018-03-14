#include "Broek.h"
#include <stdexcept>

using namespace std;

Broek::Broek()
{
}
Broek::~Broek()
{
}


Broek::Broek(int aN, int aD)
{
	if (aD == 0)
	{
		throw exception();
	}
	
	if (aN == 0)
	{
		taeller = 0;
		naevner = 0;
	}
	else
	{
		int gcd = getGcd(aN, aD); //Find the greatest common denominator of fraction (GCD)

		taeller = aN;
		naevner = aD;

		taeller = taeller / gcd;
		naevner = naevner / gcd;
	}

	// Make sure -/- is +/+ and +/- is -/+
	if (taeller < 0 && naevner < 0)
		naevner = abs(naevner);

	if (naevner < 0 && taeller > 0)
	{
		naevner = abs(naevner);
		taeller = taeller * (-1);
	}
}

int Broek::getTaeller()
{
	return taeller;
}

int Broek::getNaevner()
{
	return naevner;
}

int Broek::getGcd(int inN, int inD)
{
	int  gcd;

	int N = abs(inN);
	int D = abs(inD);


	for (int i = 1; i <= N && i <= D; i++)
	{
		if (N % i == 0 && D % i == 0)
			gcd = i;
	}
		return gcd;

	
}

Broek Broek::adder(Broek aF)
{
	int nTaeller; //New nominator
	int nNaevner; //New common denominator

	int tmpTaeller1; //Temporary nominator 1
	int tmpTaeller2; //Temporary nominator 2

	int pTaeller = aF.getTaeller(); //Nominator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();

	tmpTaeller1 = Taeller * pNaevner;
	tmpTaeller2 = pTaeller * Naevner;

	nTaeller = tmpTaeller1 + tmpTaeller2;
	nNaevner = pNaevner * Naevner;

	Broek ret(nTaeller, nNaevner);
	
	return ret;
}


Broek Broek::subtraher(Broek aF)
{
	int nTaeller; //New nominator
	int nNaevner; //New common denominator

	int tmpTaeller1; //Temporary nominator 1
	int tmpTaeller2; //Temporary nominator 2

	int pTaeller = aF.getTaeller(); //Nominator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();

	tmpTaeller1 = Taeller * pNaevner;
	tmpTaeller2 = pTaeller * Naevner;
	
	nTaeller = tmpTaeller1 - tmpTaeller2;
	nNaevner = pNaevner * Naevner;

	Broek ret(nTaeller, nNaevner); //Instanciate new Broek Class ret, to return result.

	return ret;

}

Broek Broek::multiplicer(Broek aF)
{
	int nTaeller; //New nominator
	int nNaevner; //New common denominator

	int pTaeller = aF.getTaeller(); //Nominator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller(); 
	int Naevner = getNaevner();

	nTaeller = Taeller * pTaeller;
	nNaevner = Naevner * pNaevner;

	Broek ret(nTaeller, nNaevner); //Instanciate new Broek Class ret, to return result.

	return ret;

}


Broek Broek::divider(Broek aF)
{
	int nTaeller; //New nominator
	int nNaevner; //New common denominator

	int pTaeller = aF.getTaeller(); //Nominator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();

	//Make sure -/- is positive, abd +/- is -/+
	nTaeller = Taeller * pNaevner;
	nNaevner = Naevner * pTaeller;

	Broek ret(nTaeller, nNaevner); //Instanciate new Broek Class ret, to return result.

	return ret;

}

/*
Broek Broek::operator+(Broek in)
{

}

*/



