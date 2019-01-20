// This program demonstrates three ways
// to use cin.get() to pause a program

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "This program has paused. Please press Enter to continue.";
	cin.get(ch);
	cout << "It has paused a second time. Please press Enter again.";
	ch = cin.get();
	cout << "It has paused a third time. Please press Enter again.";
	cin.get();
	cout << "Thank you!";
	return 0;
}