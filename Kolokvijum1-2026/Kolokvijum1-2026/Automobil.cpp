#include "Automobil.h"
#include <iostream>

using namespace std;

Automobil::Automobil(const char* regOznaka, double duzina, int trMasa, int brS, int oznaka)
	:Vozilo(regOznaka, duzina, trMasa)
{
	this->brSedista = brS;
	this->oznaka = oznaka;
}

Automobil::~Automobil()
{
}

void Automobil::ispisi()
{
	cout << this->regOznaka << " " << this->duzina << " " << trenutnaMasa << " "
		<< this->brSedista << " " << this->oznaka << endl;
}

void Automobil::ispisiSpecAtribute(ostream& os) const
{
	os << this->brSedista << " " << this->oznaka << endl;
}

bool Automobil::jeHibrid()
{
	if (oznaka == 'H')
		return true;
	return false;
}
