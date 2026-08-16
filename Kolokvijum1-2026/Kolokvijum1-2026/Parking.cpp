#include "Parking.h"
#include <iostream>

using namespace std;

Parking::Parking(int max)
{
	this->trBr = 0;
	this->max = max;
	this->vozila = new Vozilo * [max];
}

Parking::~Parking()
{
	delete[] vozila;
}

void Parking::Add(Vozilo* v)
{
	if (this->trBr == this->max)
	{
		cout << "Nema mesta na parkingu!!!";
		return;
	}

	vozila[trBr++] = v;
}

int Parking::BrojVozila()
{
	return this->max;
}

void Parking::print()
{
	cout << "Vozila: " << endl;
	for (int i = 0; i < trBr; i++)
	{
		vozila[i]->ispisi();
	}
}

void Parking::UkupnaDuzinaIMasa(double* duzina, int* masa)
{
	*masa = 0;
	*duzina = 0;
	for (int i = 0; i < trBr; i++)
	{
		*masa += vozila[i]->getTrMasa();
		*duzina += vozila[i]->getDuzina();
	}
}

Vozilo* Parking::NajveciKoeficijent()
{
	int indexMax = -1;
	double kM = 0;
	for (int i = 0; i < trBr; i++)
	{
		if (vozila[i]->jeHibrid() && vozila[i]->koeficijentMase() > kM)
		{
			kM = vozila[i]->koeficijentMase();
			indexMax = i;
		}
	}
	if (indexMax != -1)
		return vozila[indexMax];
	return new Automobil("", 0, 0, 0, ' ');
}

ostream& operator<<(ostream& os, const Parking& p)
{
	os << "Vozila: " << endl;
	for (int i = 0; i < p.trBr; i++)
	{
		os << p.vozila[i]->getRegOznaka() << " " << p.vozila[i]->getDuzina() << " "
			<< p.vozila[i]->getTrMasa() << " ";
		p.vozila[i]->ispisiSpecAtribute(os);
	}
	return os;
}
