// arith.cpp -- C++�� ��� ����
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� �ϳ� �Է��ϼ��� : ";
	cin >> hats;
	cout << "�ٸ� ���� �Է��ϼ��� : ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}