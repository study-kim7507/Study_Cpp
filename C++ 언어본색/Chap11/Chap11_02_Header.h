#pragma once
#ifndef _CHAP11_02_HEADER_H_
#define _CHAP11_02_HEADER_H_

#define MAX 50
#include <iostream>
#include <string>
using namespace std;

class StringCharArray:public string
{
public:
	void toCharArray(char* str);
};

#else
#endif