#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"
#include "Predmet.h"
#include "ClanFakulteta.h"
#include "Profesor.h"
using namespace std;

int main()
{
    // Casovi 7. i 8. nasledjivanje/polimorfizam
    cout << endl << "Pocetak casa 7. i 8." << endl << endl;

    //ClanFakulteta c1("Marko", "Markovic", 10);
    //ClanFakulteta c2("Petar", "Petrovic", 5);

    Predmet p1("Matematika", 6, "abc123", true);
    Predmet p2("OOP", 6, "cba321", false);

    //c1.dodajPredmet(&p1);
    //c1.dodajPredmet(&p2);
    //c2.dodajPredmet(&p1);

    //c1.ispisiPredmete();
    //c2.ispisiPredmete();

    ClanFakulteta* c3 = new Profesor("Janko", "Jankovic", 15, "Asistent");
    c3->dodajPredmet(&p1);
    c3->dodajPredmet(&p2);
    c3->ispisiClana();

    ClanFakulteta* c4 = new Student("Djordje", "Djordjevic", 10, "123");
    c4->dodajPredmet(&p1, 8);
    c4->dodajPredmet(&p2, 9);
    c4->ispisiClana();

    cout << *c4;

    // Cas 9. fajlovi

    ofstream fajlZaUpis = ofstream("Fajl.txt");
    fajlZaUpis << *c4;

    delete c3;
    delete c4;

    return 0;
}
