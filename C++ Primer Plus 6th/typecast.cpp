// typecast.cpp -- ���� �������� ��ȯ
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;

	bats = (int)19.99 + (int)11.99; // ���� C ��Ÿ��
	coots = int(19.99) + int(11.99); // �Ž� C++ ��Ÿ��
	cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
	cout << ", �˵տ��� = " << coots << endl;

	char ch = 'Z';
	cout << "�ڵ� " << ch << " �� ���� ";
	cout << int(ch) << endl;
	cout << "��, �ڵ� Z�� ���� ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}