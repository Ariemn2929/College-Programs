// This program displays three rows of numbers.

#include "pch.h"
#include <iostream>
#include <iomanip>      // Required for setw
using namespace std;

int main()
{
	int num1 = 28197, num2 = 25, num3 = 3837,
		num4 = 434, num5 = 57, num6 = 61623,
		num7 = 7390, num8 = 83456, num9 = 912;

	// Display the first row of numbers
	cout << setw(6) << num1 << setw(6)
		<< num2 << setw(6) << num3 << endl;

	// Display the second row of numbers
	cout << setw(6) << num4 << setw(6)
		<< num5 << setw(6) << num6 << endl;

	// Display the third row of numbers
	cout << setw(6) << num7 << setw(6)
		<< num8 << setw(6) << num9 << endl;
	return 0;
}