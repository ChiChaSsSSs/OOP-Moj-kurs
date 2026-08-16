#include "Niz.h"
#include<iostream>
using namespace std;

Niz::Niz()
{
	this->max = 10;
	this->trBr = 0;
	this->elementi = new int[max];
}

Niz::Niz(const Niz& n)
{
	this->max = n.max;
	this->trBr = n.trBr;
	this->elementi = new int[max];
	for (int i = 0; i < trBr; i++)
	{
		this->elementi = new int[max];
	}
}

Niz::Niz(int max)
{
	this->max = max;
	this->trBr = 0;
	this->elementi = new int[max];
}

Niz::Niz(int max, int trBr, int* elementi)
{
	this->max = max;
	this->trBr = trBr;
	this->elementi = new int[max];
	for (int i = 0; i < trBr; i++)
	{
		this->elementi[i] = elementi[i];
	}
}

Niz::~Niz()
{
	delete[] elementi;
}

void Niz::dodajUNiz(int element)
{
	if (trBr == max)
	{
		cout << "Niz je pun!" << endl;
		return;
	}
	elementi[trBr++] = element;
}

void Niz::zameniMesta()
{
	int indexMin = 0;
	int indexMax = 0;
	for (int i = 1; i < trBr; i++)
	{
		if (elementi[i] < elementi[indexMin])
		{
			indexMin = i;
		}
		if (elementi[i] > elementi[indexMax])
		{
			indexMax = i;
		}
	}
	int pom;
	pom = elementi[indexMax];
	elementi[indexMax] = elementi[indexMin];
	elementi[indexMin] = pom;
}

void Niz::ispisiNiz()
{
	cout << "Niz elemenata: ";
	for(int i = 0; i < trBr; i++)
	cout << elementi[i] << " ";
	cout << endl;
}

bool Niz::operator==(const Niz& n2) const
{
	if (this->trBr != n2.trBr)
	{
		cout << "Nizovi su razliciti jer nemaju isti broj elemenata!" << endl;
		return false;
	}

	for (int i = 0; i < trBr; i++)
	{
		if (this->elementi[i] != n2.elementi[i])
		{
			cout << "Nizovi su razliciti jer im elementi nisu jednaki!" << endl;
			return false;
		}
	}

	cout << "Nizovi su isti!" << endl;
	return true;
}

bool Niz::operator<(const Niz& n2) const
{
	int manji;
	if (this->trBr < n2.trBr)
		manji = this->trBr;
	else
		manji = n2.trBr;
	for (int i = 0; i < manji; i++)
		if (this->elementi[i] < n2.elementi[i])
			return true;
		else if (this->elementi[i] > n2.elementi[i])
			return false;
	if (n2.trBr > this->trBr)
		return true;
	else
		return false;
}

Niz Niz::operator+(const Niz& n2) const
{
	int noviMax = this->max + n2.max;
	int noviTrBroj = this->trBr + n2.trBr;

	int* noviElementi = new int[noviMax];
	for (int i = 0; i < this->trBr; i++)
		noviElementi[i] = this->elementi[i];
	for (int i = this->trBr; i < noviTrBroj; i++)
		noviElementi[i] = n2.elementi[i - this->trBr];

	Niz rezultujuciNiz(noviMax, noviTrBroj, noviElementi);
	delete[] noviElementi;
	return rezultujuciNiz;
}

Niz& Niz::operator=(const Niz& n2)
{
	if (this == &n2)
		return *this; // Za slucaj niz1 = niz1

	delete[] this->elementi;

	this->max = n2.max;
	this->trBr = n2.trBr;
	this->elementi = new int[this->max];
	for (int i = 0; i < this->trBr; i++)
		this->elementi[i] = n2.elementi[i];

	return *this;
}

ostream& operator<<(ostream& os, const Niz& n1)
{
	os << "Niz elemenata: ";
	for (int i = 0; i < n1.trBr; i++)
		os << n1.elementi[i] << " ";
	os << endl;
	return os;
}
