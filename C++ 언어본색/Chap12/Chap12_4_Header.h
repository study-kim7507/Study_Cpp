#ifndef _CHAP12_4_HEADER_H_
#define _CHAP12_4_HEADER_H_

#include <iostream>
using namespace std;

// 순수 가상 함수를 포함하는 클래스. 추상 클래스이다. 
// 따라서, 객체 생성이 불가능하다.
class GeometricObject 
{
public:
	GeometricObject();
	GeometricObject(const double l1, const double l2);
	void setLine(const double l1, const double l2);
	void getLine(double* l1, double* l2);
	virtual double AreaCalculation() = 0;
	virtual double Compute() = 0;
protected:
	double line1, line2;
};

// 추상클래스 GeometricObject 클래스를 기반클래스로하는 파생클래스.
// 따라서, GeometricObject 클래스에 포함된 순수 가상 함수를 재정의 해야함 (함수 오버라이딩)
class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double base, const double height);
	double AreaCalculation(); // 기반클래스의 순수 가상함수 재정의 (오버라이딩)
	double Compute(); // 기반클래스의 순수 가상함수 재정의 (오버라이딩)
	void getVar(double* area, double* side);
private:
	double area, side;
};

class Rectangle : public GeometricObject
{
public:
	Rectangle();
	Rectangle(const double length, const double height);
	double AreaCalculation();
	double Compute();
	void getVar(double* area, double* round);
private:
	double area, round;
};
#else
#endif