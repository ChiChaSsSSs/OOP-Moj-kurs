#pragma once
#include "Vozilo.h"
#include "Automobil.h"

class Parking {
private:
	Vozilo** vozila;
	int trBr;
	int max;
public:
	Parking(int max);
	~Parking();
	void Add(Vozilo* v);
	int BrojVozila();
	void print();
	friend ostream& operator<<(ostream& os,const  Parking& p);
	void UkupnaDuzinaIMasa(double* duzina, int* masa);
	Vozilo* NajveciKoeficijent();
};