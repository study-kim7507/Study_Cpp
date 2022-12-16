#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "정수 입력 : ";
	cin >> a;

	if (a > 100)
		cout << a << "는 100보다 큽니다." << endl;
	
	else if (a == 100)
		cout << a << "는 100과 같습니다." << endl;
	else
		cout << a << "는 100보다 크지 않습니다." << endl;

	return 0;
}