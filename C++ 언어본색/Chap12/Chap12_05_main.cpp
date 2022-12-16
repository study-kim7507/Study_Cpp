#include "Chap12_05_Header.h"

int main()
{
	SungJuk student;
	string name[5] = { "박달자", "김동현", "이한수", "홍서연", "김창민" };
	int score[5] = { 95, 100, 43, 99, 67 };
	int i;

	student.SetScore(score, 5);
	student.SetName(name, 5);

	student.SetGrade(score, 5);
	student.SetRank(score, 5);

	cout << "**** 정렬 전 자료 ****" << endl;
	cout << "이름 점수 등수" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << student.GetName(i) << " " << setw(3) << student.GetScore(i);
		cout << " " << student.GetRank(i) << endl;
	}

	cout << endl;
	student.OrderOnScore();

	cout << "**** 정렬 후 자료 ****" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << student.GetOrderName(i) << " " << setw(3) << student.GetOrderScore(i) << " ";
		cout << " " << student.GetOrderRank(i) << " ";
		student.DisplayGraph(i);

		cout << endl;
	}
	
	return 0;
}