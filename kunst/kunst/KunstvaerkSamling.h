#pragma once
#include <string>
#include <vector>
#include "Maleri.h"
#include "Bog.h"
#include "Komposition.h"

using namespace std;

class KunstvaerkSamling
{
public:
	KunstvaerkSamling(string);
	void addKunstvaerk(KunstVaerk kunst);
	void findSangeMedFlereKomponister();
	void findMalerierPaaMuseum(string);
	void beregnAntalLaesteSider();
	
	KunstvaerkSamling();
	~KunstvaerkSamling();
protected:
	vector<KunstVaerk> kunstvaerker;
	string navn;
};
 