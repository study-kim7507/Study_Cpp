#include <iostream>
using namespace std;

int main()
{
	char str[30] = "computer";
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		cout << str[i];

	cout << endl;
	cout << i << endl;

	return 0;
}