#include<iostream>
using namespace std;

int main()
{
	float su;
	int n, i, imsi;

	cout << "�Ǽ� �Է� : ";
	cin >> su;
	cout << "�ݿø� �ڸ��� �Է� : ";
	cin >> n;

	for (i = 0; i < n; i++)
		su = su * 10;

	su = su + 5;
	imsi = (int)su / 10;
	su = (float)imsi;

	for (i = 0; i < n - 1; i++)
		su = su / 10;

	cout << "�ݿø� ��� �� : " << su << endl;

	return 0;
}