#include <iostream>
using namespace std;

int main()
{
	int LoanAmount, MonthPayment;
	double YearOfInterest = 0.025;
	double MonthOfInterest;

	cout << "���� �ݾ� �Է� : ";
	cin >> LoanAmount;

	MonthOfInterest = YearOfInterest / 12;
	MonthPayment = (LoanAmount / 12) + (int)(LoanAmount * MonthOfInterest);

	for (int i = 1; i <= 12; i++) {
		cout << i << "��° �� ���ξ� : " << MonthPayment << endl;
	}

	return 0;

}