//Connor George
//This program will take input of week earnings, average them and determine if they're excessive, normal, or below average.

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constatnts for Budget Bracket Determination
	const double MAX_BUDGET = 100;
	const double MIN_BUDGET = 75;

	//Varibles for Week Spending and the Average
	double week1, week2, week3, week4, week_avg;

	//Input for Week Amounts and Average Calculation
	cout << "Please enter your grocery receipt for week 1: ";
	cin >> week1;
	cout << "Please enter your grocery receipt for week 2: ";
	cin >> week2;
	cout << "Please enter your grocery receipt for week 3: ";
	cin >> week3;
	cout << "Please enter your grocery receipt for week 4: ";
	cin >> week4;
	week_avg = (week1 + week2 + week3 + week4) / 4;

	//If Statemnts That Bracket the Ouput Into Three Responses
	if (week_avg > 100)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Your average monthly bill is $" << week_avg << ". Your grocery budget is excessive.";
	}
	else if (week_avg < 75)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Your average monthly bill is $" << week_avg << ". Your grocery budget is well managed.";
	}
	else if (week_avg >= 75 && week_avg <= 100)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Your average monthly bill is $" << week_avg << ". Your grocery budget is normal.";
	}
	return 0;
}