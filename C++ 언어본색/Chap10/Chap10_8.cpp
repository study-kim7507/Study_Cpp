#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 1234;

	cout << "a = " << a << endl;
	cout << "a = " << setw(5) << a << endl;
	cout << "a = " << hex << setw(5) << a << endl;
	cout << "a = " << dec << setw(5) << a << endl;

	double b = 45.8769;

	cout << "b = " << b << endl;
	cout << "b = " << fixed << b << endl;
	cout << "b = " << setprecision(2) << b << endl;

	double c = 123.;

	cout << "c = " << c << endl;
	cout << "c = " << setprecision(0) << c << endl;
	cout << "c = " << showpoint << c << endl;
	cout << 987.0 << endl;

	return 0;
}