#include "Pista.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Pista::Pista(int mba)
{
	this->trenutniBrojAviona = 0;
	this->maksimalniBrojAviona = mba;
	this->avioni = new Avion * [mba];
}

Pista::~Pista()
{
	delete[] avioni;
}

void Pista::Dodaj(Avion* a)
{
	if (trenutniBrojAviona >= maksimalniBrojAviona)
	{
		cout << "Nema vise mesta za avione" << endl;
		return;
	}
	avioni[trenutniBrojAviona++] = a;
}

void Pista::SacuvajUFajl(const char* imeFajla)
{
	ofstream fajl = ofstream(imeFajla);

	for (int i = 0; i < trenutniBrojAviona; i++)
		avioni[i]->SacuvajAvionUFajl(fajl);

	fajl.close();
}

Pista Pista::PopunjeniPreko95()
{
	Pista rez(trenutniBrojAviona);
	for (int i = 0; i < trenutniBrojAviona; i++)
	{
		if (avioni[i]->PopunjenPreko90())
		{
			rez.avioni[rez.trenutniBrojAviona] = avioni[i];
			rez.trenutniBrojAviona++;
		}
	}
	return rez;
}

void Pista::ReorganizujAvioneNaPisti()
{
	int indexMax = 0;
	double maxStepenPopunjenosti;
	for (int i = 0; i < trenutniBrojAviona - 1; i++)
	{
		indexMax = i;
		maxStepenPopunjenosti = avioni[i]->izracunajStepenPopunjenosti();
		for (int j = i + 1; j < trenutniBrojAviona; j++)
		{
			if (avioni[j]->izracunajStepenPopunjenosti() > maxStepenPopunjenosti)
			{
				indexMax = j;
				maxStepenPopunjenosti = avioni[j]->izracunajStepenPopunjenosti();
			}
		}
		Avion* pom = avioni[i];
		avioni[i] = avioni[indexMax];
		avioni[indexMax] = pom;
	}
}

Pista Pista::AvioKompanijaSaNajvecimStepenomPopunjenosti()
{
	this->ReorganizujAvioneNaPisti();
	Pista rez(trenutniBrojAviona);
	if (trenutniBrojAviona > 0)
	{
		rez.Dodaj(avioni[0]);
		for (int i = 1; i < trenutniBrojAviona; i++)
		{
			if (!strcmp(avioni[i]->getNazivAvioKompanije(), avioni[0]->getNazivAvioKompanije()))
			{
				rez.Dodaj(avioni[i]);
			}
		}
	}
	return rez;
}

ostream& operator<<(ostream& os, const Pista& p)
{
	for (int i = 0; i < p.trenutniBrojAviona; i++)
		p.avioni[i]->Ispis(os);
	return os;
}
