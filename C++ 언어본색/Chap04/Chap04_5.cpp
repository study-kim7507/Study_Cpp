#include <iostream>
using namespace std;

int main()
{
	char ch = 'y', name[30] = "KiHwan";

	cout << &ch << endl;
	cout << name << endl;
	cout << &name[0] << endl << endl;

	cout << hex << int(&ch) << endl;
	cout << hex << int(name) << endl;
	cout << hex << int(&name[0]) << endl;

	return 0;
}