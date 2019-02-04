// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// This program averages three test scores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int HIGH_SCORE = 96;   // A high score is 95 or greater
	int score1, score2, score3;  // To hold three test scores
	double average;              // TO hold the average score

	// Get the three test scores.
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	// Calculate and display the average score.
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	// If the average is a high score, congratulate the user.
	if (average > HIGH_SCORE)
	{
		cout << "Congratulations! That's a high score!\n";
	}
	if (average < HIGH_SCORE)
	{
		cout << "You LOST! That's not a high score!\n";
	}
	return 0;
}