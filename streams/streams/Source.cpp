#include "Persistens.h"
#include <iostream>
using namespace std;
void swapRef(int &x, int &y) {
	int temp;
	temp = x; /* save the value at address x */
	x = y;    /* put y into x */
	y = temp; /* put x into y */

	return;
}
void swapVal(int x, int y) {
	int temp;
	temp = x; /* save the value at address x */
	x = y;    /* put y into x */
	y = temp; /* put x into y */

	return;
}
void setNationalitetVal(Person p, string n)
{
	p.setNationalitet(n);
}
void setNationalitetRef(Person& p, string n)
{
	p.setNationalitet(n);
}
int main()
{
	int a = 100; int b = 200;
	swapVal(a, b);
	cout << "a: " << a << "  b: " << b << endl;
	swapRef(a, b);
	cout << "a: " << a << "  b: " << b << endl;
	
	
	Persistens persistens;
	
	persistens.write("and I looked and frowned, and the monster was me");
	cout << persistens.read() << endl;	
	Person mh("Rolf Svendsen", "dansk", 1953, 1988);
	persistens.writePerson(mh);
	
	Person fraFil;
	fraFil = persistens.readPerson();

	cout << fraFil.getNavn() << " " << fraFil.getNationalitet() << " " << fraFil.getFoedeaar() << " " << fraFil.getDoedsaar() << endl; 
	
	

	
}