#include "Chap11_04_Header.h"

int main()
{

	CON2* p_TEST = new CON2(300);

	delete p_TEST;

	CON2* p_TEST1 = new CON2();

	return 0;
}