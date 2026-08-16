#include "Kamion.h"
#include <iostream>

using namespace std;

Kamion::Kamion(const char* regOznaka, double duzina, int trMasa, int max, int brPrikolica)
	:Vozilo(regOznaka, duzina, trMasa)
{
	this->maxVucnaMasa = max;
	this->brPrikolica = brPrikolica;
}

Kamion::~Kamion()
{
}

void Kamion::ispisi()
{
	cout << this->regOznaka << " " << this->duzina << " " << trenutnaMasa << " "
		<< this->maxVucnaMasa << " " << this->brPrikolica << endl;
}

void Kamion::ispisiSpecAtribute(ostream& os) const
{
	os << this->maxVucnaMasa << " " << this->brPrikolica << endl;
}
