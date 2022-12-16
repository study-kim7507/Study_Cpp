#include "Chap11_04_Header.h"

CON1::CON1()
{
	cout << "CON1의 기본 생성자" << endl;
}
CON1::CON1(const int c)
{
	this->c = c;
	cout << "CON1의 생성자" << endl;
	cout << "c = " << c << endl;
}

CON1::~CON1()
{
	cout << "CON1의 소멸자" << endl;
}

CON2::CON2() : CON1()
{
	cout << "CON2의 생성자입니다만, CON1의 기본생성자를 호출합니다." << endl;
}

CON2::CON2(const int temp) : CON1(300)
{
	cout << "CON2의 생성자" << endl;
}

CON2::~CON2()
{
	cout << "CON2의 소멸자" << endl;
}