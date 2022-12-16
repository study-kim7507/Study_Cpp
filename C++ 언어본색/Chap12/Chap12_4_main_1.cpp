#include "Chap12_4_Header.h"


void DisplayGeometricObject(GeometricObject& object)
{
	double d1, d2;
	object.getLine(&d1, &d2);
	cout << "line1 : " << d1 << endl;
	cout << "line2 : " << d2 << endl;

	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p); // 다운캐스팅
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != NULL)
	{
		p1->AreaCalculation();
		p1->Compute();
		double area, side;
		p1->getVar(&area, &side);
		cout << "이등변 삼각형의 넓이 : " << area << endl;
		cout << "이등변 삼각형의 둘레 : " << side << endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->Compute();
		double area, round;
		p2->getVar(&area, &round);

		cout << "사각형의 넓이 : " << area << endl;
		cout << "사각형의 둘레 : " << round << endl;
	}
}
int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DisplayGeometricObject(p1);

	cout << "*********************" << endl;

	DisplayGeometricObject(p2);

	return 0;
}