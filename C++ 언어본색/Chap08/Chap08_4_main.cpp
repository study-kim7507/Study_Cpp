#include "Chap08_4_Header.h"

int main()
{
	Triangle t1;
	double area;
	double a, b, c;
	double s1, s2, s3;

	cout << "»ï°¢ÇüÀÇ ¼¼ º¯ ÀÔ·Â : ";
	cin >> a >> b >> c;

	t1.setEdges(a, b, c);
	area = t1.calArea();

	t1.getEdges(&s1, &s2, &s3);

	cout << "»ï°¢ÇüÀÇ ¼¼ º¯ : " << s1 << ", " << s2 << ", " << s3 << endl;
	cout << "»ï°¢ÇüÀÇ ³ÐÀÌ : " << area << endl;

	return 0;
}