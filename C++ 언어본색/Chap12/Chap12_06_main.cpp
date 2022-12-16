#include "Chap12_06_Header.h"

int main()
{
	POINT p1, p2, p3;
	p1 = { 10, 20 };
	p2 = { -10, -20 };
	p3 = { 10, 30 };

	CCoordinates C_obj(p1, p2, p3);
	
	cout << "세 변의 길이 : " << C_obj.Distance_C1C2() << " " << C_obj.Distance_C1C3()
		<< " " << C_obj.Distance_C2C3() << endl;

	p1 = { 4, 9 };
	p2 = { -10, -20 };
	p3 = { 15, 30 };

	CTriangle T_obj(p1, p2, p3);

	cout << "세 변의 길이 : " << T_obj.Distance_C1C2() << " " << T_obj.Distance_C1C3()
		<< " " << T_obj.Distance_C2C3() << endl;
	
	cout << "삼각형의 넓이 : " << T_obj.GetArea() << endl;

	return 0;
}