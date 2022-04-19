#include "Triangle.h"
#include <sstream>
#include <iostream>
#include <cmath>
#define PI 3.1415926535

using namespace std;

Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
}

Triangle::Triangle(double a, double b, double c)
{
	if (a > 0, b > 0, c > 0)
	{
		setA(a);
		setB(b);
		setC(c);
	}
	else
	{
		cout << "The sides must be positive!" << endl;
	}
}

Triangle::Triangle(Triangle& f)
{
	a = f.a;
	b = f.b;
	c = f.c;
}

Triangle& Triangle::operator = (const Triangle& f)
{
	a = f.a;
	b = f.b;
	c = f.c;
	return *this;
}

Triangle::operator string() const
{
	stringstream sss;
	sss << "Therefore : " << endl;
	sss << "side1 = " << a << endl;
	sss << "side2 = " << b << endl;
	sss << "side3 = = " << c << endl;
	sss << endl;

	return sss.str();
}

ostream& operator << (ostream& out, const Triangle& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Triangle& f)
{
	cout << "Set the size of sides:" << endl;
	double a, b, c;
	cout << endl;
	cout << "side1 = "; in >> a;
	cout << "side2 = "; in >> b;
	cout << "side3 = "; in >> c;
	f.setA(a);
	f.setB(b);
	f.setC(c);

	return in;
}

void Triangle::Init(double a, double b, double c)
{
	setA(a);
	setB(b);
	setC(c);
}
void Triangle::Display() const
{
	cout << endl;
	cout << "side1 = " << a << endl;
	cout << "side2 = " << b << endl;
	cout << "side3 = = " << c << endl;
	cout << endl;
}
void Triangle::Read()
{
	double a, b, c;
	cout << endl;
	cout << "side1 = "; cin >> a;
	cout << "side2 = "; cin >> b;
	cout << "side3 = "; cin >> c;
	Init(a, b, c);
}

double Triangle::perimeter()
{
	return getA() + getB() + getC();
}

double Triangle::AngleA()
{
	return (acos(((b * b) + (c * c) - (a * a)) / (2 * b * c))) * 180 / PI;
}

double Triangle::AngleB()
{
	return (acos(((a * a) + (c * c) - (b * b)) / (2. * a * c))) * 180 / PI;
}

double Triangle::AngleC()
{
	return (acos(((a * a) + (b * b) - (c * c)) / (2. * a * b))) * 180 / PI;
}
