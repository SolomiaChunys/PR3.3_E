#pragma once

#include <iostream>
#include <string>
#include "Object.h"

using namespace std;

class Triangle:
	public Object
{
private:
	double a, b, c;
public:
	Triangle();
	Triangle(double a, double b, double c);
	Triangle(Triangle&);
	Triangle& operator = (const Triangle&);

	double getA() const { return a; }
	double getB() const { return b; }
	double getC() const { return c; }

	void setA(double a) { this->a = a; }
	void setB(double b) { this->b = b; }
	void setC(double c) { this->c = c; }

	void Init(double a, double b, double c);
	void Display() const;
	void Read();

	operator string() const;

	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);

	double perimeter();
	double AngleA();
	double AngleB();
	double AngleC();
};

