#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("test.txt");

	// fail() ����Լ��� open�� �Է��� ������ �����ϴ� ��� false�� ����, �������� �ʴ� ��� true�� ����
	if (input.fail())
	{
		cout << "������ �������� �ʽ��ϴ�!!" << endl;
		return 0;
	}
	else
	{
		// ������ �����Ͽ� ������ ���� ���, ���� ������ �ݱ����� close()�� ���־�� �Ѵ�.
		cout << "���� ���� �� ����!!" << endl;
		input.close();
	}

	return 0;;
}