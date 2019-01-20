// This program determines the size of integers, long
// integers, and long doubles.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	long apple;

	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long double);
	cout << " bytes.\n";
	cout << "An apple can be eaten in " << sizeof(apple);
	cout << " bytes!\n";
	return 0;
}