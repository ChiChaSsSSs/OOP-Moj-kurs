#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Avion {
protected:
	char* ID;
	char* nazivAvioKompanije;
public:
	Avion(const char* id, const char* nak);
	virtual ~Avion();
	char* getNazivAvioKompanije();
	virtual void SacuvajAvionUFajl(ofstream& fajl);
	virtual void Ispis(ostream& os);
	virtual bool PopunjenPreko90() const = 0;
	virtual double izracunajStepenPopunjenosti() const = 0;
};
