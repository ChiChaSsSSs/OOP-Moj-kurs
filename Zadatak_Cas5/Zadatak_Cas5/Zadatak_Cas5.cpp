//Napraviti klasu niz koji cuva brElemenata i max i elemente, prazan konstruktor(max na 10), copy, konstruktor(max), destruktor
//dve metode dodavanje elemenata u niz, menja max i min elemente niza
#include <iostream>
#include "Niz.h"

int main()
{
    Niz n1;
    Niz n2(n1);
    Niz n3(8);

    n1.ispisiNiz();
    n2.ispisiNiz();
    n3.ispisiNiz();

    n3.dodajUNiz(3);
    n3.dodajUNiz(7);
    n3.dodajUNiz(1);
    n3.dodajUNiz(8);
    n3.dodajUNiz(5);
    n3.dodajUNiz(2);
    n3.dodajUNiz(4);
    n3.dodajUNiz(0);
    n3.dodajUNiz(5);

    n3.ispisiNiz();

    n3.zameniMesta();
    n3.ispisiNiz();

    // Kod sa sestog casa (Operatori)
    cout << "Preklapanje operatora:" << endl;

    Niz n4(10);
    Niz n5(15);

    n4.dodajUNiz(1);
    n4.dodajUNiz(2);
    n5.dodajUNiz(1);
    n5.dodajUNiz(3);
    //n5.dodajUNiz(3);

    bool jednakostNizova = n4 == n5;
    cout << jednakostNizova << endl;

    Niz n6 = n4 + n5;
    n6.ispisiNiz();

    Niz& n7 = n6;
    n7.ispisiNiz();
    cout << n5;

    cout << (n4 < n5);
}
