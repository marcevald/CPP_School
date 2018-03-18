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
	if (aD == 0 && aN != 0) // Makes sure you cannot divide by 0. But it is possible to input 0/0.
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
		int gcf = getGcf(aN, aD); //Find the greatest common factor of fraction (GCF)

		taeller = aN;
		naevner = aD;

		taeller = taeller / gcf;
		naevner = naevner / gcf;
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

int Broek::getGcf(int inN, int inD)
{
	int  gcf;

	//Abosolute values to calculate GCF
	int N = abs(inN); 
	int D = abs(inD);


	for (int i = 1; i <= N && i <= D; i++)
	{
		if (N % i == 0 && D % i == 0)
			gcf = i;
	}
		return gcf;

	
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


Broek Broek::operator+(Broek in1)
{
	Broek plus;
	plus.taeller = this->adder(in1).getTaeller();
	plus.naevner = this->adder(in1).getNaevner();

	return plus;
}

Broek Broek::operator-(Broek in1)
{
	Broek minus;
	minus.taeller = this->subtraher(in1).getTaeller();
	minus.naevner = this->subtraher(in1).getNaevner();

	return minus;
}

Broek Broek::operator*(Broek in1)
{
	Broek mult;
	mult.taeller = this->multiplicer(in1).getTaeller();
	mult.naevner = this->multiplicer(in1).getNaevner();

	return mult;
}

Broek Broek::operator/(Broek in1)
{
	Broek div;
	div.taeller = this->divider(in1).getTaeller();
	div.naevner = this->divider(in1).getNaevner();

	return div;
}




