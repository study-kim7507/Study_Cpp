#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string class�� ������ �����ε� �׽�Ʈ
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

	// string class�� append ����Լ� �����ε� �׽�Ʈ
	str2.append("is Good!");
	str2.append(str1, 0, 8);
	str2.append(5, '!');

	cout << str2 << endl;

	// string class�� assign ����Լ� �����ε� �׽�Ʈ
	str2.assign("���ȯ");

	cout << str2 << endl;

	str2 = "Computer";

	cout << str2 << endl;


	cout << str2[0] << endl;

	return 0;
}