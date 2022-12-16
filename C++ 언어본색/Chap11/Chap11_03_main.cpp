#include "Chap11_03_Header.h"

int main()
{
	A obj_A;

	obj_A.SetVar(10, 20);
	obj_A.ShowVar();

	B obj_B;

	obj_B.SetVar(30, 40);
	obj_A.ShowVar();
	obj_B.ShowVar();
	obj_B.Show();
	obj_A.ShowVar();
	obj_B.Show();

	return 0;
}