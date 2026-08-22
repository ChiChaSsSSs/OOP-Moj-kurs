#include "Teretni.h"
#include <iostream>

using namespace std;

Teretni::Teretni(const char* id, const char* nak, int md, double mmt, double tmt)
	: Avion(id, nak)
{
	this->maksimalniDolet = md;
	this->maksimalnaMasaTereta = mmt;
	this->trenutnaMasaTereta = tmt;
}

Teretni::~Teretni()
{
}

void Teretni::SacuvajAvionUFajl(ofstream& fajl)
{
	Avion::SacuvajAvionUFajl(fajl);
	fajl << this->maksimalniDolet << " " << this->maksimalnaMasaTereta << " " << this->trenutnaMasaTereta << endl;
}

void Teretni::Ispis(ostream& os)
{
	Avion::Ispis(os);
	os << this->maksimalniDolet << " " << this->maksimalnaMasaTereta << " " << this->trenutnaMasaTereta << endl;
}

bool Teretni::PopunjenPreko90() const
{
	double odnos = this->trenutnaMasaTereta / this->maksimalnaMasaTereta;
	if (odnos > 0.9)
		return true;
	return false;
}

double Teretni::izracunajStepenPopunjenosti() const
{
	return this->trenutnaMasaTereta / this->maksimalnaMasaTereta;
}
