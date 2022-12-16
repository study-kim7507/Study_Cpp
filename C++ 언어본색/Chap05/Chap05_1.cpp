#include <iostream>
using namespace std;

int main()
{
	/*
	char Name[30] = "";
	char MPhoneNum[20] = "";

	strcpy_s(Name, 30, "±Ë±‚»Ø");
	strcpy_s(MPhoneNum, 20, "010-7507-7660");

	cout << Name << endl;
	cout << MPhoneNum << endl;
	*/

	struct {
		char Name[30] = "";
		char MPhoneNum[20] = "";
	} Friend, Friend1, Friend2;

	strcpy_s(Friend.Name, 30, "±Ë±‚»Ø");
	strcpy_s(Friend.MPhoneNum, 20, "010-7507-7600");

	strcpy_s(Friend1.Name, 30, "±Ë¥Ÿø¯");
	strcpy_s(Friend1.MPhoneNum, 20, "010-7517-7660");

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	Friend2 = Friend1;

	cout << Friend2.Name << endl;
	cout << Friend2.MPhoneNum << endl;

	return 0;
}