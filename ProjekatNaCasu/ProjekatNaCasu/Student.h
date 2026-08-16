#pragma once
#include <iostream>
#include "ClanFakulteta.h"
using namespace std;

class Student : public ClanFakulteta {
private:
	char indeks[10];
	double prosek;
	int* ocene;
	double updateProsek(int ocena);

public:
	Student();
	Student(const Student& s);
	Student(const char* ime, const char* prezime, int mbp, const char* indeks);
	~Student();
	void ispisiOcene();
	void dodajPredmet(Predmet* p, int ocena) override;
	void ispisiPredmete() override;
	void ispisiClana() override;
};


