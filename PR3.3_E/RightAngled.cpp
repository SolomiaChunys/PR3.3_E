#include "RightAngled.h"
#include <sstream>
#include <iostream>

using namespace std;

RightAngled::RightAngled()
{
	area = 0;
	setA(0);
	setB(0);
	setC(0);
}

RightAngled::RightAngled(double f, double s, double k, double m)
{
	area = f;
	if (m = sqrt(s * s + k * k))
	{
		setA(s);
		setB(k);
		setC(m);
	}
	else
		cout << "Is not equal rightangle!" << endl;
}

RightAngled::RightAngled(const RightAngled& f)
	: Triangle()
{
	area = f.area;
	double s = f.getA();
	double k = f.getB();
	double m = f.getC();
}

RightAngled& RightAngled::operator = (const RightAngled& f)
{
	Triangle::operator= (f);
	area = f.area;
	return *this;
}

RightAngled::operator string() const
{
	stringstream sss;
	sss << endl;

	return Triangle::operator std::string() + sss.str();
}

ostream& operator << (ostream& out, const RightAngled& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, RightAngled& t)
{
	cout << endl;
	double a, b, c;
	cout << "Set the size of sides:" << endl;
	cout << "side1 = "; in >> a;
	cout << "side2 = "; in >> b;
	cout << "side3 = "; in >> c;
	t.setA(a);
	t.setB(b);
	t.setC(c);

	return in;
}

void RightAngled::Read()
{
	double a, b, c;
	cout << "Set the size of sides:" << endl;
	cout << "side1 = "; cin >> a;
	cout << "side2 = "; cin >> b;
	cout << "side3 = "; cin >> c;
	Init(a, b, c);
}

void RightAngled::Init(double a, double b, double c)
{
	Triangle::Init(a, b, c);
	setArea(this->calcArea());
}
void RightAngled::Display() const
{
	cout << "Triangle :" << endl;
	Triangle::Display();
	cout << "area = " << area << endl;
}

double RightAngled::calcArea()
{
	return (getA() * getB()) / 2;
}
