#pragma once
#include <iostream>
using namespace std;

class Niz {
private:
	int max;
	int trBr;
	int* elementi;
public:
	Niz();
	Niz(const Niz& n);
	Niz(int max);
	Niz(int max, int trBr, int* elementi);
	~Niz();

	void dodajUNiz(int element);
	void zameniMesta();
	void ispisiNiz();

	bool operator==(const Niz& n2) const;
	bool operator<(const Niz& n2) const;
	Niz operator+(const Niz& n2) const;
	Niz& operator=(const Niz& n2);
	friend ostream& operator<<(ostream& os, const Niz& n1);
};