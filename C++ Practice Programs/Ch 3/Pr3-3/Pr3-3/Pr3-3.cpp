// This program demonstrates how cin can read multiple values
// of different data types.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int whole;
	double fractional;
	char letter;

	cout << "Enter an character, a double, and a integer seprated by a space: ";
	cin >> letter >> fractional >> whole;
	cout << "Letter: " << letter << endl;
	cout << "Fractional: " << fractional << endl;
	cout << "Whole: " << whole << endl;
	return 0;
}