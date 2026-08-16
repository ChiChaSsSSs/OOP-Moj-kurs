#pragma once
#include "ClanFakulteta.h"

using namespace std;

class Profesor : public ClanFakulteta {
private:
	char titula[20];
public:
	Profesor(const char* ime, const char* prezime, int mbp, const char* titula);
	~Profesor();
	void dodajPredmet(Predmet* p, int ocena) override;
	void ispisiPredmete() override;
	void ispisiClana() override;
};
