#include<iostream>
//using namespace std;

namespace NS_1 {
	int a = 200;
}



int main()
{
	using namespace NS_1;
	int a = 100;

	std::cout << "main() ���� �Դϴ�. " << std::endl;

	for (int i = 1; i < 3; i++)
	{
		std::cout << "�ݺ��� for�� �����Դϴ�. " << std::endl;
		std::cout << "i = " << i << std::endl;
		std::cout << "namespace NS_1 �� a = " << NS_1::a << std::endl;
		std::cout << "a = " << a << std::endl;
	}

	std::cout << "namespace NS_1 �� a = " << NS_1::a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "���α׷��� �����մϴ�." << std::endl;

	return 0;
}