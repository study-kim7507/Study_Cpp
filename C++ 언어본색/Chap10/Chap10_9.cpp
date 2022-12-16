#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fs;
	// ios::out�� ���� ���� ����. ���Ͽ� ���.
	fs.open("test.txt", ios::out);
	if (fs.fail())
		return 0;

	fs << "keyboard" << endl;
	fs << "monitor" << endl;

	fs.close();

	// ios::app�� ���� ���� ����. ���Ͽ� �߰��Ͽ� ���.
	fs.open("test.txt", ios::app);
	fs << "desk" << endl;
	fs.close();

	// ios::in�� ���� ���� ����. ���Ͽ��� �о��.
	fs.open("test.txt", ios::in);
	string temp;
	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}

	fs.close();
	return 0;
}