#pragma once
#ifndef _CHAP08_4_HEADER_H_
#define _CHAP08_4_HEADER_H_

#include <iostream>
using namespace std;

class Triangle
{
public:
	void setEdges(const double a, const double b, const double c);
	void getEdges(double* ra, double* rb, double* rc);
	void getArea(double* get_area);
	double calArea();

private:
	double area;
	double s1, s2, s3;
	

};

#else
#endif