#pragma once
#include "Predmet.h"
#include <iostream>

using namespace std;

class ClanFakulteta {
protected:
	char ime[20];
	char prezime[20];
	Predmet** predmeti;
	//Predmet* mojiPredmeti[20]; Staticki nije fleksibilno
	int maksimalanBrojPredmeta;
	int trenutniBrojPredmeta;
public:
	ClanFakulteta();
	ClanFakulteta(const char* ime, const char* prezime, int mbp);
	virtual ~ClanFakulteta();
	virtual void dodajPredmet(Predmet* p, int ocena = 5) = 0;
	virtual void ispisiPredmete() = 0;
	virtual void ispisiClana() = 0;

	friend ostream& operator<<(ostream& os, ClanFakulteta& c);
};
