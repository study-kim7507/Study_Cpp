#include "Chap08_3_Header.h"

int main()
{
	Course c1;
	char course[30] = { 0. };
	char name[30] = { 0. };
	char ch = 'y';
	char t_name[10][30] = { 0. };
	int i, count = 0;

	cout << "과정명 입력 : ";
	cin >> course;

	c1.setCourseName(course);

	while (ch == 'y' || ch == 'Y')
	{
		cout << "수강 학생 이름 입력 : ";
		cin >> name;

		c1.setName(name);

		cout << "계속하시겠습니까? (y/n) : ";
		cin >> ch;
	}

	c1.getName(t_name);
	count = c1.getCount();
	cout << "수강 학생 명단 : " << endl;

	for (i = 0; i < count; i++)
	{
		cout << t_name[i] << " ";
	}

	cout << endl;
	return 0;
}