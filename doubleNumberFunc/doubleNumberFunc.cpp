// doubleNumberFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//this could be written without the getIntValue() function, 
//but this makes the code more modular.
int getIntValue()
{
	std::cout << "Enter  number: ";
	int num{ 0 };
	std::cin >> num;
	return num;
}

int doubleInt(int x)
{
	return x * 2;
}



int main()
{
	int input{ getIntValue() };
	int output{ doubleInt(input) };
    std::cout << input << " doubled is: " << output << '\n';
	return 0;
}

