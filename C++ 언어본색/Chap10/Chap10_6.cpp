#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output; // ��� ���� ��ü ����
	char cont = 'y';
	char word[50] = { 0, };

	output.open("test.txt");

	if (output.fail())
		return 1;

	while (cont == 'y' || cont == 'Y')
	{
		cout << "�ܾ� �Է� : ";
		cin >> word;

		output << word << endl;
		
		cout << "��� �Ͻðڽ��ϱ�? (y/n)";
		cin >> cont;
	}

	output.close();

	return 0;
}