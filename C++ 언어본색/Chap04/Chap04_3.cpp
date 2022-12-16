#include <iostream>
using namespace std;

int main()
{
	int score[4] = {};
	int sum = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cin >> score[i];
		sum += score[i];
	}

	score[i] = sum;
	cout << score[i] << endl;

	return 0;
}