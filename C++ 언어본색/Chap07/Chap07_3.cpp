#include <iostream>
using namespace std;

int CalSumAndAvg(int (*score)[5], double*);
void CalRank(int(*score)[5]);

int main() {
	int score[10][5] = { {79,67,38,0,0}, {87,98,34,0,0},{87,44,38,0,0}, {78,32,65,0,0},{76,42,76,0,0},{67,23,65,0,0},{76,65,43,0,0},
		{34,56,76,0,0},{89,87,98,0,0},{56,56,23,0,0} };

	double avg[10] = { 0, };
	int i, errorNum;

	errorNum = CalSumAndAvg(score, avg);

	if(errorNum == -1) return -1;
	CalRank(score);

	for (i = 0; i < 10; i++) {
		cout << i << "번쨰 학생의 총점 : " << score[i][3] << ", " << "평균 : " << avg[i] << ", " << "등수 : " << score[i][4] << endl;
	}
	return 0;
}

int CalSumAndAvg(int (*score)[5], double* avg) {
	int i;
	int sum;

	for (i = 0; i < 10; i++)
	{
		// 학생의 점수가 0보다 작거나 100보다 큰 경우가 있을 경우 -1 반환
		if (score[i][0] < 0 || score[i][1] < 0 || score[i][2] < 0) return -1;
		if (score[i][0] > 100 || score[i][1] > 100 || score[i][2] > 100) return -1;
		
		sum = score[i][0] + score[i][1] + score[i][2];
		avg[i] = sum / (double)3;

		score[i][3] = sum;
	}

	return 0;
}

void CalRank(int(*score)[5])
{
	int i, j;
	int rank;
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (score[i][3] < score[j][3]) score[i][4]++;
			else score[j][4]++;
		}
	}
	for (i = 0; i < 10; i++) score[i][4]++;
}
