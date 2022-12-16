#include <iostream>
using namespace std;

int main()
{
	int LoanAmount, MonthPayment;
	double YearOfInterest = 0.025;
	double MonthOfInterest;

	cout << "대출 금액 입력 : ";
	cin >> LoanAmount;

	MonthOfInterest = YearOfInterest / 12;
	MonthPayment = (LoanAmount / 12) + (int)(LoanAmount * MonthOfInterest);

	for (int i = 1; i <= 12; i++) {
		cout << i << "번째 달 납부액 : " << MonthPayment << endl;
	}

	return 0;

}