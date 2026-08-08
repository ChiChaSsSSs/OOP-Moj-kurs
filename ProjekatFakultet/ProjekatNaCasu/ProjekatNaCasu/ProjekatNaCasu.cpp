#include <iostream>
#include <string>
#include "Student.h"
#include "Predmet.h"
using namespace std;

int main()
{
    Student s1("Marko", "111");
    Student s2("Jovan", "222");
    Student s3("Kaca", "333", 9.0, 5);
    //s1.ispisiStudenta();
    //s2.ispisiStudenta();
    //s3.ispisiStudenta();
    //s3.updateProsek(8);
    //s3.ispisiStudenta();

    Predmet p1("Matematika", 6, "abc123", true);
    Predmet p2("OOP", 6, "cba321", false);

    p1.ispisPredmet();
    p2.ispisPredmet();

    cout << (p1.promeniNaziv("PorgramskiJezici")) << endl;
    p1.ispisPredmet();

    p2.promeniObaveznost();
    p2.ispisPredmet();

    cout << (p1.promeniNaziv("PorgramskiJezici")) << endl;
    p1.ispisPredmet();

    return 0;
}
