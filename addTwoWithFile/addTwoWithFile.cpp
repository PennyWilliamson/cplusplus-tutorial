// addTwoWithFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getInterger(); //forward declaration so compiler knows its in the program somewhere.

int main()
{
	int x = getInterger();
	int y = getInterger();

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}

