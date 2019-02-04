// 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// This program uses relational operators to compare a string
// entered by the user with valid stereo part numbers.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double PRICE_A = 119.0,
		PRICE_B = 159.0;

	string partNum; // Holds a stereo part number

	// Display available parts and get the user's selection
	cout << "The stereo part numbers are:\n"
		<< "Boom Box : part number K-59A \n"
		<< "Shelf Model: part number K-59B \n"
		<< "Enter the part number of the stereo you\n"
		<< "wish to purchase: ";
	cin >> partNum;

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Determine and display the correct price
	if (partNum == "K-59A")
		cout << "The price is $" << PRICE_A << endl;
	else if (partNum == "K-59B")
		cout << "The price is $" << PRICE_B << endl;
	else
		cout << partNum << " is not a valid part number.\n";
	return 0;
}