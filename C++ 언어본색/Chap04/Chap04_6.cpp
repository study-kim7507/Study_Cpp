#include <iostream>
using namespace std;

int main()
{
	char str[30], cpyStr[30], cpyStr1[30];
	int i = 0;

	cin >> str;

	for (i = 0; str[i] != '\0'; i++) {
		cpyStr[i] = str[i];
	}

	cpyStr[i] = '\0';

	strcpy_s(cpyStr1, str);

	cout << cpyStr1 << endl;
	cout << cpyStr << endl;

	return 0;
}