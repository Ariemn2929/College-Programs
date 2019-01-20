// This program calculates the amount of pay that will
// be contributed to a retirement plan if 5%, 7%, or 10%
// of monthly pay is withheld.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Variables to hold the monthly pay and the
	// amount of contribution.
	double monthlyPay = 6200.0, contribution;

	// Calculate and display a 6% contribution.
	contribution = monthlyPay * 0.06;
	cout << "6 percent is $" << contribution
		<< " per month.\n";

	// Calculate and display a 8% contribution.
	contribution = monthlyPay * 0.08;
	cout << "8 percent is $" << contribution
		<< " per month.\n";

	// Calculate and display a 12% contribution.
	contribution = monthlyPay * 0.12;
	cout << "12 percent is $" << contribution
		<< " per month.\n";

	return 0;
}