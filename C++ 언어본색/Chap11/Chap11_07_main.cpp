#include "Chap11_07_Header.h"

int main()
{
	ofstream output;
	Triangle tr1("pink", 3.4, 5.1, 4.2);
	double s0, s1, s2;
	output.open("triangle.txt");

	tr1.GetEdges(&s0, &s1, &s2);
	tr1.CalArea();

	output << "�ﰢ���� �� : " << tr1.GetColor() << endl;
	output << "�ﰢ���� ��1 : " << s0 << endl;
	output << "�ﰢ���� ��2 : " << s1 << endl;
	output << "�ﰢ���� ��3 : " << s2 << endl;
	output << "�ﰢ���� ���� : " << tr1.GetArea() << endl;

	Triangle tr2;
	tr2.SetEdges(3.4, 5.1, 4.2);
	tr2.SetColor("pink");
	tr2.GetEdges(&s0, &s1, &s2);
	tr2.CalArea();
	output << "�ﰢ���� �� : " << tr2.GetColor() << endl;
	output << "�ﰢ���� ��1 : " << s0 << endl;
	output << "�ﰢ���� ��2 : " << s1 << endl;
	output << "�ﰢ���� ��3 : " << s2 << endl;
	output << "�ﰢ���� ���� : " << tr2.GetArea() << endl;

	output.close();

	return 0;
}