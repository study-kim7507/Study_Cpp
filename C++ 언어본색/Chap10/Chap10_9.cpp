#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fs;
	// ios::out을 파일 모드로 설정. 파일에 출력.
	fs.open("test.txt", ios::out);
	if (fs.fail())
		return 0;

	fs << "keyboard" << endl;
	fs << "monitor" << endl;

	fs.close();

	// ios::app을 파일 모드로 설정. 파일에 추가하여 출력.
	fs.open("test.txt", ios::app);
	fs << "desk" << endl;
	fs.close();

	// ios::in을 파일 모드로 설정. 파일에서 읽어옴.
	fs.open("test.txt", ios::in);
	string temp;
	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}

	fs.close();
	return 0;
}