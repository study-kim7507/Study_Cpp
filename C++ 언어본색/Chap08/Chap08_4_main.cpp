#include "Chap08_4_Header.h"

int main()
{
	Triangle t1;
	double area;
	double a, b, c;
	double s1, s2, s3;

	cout << "�ﰢ���� �� �� �Է� : ";
	cin >> a >> b >> c;

	t1.setEdges(a, b, c);
	area = t1.calArea();

	t1.getEdges(&s1, &s2, &s3);

	cout << "�ﰢ���� �� �� : " << s1 << ", " << s2 << ", " << s3 << endl;
	cout << "�ﰢ���� ���� : " << area << endl;

	return 0;
}