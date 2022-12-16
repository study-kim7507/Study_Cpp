#ifndef _CHAP11_04_HEADER_H_
#define _CHAP11_04_HEADER_H_

#include <iostream>
using namespace std;

class CON1
{
public:
	CON1();
	CON1(const int c);
	~CON1();
protected:
	int c;
};

class CON2 :public CON1
{
public:
	CON2();
	CON2(const int temp);
	~CON2();
};

#else
#endif