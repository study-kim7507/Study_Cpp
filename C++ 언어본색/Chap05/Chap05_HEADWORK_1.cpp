#include "Chap05_HEADWORK_1_header.h"

int main()
{
	PERSON p1 = { 12, "92/11/07", "010-8741-0000", "�谩��", "����� ���ϱ� �Ⱦϵ�"  };
	cout << p1.num  << " " << p1.BirthDay << " " << p1.PhoneNum << " " <<  p1.Name << " " << p1.Address << endl;

	return 0;
}