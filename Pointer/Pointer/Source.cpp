#include <iostream>
#include "ArrPoin.h"

using namespace std;

int main()
{
	bool stop = false;

	
		cout << "MAKE NEW ARRAY APPLICATION: " << endl;
		cout << "Input length of your array: " << endl;
		int a; cin >> a;

		ArrPoin newArray(a);
		
		while (!stop)
		{
		try
		{
			cout << "Set index: " << endl;
			int c; cin >> c;
			cout << "Set value: " << endl;
			int d; cin >> d;

			newArray.setIx(c, d);

			cout << "Which index do you want to access? " << endl;
			int b; cin >> b;
			cout << "At index " << b << " the integer " << newArray.getIx(b) << " resides" << endl;

			stop = true;
		}


		catch (const exception& exception)
		{
			cout << "You have tried to put a value in a non indexed position, try again!" << endl;

		}


		
	}
}