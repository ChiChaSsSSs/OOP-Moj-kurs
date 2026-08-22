#pragma once
#include "Avion.h"

class Putnicki : public Avion {
private:
	int ukupanBrojSedsita;
	int brojNepopunjenihSedista;
	int brojSedistaUBiznisKlasi;
	double masaTereta;
public:
	Putnicki(const char* id, const char* nak, int ubs, int bns, int bsbk, double mt);
	~Putnicki();
	void SacuvajAvionUFajl(ofstream& fajl) override;
	void Ispis(ostream& os) override;
	bool PopunjenPreko90() const override;
	double izracunajStepenPopunjenosti() const override;
};