#include <iostream>
#include <string> // string class �� ���� �Ǿ� ����.
using namespace std;

int main()
{
	string s_name;
	string ss_name("���ȯ");
	s_name = "���ڿ�";

	cout << s_name << endl;
	cout << "���ڿ��� ���� : " << s_name.length() << endl;

	s_name = s_name + "Ŭ����"; // ���ڿ� ���� ���� string class�� ������ �����ε����� ���� �Ǿ� ����.
	s_name.append("���ȯ");

	cout << s_name << endl;
	cout << ss_name << endl;
	cout << "���ڿ��� ���� : " << s_name.length() << endl;

	// s_name.append("Ŭ����");
	return 0;
}