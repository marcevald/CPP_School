#include <iostream>
#include "CprNr.h"

using namespace std;

int main()
{
	string cpr;
	cout << "Indtast venligst dit CPR-nummer: " << endl;
	cin >> cpr;
	
	//Instanciate newCpr. 
	CprNr newCpr(cpr);

	cout << "Dit CPR-nummer er: " << newCpr.getCprNr() << endl;
	cout << "Dagen du er foedt: " << newCpr.getDag() << endl;
	cout << "Maaneden du er foedt: " << newCpr.getMaaned() << endl;
	cout << "Du er foedt i Aar: " << newCpr.getAar() << endl;
	cout << "Du er foedt paa denne dato: " << newCpr.getDato() << endl;

}
