// This program uses a type cast to avoid integer division.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int books;        // Number of articles to read
	int months;       // Number of months spent reading
	double perMonth;  // Average number of articles per month

	cout << "How many articles do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;
	perMonth = static_cast<double>(books) / months;
	cout << "That is " << perMonth << " articles per month.\n";
	return 0;
}