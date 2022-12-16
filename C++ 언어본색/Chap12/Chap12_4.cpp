#include "Chap12_4_Header.h"

GeometricObject::GeometricObject()
{
	line1 = 0;
	line2 = 0;
}

GeometricObject::GeometricObject(const double l1, const double l2)
{
	line1 = l1;
	line2 = l2;
}

void GeometricObject::setLine(const double l1, const double l2)
{
	line1 = l1;
	line2 = l2;
}

void GeometricObject::getLine(double* l1, double* l2) {
	*l1 = line1;
	*l2 = line2;
}

Isosceles::Isosceles()
	: GeometricObject()
{
	area = 0;
	side = 0;
}

Isosceles::Isosceles(const double base, const double height)
	: GeometricObject(base, height)
{
	area = 0;
	side = 0;
}

double Isosceles::AreaCalculation()
{
	area = (line1 * line2) / 2;
	return area;
}

double Isosceles::Compute()
{
	side = sqrt((line1 / 2) * (line1 / 2) + line2 * line2);
	return side;
}

void Isosceles::getVar(double* area, double* side)
{
	*area = this->area;
	*side = this->side;
}

Rectangle::Rectangle()
	: GeometricObject()
{
	area = 0;
	round = 0;
}

Rectangle::Rectangle(const double length, const double height)
	: GeometricObject(length, height)
{
	area = 0;
	round = 0;
}

double Rectangle::AreaCalculation()
{
	area = line1 * line2;
	return area;
}

double Rectangle::Compute()
{
	round = (line1 * 2) + (line2 * 2);
	return round;
}

void Rectangle::getVar(double* area, double* round)
{
	*area = this->area;
	*round = this->round;
}