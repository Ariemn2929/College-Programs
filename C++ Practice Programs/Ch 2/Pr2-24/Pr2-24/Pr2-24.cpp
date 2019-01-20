// This program extracts the rightmost digit of a number.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number = 14567;
	int rightMost = number % 10;

	cout << "The rightmost digit in "
		<< number << " is "
		<< rightMost << endl;

	return 0;
}