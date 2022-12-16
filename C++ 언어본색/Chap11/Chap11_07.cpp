#include "Chap11_07_Header.h"

GeometricFigure::GeometricFigure()
{
	this->color = "white";
}
GeometricFigure::GeometricFigure(const char* color)
{
	this->color = color;
}

string GeometricFigure::GetColor()
{
	return color;
}

void GeometricFigure::SetColor(const char* color)
{
	this->color = color;
}

Triangle::Triangle()
{
	this->s[0] = 0;
	this->s[1] = 0;
	this->s[2] = 0;
	area = 0;
}

Triangle::Triangle(const char* color, const double s0, const double s1, const double s2)
	: GeometricFigure(color)
{
	this->s[0] = s0;
	this->s[1] = s1;
	this->s[2] = s2;
	area = 0;
}

void Triangle::GetEdges(double* s0, double* s1, double* s2)
{
	*s0 = this->s[0];
	*s1 = this->s[1];
	*s2 = this->s[2];
}

void Triangle::SetEdges(const double s0, const double s1, const double s2)
{
	this->s[0] = s0;
	this->s[1] = s1;
	this->s[2] = s2;
}

double Triangle::GetArea()
{
	return area;
}
void Triangle::CalArea()
{
	double sumHalf = (s[0] + s[1] + s[2]) / (double)2;
	area = sqrt(sumHalf * (sumHalf - s[0]) * (sumHalf - s[1]) * (sumHalf - s[2]));
}