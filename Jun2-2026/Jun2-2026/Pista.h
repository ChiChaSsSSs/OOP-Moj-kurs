#pragma once
#include "Avion.h"
#include <iostream>

using namespace std;

class Pista {
private:
	Avion** avioni;
	int trenutniBrojAviona;
	int maksimalniBrojAviona;
public:
	Pista(int mba);
	~Pista();
	void Dodaj(Avion* a);
	void SacuvajUFajl(const char* imeFajla);
	Pista PopunjeniPreko95();
	void ReorganizujAvioneNaPisti();
	Pista AvioKompanijaSaNajvecimStepenomPopunjenosti();
	friend ostream& operator<<(ostream& os, const Pista& p);
};