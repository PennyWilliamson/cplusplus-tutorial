// multiplyBy2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Enter an interger: ";

	int num{ 0 };
	std::cin >> num;

	std::cout << "Double " << num << " is: " << num * 2 << '\n'; //multiplies num at poin of use with an expression.
	std::cout << "Triple " << num << " is: " << num * 3 << '\n';
    return 0;
}

