#include "Chap11_02_Header.h"

int main()
{
	StringCharArray one;
	char t_str[50];

	one.assign("sample");
	one.toCharArray(t_str);

	cout << one << endl;
	cout << t_str << endl;
	
	return 0;
}