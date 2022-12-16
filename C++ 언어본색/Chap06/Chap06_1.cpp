#include <iostream>
using namespace std;

int ScoreSum(int*, int);
double AvgScore(int, int);
int ChangeScore(int*);

int main()
{
	// ������ ����
	int SubjectCount = 0;
	int Sum = 0;
	double Avg = 0;

	cout << "�� ���� ����? : ";
	cin >> SubjectCount;
	
	if (SubjectCount <= 0)
	{
		cout << "�߸� �Է�!" << endl;
		return -1;
	}

	int* Score = new int[sizeof(int) * SubjectCount];
	for (int i = 0; i < SubjectCount; i++)
	{
		cin >> Score[i];
		if (Score[i] < 0)
		{
			cout << "�߸� �Է�!" << endl;
			return -1;
		}
	}
	ChangeScore(Score);
	Sum = ScoreSum(Score, SubjectCount);
	Avg = AvgScore(Sum, SubjectCount);

	cout << "������ : " << Sum << endl;
	cout << "����� : " << Avg << endl;

	delete Score;

	return 0;
}

int ScoreSum(int* array, int num)
{
	int Sum = 0;
	for (int i = 0; i < num; i++)
		Sum += array[i];
	
	return Sum;
}

double AvgScore(int Sum, int num)
{
	return Sum / (double)num;
}

int ChangeScore(int* array)
{
	array[0] = 20000000;
	return 0;
}