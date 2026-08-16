#pragma once
#include <iostream>

using namespace std;

class Vozilo {
protected:
	char* regOznaka;
	double duzina;
	int trenutnaMasa;
public:
	Vozilo(const char* regOznaka, double duzina, int trMasa);
	virtual ~Vozilo();
	double koeficijentMase();
	virtual void ispisi() = 0;
	virtual void ispisiSpecAtribute(ostream& os) const;
	friend ostream& operator<<(ostream& os,const Vozilo& v);
	char* getRegOznaka();
	double getDuzina();
	int getTrMasa();
	virtual bool jeHibrid();
};