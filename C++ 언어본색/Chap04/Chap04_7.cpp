#include<iostream>
using namespace std;

int main()
{
	char s_string[100] = "C++ programming is very interesting";
	char d_string[100] = "";

	cout << "s_string = " << s_string << endl;

	// source string�� ���ڿ��� destination string�� ����
	strcpy_s(d_string, s_string);
	cout << "d_string = " << d_string << endl;

	// source string�� ���ڿ��� 3�� ��ŭ destination string�� ����
	strncpy_s(d_string, s_string, 3);
	cout << "d_string = " << d_string << endl;

	// destination string�� ******�� �̾����
	strcat_s(d_string, "******");
	cout << "d_string = " << d_string << endl;

	// destinationa string�� source string�� 3����ŭ ����
	strncat_s(d_string, s_string, 3);
	cout << "d_string = " << d_string << endl;
	return 0;
}