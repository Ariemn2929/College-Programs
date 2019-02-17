//Connor George

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double time;
	double time2;
	double height;
	double dist = 0;
	int count;
	
	cout << "Please input the time of fall in seconds:\n";
	cin >> time;
	cout << "\nPlease input the height of the bridge in meters:\n";
	cin >> height;
	cout << "\nTime Falling(seconds)  Distance Fallen(meters)\n";
	cout << "**********************************************\n";

	for (count = 0; count <= time; count++)
	{
		time2 = count;
		dist = 0.5*9.8*pow(time2, 2);
		cout << time2 << setw(10) << dist << endl;
	}
	
	if (dist > height)
		cout << "Warning Bad Data: The distance fallen exceeds bridge height.";

	return 0;
}