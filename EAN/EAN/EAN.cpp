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

string EAN::convertISBNToEAN(string anIsbn)
{
	string returnString = "";

	returnString.append("978");
	returnString.append(anIsbn.substr(5,1));
	returnString.append(anIsbn.substr(7,2));
	returnString.append(anIsbn.substr(10,6));

	for (int i = 0; i < 10; i++ )
	{
		string testString = returnString + to_string(i);

		if(isValid(testString))
		{
			return testString;
		}
	}
return "Not a Valid ISBN Number";
}

bool EAN::isValid()
{
	return isValid(nummer);
}

bool EAN::isValid(string anEAN)
{
	int tal;
	int sumEven = 0;
	int sumUneven = 0;
	int finalsum = 0;

	for (int i = 0; i < 13; i++)
	{
		tal = stoi(anEAN.substr(i,1));

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

