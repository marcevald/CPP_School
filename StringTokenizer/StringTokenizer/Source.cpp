#include <iostream>
#include "StringTokenizer.h"

using namespace std;

int main()
{

	StringTokenizer test("Hej Med Dig man!");

	cout << test.nextToken() << endl;

	cout << test.getIndeks() << endl;

	cout << test.nextToken() << endl;
}
