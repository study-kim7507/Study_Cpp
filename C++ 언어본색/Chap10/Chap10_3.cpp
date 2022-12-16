#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream output;
	output.open("fstream_test.txt"); // output 객체를 통해, ofstream class에 정의된 open 멤버함수 호출. 
	output << "파일 스트림 테스트 !!!";
	output.close();

	return 0;
}