#include <iostream>
using namespace std;

#define PI 3.14

double CalArea(int);

int main() {
	int age = 18;
	double height;
	int radius, area;

	cout << "Ű�� �Է��ϼ��� : ";
	cin >> height;

	cout << "�������� �Է��ϼ��� : ";
	cin >> radius;

	area = CalArea(radius);

	cout << "���� : " << age << "Ű : " << height << "������ : " << radius << "���� : " << area << endl;

	return 0;
}

double CalArea(int r)
{
	return r * r * PI;
}