#include "Chap05_3_header.h"

int main()
{
	Merong num1;
	SAM Friend1, Friend2;

	cin >> num1;
	cout << num1 << endl;;

	strcpy_s(Friend1.Name, 30, "±è±âÈ¯");
	strcpy_s(Friend1.MPhoneNum, 20, "010-7507-7660");

	Friend2 = Friend1;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	cout << endl;

	cout << Friend2.Name << endl;
	cout << Friend2.MPhoneNum << endl;


	return 0;
}