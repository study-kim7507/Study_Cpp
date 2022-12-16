#include "Chap06_5_Header.h"

int TotalCalculation(const int* jumsu, const int num, int* tot)
{
	if (num < 0)
		return -1;

	for (int i = 0; i < num; i++)
	{
		if (jumsu[i] < 0 || jumsu[i] > 100) 
			return -1;
		*tot += jumsu[i];
	}
	
	return 0;
}

int Round(float* aver, const int digits)
{
	int temp = 0;
	if (digits < 0)
		return -1;
	for (int i = 0; i < digits; i++)
		*aver *= 10;

	*aver += 5;
	temp = (int)(*aver / 10); 
	*aver = temp;

	for (int i = 0; i < digits - 1; i++)
		*aver /= (float)10;

	return 0;
}