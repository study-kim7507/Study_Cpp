#include "Chap13_02_Header.h"

int main()
{
	Time t1(7, 30, 20);

	cout << t1.ShowTime() << endl;
	cout << "�ð� - �� ���� : " << t1.CalSecond() << endl;

	Time t2(4, 50, 23);

	if (t1 >= t2)
		cout << t1.ShowTime() << "�� " << t2.ShowTime() << "���� ũ�ų� ����." << endl;
	else
		cout << t2.ShowTime() << "�� " << t1.ShowTime() << "���� ũ�ų� ����." << endl;

	if (t1 <= t2)
		cout << t2.ShowTime() << "�� " << t1.ShowTime() << "���� ũ�ų� ����." << endl;
	else
		cout << t1.ShowTime() << "�� " << t2.ShowTime() << "���� ũ�ų� ����." << endl;

	return 0;
}