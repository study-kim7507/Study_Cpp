#include <iostream>
using namespace std;

int main()
{
	char jumin[30];
	char year[5] = "";
	char month[3] = "";
	char day[3] = "";

	cin >> jumin;

	if (jumin[7] == '1') {
		strcat_s(year, "19");
		strncat_s(year, jumin, 2);
	}
	else if (jumin[7] == '2') {
		strcat_s(year, "20");
		strncat_s(year, jumin, 2);
	}

	strncat_s(month, jumin + 2, 2);
	strncat_s(day, jumin + 4, 2);

	cout << "����� " << year << "�� " << month << "�� " << day << "�Ͽ� �¾�̽��ϴ�." << endl;

	return 0;
}