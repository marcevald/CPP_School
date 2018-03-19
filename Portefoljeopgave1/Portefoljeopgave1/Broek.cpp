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
		throw exception(); // Throw exception if try to divide by 0
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
	int nTaeller; //New numerator
	int nNaevner; //New common denominator

	int tmpTaeller1; //Temporary numerator 1
	int tmpTaeller2; //Temporary numerator 2

	int pTaeller = aF.getTaeller(); //Numerator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();
	
	if (Naevner != 0 && pNaevner != 0)
	{
		tmpTaeller1 = Taeller * pNaevner;
		tmpTaeller2 = pTaeller * Naevner;

		nTaeller = tmpTaeller1 + tmpTaeller2;
		nNaevner = pNaevner * Naevner;

	}
	else
	{
		nTaeller = Taeller + pTaeller;
		nNaevner = Naevner + pNaevner;
	}

	Broek ret(nTaeller, nNaevner);
	
	return ret;
}


Broek Broek::subtraher(Broek aF)
{
	int nTaeller; //New numerator
	int nNaevner; //New common denominator

	int tmpTaeller1; //Temporary numerator 1
	int tmpTaeller2; //Temporary numerator 2

	int pTaeller = aF.getTaeller(); //Numerator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();
	
	if (Naevner != 0 && pNaevner != 0)
	{
		tmpTaeller1 = Taeller * pNaevner;
		tmpTaeller2 = pTaeller * Naevner;

		nTaeller = tmpTaeller1 - tmpTaeller2;
		nNaevner = pNaevner * Naevner;

	}
	else
	{
		nTaeller = Taeller - pTaeller;
		nNaevner = Naevner - pNaevner;
	}

	Broek ret(nTaeller, nNaevner); //Instanciate new Broek Class ret, to return result.

	return ret;

}

Broek Broek::multiplicer(Broek aF)
{
	int nTaeller; //New numerator
	int nNaevner; //New common denominator

	int pTaeller = aF.getTaeller(); //Numerator from parameter
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
	int nTaeller; //New numerator
	int nNaevner; //New common denominator

	int pTaeller = aF.getTaeller(); //Numerator from parameter
	int pNaevner = aF.getNaevner(); //Denominator from parameter

	int Taeller = getTaeller();
	int Naevner = getNaevner();

	//Okay to do 0/x but not x/0
	if (Naevner != 0 && pNaevner != 0)
	{
		nTaeller = Taeller * pNaevner;
		nNaevner = Naevner * pTaeller;
	}

	if (Naevner == 0 && pNaevner != 0)
	{
		nTaeller = 0;
		nNaevner = 0;
	}
	if (pNaevner == 0 || pTaeller == 0)
		throw exception();

	Broek ret(nTaeller, nNaevner); //Instanciate new Broek Class ret, to return result.

	return ret;
}

//Operator overload for adding fractions
Broek Broek::operator+(Broek in1)
{
	Broek plus;
	plus.taeller = this->adder(in1).getTaeller();
	plus.naevner = this->adder(in1).getNaevner();

	return plus;
}
//Operator overload for subtracting fractions
Broek Broek::operator-(Broek in1)
{
	Broek minus;
	minus.taeller = this->subtraher(in1).getTaeller();
	minus.naevner = this->subtraher(in1).getNaevner();

	return minus;
}
//Operator overload for multiplying fractions
Broek Broek::operator*(Broek in1)
{
	Broek mult;
	mult.taeller = this->multiplicer(in1).getTaeller();
	mult.naevner = this->multiplicer(in1).getNaevner();

	return mult;
}
//Operator overload for dividing fractions
Broek Broek::operator/(Broek in1)
{
	Broek div;
	div.taeller = this->divider(in1).getTaeller();
	div.naevner = this->divider(in1).getNaevner();

	return div;
}




