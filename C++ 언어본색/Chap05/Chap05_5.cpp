#include <iostream>
using namespace std;

typedef struct {
	char Name[30];
	char MPhoneNum[20];
} SAM;


int main()
{
	SAM a = { "ฑ่วเบน", "010-7777-3333" };
	SAM* pa = &a;

	cout << a.Name << endl;
	cout << (*pa).MPhoneNum << endl;

	strcpy_s((*pa).MPhoneNum, "010-1234-1234");
	cout << (*pa).MPhoneNum << endl;
	cout << pa->MPhoneNum << endl;

	return 0;

}