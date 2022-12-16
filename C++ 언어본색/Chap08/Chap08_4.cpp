#include "Chap08_4_Header.h"

/*
class Triangle
{
public:
	void setEdges(const double a, const double b, const double c);
	void getEdges(double* ra, double* rb, double* rc);
	double calArea();
	void getArea(double* get_area)

private:
	double s1, s2, s3;
	double area;
};
*/

void Triangle::setEdges(const double a, const double b, const double c)
{
	s1 = a;
	s2 = b;
	s3 = c;
}

void Triangle::getEdges(double* ra, double* rb, double* rc)
{
	*ra = s1;
	*rb = s2;
	*rc = s3;
}

void Triangle::getArea(double* get_area)
{
	*get_area = area;
}

double Triangle::calArea()
{
	double temp;
	double sum_half = (s1 + s2 + s3) / 2;

	temp = sqrt(sum_half * (sum_half - s1) * (sum_half - s2) * (sum_half - s3));
	area = temp;
	return temp;
}