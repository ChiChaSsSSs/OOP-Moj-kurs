#include "Vozilo.h"
#include<string>
#include <iostream>

using namespace std;

Vozilo::Vozilo(const char* regOznaka, double duzina, int trMasa)
{
	this->regOznaka = new char[strlen(regOznaka) + 1];
	strcpy(this->regOznaka, regOznaka);
	this->duzina = duzina;
	this->trenutnaMasa = trMasa;
}

Vozilo::~Vozilo()
{
	delete[] regOznaka;
}

double Vozilo::koeficijentMase()
{
	return this->trenutnaMasa / this->duzina;
}

void Vozilo::ispisiSpecAtribute(ostream& os) const
{

}

char* Vozilo::getRegOznaka()
{
	return regOznaka;
}

double Vozilo::getDuzina()
{
	return duzina;
}

int Vozilo::getTrMasa()
{
	return trenutnaMasa;
}

bool Vozilo::jeHibrid()
{
	return false;
}

ostream& operator<<(ostream& os,const Vozilo& v)
{
	os << v.regOznaka << " " << v.duzina << " " << v.trenutnaMasa << " ";
	v.ispisiSpecAtribute(os);
	return os;
}
