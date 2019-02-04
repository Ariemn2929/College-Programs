// 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// This program demonstrates how a misplaced semicolon
// prematurely terminates an if statement.
#include <iostream>
using namespace std;

int main()
{
	int x = 6, y = 76;

	cout << "x is " << x << " and y is " << y << endl;
	if (x > y);    // Error! Misplaced semicolon
	cout << "x is greater than y\n"; //This is always executed.
	return 0;
}