#include "Putnicki.h"
#include <iostream>

using namespace std;

Putnicki::Putnicki(const char* id, const char* nak, int ubs, int bns, int bsbk, double mt)
	: Avion(id, nak)
{
	this->ukupanBrojSedsita = ubs;
	this->brojNepopunjenihSedista = bns;
	this->brojSedistaUBiznisKlasi = bsbk;
	this->masaTereta = mt;
}

Putnicki::~Putnicki()
{
}

void Putnicki::SacuvajAvionUFajl(ofstream& fajl)
{
	Avion::SacuvajAvionUFajl(fajl);
	fajl << this->ukupanBrojSedsita << " " << this->brojNepopunjenihSedista << " " << this->brojSedistaUBiznisKlasi << " " << this->masaTereta << endl;
}

void Putnicki::Ispis(ostream& os)
{
	Avion::Ispis(os);
	os << this->ukupanBrojSedsita << " " << this->brojNepopunjenihSedista << " " << this->brojSedistaUBiznisKlasi << " " << this->masaTereta << endl;
}

bool Putnicki::PopunjenPreko90() const
{
	double odnos = (double)(this->ukupanBrojSedsita - this->brojNepopunjenihSedista) / this->ukupanBrojSedsita;
	if (odnos > 0.9)
		return true;
	return false;
}

double Putnicki::izracunajStepenPopunjenosti() const
{
	return (double)(this->ukupanBrojSedsita - this->brojNepopunjenihSedista) / this->ukupanBrojSedsita;
}
