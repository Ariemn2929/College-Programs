//Connor George
//This program will input data from a file, run a calculation, and then output the results to a file.

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	double quantity, unit_price, total_price;

	//Input file opened
	inputFile.open("transactions.dat");
	
	//Get data into variables
	inputFile >> quantity;
	inputFile >> unit_price;

	//Close input file
	inputFile.close();

	//Calculation
	total_price = quantity * unit_price;

	//Output
	cout << "The total bill is $" << total_price;

	//Output file opened
	outputFile.open("bill.out");

	//Output sent to out file
	outputFile << total_price;

	//Close ouput file
	outputFile.close();

	return 0;
}