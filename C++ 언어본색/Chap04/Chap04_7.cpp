#include<iostream>
using namespace std;

int main()
{
	char s_string[100] = "C++ programming is very interesting";
	char d_string[100] = "";

	cout << "s_string = " << s_string << endl;

	// source string의 문자열을 destination string에 복사
	strcpy_s(d_string, s_string);
	cout << "d_string = " << d_string << endl;

	// source string의 문자열을 3개 만큼 destination string에 복사
	strncpy_s(d_string, s_string, 3);
	cout << "d_string = " << d_string << endl;

	// destination string에 ******을 이어붙임
	strcat_s(d_string, "******");
	cout << "d_string = " << d_string << endl;

	// destinationa string에 source string의 3개만큼 복사
	strncat_s(d_string, s_string, 3);
	cout << "d_string = " << d_string << endl;
	return 0;
}