#include "Chap11_07_Header.h"

int main()
{
	ofstream output;
	Triangle tr1("pink", 3.4, 5.1, 4.2);
	double s0, s1, s2;
	output.open("triangle.txt");

	tr1.GetEdges(&s0, &s1, &s2);
	tr1.CalArea();

	output << "»ï°¢ÇüÀÇ »ö : " << tr1.GetColor() << endl;
	output << "»ï°¢ÇüÀÇ ¸é1 : " << s0 << endl;
	output << "»ï°¢ÇüÀÇ ¸é2 : " << s1 << endl;
	output << "»ï°¢ÇüÀÇ ¸é3 : " << s2 << endl;
	output << "»ï°¢ÇüÀÇ ³ÐÀÌ : " << tr1.GetArea() << endl;

	Triangle tr2;
	tr2.SetEdges(3.4, 5.1, 4.2);
	tr2.SetColor("pink");
	tr2.GetEdges(&s0, &s1, &s2);
	tr2.CalArea();
	output << "»ï°¢ÇüÀÇ »ö : " << tr2.GetColor() << endl;
	output << "»ï°¢ÇüÀÇ ¸é1 : " << s0 << endl;
	output << "»ï°¢ÇüÀÇ ¸é2 : " << s1 << endl;
	output << "»ï°¢ÇüÀÇ ¸é3 : " << s2 << endl;
	output << "»ï°¢ÇüÀÇ ³ÐÀÌ : " << tr2.GetArea() << endl;

	output.close();

	return 0;
}