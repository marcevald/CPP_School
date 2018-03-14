#include "ArrPoin.h"
#include <stdexcept>

using namespace std;



	ArrPoin::ArrPoin()
	{
	}
	ArrPoin::~ArrPoin()
	{
	}

	ArrPoin::ArrPoin(int aSize)
	{
		//Initialize Array
		arraySize = aSize;
		varSizeArray = new int[aSize];

		//Initialize Array with all 0
		for (int i = 0; i < arraySize; i++)
		{
			varSizeArray[i] = 0;
		}
	}

	void ArrPoin::setIx(int anI, int aV)
	{
		if (anI > arraySize)
		{
			throw exception();
		}

		varSizeArray[anI] = aV;
	}

	int ArrPoin::getIx(int anI)
	{
		return varSizeArray[anI];
	}