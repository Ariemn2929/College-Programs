// This program calculates the sale price of an item
// that is regularly priced at $59.95, with a 20 percent
// discount subtracted.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Variables to hold the regular price, the
	// amount of a discount, and the sale price.
	double regularPrice = 69.95, discount, salePrice;

	// Calculate the amount of a 22% discount.
	discount = regularPrice * 0.22;

	// Calculate the sale price by subtracting the
	// discount from the regular price.
	salePrice = regularPrice - discount;

	// Display the results.
	cout << "Regular price: $" << regularPrice << endl;
	cout << "Discount amount: $" << discount << endl;
	cout << "Sale price: $" << salePrice << endl;
	return 0;
}