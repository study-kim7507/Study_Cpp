#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream output;
	output.open("fstream_test.txt"); // output ��ü�� ����, ofstream class�� ���ǵ� open ����Լ� ȣ��. 
	output << "���� ��Ʈ�� �׽�Ʈ !!!";
	output.close();

	return 0;
}