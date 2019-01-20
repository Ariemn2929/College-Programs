// This program shows three variables defined on the same line.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int floors, rooms, suites;

	floors = 30;
	rooms = 600;
	suites = 60;
	cout << "The Grander Hotel has " << floors << " floors\n";
	cout << "with " << rooms << " rooms and " << suites;
	cout << " suites.\n";
	return 0;
}