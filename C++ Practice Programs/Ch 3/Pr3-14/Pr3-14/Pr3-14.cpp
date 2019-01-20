// This program demonstrates the setw manipulator being
// used with values of various data types.

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int intValue = 1458;
	double doubleValue = 19.9;
	string stringValue = "Connor H. George";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;
	return 0;
}