#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;

	if (score > 100 || score < 0)
		cout << "잘못된 점수입니다." << endl;
	else if (score <= 100 && score >= 90)
		cout << "당신의 성적은 A입니다." << endl;
	else if (score <= 89 && score >= 80)
		cout << "당신의 성적은 B입니다." << endl;
	else if (score <= 79 && score >= 70)
		cout << "당신의 성적은 C입니다." << endl;
	else if (score <= 69 && score >= 60)
		cout << "당신의 성적은 D입니다." << endl;
	else
		cout << "당신의 성적은 F입니다." << endl;

	return 0;
}