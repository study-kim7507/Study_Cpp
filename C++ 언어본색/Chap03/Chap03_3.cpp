#include <iostream>
using namespace std;

int main()
{
	int score;
	char flag = 'y';

	do
	{
		if (flag != 'y')
			cout << "������ ������ �߸� �Ǿ����ϴ�. �ٽ� �Է��ϼ���!!" << endl;
		
		cout << "���� �Է� : ";
		cin >> score;

		flag = 'n';
	} while (score > 100 || score < 0);

	cout << "�Էµ� ���� : " << score << endl;

	return 0;
}