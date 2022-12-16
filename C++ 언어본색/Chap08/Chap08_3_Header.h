#pragma once
#ifndef _CHAP08_3_HEADER_H_
#define _CHAP08_3_HEADER_H_
#include <iostream>
using namespace std;

class Course
{
public:
	void setCourseName(const char* cn);
	void setName(const char* n);
	int getCourseName(char* cn);
	int getName(char (*n)[30]);
	int getCount();

private:
	char CourseName[30];
	char Name[10][30];
	int count;
};

#else
#endif