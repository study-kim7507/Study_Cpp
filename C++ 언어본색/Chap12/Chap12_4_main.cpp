#include "Chap12_4_Header.h"

int main()
{
	Isosceles Tri1(4.2, 5.4); 
	double base, height;

	Tri1.getLine(&base, &height);
	cout << "�ﰢ���� �غ� : " << base << endl;
	cout << "�ﰢ���� ���� : " << height << endl;
	cout << "�ﰢ���� ���� : " << Tri1.AreaCalculation() << endl;
	cout << "�ﰢ���� �ѷ� : " << Tri1.Compute() << endl;

	Rectangle Rect1;
	double area, round;
	Rect1.setLine(20.1, 12);
	Rect1.getLine(&base, &height);
	Rect1.AreaCalculation();
	Rect1.Compute();
	Rect1.getVar(&area, &round);
	

	cout << "�簢���� ���� : " << base << endl;
	cout << "�簢���� ���� :  " << height << endl;
	cout << "�簢���� ���� :  " << area << endl;
	cout << "�簢���� �ѷ� : " << round << endl;

	return 0;

}