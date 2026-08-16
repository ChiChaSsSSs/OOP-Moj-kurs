#include "Profesor.h"
#include <string>
#include <iostream>

using namespace std;

Profesor::Profesor(const char* ime, const char* prezime, int mbp, const char* titula)
	: ClanFakulteta(ime,prezime,mbp)
{
	strcpy(this->titula, titula);
}

Profesor::~Profesor()
{
	cout << "Ovo je destruktor klase Profesor!" << endl;
}

void Profesor::dodajPredmet(Predmet* p, int ocena)
{
	if (trenutniBrojPredmeta == maksimalanBrojPredmeta)
	{
		cout << "Dostignut je maksimalni broj predmeta!" << endl;
		return;
	}

	this->predmeti[trenutniBrojPredmeta] = p;
	trenutniBrojPredmeta++;
}

void Profesor::ispisiPredmete()
{
	cout << "Predmeti:" << endl;
	for (int i = 0; i < trenutniBrojPredmeta; i++)
		predmeti[i]->ispisPredmet();
}

void Profesor::ispisiClana()
{
	cout << "Profesor: " << endl;
	cout << this->ime << " " << this->prezime << " " << this->titula << endl;
	this->ispisiPredmete();
}
