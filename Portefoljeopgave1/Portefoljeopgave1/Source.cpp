#include <iostream>
#include <stdexcept>
#include "Broek.h"

using namespace std;

int main()
{
	int inT; //Define taeller variable
	int inN; //Define naevner variable 

	bool stop = false; //Stop variable

	while (!stop) //If not stop continue
	{
		cout << "Indtast taelleren: " << endl;
		cin >> inT;
		cout << "Indtast naevneren: " << endl;
		cin >> inN;

		try
		{
			Broek b1(inT, inN); //Instanciate b1 object of Class Broek


			cout << "Indtast taelleren: " << endl;
			cin >> inT;
			cout << "Indtast naevneren: " << endl;
			cin >> inN;

			Broek b2(inT, inN); //Instanciate b1 object of Class Broek

			//Output the two fractions, contained in b1 and b2.
			//Using getTaeller() and getNaevner() methods.
			//taeller and naevner are both shortened by the greatest common denominator
			cout << "B1: " << b1.getTaeller() << "/" << b1.getNaevner() << endl;
			cout << "B2: " << b2.getTaeller() << "/" << b2.getNaevner() << endl;
			cout << "\n \n" << endl;

			Broek b3 = b1 + b2;
			Broek b4 = b1 - b2;
			Broek b5 = b1 * b2;
			Broek b6 = b1 / b2;

			cout << "Addition result: " << b3.getTaeller() << " / " << b3.getNaevner() << endl;
			cout << "Subtraction result: " << b4.getTaeller() << " / " << b4.getNaevner() << endl;
			cout << "Multiplication result: " << b5.getTaeller() << " / " << b5.getNaevner() << endl;
			cout << "Division result: " << b6.getTaeller() << " / " << b6.getNaevner() << endl;
		

			stop = true; //If not divide by 0, stop program.
		}

		//If divide by 0, output error message, and try again.
		catch (const exception& exception)
		{
			cout << "You have tried to divide by 0 -- Please Try Again -- " << endl;
		}
	}

	
}