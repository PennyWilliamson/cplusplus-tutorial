// doubleIntWithFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getIntValueFromUser() 
{
	std::cout << "Enter a number: ";
	int input{ 0 };
	std::cin >> input;
	return input;
}


int main()
{
	int num{ getIntValueFromUser() };
    std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

