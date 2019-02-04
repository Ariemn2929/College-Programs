//Connor George
//This program displays BPCC's info and calculates the area and perimeter of a building

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//BPCC info output
	cout << "BPCC\n6220 E Texas St.\nBossier City,LA 71111\n318-678-6000\n";
	
	//Building specs
	auto length = 120;
	auto width = 40;
	
	//Building calculations
	auto area = length * width;
	auto perimeter = (2 * length) + (2 * width);
	
	//Building info output
	cout << "The area of the building is " << area << endl;
	cout << "The perimeter of the building is " << perimeter << endl;
	return 0;
}