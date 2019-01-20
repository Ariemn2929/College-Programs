// This program demonstrates how setprecision rounds a
// floating point value.

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double quotient, number1 = 435.148, number2 = 45.92;

	quotient = number1 / number2;
	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	return 0;
}