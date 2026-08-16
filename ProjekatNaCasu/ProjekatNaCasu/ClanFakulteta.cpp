#include "ClanFakulteta.h"
#include <string>
#include <iostream>

using namespace std;

ClanFakulteta::ClanFakulteta()
{
	strcpy(this->ime, "");
	strcpy(this->prezime, "");
	this->maksimalanBrojPredmeta = 20;
	this->trenutniBrojPredmeta = 0;
	this->predmeti = new Predmet * [20];
}

ClanFakulteta::ClanFakulteta(const char* ime, const char* prezime, int mbp)
{
	strcpy(this->ime, ime);
	strcpy(this->prezime, prezime);
	this->maksimalanBrojPredmeta = mbp;
	this->trenutniBrojPredmeta = 0;
	this->predmeti = new Predmet * [mbp];
}

ClanFakulteta::~ClanFakulteta()
{
	// Ovo nikako nije dozvoljeno jer ClanFakulteta ne sme da brise predmete koji su zajednicki za sve clanove
	//for (int i = 0; i < trenutniBrojPredmeta; i++)
	//{
	//	delete predmeti[i];
	//}
	delete[] predmeti;
}

ostream& operator<<(ostream& os, ClanFakulteta& c)
{
	os << c.ime << " " << c.prezime << " " << endl;
	return os;
}
