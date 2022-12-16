#include <iostream>
using namespace std;

#define PI 3.14

double CalArea(int);

int main() {
	int age = 18;
	double height;
	int radius, area;

	cout << "키를 입력하세요 : ";
	cin >> height;

	cout << "반지름을 입력하세요 : ";
	cin >> radius;

	area = CalArea(radius);

	cout << "나이 : " << age << "키 : " << height << "반지름 : " << radius << "면적 : " << area << endl;

	return 0;
}

double CalArea(int r)
{
	return r * r * PI;
}