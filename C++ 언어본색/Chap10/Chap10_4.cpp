#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	char message[100000];
	char cin_test[100000];

	input.open("fstream_test.txt");
	input >> message; // 공백을 기준으로 파일로 부터 입력버퍼에 저장 후, 변수에 입력.
	cout << message << endl;

	cin >> cin_test; // 공백을 기준으로 키보드로부터 입력을 받아 입력버퍼에 저장 후, 변수에 대입
	cout << cin_test << endl;

	input.close();

	return 0;
}