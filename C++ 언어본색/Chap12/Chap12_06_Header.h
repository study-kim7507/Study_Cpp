#ifndef _CHAP12_06_HEADER_H_
#define _CHAP12_06_HEADER_H_

#include <iostream>
#include <cmath>
using namespace std;

struct POINT {
	double x;
	double y;
};

class CCoordinates
{
public:
	CCoordinates();
	CCoordinates(const POINT p1, const POINT p2, const POINT p3);
	void SetPoint_c1(const POINT p);
	void SetPoint_c2(const POINT p);
	void SetPoint_c3(const POINT p);
	POINT GetPoint_c1();
	POINT GetPoint_c2();
	POINT GetPoint_c3();
	double Distance_C1C2();
	double Distance_C1C3();
	double Distance_C2C3();
private:
	POINT c1, c2, c3;
};

class CTriangle : public CCoordinates
{
public:
	CTriangle();
	CTriangle(const POINT p1, const POINT p2, const POINT p3);
	bool isValidTriangle();
	double GetArea();
private:
	double area;
};

#else
#endif