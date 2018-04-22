#pragma once
#include <string>
#include <iostream>
#include "KunstvaerkSamling.h"

using namespace std;

int main()
{
	
	KunstvaerkSamling ks("Min samling");
	
	Museum smk("Statens Museum for Kunst", "S�lvtorvet, K�benhavn");
	Museum fsm("Fyns Stifts Museum", "Jernbanegade, Odense");
	
	
	Person lar("L.A. Ring", "dansk", 1854, 1933);
	Maleri kal("Kalkmanden", 1908, 80, 65, smk);
	kal.addOM(lar);

	Person cwe("C. W. Eckersberg", "dansk", 1783, 1853);
	Maleri rus("Et russisk linjeskib til ankers ved Helsing�r", 1828, 140, 135, fsm);
	rus.addOM(cwe);

	
	Person k�b("Christian K�bke", "dansk", 1810, 1848);
	Maleri par("Parti fra Dosseringen mod N�rrebro", 1841, 100, 85, smk);
	par.addOM(k�b);

	
	ks.addKunstvaerk(kal);
	ks.addKunstvaerk(rus);
	ks.addKunstvaerk(par);

	
	Person mah("Martin A. Hansen", "dansk", 1909, 1955);
	
	
	Bog l("L�gneren", 1950, "Prosa", 232);
	l.addOM(mah);
	
	Person hs("Hans Scherfig", "dansk", 1905, 1978);
	Bog f("Den forsvundne Fuldm�gtig", 1937, "Prosa", 222);
	f.addOM(hs);

	Person ts("Therkel Str�de", "dansk", 1958, 0);
	Person dl("Dennis Larsen", "dansk", 1966, 0);
	Bog s("En skole i vold", 2014, "Faglitteratur", 347);
	s.addOM(ts);
	s.addOM(dl);
	
	ks.addKunstvaerk(l);
	ks.addKunstvaerk(f);
	ks.addKunstvaerk(s);
	
	
	Person pm("Paul McCartney", "britisk", 1942, 0);
	Person jl("John Lennon", "britisk", 1940, 1980);
	Komposition y("Yesterday", 1965, "Pop", 211);
	
	y.addOM(pm);
	y.addOM(jl);

	ks.addKunstvaerk(y);

	Person db("David Bowie", "britisk", 1947, 2016);
	Komposition lom("Life on Mars", 1971, "Rock", 309);
	lom.addOM(db);
	ks.addKunstvaerk(lom);

	ks.findSangeMedFlereKomponister();

	cout << y.getAntalOM() << endl;
	cout << y.getTitel() << endl;
}