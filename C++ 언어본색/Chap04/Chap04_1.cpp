#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int* pa = &a;

	cout << "a�� ����� �� : " << a << endl;
	cout << "a�� �ּ� :  " << &a << endl << endl;

	a = 200;

	cout << "a�� ����� �� : " << *pa << endl;
	cout << "a�� �ּ� : " << pa << endl;

	return 0;
}