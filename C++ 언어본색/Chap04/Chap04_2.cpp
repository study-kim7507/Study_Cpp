#include <iostream>
using namespace std;

int main()
{
	int jumsu1, jumsu2, jumsu3;
	int score[3];

	cout << "jumsu1�� �ּ� : " << &jumsu1 << endl;
	cout << "jumsu2�� �ּ� : " << &jumsu2 << endl;
	cout << "jumsu3�� �ּ� : " << &jumsu3 << endl << endl;

	cout << "score[0]�� �ּ� : " << score << endl;
	cout << "score[1]�� �ּ� : " << score + 1 << endl;
	cout << "score[2]�� �ּ� : " << score + 2 << endl << endl;

	cout << "score[0]�� �ּ� : " << &score[0] << endl;
	cout << "score[1]�� �ּ� : " << &score[1] << endl;
	cout << "score[2]�� �ּ� : " << &score[2] << endl;

	return 0;
}