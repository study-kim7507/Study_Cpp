// hexoct2.cpp -- 값을 16진수와 8진수로 디스플레이한다.
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "손님 몸매는 한마디로 끝내 줍니다.\n";
	cout << "가슴둘레 : " << chest << "\n";
	cout << hex;
	cout << "허리둘레 : " << waist << "\n";
	cout << oct;
	cout << "인심길이 : " << inseam << "\n";
	return 0;
}