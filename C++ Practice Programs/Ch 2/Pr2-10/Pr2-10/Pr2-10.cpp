// This program has variables of several of the integer types.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int checking;
	unsigned int miles;
	long months;

	checking = 30;
	miles = 4276;
	months = 6300;
	cout << "We have made a laborous journey of " << miles;
	cout << " miles.\n";
	cout << "Our bank account is " << checking << " in the red";
	cout << "\nAbout " << months << " months ago Columbus ";
	cout << "stood on this spot.\n";
	return 0;
}