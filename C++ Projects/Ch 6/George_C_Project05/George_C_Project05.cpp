//Connor George
//This program will calculate a dental bill based on user input.

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
double dentalBill(double,double);
double dentalBill(double,double,double);

int main()
{
	double sCharge; //Service charges var
	double tCharge; //Test charges var
	double mCharge; //Medicine charges var 
	char choice; //Menu var
	
	//Initial and menu selection output
	cout << "This program will calculate your dental bill.\n";
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Are you a member of a dental plan(Y/N): ";
	cin >> choice;
	
	//Input validation
	while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
	{
		cout << "Please enter Y or N ";
		cin >> choice;
	}
	
	//Menu
	switch (choice)
	{
		case 'Y' :
		case 'y' : //Dental plan covered
					cout << "\nWhat were the service charges: $";
					cin >> sCharge;
					cout << "\nWhat were the test charges: $";
					cin >> tCharge;
					cout << "\nYour total bill is $";
					cout << dentalBill(sCharge, tCharge) << endl;
					break;
		case 'N' :
		case 'n' : //Non-Dnetal plan covered
					cout << "\nWhat were the service charges: $";
					cin >> sCharge;
					cout << "\nWhat were the test charges: $";
					cin >> tCharge;
					cout << "\nWhat were the medicine charges: $";
					cin >> mCharge;
					cout << "\nYour total bill is $";
					cout << dentalBill(sCharge, tCharge, mCharge) << endl;
					break;
	}
	return 0;
}

//Total bill calculations for dental plan
double dentalBill(double sCharge, double tCharge)
{
	return sCharge + tCharge;
}

//Total bill calculations for non-dental plan
double dentalBill(double sCharge, double tCharge, double mCharge)
{
	return sCharge + tCharge + mCharge;
}