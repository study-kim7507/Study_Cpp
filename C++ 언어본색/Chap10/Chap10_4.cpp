#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	char message[100000];
	char cin_test[100000];

	input.open("fstream_test.txt");
	input >> message; // ������ �������� ���Ϸ� ���� �Է¹��ۿ� ���� ��, ������ �Է�.
	cout << message << endl;

	cin >> cin_test; // ������ �������� Ű����κ��� �Է��� �޾� �Է¹��ۿ� ���� ��, ������ ����
	cout << cin_test << endl;

	input.close();

	return 0;
}