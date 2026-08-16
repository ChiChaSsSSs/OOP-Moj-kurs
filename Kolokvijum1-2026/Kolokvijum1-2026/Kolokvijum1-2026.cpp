#include <iostream>
#include "Vozilo.h"
#include "Kamion.h"
#include "Automobil.h"
#include "Parking.h"

using namespace std;
int main()
{
	const char tip[] = { 'E', 'H', 'S' };
	const char* tabliceK[] = { "LE025JS", "BG0201AA", "TT125AE"};
	const char* tabliceA[] = { "NI111WW", "NI950KL", "NS259NS"};
	// 2 poena
	Vozilo* v1 = new Kamion("NI125KK", 12.00, 4200, 15000, 0);
	//v1->ispisi();
	cout << *v1 << endl;
	// 2 poena
	Vozilo* v2 = new Automobil("NI101SK", 4.85, 1250, 5, 'S');
	//v2->ispisi();
	cout << *v2 << endl;

	Parking p(6);
	Parking* pp = new Parking(6);
	// 2 poena
	for (int i = 0; i < p.BrojVozila() / 2; i++)
	{
		p.Add(new Kamion(tabliceK[i], 10 + i * 2.5, 5000 + 1500 * i, 15000 + 1500 * i, i / 3));
		p.Add(new Automobil(tabliceA[i], 4.5 + 0.25 * i, 1000 + 150 * i, 4 + i % 2, tip[1]));
	}
	for (int i = 0; i < pp->BrojVozila() / 2; i++)
	{
		pp->Add(new Kamion(tabliceK[i], 12 + i * 1.5, 4000 + 1300 * i, 10000 + 1200 * i, i / 3));
		pp->Add(new Automobil(tabliceA[i], 4.25 + 0.2 * i, 850 + 150 * i, 4 + i % 2, tip[0]));
	}

	//p.print();
	cout << p << endl;

	delete pp;

	double duzina;
	int masa;
	p.UkupnaDuzinaIMasa(&duzina, &masa);
	cout << "duzina: " << duzina << " masa: " << masa;
	cout << endl;

	cout << *p.NajveciKoeficijent();

	return 0;
}