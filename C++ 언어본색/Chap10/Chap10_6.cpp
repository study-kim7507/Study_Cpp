#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output; // 출력 파일 객체 생성
	char cont = 'y';
	char word[50] = { 0, };

	output.open("test.txt");

	if (output.fail())
		return 1;

	while (cont == 'y' || cont == 'Y')
	{
		cout << "단어 입력 : ";
		cin >> word;

		output << word << endl;
		
		cout << "계속 하시겠습니까? (y/n)";
		cin >> cont;
	}

	output.close();

	return 0;
}