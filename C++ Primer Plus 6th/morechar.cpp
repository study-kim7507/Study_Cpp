// morechar.cpp -- char���� int���� ��
// char�� ������ ����Ǵ� ���� ���ڿ� �ش��ϴ� �ƽ�Ű�ڵ� ��.
// cout �� cin�� ��°� �Է� �������� ���ڸ� �ش��ϴ� �ƽ�Ű�ڵ� ������ ��ȯ�Ͽ� ��� �Ǵ� �Է�.
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';      // M�� �ش��ϴ� ASCII �ڵ带 char�� ���� ch�� ����
	int i = ch;			// ���� �ڵ带 int�� ���� i�� ����
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� �����ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch = ch + 1;
	i = ch;
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ��� : ";
	cout.put(ch);

	cout.put('!');

	cout << endl << "����" << endl;
	return 0;
}