#include "Chap08_2_Header.h"

void Weight::setHeight(const double h)
{
	height = h;
}
void Weight::setWeight(const double w)
{
	weight = w;
}
double Weight::getHeight() 
{
	return height;
}
double Weight::getWeight()
{
	return weight;
}
int Weight::getWeightStatus()
{
	StdWeight();
	return weightStatus;
}
int Weight::StdWeight()
{
	double sw = (height - 110) * 0.9;
	if (sw + 0.5 < weight)
		weightStatus = 1;
	else if (sw - 0.5 > weight)
		weightStatus = -1;
	else
		weightStatus = 0;

	return 1;
}