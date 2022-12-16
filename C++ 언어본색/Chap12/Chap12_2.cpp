#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage() // �����Լ�
	{
		return "class A";
	}
};

class B :public A
{
public:
	string ClassMessage() // �Լ� �������̵�
	{
		return "class B";
	}
};
class C :public B
{
public:
	string ClassMessage()
	{
		return "class C";
	}
};
void TestFunction1(A x)
{
	cout << x.ClassMessage().data() << endl;
}

void TestFunction2(A* x) // ��ü�� �ּҸ� ����.
{
	cout << x->ClassMessage().data() << endl;
}
int main()
{
	A a;
	B b;
	C c;

	TestFunction1(a);
	TestFunction1(b);

	TestFunction2(&a);
	TestFunction2(&b);
	TestFunction2(&c);

	return 0;
}