#pragma once
#include "Triangle.h"
#include <iostream>
#include <sstream>

using namespace std;

class RightAngled :
	public Triangle
{
private:
	double area;
public:
	RightAngled();
	RightAngled(double, double, double, double);
	RightAngled(const RightAngled&);
	RightAngled& operator = (const RightAngled&);

	double getArea() { return area; }

	void Init(double, double, double);
	void Display() const;
	void Read();

	void setArea(double area) { this->area = area; }

	operator string() const;

	friend ostream& operator << (ostream&, const RightAngled&);
	friend istream& operator >> (istream&, RightAngled&);

	double calcArea();
};

