#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
{
	strcpy(this->ime, "");
	strcpy(this->indeks, "");
	this->prosek = 0.0;
}

Student::Student(const char* ime, const char* indeks)
{
	strcpy(this->ime, ime);
	strcpy(this->indeks, indeks);
	prosek = 0.0;
	brojPredmeta = 0;
}

Student::Student(const char* ime, const char* indeks, double prosek, int brojPredmeta)
{
	strcpy(this->ime, ime);
	strcpy(this->indeks, indeks);
	this->prosek = prosek;
	this->brojPredmeta = brojPredmeta;
}

void Student::updateProsek(int ocena)
{
	prosek = (prosek * brojPredmeta + ocena) / (brojPredmeta + 1);
	brojPredmeta++;
}

void Student::ispisiStudenta()
{
	cout << "Indeks: " << this->indeks << " Ime: " << this->ime << " Prosek: " << this->prosek << "/10.0 " <<"Broj polozenih ispita: "<< this->brojPredmeta<< endl;
}


