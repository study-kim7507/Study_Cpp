#include <iostream>
using namespace std;

int main()
{
	// ���� ����
	int kor, math, eng, sum;
	float average;

	// ����� ������ ��� ����
	kor = 100;
	math = 98;
	eng = 79;

	sum = kor + math + eng;
	average = sum / (float)3;

	cout << "���� : " << sum << endl;
	cout << "��� : " << average << endl;

	return 0;
}