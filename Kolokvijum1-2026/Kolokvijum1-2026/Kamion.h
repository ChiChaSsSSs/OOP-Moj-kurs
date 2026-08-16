#pragma once
#include "Vozilo.h"
#include <iostream>

using namespace std;

class Kamion : public Vozilo
{
private:
	int maxVucnaMasa;
	int brPrikolica;
public:
	Kamion(const char* regOznaka, double duzina, int trMasa, int max, int brPrikolica);
	~Kamion();
	void ispisi() override;
	void ispisiSpecAtribute(ostream& os) const override;
};

