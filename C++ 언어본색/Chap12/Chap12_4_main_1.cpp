#include "Chap12_4_Header.h"


void DisplayGeometricObject(GeometricObject& object)
{
	double d1, d2;
	object.getLine(&d1, &d2);
	cout << "line1 : " << d1 << endl;
	cout << "line2 : " << d2 << endl;

	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p); // �ٿ�ĳ����
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != NULL)
	{
		p1->AreaCalculation();
		p1->Compute();
		double area, side;
		p1->getVar(&area, &side);
		cout << "�̵ �ﰢ���� ���� : " << area << endl;
		cout << "�̵ �ﰢ���� �ѷ� : " << side << endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->Compute();
		double area, round;
		p2->getVar(&area, &round);

		cout << "�簢���� ���� : " << area << endl;
		cout << "�簢���� �ѷ� : " << round << endl;
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