#include "Vagon.h"

#include <iostream>
#include <fstream>
using namespace std;

Vagon::Vagon(float mv, float mt)
{
	this->masaVagona = mv;
	this->masaTereta = mt;
}

Vagon::Vagon()
{
	this->masaVagona = 0.0f;
	this->masaTereta = 0.0f;
}

Vagon::~Vagon()
{
}

Vagon Vagon::operator+(const Vagon& v)
{
	return Vagon(this->masaVagona + v.masaVagona, this->masaTereta + v.masaTereta);
}

bool Vagon::operator<(const Vagon& v) const
{
	if (this->masaTereta < v.masaTereta)
		return true;
	return false;
}

bool Vagon::operator>(const Vagon& v) const
{
	if (this->masaTereta > v.masaTereta)
		return true;
	return false;
}

ostream& operator<<(ostream& os, const Vagon& v)
{
	os << v.masaVagona << " " << v.masaTereta << endl;
	return os;
}

istream& operator>>(istream& is, Vagon& v)
{
	float mv, mt;
	is >> mv >> mt;
	if (mt > mv)
	{
		throw VagonException();
	}
	else
	{
		v.masaTereta = mt;
		v.masaVagona = mv;
	}
	return is;
}
