// divide.cpp -- ���� �������� �ε��Ҽ����� ������
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� ������ : 9 / 5 = " << 9 / 5 << endl;
	cout << "�ε� �Ҽ��� �� ������ : 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
	cout << "ȥ�� ������ : 9.0 / 5 = " << 9.0 / 5 << endl;
	cout << "double �� ������ : 1e7 / 9.0 = " << 1e7 / 9.0 << endl;
	cout << "float �� ������ : 1e7f / 9.0f = " << 1e7f / 9.0f << endl;
	return 0;
}