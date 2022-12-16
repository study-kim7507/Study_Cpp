#include "Chap12_06_Header.h"

CCoordinates::CCoordinates()
{
	c1 = { 0, 0 };
	c2 = { 0, 0 };
	c3 = { 0, 0 };
}

CCoordinates::CCoordinates(const POINT p1, const POINT p2, const POINT p3)
{
	c1 = p1;
	c2 = p2;
	c3 = p3;
}

void CCoordinates::SetPoint_c1(const POINT p)
{
	c1 = p;
}

void CCoordinates::SetPoint_c2(const POINT p)
{
	c2 = p;
}
void CCoordinates::SetPoint_c3(const POINT p)
{
	c3 = p;
}

POINT CCoordinates::GetPoint_c1()
{
	return c1;
}

POINT CCoordinates::GetPoint_c2()
{
	return c2;
}

POINT CCoordinates::GetPoint_c3()
{
	return c3;
}

double CCoordinates::Distance_C1C2()
{
	if (abs(c1.x) == abs(c2.x))
		return abs(c1.y - c2.y);
	
	if (abs(c1.y) == abs(c2.y))
		return abs(c1.x - c2.x);

	return sqrt(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2));
}

double CCoordinates::Distance_C1C3()
{
	if (abs(c1.x) == abs(c3.x))
		return abs(c1.y - c3.y);

	if (abs(c1.y) == abs(c3.y))
		return abs(c1.x - c3.x);

	return sqrt(pow((c1.x - c3.x), 2) + pow((c1.y - c3.y), 2));
}

double CCoordinates::Distance_C2C3()
{
	if (abs(c2.x) == abs(c3.x))
		return abs(c2.y - c3.y);

	if (abs(c2.y) == abs(c3.y))
		return abs(c2.x - c3.x);

	return sqrt(pow((c2.x - c3.x), 2) + pow((c2.y - c3.y), 2));
}

CTriangle::CTriangle()
	: CCoordinates()
{
	area = 0;
}

CTriangle::CTriangle(const POINT p1, const POINT p2, const POINT p3)
	: CCoordinates(p1, p2, p3)
{
	area = 0;
}

bool CTriangle::isValidTriangle()
{
	double s[3] = { 0, };
	s[0] = Distance_C1C2();
	s[1] = Distance_C1C3();
	s[2] = Distance_C2C3();
	
	double max = INT_MAX;
	for (int i = 0; i < 3; i++) {
		if (max >= s[i]) max = s[i];
	}

	if (max == s[0])
	{
		if (s[0] <= s[1] + s[2]) return true;
		else return false;
	}
	
	else if (max == s[1])
	{
		if (s[1] <= s[0] + s[2]) return true;
		else return false;
	}

	else if (max == s[2])
	{
		if (s[2] <= s[0] + s[1]) return true;
		else return false;
	}
}

double CTriangle::GetArea()
{
	if (isValidTriangle() == false) return 0;
	POINT c1, c2, c3;
	c1 = this->GetPoint_c1();
	c2 = this->GetPoint_c2();
	c3 = this->GetPoint_c3();

	double area;
	area = (abs((c1.x * c2.y) + (c2.x * c3.y) + (c3.x * c1.y)- (c2.x * c1.y) - (c3.x * c2.y) - (c1.x * c3.y))) / 2;

	return area;
}