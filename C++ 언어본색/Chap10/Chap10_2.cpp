#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string class의 생성자 오버로딩 테스트
	string str1;
	string str2("Test2 String");

	char name[80] = "Computer Science";
	string str3(name);
	string str4(10, 'A');

	str1 = "Test1 String";

	
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;

	// string class의 append 멤버함수 오버로딩 테스트
	str2.append("is Good!");
	str2.append(str1, 0, 8);
	str2.append(5, '!');

	cout << str2 << endl;

	// string class의 assign 멤버함수 오버로딩 테스트
	str2.assign("김기환");

	cout << str2 << endl;

	str2 = "Computer";

	cout << str2 << endl;


	cout << str2[0] << endl;

	return 0;
}