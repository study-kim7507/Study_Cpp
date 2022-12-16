#include <iostream>
#include <string>
using namespace std;

class AbstractClass
{
public:
	virtual string SampleFunction() = 0; // ���� ���� �Լ�
};

class TestClass : public AbstractClass // �߻�Ŭ������ ���. �߻�Ŭ������ ���Ե� ���� ���� �Լ��� �������̵� �ؾ���.
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