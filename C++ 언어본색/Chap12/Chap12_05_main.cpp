#include "Chap12_05_Header.h"

int main()
{
	SungJuk student;
	string name[5] = { "�ڴ���", "�赿��", "���Ѽ�", "ȫ����", "��â��" };
	int score[5] = { 95, 100, 43, 99, 67 };
	int i;

	student.SetScore(score, 5);
	student.SetName(name, 5);

	student.SetGrade(score, 5);
	student.SetRank(score, 5);

	cout << "**** ���� �� �ڷ� ****" << endl;
	cout << "�̸� ���� ���" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << student.GetName(i) << " " << setw(3) << student.GetScore(i);
		cout << " " << student.GetRank(i) << endl;
	}

	cout << endl;
	student.OrderOnScore();

	cout << "**** ���� �� �ڷ� ****" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << student.GetOrderName(i) << " " << setw(3) << student.GetOrderScore(i) << " ";
		cout << " " << student.GetOrderRank(i) << " ";
		student.DisplayGraph(i);

		cout << endl;
	}
	
	return 0;
}