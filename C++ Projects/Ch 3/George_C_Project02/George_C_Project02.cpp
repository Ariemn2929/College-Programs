//Connor George
//This program will take input of tables sold and display the sales for each
//type as well as total sales.
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Table prices
	const double FARM_TABLE = 85.00;
	const double URBAN_TABLE = 57.50;
	const double SHABBY_TABLE = 127.75;

	//Input intialization
	int farm, urban, shabby;

	//Sales Variables
	double farmS, urbanS, shabbyS, total;

	//Body and input
	cout << "Please input the number of Farmhouse tables sold:\n";
	cin >> farm;
	cout << "Please input the number of Urban tables sold:\n";
	cin >> urban;
	cout << "Please input the number of Shabby Chic tables sold:\n";
	cin >> shabby;

	//Calculations
	farmS = farm * FARM_TABLE;
	urbanS = urban * URBAN_TABLE;
	shabbyS = shabby * SHABBY_TABLE;
	total = farmS + urbanS + shabbyS;

	//Output
	cout << setprecision(2) << fixed;
	cout << "\n\nThe total sales of Farmhouse tables: $" << farmS;
	cout << "\nThe total sales of Urban tables: $" << urbanS;
	cout << "\nThe total sales of Shabby Chic tables: $" << shabbyS;
	cout << "\n\nThe total sales of all tables: $" << total;
}