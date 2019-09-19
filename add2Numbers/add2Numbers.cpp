// add2Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter an interger: ";
	int firstNum{ 0 };
	std::cin >> firstNum;

	std::cout << "Enter another interger: ";
	int secNum{ 0 };
	std::cin >> secNum;

	std::cout << firstNum << " + " << secNum << " is " << firstNum + secNum << '\n';
	std::cout << firstNum << " - " << secNum << " is " << firstNum - secNum << '\n';

	return 0;
}




