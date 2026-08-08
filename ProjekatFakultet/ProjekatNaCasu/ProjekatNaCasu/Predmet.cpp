#include "Predmet.h"

Predmet::Predmet()
{
	strcpy(naziv, "");
	ESPB = 0;
	strcpy(sifra, "");
	obavezan = true;
}

Predmet::Predmet(const char* naziv, int ESPB, const char* sifra, bool obavezan)
{
	strcpy(this->naziv, naziv);
	this->ESPB = ESPB;
	strcpy(this->sifra, sifra);
	this->obavezan = obavezan;
}

void Predmet::ispisPredmet()
{
	cout << "Naziv: " << this->naziv << " ESPB: " << this->ESPB << " Sifra: " << this->sifra << " Obavezan? " << this->obavezan << endl;
}

char* Predmet::promeniNaziv(const char* naziv)
{
	char* poruka = new char[50];

	if (!strcmp(this->naziv, naziv))
	{
		strcpy(poruka, "Nazivi su isti!");
		return poruka;
	}
	else
	{
		strcpy(this->naziv, naziv);
		strcpy(poruka, "Izmena uspesno izvrsena!");
		return poruka;
	}
}

void Predmet::promeniObaveznost()
{
	obavezan = !obavezan;
}
