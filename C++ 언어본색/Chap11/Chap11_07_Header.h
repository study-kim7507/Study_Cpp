#ifndef _CHAP11_07_HEADER_H_
#define _CHAP11_07_HEADER_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	GeometricFigure(const char* color);
	string GetColor();
	void SetColor(const char* color);
private:
	string color;
};

class Triangle :public GeometricFigure
{
public:
	Triangle();
	Triangle(const char* color, const double s0, const double s1, const double s2);
	void GetEdges(double* s0, double* s1, double* s2);
	void SetEdges(const double s0, const double s1, const double s2);
	double GetArea();
	void CalArea();
private:
	double s[3];
	double area;
};

#else
#endif