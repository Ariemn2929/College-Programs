// 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// The switch statement in this program tells the user something
// he or she already knows: what they just entered!
#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "Enter G, H, or K: ";
	cin >> choice;
	// The following switch is
	// missing its break statements!
	switch (choice)
	{
	case 'G': cout << "You entered G.\n";
	case 'H': cout << "You entered H.\n";
	case 'K': cout << "You entered K.\n";
	default:  cout << "You did not enter G, H, or K!\n";
	}
	return 0;
}