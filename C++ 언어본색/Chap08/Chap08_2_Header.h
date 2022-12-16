#pragma once
#ifndef _CHAP08_2_HEADER_H_
#define _CHAP08_2_HEADER_H_
#include <iostream>
using namespace std;

class Weight
{
public:
	void setHeight(const double h);
	void setWeight(const double w);
	double getHeight();
	double getWeight();
	int getWeightStatus();
	
private:
	int StdWeight();
	double height;
	double weight;
	int weightStatus;
};

#else
#endif