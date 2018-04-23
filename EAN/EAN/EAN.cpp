#include "EAN.h"
#include <iostream>

using namespace std;

EAN::EAN()
{
}
EAN::~EAN()
{
}


EAN::EAN(string etNummer)
{
	nummer = etNummer;
}

bool EAN::isValid()
{
	int tal;
	int sumEven = 0;
	int sumUneven = 0;
	int finalsum = 0;

	for (int i = 0; i < 13; i++)
	{
		tal = stoi(nummer.substr(i,1));

		if (i % 2 != 0)
		{
			sumUneven += tal;
		}

		if (i % 2 == 0)
		{
			sumEven += tal;
		}
	}

	finalsum = sumUneven * 3 + sumEven;
	
	if (finalsum % 10 != 0)
	{
		return false;
	}
	else
		return true;

}

