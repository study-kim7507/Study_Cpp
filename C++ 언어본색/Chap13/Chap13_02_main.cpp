#include "Chap13_02_Header.h"

int main()
{
	Time t1(7, 30, 20);

	cout << t1.ShowTime() << endl;
	cout << "시간 - 초 단위 : " << t1.CalSecond() << endl;

	Time t2(4, 50, 23);

	if (t1 >= t2)
		cout << t1.ShowTime() << "가 " << t2.ShowTime() << "보다 크거나 같다." << endl;
	else
		cout << t2.ShowTime() << "가 " << t1.ShowTime() << "보다 크거나 같다." << endl;

	if (t1 <= t2)
		cout << t2.ShowTime() << "가 " << t1.ShowTime() << "보다 크거나 같다." << endl;
	else
		cout << t1.ShowTime() << "가 " << t2.ShowTime() << "보다 크거나 같다." << endl;

	return 0;
}