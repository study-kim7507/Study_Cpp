#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "���� �Է� : ";
	cin >> a;

	if (a > 100)
		cout << a << "�� 100���� Ů�ϴ�." << endl;
	
	else if (a == 100)
		cout << a << "�� 100�� �����ϴ�." << endl;
	else
		cout << a << "�� 100���� ũ�� �ʽ��ϴ�." << endl;

	return 0;
}