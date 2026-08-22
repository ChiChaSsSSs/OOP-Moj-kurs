#pragma once

#include <iostream>
#include <fstream>
#include "VagonException.h"
using namespace std;

class Vagon {
private:
	float masaVagona;
	float masaTereta;
public:
	Vagon(float mv, float mt);
	Vagon();
	~Vagon();
	friend ostream& operator<<(ostream& os, const Vagon& v);
	friend istream& operator>>(istream& is, Vagon& v);
	Vagon operator+(const Vagon& v);
	bool operator<(const Vagon& v) const;
	bool operator>(const Vagon& v) const;
};
