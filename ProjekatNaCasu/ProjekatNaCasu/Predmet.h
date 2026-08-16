#pragma once

#include <iostream>
using namespace std;

class Predmet {
private:

	char naziv[20];
	int ESPB;
	char sifra[10];
	bool obavezan;

public:
	Predmet();
	Predmet(const char* naziv, int ESPB, const char* sifra, bool obavezan);
	void ispisPredmet();
	char* promeniNaziv(const char* naziv);
	void promeniObaveznost();
};