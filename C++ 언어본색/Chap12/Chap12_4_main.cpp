#include "Chap12_4_Header.h"

int main()
{
	Isosceles Tri1(4.2, 5.4); 
	double base, height;

	Tri1.getLine(&base, &height);
	cout << "삼각형의 밑변 : " << base << endl;
	cout << "삼각형의 높이 : " << height << endl;
	cout << "삼각형의 넓이 : " << Tri1.AreaCalculation() << endl;
	cout << "삼각형의 둘레 : " << Tri1.Compute() << endl;

	Rectangle Rect1;
	double area, round;
	Rect1.setLine(20.1, 12);
	Rect1.getLine(&base, &height);
	Rect1.AreaCalculation();
	Rect1.Compute();
	Rect1.getVar(&area, &round);
	

	cout << "사각형의 가로 : " << base << endl;
	cout << "사각형의 세로 :  " << height << endl;
	cout << "사각형의 면적 :  " << area << endl;
	cout << "사각형의 둘레 : " << round << endl;

	return 0;

}