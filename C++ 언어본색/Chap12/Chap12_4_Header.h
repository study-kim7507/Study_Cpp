#ifndef _CHAP12_4_HEADER_H_
#define _CHAP12_4_HEADER_H_

#include <iostream>
using namespace std;

// ���� ���� �Լ��� �����ϴ� Ŭ����. �߻� Ŭ�����̴�. 
// ����, ��ü ������ �Ұ����ϴ�.
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

// �߻�Ŭ���� GeometricObject Ŭ������ ���Ŭ�������ϴ� �Ļ�Ŭ����.
// ����, GeometricObject Ŭ������ ���Ե� ���� ���� �Լ��� ������ �ؾ��� (�Լ� �������̵�)
class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double base, const double height);
	double AreaCalculation(); // ���Ŭ������ ���� �����Լ� ������ (�������̵�)
	double Compute(); // ���Ŭ������ ���� �����Լ� ������ (�������̵�)
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