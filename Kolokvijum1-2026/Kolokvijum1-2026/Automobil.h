#pragma once
#include "Vozilo.h"
#include <iostream>

using namespace std;

class Automobil : public Vozilo
{
private:
	int brSedista;
	char oznaka;
public:
	Automobil(const char* regOznaka, double duzina, int trMasa, int brS, int oznaka);
	~Automobil();
	void ispisi() override;
	void ispisiSpecAtribute(ostream& os) const override;
	bool jeHibrid() override;
};

