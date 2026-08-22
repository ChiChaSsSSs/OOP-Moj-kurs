#include "Avion.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Avion::Avion(const char* id, const char* nak)
{
	ID = new char[strlen(id) + 1];
	nazivAvioKompanije = new char[strlen(nak) + 1];
	strcpy(this->ID, id);
	strcpy(this->nazivAvioKompanije, nak);
}

Avion::~Avion()
{
	delete[] ID;
	delete[] nazivAvioKompanije;
}

char* Avion::getNazivAvioKompanije()
{
	return nazivAvioKompanije;
}

void Avion::SacuvajAvionUFajl(ofstream& fajl)
{
	fajl << this->ID << " " << this->nazivAvioKompanije << " ";
}

void Avion::Ispis(ostream& os)
{
	os << this->ID << " " << this->nazivAvioKompanije << " ";
}
