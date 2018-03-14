#include <iostream>
#include <stdexcept>
#include "Broek.h"

using namespace std;

int main()
{
	int t; //Define taeller variable
	int n; //Define naevner variable 

	bool stop = false; //Stop variable

	while (!stop) //If not stop continue
	{
		cout << "Indtast taelleren: " << endl;
		cin >> t;
		cout << "Indtast naevneren: " << endl;
		cin >> n;

		try
		{
			Broek b1(t, n); //Instanciate b1 object of Class Broek


			cout << "Indtast taelleren: " << endl;
			cin >> t;
			cout << "Indtast naevneren: " << endl;
			cin >> n;

			Broek b2(t, n); //Instanciate b1 object of Class Broek

			//Output the two fractions, contained in b1 and b2.
			//Using getTaeller() and getNaevner() methods.
			//taeller and naevner are both shortened by the greatest common denominator
			cout << "B1: " << b1.getTaeller() << "/" << b1.getNaevner() << endl;
			cout << "B2: " << b2.getTaeller() << "/" << b2.getNaevner() << endl;
			cout << "\n \n" << endl;


			cout << "Resultatet af addition: " << b1.adder(b2).getTaeller() << "/" << b1.adder(b2).getNaevner() << endl;

			cout << "Resultatet af subtraktion: " << b1.subtraher(b2).getTaeller() << "/" << b1.subtraher(b2).getNaevner() << endl;

			cout << "Resultatet af multiplikation: " << b1.multiplicer(b2).getTaeller() << "/" << b1.multiplicer(b2).getNaevner() << endl;

			cout << "Resultatet af division: " << b1.divider(b2).getTaeller() << "/" << b1.divider(b2).getNaevner() << endl;

			stop = true; //If not divide by 0, stop program.
		}

		//If divide by 0 output error message, and try again.
		catch (const exception& exception)
		{
			cout << "You have tried to divide by 0 -- Please Try Again -- " << endl;
		}
	}
}