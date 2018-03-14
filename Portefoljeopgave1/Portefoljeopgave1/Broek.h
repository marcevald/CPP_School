#pragma once


class Broek
{
public:
	Broek();
	~Broek();

	Broek(int aN, int aD);
	int getTaeller();
	int getNaevner();
	Broek adder(Broek aF);
	Broek subtraher(Broek aF);
	Broek multiplicer(Broek aF);
	Broek divider(Broek aF);
	Broek operator+ (Broek);
	Broek operator- (Broek);
	Broek operator* (Broek);
	Broek operator/ (Broek);



private:
	int getGcd(int inN, int inD); //Get greastest common denominator (GCD)
	int taeller;
	int naevner;

};