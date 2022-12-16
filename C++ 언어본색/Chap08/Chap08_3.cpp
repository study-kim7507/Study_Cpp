#include "Chap08_3_Header.h"

/*
class Course
{
public:
	void setCourseName(const char* cn);
	void setName(const char* n);
	int getCourseName(char* cn);
	int getName(char* n[30]);
	int getCount();

private:
	char CourseName[30];
	char Name[10][30];
	int count;
};
*/

void Course::setCourseName(const char* cn)
{
	strcpy_s(CourseName, 30, cn);
	count = 0;
}

void Course::setName(const char* n)
{
	strcpy_s(Name[count], 30, n);
	count++;
}

int Course::getCourseName(char* cn)
{
	if (count == 0) return 0;
	strcpy_s(cn, 30, CourseName);

	return 1;
}

int Course::getName(char (*n)[30])
{
	int i;
	for (i = 0; i < count; i++)
	{
		strcpy_s(n[i], 30, Name[i]);
	}
	return 0;
}

int Course::getCount()
{
	return count;
}