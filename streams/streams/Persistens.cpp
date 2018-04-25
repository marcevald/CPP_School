#include "Persistens.h"
#include <fstream>
#include <iostream>
using namespace std;

Persistens::Persistens()
{
}

string Persistens::read()
{
	ifstream inFile;
	inFile.open("test.txt", ifstream::in);
	string text;
	text += inFile.get();
	while (inFile.good())
		text += inFile.get();
	return text;
}
void Persistens::write(string text)
{
	ofstream outFile("test.txt");
	outFile << text;
	int i = 65536;
	outFile << i;
	outFile.close();
}



void Persistens::writePerson(Person p)
{
	ofstream outFile("person.txt");
	outFile << p.getNavn().size() << p.getNavn() << p.getNationalitet().size();
	outFile << p.getNationalitet() << p.getFoedeaar() << p.getDoedsaar();
}



Person Persistens::readPerson()
{
	ifstream inFile;
	inFile.open("person.txt", ifstream::in);
	
	string laengde = ""; string navn = "";

	laengde += inFile.get();
	while (isdigit(inFile.peek()))
		laengde += inFile.get();
	int l = stoi(laengde);
	for (int i = 0; i < l; i++)
		navn += inFile.get();

	laengde = ""; string nationalitet = "";

	laengde += inFile.get();
	while (isdigit(inFile.peek()))
		laengde += inFile.get();
	l = stoi(laengde);
	for (int i = 0; i < l; i++)
		nationalitet += inFile.get();

	string aar = "";
	for (int i = 0; i < 4; i++)
		aar += inFile.get();
	int foedeAar = stoi(aar);

	aar = "";
	for (int i = 0; i < 4; i++)
		aar += inFile.get();
	int doedsAar = stoi(aar);

	return(Person(navn, nationalitet, foedeAar, doedsAar));
}

Persistens::~Persistens()
{
}

