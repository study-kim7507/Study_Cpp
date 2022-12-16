#include "Chap06_5_Header.h"

int main()
{
	int a[10] = { 100, 90, 80, 70, 60, 59, 87, 98 }, tot = 0, num = 8;
	float aver;
	
	if (TotalCalculation(a, num, &tot) == 0)
	{
		aver = tot / (float)num;
		Round(&aver, 2);

		cout << "ÃÑÁ¡ : " << tot << endl;
		cout << "Æò±Õ : " << aver << endl;
	}
	return 0;
}