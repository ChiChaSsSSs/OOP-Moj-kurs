#pragma once
#include <iostream>
using namespace std;

class Student {
private:
	char ime[20];
	char indeks[10];
	double prosek;
	int brojPredmeta;

public:
	Student();
	Student(const char* ime, const char* indeks);
	Student(const char* ime, const char* indeks, double prosek, int brojPredmeta);
	void ispisiStudenta();
	void updateProsek(int ocena);
};


