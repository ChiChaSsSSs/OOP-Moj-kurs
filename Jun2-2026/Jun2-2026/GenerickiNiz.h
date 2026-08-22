#pragma once

#include <iostream>
#include <fstream>

using namespace std;

template <typename T, int N = 2>
class GenerickiNiz {
private:
	T niz[N];
public:
	GenerickiNiz() {
	}
	T Max() {
		int indexMax = 0;
		for (int i = 1; i < N; i++)
		{
			if (this->niz[i] > this->niz[indexMax])
				indexMax = i;
		}
		return this->niz[indexMax];
	}
	friend istream& operator>>(istream& is, GenerickiNiz<T, N>& gn) {
		for (int i = 0; i < N; i++)
			is >> gn.niz[i];
		return is;
	}
	friend ostream& operator<<(ostream& os, const GenerickiNiz<T, N>& gn) {
		for (int i = 0; i < N; i++)
		{
			os << gn.niz[i] << " ";
		}
		os << endl;
		return os;
	}
	GenerickiNiz<T, N> operator+(const GenerickiNiz<T, N>& drugi) {
		GenerickiNiz<T, N> rez;
		for (int i = 0; i < N; i++)
			rez.niz[i] = this->niz[i] + drugi.niz[i];
		return rez;
	}
};