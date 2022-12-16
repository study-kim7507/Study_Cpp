#include <iostream>
#include <string>
using namespace std;

class AbstractClass
{
public:
	virtual string SampleFunction() = 0; // 순수 가상 함수
};

class TestClass : public AbstractClass // 추상클래스를 상속. 추상클래스에 포함된 순수 가상 함수를 오버라이딩 해야함.
{
public:
	string SampleFunction()
	{
		return "SampleFunction";
	}
};

int main()
{
	TestClass obj1;

	cout << obj1.SampleFunction() << endl;

	return 0;
}