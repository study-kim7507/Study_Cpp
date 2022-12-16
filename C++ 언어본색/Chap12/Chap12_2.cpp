#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage() // 가상함수
	{
		return "class A";
	}
};

class B :public A
{
public:
	string ClassMessage() // 함수 오버라이딩
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

void TestFunction2(A* x) // 객체의 주소를 전달.
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