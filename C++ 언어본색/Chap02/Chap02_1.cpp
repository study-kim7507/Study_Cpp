#include <iostream>
using namespace std;

int main()
{
	// 변수 선언
	int kor, math, eng, sum;
	float average;

	// 선언된 변수에 상수 대입
	kor = 100;
	math = 98;
	eng = 79;

	sum = kor + math + eng;
	average = sum / (float)3;

	cout << "총점 : " << sum << endl;
	cout << "평균 : " << average << endl;

	return 0;
}