#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	int age;
} PERSON;

int TEST1(PERSON p); // Call by Value
int TEST2(PERSON* p); // Call by Reference

int main()
{
	PERSON a = { "���ȯ", 25 };

	cout << "main : " << a.Name << endl;
	cout << "main : " << a.age << endl;

	// TEST1(a); // �Լ� ȣ��
	TEST2(&a);

	cout << "main : " << a.Name << endl;
	cout << "main : " << a.age << endl;

	return 0;
}

// Call by Value, �Ű������� ���� ����. 
int TEST1(PERSON p)
{
	cout << "TEST1 : " << p.Name << endl;
	cout << "TEST1 : " << p.age << endl;

	strcpy_s(p.Name, 30, "��ٿ�");
	p.age = 23;

	cout << "TEST1 : " << p.Name << endl;
	cout << "TEST1 : " << p.age << endl;

	return 0;
}

int TEST2(PERSON* p)
{
	cout << "TEST2 : " << p->Name << endl;
	cout << "TEST2 : " << p->age << endl;

	strcpy_s(p->Name, 30, "��ٿ�");
	p->age = 23;

	cout << "TEST2 : " << p->Name << endl;
	cout << "TEST2 : " << p->age << endl;

	return 0;
}
