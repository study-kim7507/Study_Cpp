#include "Chap11_01_Header.h"

int main()
{
	PFigure cir1;
	
	cout << cir1.GetColor() << endl;

	cir1.SetColor("red");
	cout << cir1.GetColor() << endl;

	Circle cir2;
	cout << cir2.GetArea() << endl;

	return 0;
}