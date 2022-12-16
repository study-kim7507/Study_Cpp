#include <iostream>
#include <string> // string class 가 정의 되어 있음.
using namespace std;

int main()
{
	string s_name;
	string ss_name("김기환");
	s_name = "문자열";

	cout << s_name << endl;
	cout << "문자열의 길이 : " << s_name.length() << endl;

	s_name = s_name + "클래스"; // 문자열 연산 가능 string class에 연산자 오버로딩으로 정의 되어 있음.
	s_name.append("김기환");

	cout << s_name << endl;
	cout << ss_name << endl;
	cout << "문자열의 길이 : " << s_name.length() << endl;

	// s_name.append("클래스");
	return 0;
}