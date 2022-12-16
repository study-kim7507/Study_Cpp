#ifndef _CHAP13_01_HEADER_H_
#define _CHAP13_01_HEADER_H_

#include <iostream>
#include <string>
using namespace std;

class ImaginaryNumber {
public:
	ImaginaryNumber();
	ImaginaryNumber(const double a, const double b);
	void SetA(const double a);
	void SetB(const double b);
	double GetA();
	double GetB();
	string GetImaginaryNumber();
	ImaginaryNumber operator +(const ImaginaryNumber ima);
	ImaginaryNumber operator ++();
	ImaginaryNumber operator ++(int dummy);
private:
	double a;
	double b;
};


#else
#endif