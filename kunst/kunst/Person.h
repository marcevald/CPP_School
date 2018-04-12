#pragma once
#include <string>

using namespace std;

class Person

{
public:
	~Person();
	Person();

	Person(string, string, int, int);
	//string getNavn(); //----EKSTRA----

protected:
	string navn;
	string nationalitet;
	int foedeaar;
	int doedsaar;

};