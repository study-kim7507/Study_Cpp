#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("test.txt");

	// fail() 멤버함수는 open시 입력한 파일이 존재하는 경우 false를 리턴, 존재하지 않는 경우 true를 리턴
	if (input.fail())
	{
		cout << "파일이 존재하지 않습니다!!" << endl;
		return 0;
	}
	else
	{
		// 파일이 존재하여 파일이 열린 경우, 이후 파일을 닫기위해 close()를 해주어야 한다.
		cout << "파일 열기 후 실행!!" << endl;
		input.close();
	}

	return 0;;
}