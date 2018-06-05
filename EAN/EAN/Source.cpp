#include <iostream>
#include "EAN.h"

using namespace std;

int main()
{
	EAN e("9780674062313");

	cout << e.isValid() << endl << endl << endl;

	cout << e.convertISBNToEAN("ISBN 0-13-222220-5") << endl;

}