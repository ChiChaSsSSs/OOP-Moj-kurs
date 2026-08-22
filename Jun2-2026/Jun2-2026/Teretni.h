#pragma once
#include "Avion.h"

class Teretni : public Avion{
private:
	int maksimalniDolet;
	double maksimalnaMasaTereta;
	double trenutnaMasaTereta;
public:
	Teretni(const char* id, const char* nak, int md, double mmt, double tmt);
	~Teretni();
	void SacuvajAvionUFajl(ofstream& fajl) override;
	void Ispis(ostream& os) override;
	bool PopunjenPreko90() const override;
	double izracunajStepenPopunjenosti() const override;
};

