#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
	:ClanFakulteta()
{
	strcpy(this->indeks, "");
	this->prosek = 0.0;
	ocene = new int[20];
}

Student::Student(const Student& s)
{
	strcpy(this->ime, s.ime);
	strcpy(this->prezime, s.prezime);
	strcpy(this->indeks, s.indeks);
	this->prosek = s.prosek;
	this->maksimalanBrojPredmeta = s.maksimalanBrojPredmeta;
	this->trenutniBrojPredmeta = s.trenutniBrojPredmeta;
	//this->ocene = s.ocene; OVO NIJE DOZVOLJENO JER SE KOPIRA SAMO ADRESA!
	this->ocene = new int[maksimalanBrojPredmeta];
	for (int i = 0; i < trenutniBrojPredmeta; i++)
		this->ocene[i] = s.ocene[i];
}

Student::Student(const char* ime, const char* prezime, int mbp, const char* indeks)
	:ClanFakulteta(ime, prezime, mbp)
{
	strcpy(this->indeks, indeks);
	this->prosek = 0.0;
	ocene = new int[mbp];
}

double Student::updateProsek(int ocena)
{

	if (ocena > 5 && ocena < 11)
		prosek = (prosek * trenutniBrojPredmeta + ocena) / (trenutniBrojPredmeta + 1);
	else
		cout << "Uneta je losa ocena!" << endl;

	return prosek;
}

void Student::ispisiOcene()
{
	cout << "Ocene: ";
	for (int i = 0; i < trenutniBrojPredmeta; i++)
	{
		cout << ocene[i] << " ";
	}
	cout << endl;
}

void Student::dodajPredmet(Predmet* p, int ocena)
{
	if (trenutniBrojPredmeta == maksimalanBrojPredmeta)
	{
		cout << "Dostignut je maksimalni broj predmeta!" << endl;
		return;
	}

	this->predmeti[trenutniBrojPredmeta] = p;
	this->ocene[trenutniBrojPredmeta] = ocena;
	this->prosek = this->updateProsek(ocena);
	trenutniBrojPredmeta++;
}

Student::~Student()
{
	cout << "Ovo je destruktor klase Student!" << endl;
	delete[] ocene;
}

void Student::ispisiPredmete()
{
	cout << "Predmeti i ocene: " << endl;
	for (int i = 0; i < trenutniBrojPredmeta; i++)
	{
		predmeti[i]->ispisPredmet();
		cout << ocene[i] << endl;
	}
}

void Student::ispisiClana()
{
	cout << "Student: " << endl;
	cout << this->ime << " " << this->prezime << " " << this->indeks << " " << this->prosek << endl;
	this->ispisiOcene();
}
